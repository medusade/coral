///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2014 $organization$
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
///   File: main.hpp
///
/// Author: $author$
///   Date: 12/30/2014
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_APP_CGI_CATCHER_MAIN_HPP
#define _CORAL_APP_CGI_CATCHER_MAIN_HPP

#include "coral/inet/cgi/main.hpp"
#include "coral/inet/cgi/environment/variables/writer.hpp"
#include "coral/inet/cgi/environment/variables/values.hpp"
#include "coral/inet/cgi/environment/variable/value.hpp"
#include "coral/inet/cgi/environment/variable/name.hpp"
#include "coral/inet/http/content.hpp"

namespace coral {
namespace app {
namespace cgi {
namespace catcher {

typedef inet::cgi::main_implements main_implements;
typedef inet::cgi::main main_extends;
///////////////////////////////////////////////////////////////////////
///  Class: main
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main: virtual public main_implements, public main_extends {
public:
    typedef main_implements Implements;
    typedef main_extends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    main() {
    }
    virtual ~main() {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run_cgi(int argc, char_t** argv, char_t** env) {
        io::main::err::writer err(*this);
        io::main::out::writer out(*this);
        io::main::argv::writer arguments;
        inet::cgi::environment::variables::writer environment;
        inet::http::form::fields::const_iterator b = form_.begin();
        inet::http::form::fields::const_iterator e = form_.end();
        const char_t *label, *name;

        for (inet::http::form::fields::const_iterator i = b; i != e; ++i) {
            inet::http::form::field f = *i;
            outl(f.name().chars(), " = \"", f.value().chars(), "\"", 0);
            outln();
        }
        outln();

        if ((label = catch_env_file_label_.chars())
            && (name = catch_env_file_name_.chars())) {
            io::write::file* file = 0;
            if ((file = safe_open_file(label, name))) {
                io::echoed::writer echoed(*file, out);
                outl(label, ": ", name, 0);
                outln();
                outln();
                environment.write(echoed, environment_);
                close_file(*file);
            }
        }

        if ((label = catch_argv_file_label_.chars())
            && (name = catch_argv_file_name_.chars())) {
            io::write::file* file = 0;
            if ((file = safe_open_file(label, name))) {
                io::echoed::writer echoed(*file, out);
                outl(label, ": ", name, 0);
                outln();
                outln();
                arguments.write(echoed, argc, argv);
                close_file(*file);
            }
        }

        if ((label = catch_stdin_file_label_.chars())
            && (name = catch_stdin_file_name_.chars())) {
            outl(label, ": ", name, 0);
            outln();
            outln();
        }
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int before_read_cgi_form_data
    (size_t content_length, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char_t *label, *name;

        if ((label = catch_stdin_file_label_.chars())
            && (name = catch_stdin_file_name_.chars())) {
            io::write::file* file = 0;
            if ((file = safe_open_file(label, name, true))) {
            } else {
                return 1;
            }
        }
        return err;
    }
    virtual int after_read_cgi_form_data
    (size_t content_length, int argc, char_t** argv, char_t** env) {
        int err = 0;
        close_file(file_);
        return err;
    }
    virtual void on_read_content
    (const what_t* what, const sized_t* sized, size_t size) {
        ssize_t amount = file_.write(what, size);
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual io::write::file* safe_open_file
    (const char_t* label, const char_t* name, bool mode_is_binary = false) {
        if ((label) && (label[0]) && (name) && (name[0])) {
            ssize_t length = chars_t::count(label);
            ssize_t amount = 0;
            io::read::file f;

            if ((f.open(name, (mode_is_binary)
                ?(f.mode_read_binary()):(f.mode_read())))) {
                char_t chars[length+3];

                if (!((length + 2) != (amount = f.read(chars, length + 2)))) {
                    if ((chars_t::compare(label, chars, length))
                        || (chars[length] != cr_) || (chars[length+1] != lf_)) {
                        outl("file \"", name, "\" already exists", 0);
                        outln();
                        f.close();
                        return 0;
                    }
                }
                f.close();
            }
            if ((file_.open(name, (mode_is_binary)
                ?(file_.mode_write_binary()):(file_.mode_write())))) {
                if (!(length != (amount = file_.write(label, length)))) {
                    if (!(1 != (amount = file_.write(&cr_, 1)))) {
                        if (!(1 != (amount = file_.write(&lf_, 1)))) {
                            return &file_;
                        }
                    }
                }
                file_.close();
            }
        }
        return 0;
    }
    virtual bool close_file(io::write::file& file) {
        return file.close();
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    io::write::file file_;
};

} // namespace catcher
} // namespace cgi 
} // namespace app 
} // namespace coral 

#endif // _CORAL_APP_CGI_CATCHER_MAIN_HPP
