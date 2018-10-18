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
%#   File: coral-CGI-hpp-cpp.t
%#
%# Author: $author$
%#   Date: 10/14/2018
%########################################################################
%with(%
%include_path,%(%else-then(%include_path%,%(%filepath(%input%)%)%)%)%,%
%prefix,%(%else-then(%prefix%,%(CGI-)%)%)%,%
%Prefix,%(%else-then(%Prefix%,%(%prefix%)%)%)%,%
%PREFIX,%(%else-then(%PREFIX%,%(%toupper(%Prefix%)%)%)%)%,%
%prefix,%(%else-then(%_Prefix%,%(%tolower(%Prefix%)%)%)%)%,%
%implements,%(%else-then(%implements%,%(::coral::inet::cgi::main::Implements)%)%)%,%
%Implements,%(%else-then(%Implements%,%(%implements%)%)%)%,%
%IMPLEMENTS,%(%else-then(%IMPLEMENTS%,%(%toupper(%Implements%)%)%)%)%,%
%implements,%(%else-then(%_Implements%,%(%tolower(%Implements%)%)%)%)%,%
%extends,%(%else-then(%extends%,%(::coral::inet::cgi::main::Extends)%)%)%,%
%Extends,%(%else-then(%Extends%,%(%extends%)%)%)%,%
%EXTENDS,%(%else-then(%EXTENDS%,%(%toupper(%Extends%)%)%)%)%,%
%extends,%(%else-then(%_Extends%,%(%tolower(%Extends%)%)%)%)%,%
%%(%
%%include(%include_path%/coral-hpp-cpp.t)%%
%)%)%