########################################################################
# Copyright (c) 1988-2017 $organization$
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
#   File: odbccgi.pri
#
# Author: $author$
#   Date: 2/27/2017
########################################################################

odbccgi_TARGET = coral-odbccgi

odbccgi_INCLUDEPATH += \
$${coral_INCLUDEPATH} \
$${etiris_INCLUDEPATH} \

odbccgi_DEFINES += \
$${coral_DEFINES} \
$${etiris_DEFINES} \

########################################################################
odbccgi_HEADERS += \
$${ETIRIS_SRC}/etiris/db/odbc/cgi/Main.hpp \

odbccgi_SOURCES += \

########################################################################
odbccgi_HEADERS += \
$${CORAL_SRC}/coral/app/cgi/odbc/main.hpp \
$${CORAL_SRC}/coral/console/main.hpp \
$${CORAL_SRC}/coral/console/main_main.hpp \

odbccgi_SOURCES += \
$${CORAL_SRC}/coral/console/main_main.cpp \
$${CORAL_SRC}/coral/app/cgi/odbc/main.cpp \

########################################################################
odbccgi_LIBS += \
$${coral_LIBS} \
$${etiris_LIBS} \

########################################################################
# NO Qt
QT -= gui core
