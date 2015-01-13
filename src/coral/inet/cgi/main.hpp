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
///   Date: 1/9/2015
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_INET_CGI_MAIN_HPP
#define _CORAL_INET_CGI_MAIN_HPP

#include "coral/console/main.hpp"
#include "coral/inet/cgi/environment/variables/values.hpp"
#include "coral/inet/cgi/environment/variable/value.hpp"
#include "coral/inet/cgi/environment/variable/name.hpp"
#include "coral/inet/http/content.hpp"
#include "coral/inet/http/header.hpp"
#include "coral/base/base.hpp"

#define CORAL_INET_CGI_CATCH_ARGV_FILE_NAME "cgicatch-argv.txt"
#define CORAL_INET_CGI_CATCH_ENV_FILE_NAME "cgicatch-env.txt"
#define CORAL_INET_CGI_CATCH_STDIN_FILE_NAME "cgicatch-stdin.txt"

namespace coral {
namespace inet {
namespace cgi {

typedef console::main main_extends;
//typedef console::main_implements main_implements;
///////////////////////////////////////////////////////////////////////
///  Class: main_implements
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main_implements
: virtual public console::main_implements,
  virtual public http::content::read::observer {
};
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
    : catch_argv_file_name_(CORAL_INET_CGI_CATCH_ARGV_FILE_NAME),
      catch_env_file_name_(CORAL_INET_CGI_CATCH_ENV_FILE_NAME),
      catch_stdin_file_name_(CORAL_INET_CGI_CATCH_STDIN_FILE_NAME),
      content_type_name_(http::message::header::name::of(http::message::header::content_type)),
      content_type_value_(http::content::type::name::of(http::content::type::text)),
      is_cgi_run_(false), out_content_type_(0) {
    }
    virtual ~main() {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run_cgi(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_run_cgi(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_run_cgi(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_cgi_query_form_data(int argc, char_t** argv, char_t** env) {
        const environment::variable::value& query_string = environment_[environment::variable::QUERY_STRING];
        const char_t* chars = 0;
        size_t length = 0;
        int err = 0;
        string_t default_query_string;

        default_query_string.append(content_type_name_);
        default_query_string.append("=");
        default_query_string.append(content_type_value_);
        chars = default_query_string.has_chars(length);

        if ((is_cgi_run_) || (query_string.has_chars())) {
            chars = query_string.has_chars(length);
        }
        if ((chars) && (length)) {
            io::chars::reader creader(chars, length);
            http::url::encoded::reader qreader(creader);
            http::form::reader form(form_);
            form.read_more(qreader);
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_cgi_form_data(int argc, char_t** argv, char_t** env) {
        const environment::variable::value& content_length = environment_[environment::variable::CONTENT_LENGTH];
        const environment::variable::value& content_type = environment_[environment::variable::CONTENT_TYPE];
        const char_t* chars = 0;
        size_t length = 0;
        int err = 0;
        if ((chars = content_length.has_chars(length))) {
            size_t content_length = 0;
            if ((content_length = chars_t::to_unsigned(chars, length))) {
                if (!(err = before_read_cgi_form_data(content_length, argc, argv, env))) {
                    if ((chars = content_type.has_chars(length))) {
                        http::content::type::name name(chars, length);
                        http::content::type::which_t which = name.which();
                        switch(which) {
                        case http::content::type::urlencoded_form_data:
                            err = get_cgi_urlencoded_form_data(content_length, argc, argv, env);
                            break;
                        case http::content::type::multipart_form_data:
                            err = get_cgi_multipart_form_data(content_length, argc, argv, env);
                            break;
                        default:
                            break;
                        }
                    }
                    if (!(err = after_read_cgi_form_data(content_length, argc, argv, env))) {
                    }
                }
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int before_read_cgi_form_data
    (size_t content_length, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_read_cgi_form_data
    (size_t content_length, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual void on_read_content
    (const what_t* what, const sized_t* sized, size_t size) {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_cgi_urlencoded_form_data
    (size_t content_length, int argc, char_t** argv, char_t** env) {
        io::main::in::reader in(*this);
        http::content::reader content(*this, in, content_length);
        http::url::encoded::reader encoded(content);
        http::form::reader form(form_);
        int err = 0;
        form.read_more(encoded);
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_cgi_multipart_form_data
    (size_t content_length, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_cgi_form(int argc, char_t** argv, char_t** env) {
        int err = 0;
        form_.clear();
        if (!(err = get_cgi_query_form_data(argc, argv, env))) {
            if (!(err = get_cgi_form_data(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int before_get_cgi_form(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_get_cgi_form(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_cgi_content(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_get_cgi_content(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_get_cgi_content(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_cgi_environment(int argc, char_t** argv, char_t** env) {
        int err = 0;
        environment_.get();
        return err;
    }
    virtual int before_get_cgi_environment(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_get_cgi_environment(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int read_cgi_content(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_read_cgi_content(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_read_cgi_content(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int read_cgi_environment(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_read_cgi_environment(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_read_cgi_environment(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int cgi_main(int argc, char_t** argv, char_t** env) {
        int err = 0, err2 = 0;
        if (!(err = before_get_cgi_form(argc, argv, env))) {
            if (!(err = get_cgi_form(argc, argv, env))) {
                if (!(err = before_run_cgi(argc, argv, env))) {
                    if (!(err = run_cgi(argc, argv, env))) {
                    }
                    if ((err2 = after_run_cgi(argc, argv, env)) && (!err)) {
                        err = err2;
                    }
                }
            }
            if ((err2 = after_get_cgi_form(argc, argv, env)) && (!err)) {
                err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int cgi_run(int argc, char_t** argv, char_t** env) {
        int err = 0, err2 = 0;
        if (!(err = before_get_cgi_environment(argc, argv, env))) {
            if (!(err = get_cgi_environment(argc, argv, env))) {
                if (!(err = before_get_cgi_content(argc, argv, env))) {
                    if (!(err = get_cgi_content(argc, argv, env))) {
                        if (!(err = cgi_main(argc, argv, env))) {
                        }
                    }
                    if ((err2 = after_get_cgi_content(argc, argv, env)) && (!err)) {
                        err = err2;
                    }
                }
            }
            if ((err2 = after_get_cgi_environment(argc, argv, env)) && (!err)) {
                err = err2;
            }
        }
        return err;
    }
    virtual int console_run(int argc, char_t** argv, char_t** env) {
        int err = 0, err2 = 0;
        if (!(err = before_read_cgi_environment(argc, argv, env))) {
            if (!(err = read_cgi_environment(argc, argv, env))) {
                if (!(err = before_read_cgi_content(argc, argv, env))) {
                    if (!(err = read_cgi_content(argc, argv, env))) {
                        if (!(err = cgi_main(argc, argv, env))) {
                        }
                    }
                    if ((err2 = after_read_cgi_content(argc, argv, env)) && (!err)) {
                        err = err2;
                    }
                }
            }
            if ((err2 = after_read_cgi_environment(argc, argv, env)) && (!err)) {
                err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        inet::cgi::environment::variable::value gateway_interface(inet::cgi::environment::variable::GATEWAY_INTERFACE);
        if ((is_cgi_run_ = (gateway_interface.has_chars()))) {
            err = cgi_run(argc, argv, env);
        } else {
            err = console_run(argc, argv, env);
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int get_options(int argc, char_t** argv, char_t** env) {
        inet::cgi::environment::variable::value gateway_interface(inet::cgi::environment::variable::GATEWAY_INTERFACE);
        if ((gateway_interface.has_chars())) {
            return 0;
        }
        return Extends::get_options(argc, argv, env);
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* set_content_type() {
        const char_t* chars = 0;
        if (!(chars = content_type_.has_chars())) {
            content_type_.assign(content_type_name_.chars());
            content_type_.append(": ");
            content_type_.append(content_type_value_.chars());
            chars = content_type_.has_chars();
        }
        return chars;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t out_content_type() {
        if (!(out_content_type_)) {
            ssize_t count = 0, amount = 0;
            out_content_type_ = set_content_type();
            if (0 < (count = this->outln(out_content_type_))) {
                if (0 < (amount = this->outln())) {
                    count += amount;
                }
            }
            return count;
        }
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual FILE* out_std_out() {
        out_content_type();
        return this->std_out();
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    string_t catch_argv_file_name_,
             catch_env_file_name_,
             catch_stdin_file_name_,
             content_type_name_,
             content_type_value_,
             content_type_;
    bool is_cgi_run_;
    const char_t* out_content_type_;
    environment::variables::values environment_;
    http::form::fields form_;
};

} // namespace cgi 
} // namespace inet 
} // namespace coral 

#endif // _CORAL_INET_CGI_MAIN_HPP 
