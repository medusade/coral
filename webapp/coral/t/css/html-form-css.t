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
%#   File: html-form-css.t
%#
%# Author: $author$
%#   Date: 10/13/2018
%########################################################################
%with(%
%organization,%(%else-then(%organization%,%($organization)%)%)%,%
%Organization,%(%else-then(%Organization%,%(%organization%)%)%)%,%
%ORGANIZATION,%(%else-then(%ORGANIZATION%,%(%toupper(%Organization%)%)%)%)%,%
%organization,%(%else-then(%_Organization%,%(%tolower(%Organization%)%)%)%)%,%
%author,%(%else-then(%author%,%($author)%)%)%,%
%Author,%(%else-then(%Author%,%(%author%)%)%)%,%
%AUTHOR,%(%else-then(%AUTHOR%,%(%toupper(%Author%)%)%)%)%,%
%author,%(%else-then(%_Author%,%(%tolower(%Author%)%)%)%)%,%
%year,%(%else-then(%year()%,%(2018)%)%)%,%
%Year,%(%else-then(%Year%,%(%year%)%)%)%,%
%YEAR,%(%else-then(%YEAR%,%(%toupper(%Year%)%)%)%)%,%
%year,%(%else-then(%_Year%,%(%tolower(%Year%)%)%)%)%,%
%date,%(%else-then(%date()%,%(10/13/2018)%)%)%,%
%Date,%(%else-then(%Date%,%(%date%)%)%)%,%
%DATE,%(%else-then(%DATE%,%(%toupper(%Date%)%)%)%)%,%
%date,%(%else-then(%_Date%,%(%tolower(%Date%)%)%)%)%,%
%file,%(%else-then(%file%,%(html-form.css)%)%)%,%
%File,%(%else-then(%File%,%(%file%)%)%)%,%
%FILE,%(%else-then(%FILE%,%(%toupper(%File%)%)%)%)%,%
%file,%(%else-then(%_File%,%(%tolower(%File%)%)%)%)%,%
%%(/**
**********************************************************************
* Copyright (c) 1988-%Year% $organization$     
*
* This software is provided by the author and contributors ``as is'' 
* and any express or implied warranties, including, but not limited to, 
* the implied warranties of merchantability and fitness for a particular 
* purpose are disclaimed. In no event shall the author or contributors 
* be liable for any direct, indirect, incidental, special, exemplary, 
* or consequential damages (including, but not limited to, procurement 
* of substitute goods or services; loss of use, data, or profits; or 
* business interruption) however caused and on any theory of liability, 
* whether in contract, strict liability, or tort (including negligence 
* or otherwise) arising in any way out of the use of this software, 
* even if advised of the possibility of such damage.
*
*   File: %File%
*
* Author: $author$           
*   Date: %Date%
**********************************************************************
*/
a {color: black; font-weight: bolder; text-decoration: none; }
a:hover {color: red; font-weight: bolder; text-decoration: underline; }
.form { background-color: #eeeeee; }
)%)%