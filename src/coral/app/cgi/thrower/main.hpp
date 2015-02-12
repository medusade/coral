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
///   File: main.hpp
///
/// Author: $author$
///   Date: 1/30/2015
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_APP_CGI_THROWER_MAIN_HPP
#define _CORAL_APP_CGI_THROWER_MAIN_HPP

#include "coral/inet/cgi/main.hpp"
#include "coral/inet/cgi/process.hpp"
#include "coral/inet/cgi/environment/variables/array.hpp"
#include "coral/app/cgi/thrower/main_opt.hpp"

#define CORAL_APP_CGI_THROWER_MAIN_PATH_TRANSLATED ""
#define CORAL_APP_CGI_THROWER_MAIN_SCRIPT_NAME ""
#define CORAL_APP_CGI_THROWER_MAIN_EXEC_NAME "./cgi"

namespace coral {
namespace app {
namespace cgi {
namespace thrower {

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
    main()
    : path_translated_(CORAL_APP_CGI_THROWER_MAIN_PATH_TRANSLATED),
      script_name_(CORAL_APP_CGI_THROWER_MAIN_SCRIPT_NAME),
      exec_name_(CORAL_APP_CGI_THROWER_MAIN_EXEC_NAME) {
    }
    virtual ~main() {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run_console(int argc, char_t** argv, char_t** env) {
        int err = 0;
        inet::cgi::environment::variables::array e(environment_);
        const char_t* chars = 0;

        if ((chars = path_translated_.has_chars())) {
            e.set(inet::cgi::environment::variable::PATH_TRANSLATED, chars);
        }

        if ((chars = script_name_.has_chars())) {
            e.set(inet::cgi::environment::variable::SCRIPT_NAME, chars);
        }

        if ((chars = exec_name_.has_chars())) {
            inet::cgi::process p;

            if ((p.create(exec_name_, e, inet::cgi::process::mode_write))) {
                if (0 < (content_length_)) {
                    if ((open_content_file(content_))) {
                        p.write(content_, content_length_);
                        close_file(content_);
                    }
                }
                p.destroy();
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_cgi_query_form_data(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_cgi_form_data
    (size_t content_length, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* set_path_translated(const char_t* to) {
        if ((to) && (to[0])) {
            CORAL_LOG_MESSAGE_DEBUG("set path_translated = \"" << to << "\"...");
            path_translated_.assign(to);
        }
        return to;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* set_script_name(const char_t* to) {
        if ((to) && (to[0])) {
            CORAL_LOG_MESSAGE_DEBUG("set script_name = \"" << to << "\"...");
            script_name_.assign(to);
        }
        return to;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* set_exec_name(const char_t* to) {
        if ((to) && (to[0])) {
            CORAL_LOG_MESSAGE_DEBUG("set exec_name = \"" << to << "\"...");
            exec_name_.assign(to);
        }
        return to;
    }

#include "coral/app/cgi/thrower/main_opt.cpp"
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    string_t path_translated_, script_name_, exec_name_;
};

} // namespace thrower 
} // namespace cgi 
} // namespace app 
} // namespace coral 

#endif // _CORAL_APP_CGI_THROWER_MAIN_HPP 
