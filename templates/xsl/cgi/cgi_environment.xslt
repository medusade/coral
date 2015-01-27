<?xml version="1.0" encoding="utf-8"?>
<!--========================================================================-->
<!-- Copyright (c) 1988-2015 $organization$                                 -->
<!--                                                                        -->
<!-- This software is provided by the author and contributors ``as is''     -->
<!-- and any express or implied warranties, including, but not limited to,  -->
<!-- the implied warranties of merchantability and fitness for a particular -->
<!-- purpose are disclaimed. In no event shall the author or contributors   -->
<!-- be liable for any direct, indirect, incidental, special, exemplary,    -->
<!-- or consequential damages (including, but not limited to, procurement   -->
<!-- of substitute goods or services; loss of use, data, or profits; or     -->
<!-- business interruption) however caused and on any theory of liability,  -->
<!-- whether in contract, strict liability, or tort (including negligence   -->
<!-- or otherwise) arising in any way out of the use of this software,      -->
<!-- even if advised of the possibility of such damage.                     -->
<!--                                                                        -->
<!--   File: cgi_environment.xslt                                           -->
<!--========================================================================-->
<xsl:transform
 xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
 xmlns:exsl="http://exslt.org/common"
 xmlns:cgi="http://www.medusade.org/coral/inet/cgi"
 exclude-result-prefixes="xsl exsl cgi"
 version="1.0">

<!--========================================================================-->
<!-- Output                                                                 -->
<!--========================================================================-->
<xsl:output
 method="html"
 indent="yes"
 version="yes"/>

<!--========================================================================-->
<!-- Parameters                                                             -->
<!--========================================================================-->
<xsl:param name="cgi_env_prefix" select="'cgi_env_'"/>
<xsl:param name="p" select="''"/>

<!--========================================================================-->
<!-- Variables                                                              -->
<!--========================================================================-->
<xsl:variable name="v" select="''"/>

<!--========================================================================-->
<!-- Templates                                                              -->
<!--========================================================================-->
<!--========================================================================-->
<!-- Template: match "cgi:environment"                                      -->
<!--                                                                        -->
<!--   Author: $author$                                                     -->
<!--     Date: 1/18/2015                                                    -->
<!--========================================================================-->
<xsl:template match="cgi:environment">
<pre>
<xsl:for-each select="cgi:variable">
<xsl:text>&lt;xsl:param name="</xsl:text>
<xsl:value-of select="$cgi_env_prefix"/>
<xsl:value-of select="@name"/>
<xsl:text>" select="''"/&gt;</xsl:text>
<xsl:text>
</xsl:text>
</xsl:for-each>
<xsl:text>
</xsl:text>
<xsl:text>&lt;xsl:param name="</xsl:text>
<xsl:value-of select="$cgi_env_prefix"/>
<xsl:text>tree"&gt;</xsl:text>
<xsl:text>
</xsl:text>
<xsl:for-each select="cgi:variable">
<xsl:text>&lt;variable name="</xsl:text>
<xsl:value-of select="@name"/>
<xsl:text>"&gt;</xsl:text>
<xsl:text>&lt;xsl:value-of select="$</xsl:text>
<xsl:value-of select="$cgi_env_prefix"/>
<xsl:value-of select="@name"/>
<xsl:text>"/&gt;</xsl:text>
<xsl:text>&lt;/variable&gt;</xsl:text>
<xsl:text>
</xsl:text>
</xsl:for-each>
<xsl:text>&lt;/xsl:param&gt;</xsl:text>
<xsl:text>
</xsl:text>
<xsl:text>&lt;xsl:param name="</xsl:text>
<xsl:value-of select="$cgi_env_prefix"/>
<xsl:text>" select="exsl:node-set($</xsl:text>
<xsl:value-of select="$cgi_env_prefix"/>
<xsl:text>tree)"/&gt;</xsl:text>
<xsl:text>
</xsl:text>
</pre>
</xsl:template>

<!--========================================================================-->
<!-- Template: match "*"                                                    -->
<!--                                                                        -->
<!--   Author: $author$                                                     -->
<!--     Date: 1/18/2015                                                    -->
<!--========================================================================-->
<xsl:template match="*">
<xsl:text>Unexpected document: &lt;</xsl:text>
<xsl:value-of select="name()"/>
<xsl:text> ...&gt;...&lt;/</xsl:text>
<xsl:value-of select="name()"/>
<xsl:text>&gt;</xsl:text>
</xsl:template>
</xsl:transform>

        

