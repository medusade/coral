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
#   File: cgithrower.pri
#
# Author: $author$
#   Date: 9/3/2018
#
# QtCreator .pri file for coral executable cgithrower
########################################################################

########################################################################
# cgithrower

# cgithrower TARGET
#
cgithrower_TARGET = coral-cgithrower

# cgithrower INCLUDEPATH
#
cgithrower_INCLUDEPATH += \
$${coral_INCLUDEPATH} \

# cgithrower DEFINES
#
cgithrower_DEFINES += \
$${coral_DEFINES} \

########################################################################
# cgithrower OBJECTIVE_HEADERS
#
#cgithrower_OBJECTIVE_HEADERS += \
#$${CORAL_SRC}/coral/base/Base.hh \

# cgithrower OBJECTIVE_SOURCES
#
#cgithrower_OBJECTIVE_SOURCES += \
#$${CORAL_SRC}/coral/base/Base.mm \

########################################################################
# cgithrower HEADERS
#
cgithrower_HEADERS += \
$${CORAL_SRC}/coral/app/cgi/thrower/main.hpp \

# cgithrower SOURCES
#
cgithrower_SOURCES += \
$${CORAL_SRC}/coral/app/cgi/thrower/main.cpp \

########################################################################
# cgithrower FRAMEWORKS
#
cgithrower_FRAMEWORKS += \
$${coral_FRAMEWORKS} \

# cgithrower LIBS
#
cgithrower_LIBS += \
$${coral_LIBS} \


