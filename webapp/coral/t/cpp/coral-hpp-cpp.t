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
%#   File: coral-hpp-cpp.t
%#
%# Author: $author$
%#   Date: 10/14/2018
%########################################################################
%with(%
%include_path,%(%else-then(%include_path%,%(%filepath(%input%)%)%)%)%,%
%file,%(%else-then(%file%,%(cgi.hpp)%)%)%,%
%File,%(%else-then(%File%,%(%file%)%)%)%,%
%FILE,%(%else-then(%FILE%,%(%toupper(%File%)%)%)%)%,%
%file,%(%else-then(%_File%,%(%tolower(%File%)%)%)%)%,%
%name,%(%else-then(%name%,%(%else-then(%filebase(%File%)%,%(cgi)%)%)%)%)%,%
%Name,%(%else-then(%Name%,%(%name%)%)%)%,%
%NAME,%(%else-then(%NAME%,%(%toupper(%Name%)%)%)%)%,%
%name,%(%else-then(%_Name%,%(%tolower(%Name%)%)%)%)%,%
%extension,%(%else-then(%extension%,%(%else-then(%fileextension(%File%)%,%(hpp)%)%)%)%)%,%
%Extension,%(%else-then(%Extension%,%(%extension%)%)%)%,%
%EXTENSION,%(%else-then(%EXTENSION%,%(%toupper(%Extension%)%)%)%)%,%
%extension,%(%else-then(%_Extension%,%(%tolower(%Extension%)%)%)%)%,%
%organization,%(%else-then(%organization%,%($organization$)%)%)%,%
%Organization,%(%else-then(%Organization%,%(%organization%)%)%)%,%
%ORGANIZATION,%(%else-then(%ORGANIZATION%,%(%toupper(%Organization%)%)%)%)%,%
%organization,%(%else-then(%_Organization%,%(%tolower(%Organization%)%)%)%)%,%
%author,%(%else-then(%author%,%($author$)%)%)%,%
%Author,%(%else-then(%Author%,%(%author%)%)%)%,%
%AUTHOR,%(%else-then(%AUTHOR%,%(%toupper(%Author%)%)%)%)%,%
%author,%(%else-then(%_Author%,%(%tolower(%Author%)%)%)%)%,%
%vendor,%(%else-then(%vendor%,%()%)%)%,%
%Vendor,%(%else-then(%Vendor%,%(%vendor%)%)%)%,%
%VENDOR,%(%else-then(%VENDOR%,%(%toupper(%Vendor%)%)%)%)%,%
%vendor,%(%else-then(%_Vendor%,%(%tolower(%Vendor%)%)%)%)%,%
%namespace,%(%else-then(%namespace%,%(coral/inet/cgi)%)%)%,%
%Namespace,%(%else-then(%Namespace%,%(%namespace%)%)%)%,%
%NAMESPACE,%(%else-then(%NAMESPACE%,%(%toupper(%Namespace%)%)%)%)%,%
%namespace,%(%else-then(%_Namespace%,%(%tolower(%Namespace%)%)%)%)%,%
%namespace_begin,%(%else-then(%namespace_begin%,%(%parse(%Namespace%,/,,,,%(namespace %ns% {
)%,ns)%)%)%)%,%
%Namespace_begin,%(%else-then(%Namespace_begin%,%(%namespace_begin%)%)%)%,%
%NAMESPACE_BEGIN,%(%else-then(%NAMESPACE_BEGIN%,%(%toupper(%Namespace_begin%)%)%)%)%,%
%namespace_begin,%(%else-then(%_Namespace_begin%,%(%tolower(%Namespace_begin%)%)%)%)%,%
%namespace_end,%(%else-then(%namespace_end%,%(%reverse-parse(%Namespace%,/,,,,%(} /// namespace %ns%
)%,ns)%)%)%)%,%
%Namespace_end,%(%else-then(%Namespace_end%,%(%namespace_end%)%)%)%,%
%NAMESPACE_END,%(%else-then(%NAMESPACE_END%,%(%toupper(%Namespace_end%)%)%)%)%,%
%namespace_end,%(%else-then(%_Namespace_end%,%(%tolower(%Namespace_end%)%)%)%)%,%
%class,%(%else-then(%class%,%(%Name%)%)%)%,%
%Class,%(%else-then(%Class%,%(%class%)%)%)%,%
%CLASS,%(%else-then(%CLASS%,%(%toupper(%Class%)%)%)%)%,%
%class,%(%else-then(%_Class%,%(%tolower(%Class%)%)%)%)%,%
%ifndef_directory,%(%else-then(%ifndef_directory%,%(%Namespace%)%)%)%,%
%Ifndef_directory,%(%else-then(%Ifndef_directory%,%(%ifndef_directory%)%)%)%,%
%IFNDEF_DIRECTORY,%(%else-then(%IFNDEF_DIRECTORY%,%(%toupper(%Ifndef_directory%)%)%)%)%,%
%ifndef_directory,%(%else-then(%_Ifndef_directory%,%(%tolower(%Ifndef_directory%)%)%)%)%,%
%header,%(%else-then(%header%,%(%ifndef_directory%/%Name%.hpp)%)%)%,%
%Header,%(%else-then(%Header%,%(%header%)%)%)%,%
%HEADER,%(%else-then(%HEADER%,%(%toupper(%Header%)%)%)%)%,%
%header,%(%else-then(%_Header%,%(%tolower(%Header%)%)%)%)%,%
%%(%
%%include(%include_path%/%Vendor%coral-file-hpp-cpp.t)%%
%%include(%include_path%/%Vendor%coral-%Extension%.t)%%
%)%)%