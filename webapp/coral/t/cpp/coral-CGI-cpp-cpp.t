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
%#   File: coral-CGI-cpp-cpp.t
%#
%# Author: $author$
%#   Date: 10/14/2018
%########################################################################
%with(%
%include_path,%(%else-then(%include_path%,%(%filepath(%input%)%)%)%)%,%
%main_main,%(%else-then(%main_main%,%(coral/console/main_main.cpp)%)%)%,%
%Main_main,%(%else-then(%Main_main%,%(%main_main%)%)%)%,%
%MAIN_MAIN,%(%else-then(%MAIN_MAIN%,%(%toupper(%Main_main%)%)%)%)%,%
%main_main,%(%else-then(%_Main_main%,%(%tolower(%Main_main%)%)%)%)%,%
%%(%
%#include "%Header%"
%if(%Main_main%,%(#include "%Main_main%"
)%)%%
%%then-if(%Namespace_begin%,
)%%
%
///////////////////////////////////////////////////////////////////////
///  Class: %Class%
///////////////////////////////////////////////////////////////////////
static %Class% the_%Class%;
%
%%then-if(%Namespace_end%,
)%%
%)%)%