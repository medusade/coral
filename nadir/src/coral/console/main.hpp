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
///   Date: 12/15/2014
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_CONSOLE_MAIN_HPP
#define _CORAL_CONSOLE_MAIN_HPP

#include "coral/base/base.hpp"
#include "nadir/console/getopt/main.hpp"
#include "nadir/io/main.hpp"

#define CORAL_MAIN_LOGGING_OPTVAL_C NADIR_CONSOLE_GETOPT_MAIN_LOGGING_OPTVAL_C
#define CORAL_MAIN_LOGGING_OPTARG NADIR_CONSOLE_GETOPT_MAIN_LOGGING_OPTARG
#define CORAL_MAIN_LOGGING_OPTUSE NADIR_CONSOLE_GETOPT_MAIN_LOGGING_OPTUSE

#define CORAL_MAIN_HELP_OPTVAL_C NADIR_CONSOLE_GETOPT_MAIN_HELP_OPTVAL_C
#define CORAL_MAIN_HELP_OPTARG NADIR_CONSOLE_GETOPT_MAIN_HELP_OPTARG
#define CORAL_MAIN_HELP_OPTUSE NADIR_CONSOLE_GETOPT_MAIN_HELP_OPTUSE

enum {
    CORAL_MAIN_OPT_ARGUMENT_NONE     = NADIR_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_NONE,
    CORAL_MAIN_OPT_ARGUMENT_REQUIRED = NADIR_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_REQUIRED,
    CORAL_MAIN_OPT_ARGUMENT_OPTIONAL = NADIR_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_OPTIONAL
};

namespace coral {
namespace console {

typedef int main_opt_argument_t;
enum {
    MAIN_OPT_ARGUMENT_NONE     = CORAL_MAIN_OPT_ARGUMENT_NONE,
    MAIN_OPT_ARGUMENT_REQUIRED = CORAL_MAIN_OPT_ARGUMENT_REQUIRED,
    MAIN_OPT_ARGUMENT_OPTIONAL = CORAL_MAIN_OPT_ARGUMENT_OPTIONAL
};

} // namespace console

namespace app {
namespace console {

typedef coral::console::main_opt_argument_t main_opt_argument_t;
enum {
    MAIN_OPT_ARGUMENT_NONE     = coral::console::MAIN_OPT_ARGUMENT_NONE,
    MAIN_OPT_ARGUMENT_REQUIRED = coral::console::MAIN_OPT_ARGUMENT_REQUIRED,
    MAIN_OPT_ARGUMENT_OPTIONAL = coral::console::MAIN_OPT_ARGUMENT_OPTIONAL
};

} // namespace console
} // namespace app

namespace inet {
namespace cgi {

typedef coral::console::main_opt_argument_t main_opt_argument_t;
enum {
    MAIN_OPT_ARGUMENT_NONE     = coral::console::MAIN_OPT_ARGUMENT_NONE,
    MAIN_OPT_ARGUMENT_REQUIRED = coral::console::MAIN_OPT_ARGUMENT_REQUIRED,
    MAIN_OPT_ARGUMENT_OPTIONAL = coral::console::MAIN_OPT_ARGUMENT_OPTIONAL
};

} // namespace cgi
} // namespace inet

namespace app {
namespace cgi {

typedef coral::console::main_opt_argument_t main_opt_argument_t;
enum {
    MAIN_OPT_ARGUMENT_NONE     = coral::console::MAIN_OPT_ARGUMENT_NONE,
    MAIN_OPT_ARGUMENT_REQUIRED = coral::console::MAIN_OPT_ARGUMENT_REQUIRED,
    MAIN_OPT_ARGUMENT_OPTIONAL = coral::console::MAIN_OPT_ARGUMENT_OPTIONAL
};

} // namespace cgi
} // namespace app

} // namespace coral

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPT "logging"
#define CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_REQUIRED CORAL_MAIN_OPT_ARGUMENT_REQUIRED
#define CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_RESULT 0
#define CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG CORAL_MAIN_LOGGING_OPTARG
#define CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTUSE CORAL_MAIN_LOGGING_OPTUSE
#define CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_S "l:"
#define CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C 'l'
#define CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTION \
   {CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPT, \
    CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_REQUIRED, \
    CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_RESULT, \
    CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C}, \

#define CORAL_CONSOLE_MAIN_HELP_OPT "help"
#define CORAL_CONSOLE_MAIN_HELP_OPTARG_REQUIRED CORAL_MAIN_OPT_ARGUMENT_NONE
#define CORAL_CONSOLE_MAIN_HELP_OPTARG_RESULT 0
#define CORAL_CONSOLE_MAIN_HELP_OPTARG CORAL_MAIN_HELP_OPTARG
#define CORAL_CONSOLE_MAIN_HELP_OPTUSE CORAL_MAIN_HELP_OPTUSE
#define CORAL_CONSOLE_MAIN_HELP_OPTVAL_S "?"
#define CORAL_CONSOLE_MAIN_HELP_OPTVAL_C '?'
#define CORAL_CONSOLE_MAIN_HELP_OPTION \
   {CORAL_CONSOLE_MAIN_HELP_OPT, \
    CORAL_CONSOLE_MAIN_HELP_OPTARG_REQUIRED, \
    CORAL_CONSOLE_MAIN_HELP_OPTARG_RESULT, \
    CORAL_CONSOLE_MAIN_HELP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define CORAL_CONSOLE_MAIN_OPTIONS_CHARS \
    CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_S \
    CORAL_CONSOLE_MAIN_HELP_OPTVAL_S \

#define CORAL_CONSOLE_MAIN_OPTIONS_OPTIONS \
    CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTION \
    CORAL_CONSOLE_MAIN_HELP_OPTION \

namespace coral {
namespace console {

typedef nadir::console::getopt::maint_implements main_implements;
typedef nadir::console::getopt::main main_extends;
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

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_logging_levels_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = Extends::on_logging_option
        (CORAL_MAIN_LOGGING_OPTVAL_C, optarg, optname, optind, argc, argv, env);
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual int on_help_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = Extends::on_usage_option
        (optval, optarg, optname, optind, argc, argv, env);
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = 0;
        switch(optval) {
        case CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C:
            err = on_logging_levels_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case CORAL_CONSOLE_MAIN_HELP_OPTVAL_C:
            err = on_help_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = Extends::on_option
            (optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char* option_usage
    (const char*& optarg, const struct option* longopt) {
        const char* chars = "";
        switch(longopt->val) {
        case CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C:
            optarg = CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG;
            chars = CORAL_CONSOLE_MAIN_LOGGING_LEVELS_OPTUSE;
            break;
        case CORAL_CONSOLE_MAIN_HELP_OPTVAL_C:
            optarg = CORAL_CONSOLE_MAIN_HELP_OPTARG;
            chars = CORAL_CONSOLE_MAIN_HELP_OPTUSE;
            break;
        default:
            chars = Extends::option_usage(optarg, longopt);
        }
        return chars;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char* options(const struct option*& longopts) {
        int err = 0;
        static const char* chars = CORAL_CONSOLE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            CORAL_CONSOLE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

} // namespace console

namespace io {
namespace main {

namespace argv {

typedef nadir::io::main::argv::writer writer;

} // namespace argv

namespace in {

typedef nadir::io::main::in::reader reader;

} // namespace in

namespace out {

typedef nadir::io::main::out::writer writer;

} // namespace out

namespace err {

typedef nadir::io::main::err::writer writer;

} // namespace err
} // namespace main
} // namespace io

} // namespace coral

#endif // _CORAL_CONSOLE_MAIN_HPP
