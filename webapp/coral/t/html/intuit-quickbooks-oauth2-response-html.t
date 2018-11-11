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
%#   File: intuit-quickbooks-oauth2-response-html.t
%#
%# Author: $author$
%#   Date: 11/9/2018
%########################################################################
%with(%
%include_path,%(%else-then(%include_path%,%(%filepath(%input%)%)%)%)%,%
%action,%(%else-then(%action%,%(action)%)%)%,%
%grant_type,%(%else-then(%grant_type%,%(grant_type)%)%)%,%
%code,%(%else-then(%code%,%(code)%)%)%,%
%redirect_uri,%(%else-then(%redirect_uri%,%(redirect_uri)%)%)%,%
%%(<html>
<head>
<title>Intuit QuickBooks OAuth2 Response</title>
<link rel="stylesheet" type="text/css" href="../css/html-form-css.t"></link>
<style type="text/css">
</style>
<script type="text/javascript" src="../js/html-form-js.t"></script>
<script type="text/javascript">
</script>
</head>
<body>
<a href="intuit-quickbooks-oauth2-response-html.t?content_type=text/html"><h3>Intuit QuickBooks OAuth2 Response</h3></a>
<form method="POST" action="%action%" target="intuit-quickbooks-oauth2-response">
<div class="form"><hr/>
<table>
<tr><td align="right">client_id</td><td><input size="128" name="client_id" value="%client_id%"/></td></tr>
<tr><td align="right">client_secret</td><td><input size="128" name="client_secret" value="%client_secret%"/></td></tr>
<tr><td align="right">redirect_uri</td><td><input size="128" name="redirect_uri" value="%redirect_uri%"/></td></tr>
<tr><td align="right">grant_type</td><td><input size="128" name="grant_type" value="%grant_type%"/></td></tr>
<tr><td align="right">code</td><td><input size="128" name="code" value="%code%"/></td></tr>
</table>
<hr/></div>
<table cellpadding="0" cellspacing="0" border="0"><tr>
<td><input type="submit" name="sublit" value="submit"/></td>
<td>
<table cellpadding="0" cellspacing="10" border="0"><tr>
<td><a href="../../html/intuit-quickbooks-oauth2.html">Intuit QuickBooks OAuth2</a></td>
</tr></table>
</td>
</tr></table>
</form>
</body>
</html>)%)%