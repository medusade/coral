///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2015 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: process.hpp
///
/// Author: $author$
///   Date: 2/5/2015
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_INET_CGI_PROCESS_HPP
#define _CORAL_INET_CGI_PROCESS_HPP

#include "coral/inet/cgi/environment/variables/array.hpp"
#include "coral/mt/os/process.hpp"
#include "coral/mt/os/pipe.hpp"
#include "coral/base/base.hpp"

namespace coral {
namespace inet {
namespace cgi {

typedef mt::os::process* process_attached_t;
typedef int process_unattached_t;
enum { process_unattached = 0 };

class _EXPORT_CLASS process_stream
: virtual public io::reader, virtual public io::writer {
};

typedef creatort<process_stream> process_creator;

typedef attachert
<process_attached_t, process_unattached_t,
 process_unattached, process_creator> process_attacher;

typedef attachedt
<process_attached_t, process_unattached_t,
 process_unattached, process_attacher, base> process_attached;

typedef createdt
<process_attached_t, process_unattached_t,
 process_unattached, process_attacher, process_attached> process_created;

typedef process_attacher process_implements;
typedef process_created process_extends;
///////////////////////////////////////////////////////////////////////
///  Class: processt
///////////////////////////////////////////////////////////////////////
template
<class TImplements = process_implements, class TExtends = process_extends>

class _EXPORT_CLASS processt: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    typedef int mode_t;
    enum {
        mode_none = 0,

        mode_read = (1 << 0),
        mode_write = (1 << 1),

        mode_all = ((1 << 2) - 1)
    };

    typedef io::reader reader_t;
    typedef char_t sized_t;
    typedef void what_t;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    processt(): mode_(mode_none) {
    }
    virtual ~processt() {
        if (!(this->destroyed())) {
            creator_exception e = failed_to_destroy;
            throw (e);
        }
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool create
    (const string_t& exe, environment::variables::array& env, mode_t mode) {
        if ((this->destroyed())) {
            const char_t* chars = 0;

            mode_ = mode_none;

            if ((chars = exe.has_chars())) {
                argv_t argv(&chars, 1);
                char_t** argvp = 0;
                char_t** envp = 0;

                if ((argvp = argv.elements()) && (envp = env.elements())) {
                    mt::os::pipe::pipe_fd_t* pdup[3] = {0, 0, 0};

                    if ((mode & mode_read)) {
                        if ((inp_.create())) {
                            pdup[0] = inp_;
                            mode_ |= mode_read;
                        }
                    }

                    if ((mode & mode_write)) {
                        if ((outp_.create())) {
                            pdup[1] = outp_;
                            mode_ != mode_write;
                        }
                    }

                    if ((p_.create(chars, argvp, envp, 0, pdup))) {

                        if ((mode_ & mode_write)) {
                            if ((outp_.close(mt::os::pipe::out))) {
                            }
                        }

                        if ((mode_ & mode_read)) {
                            if ((inp_.close(mt::os::pipe::in))) {
                            }
                        }

                        this->attach_created(&p_);
                        return true;
                    }
                }
            }
        }
        return false;
    }
    virtual bool destroy() {
        process_attached_t detached;

        if ((detached = this->detach()) == &p_) {

            if ((mode_ & mode_write)) {
                if ((outp_.close(mt::os::pipe::in))) {
                }
            }

            if ((mode_ & mode_read)) {
                if ((inp_.close(mt::os::pipe::out))) {
                }
            }

            if ((p_.destroy())) {
                return true;
            }
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t write(reader_t& reader, size_t length) {
        sized_t c;
        for (size_t i = 0; i < length; ++i) {
            if (1 > (reader.read(&c, 1))) {
                break;
            } else {
                if (1 > (this->write(&c, 1))) {
                    break;
                }
            }
        }
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t write(const what_t* what, ssize_t size = -1) {
        process_attached_t detached;
        if (((detached = this->attached_to()) == &p_) && (mode_ & mode_write)) {
            ssize_t count = inp_.write(what, size);
            return count;
        }
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    mode_t mode_;
    mt::os::process p_;
    mt::os::pipe inp_, outp_;
};
typedef processt<> process;

} // namespace cgi 
} // namespace inet 
} // namespace coral 

#endif // _CORAL_INET_CGI_PROCESS_HPP 
