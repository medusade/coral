########################################################################
# Copyright (c) 1988-2018 $organization$
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
#   File: cgicatcher.pri
#
# Author: $author$
#   Date: 9/3/2018
#
# QtCreator .pri file for coral executable cgicatcher
########################################################################

########################################################################
# cgicatcher

# cgicatcher TARGET
#
cgicatcher_TARGET = coral-cgicatcher

# cgicatcher INCLUDEPATH
#
cgicatcher_INCLUDEPATH += \
$${coral_INCLUDEPATH} \

# cgicatcher DEFINES
#
cgicatcher_DEFINES += \
$${coral_DEFINES} \

########################################################################
# cgicatcher OBJECTIVE_HEADERS
#
#cgicatcher_OBJECTIVE_HEADERS += \
#$${CORAL_SRC}/coral/base/Base.hh \

# cgicatcher OBJECTIVE_SOURCES
#
#cgicatcher_OBJECTIVE_SOURCES += \
#$${CORAL_SRC}/coral/base/Base.mm \

########################################################################
# cgicatcher HEADERS
#
cgicatcher_HEADERS += \
$${CORAL_SRC}/coral/app/cgi/catcher/main.hpp \

# cgicatcher SOURCES
#
cgicatcher_SOURCES += \
$${CORAL_SRC}/coral/app/cgi/catcher/main.cpp \

########################################################################
# cgicatcher FRAMEWORKS
#
cgicatcher_FRAMEWORKS += \
$${coral_FRAMEWORKS} \

# cgicatcher LIBS
#
cgicatcher_LIBS += \
$${coral_LIBS} \


