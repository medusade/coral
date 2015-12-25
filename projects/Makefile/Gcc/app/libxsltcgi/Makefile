########################################################################
# Copyright (c) 1988-2015 $organization$
#
# This software is provided by the author and contributors ``as is'' 
# and any express or implied warranties, including, but not limited to, 
# the implied warranties of merchantability and fitness for a particular 
# purpose are disclaimed. In no event shall the author or contributors 
# be liable for any direct, indirect, incidental, special, exemplary, 
# or consequential damages (including, but not limited to, procurement 
# of substitute goods or services; loss of use, data, or profits; or 
# business interruption) however caused and on any theory of liability, 
# whether in contract, strict liability, or tort (including negligence 
# or otherwise) arising in any way out of the use of this software, 
# even if advised of the possibility of such damage.
#
#   File: Makefile
#
# Author: $author$
#   Date: 12/17/2015
#
# Generic Gcc Makefile for coral libxsltcgi Executable
########################################################################

#
# user defines
#
libxsltcgi_USRDEFINES = \
${libcoral_USRDEFINES} \

#
# user includes
#
libxsltcgi_USRINCLUDES += \
-I${XOS_SRC}/thirdparty/medusaxde/clib/cplatform \
${medusaxde_clibxslt_USRINCLUDES} \
${medusaxde_cbase_USRINCLUDES} \
${libcoral_USRINCLUDES} \

#
# user libdirs
#
libxsltcgi_USRLIBDIRS = \
${medusaxde_clibxslt_USRLIBDIRS} \
${medusaxde_cbase_USRLIBDIRS} \
${libcoral_USRLIBDIRS} \

#
# user c++ flags
#
libxsltcgi_USRCXXFLAGS = \
${libcoral_USRCXXFLAGS} \

#
# Executable C++ .cpp sources
#
libxsltcgi_EXE_CPP_SOURCES += \
${CORAL_SRC}/coral/app/cgi/libxslt/main.cpp \
${CORAL_SRC}/coral/console/main_main.cpp \

#
# Executable libs
#
#LIBS = \
#-lsomelib
#
libxsltcgi_LIBS += \
${medusaxde_clibxslt_LIBS} \
${medusaxde_cbase_LIBS} \
${libcoral_LIBS} \

