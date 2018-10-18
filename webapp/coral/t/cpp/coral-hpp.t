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
%#   File: coral-hpp.t
%#
%# Author: $author$
%#   Date: 10/14/2018
%########################################################################
%with(%
%ifndef,%(%else-then(%ifndef%,%(_%parse(%Ifndef_directory%,/,,_)%_%Name%_%Extension%)%)%)%,%
%Ifndef,%(%else-then(%Ifndef%,%(%ifndef%)%)%)%,%
%IFNDEF,%(%else-then(%IFNDEF%,%(%toupper(%Ifndef%)%)%)%)%,%
%ifndef,%(%else-then(%_Ifndef%,%(%tolower(%Ifndef%)%)%)%)%,%
%%(#ifndef %IFNDEF%
#define %IFNDEF%

%include(%include_path%/%Vendor%coral-%Prefix%%Extension%-%Extension%.t)%
#endif ///ndef %IFNDEF%
)%)%