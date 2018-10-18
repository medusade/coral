%########################################################################
%# Copyright (c) 1988-2018 $organization$
%#
%# This software is provided by the author and contributors ``as is'' 
%# and any express or implied warranties, including, but not limited to, 
%# the implied warranties of merchantability and fitness for a particular 
%# purpose are disclaimed. In no event shall the author or contributors 
%# be liable for any direct, indirect, incidental, special, exemplary, 
%# or consequential damages (including, but not limited to, procurement 
%# of substitute goods or services; loss of use, data, or profits; or 
%# business interruption) however caused and on any theory of liability, 
%# whether in contract, strict liability, or tort (including negligence 
%# or otherwise) arising in any way out of the use of this software, 
%# even if advised of the possibility of such damage.
%#
%#   File: coral-CGI-hpp-hpp.t
%#
%# Author: $author$
%#   Date: 10/14/2018
%########################################################################
%with(%
%%(#include "coral/inet/cgi/main.hpp"
%
%%then-if(%Namespace_begin%,
)%%
%
typedef %Implements% %Class%_implements;
typedef %Extends% %Class%_extends;
///////////////////////////////////////////////////////////////////////
///  Class: %Class%
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS %Class%: virtual public %Class%_implements, public %Class%_extends {
public:
    typedef %Class%_implements Implements;
    typedef %Class%_extends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    %Class%() {}
    virtual ~%Class%() {}
private:
    %Class%(const %Class%& copy) {}

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run_cgi(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int run_console(int argc, char_t** argv, char_t** env) {
        return run_cgi(argc, argv, env);
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
%
%%then-if(%Namespace_end%,
)%%
%)%)%