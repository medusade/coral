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
#   File: timecgi.pri
#
# Author: $author$
#   Date: 12/15/2017
########################################################################

timecgi_TARGET = coral-timecgi

timecgi_INCLUDEPATH += \
$${coral_INCLUDEPATH} \

timecgi_DEFINES += \
$${coral_DEFINES} \

########################################################################
timecgi_HEADERS += \
$${CORAL_SRC}/coral/app/cgi/timecgi/main.hpp \
$${CORAL_SRC}/coral/app/cgi/main.hpp \
$${CORAL_SRC}/coral/console/main.hpp \
$${CORAL_SRC}/coral/console/main_main.hpp \

timecgi_SOURCES += \
$${CORAL_SRC}/coral/app/cgi/time/main.cpp \
$${CORAL_SRC}/coral/console/main_main.cpp \

########################################################################
timecgi_LIBS += \
$${coral_LIBS} \

########################################################################
# NO Qt
QT -= gui core

