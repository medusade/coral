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
#   File: libxsltcgi.pri
#
# Author: $author$
#   Date: 1/15/2015
########################################################################

libxsltcgi_TARGET = coral-libxsltcgi

libxsltcgi_INCLUDEPATH += \
$${coral_INCLUDEPATH} \
$${NADIR_SRC}/thirdparty/medusaxde/clib/cplatform \
$${medusaxde_clibxslt_INCLUDEPATH} \
$${medusaxde_cbase_INCLUDEPATH} \

libxsltcgi_DEFINES += \
$${coral_DEFINES} \

########################################################################
libxsltcgi_HEADERS += \
$${CORAL_SRC}/coral/app/cgi/libxslt/main.hpp \
$${CORAL_SRC}/coral/console/main.hpp \
$${CORAL_SRC}/coral/console/main_main.hpp \

libxsltcgi_SOURCES += \
$${CORAL_SRC}/coral/app/cgi/libxslt/main.cpp \
$${CORAL_SRC}/coral/console/main_main.cpp \

########################################################################
libxsltcgi_LIBS += \
$${coral_LIBS} \
$${medusaxde_clibxslt_LIBS} \
$${medusaxde_cbase_LIBS} \
