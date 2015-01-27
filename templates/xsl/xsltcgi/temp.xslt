<?xml version="1.0"?>
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
<!--   File: libxsltcgi.xslt                                                -->
<!--========================================================================-->
<xsl:transform
 xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
 xmlns:exsl="http://exslt.org/common"
 xmlns:coral="http://www.medusade.org/coral"
 exclude-result-prefixes="xsl exsl coral"
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
<xsl:param name="p" select="''"/>

<!--========================================================================-->
<!-- Variables                                                              -->
<!--========================================================================-->
<xsl:variable name="v" select="''"/>

<!--========================================================================-->
<!-- Templates                                                              -->
<!--========================================================================-->
<!--========================================================================-->
<!-- Template: match "libxsltcgi"                                           -->
<!--                                                                        -->
<!--   Author: $author$                                                     -->
<!--     Date: 1/18/2015                                                    -->
<!--========================================================================-->
<xsl:template match="coral:libxsltcgi">
</xsl:template>

<!--========================================================================-->
<!-- Template: match "*"                                                    -->
<!--                                                                        -->
<!--   Author: $author$                                                     -->
<!--     Date: 1/18/2015                                                    -->
<!--========================================================================-->
<xsl:template match="*">
<xsl:text>Unexpected document = "</xsl:text>
<xsl:value-of select="name()"/>
<xsl:text>"</xsl:text>
</xsl:template>
</xsl:transform>

        

