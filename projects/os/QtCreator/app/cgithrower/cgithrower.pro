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
#   File: cgithrower.pro
#
# Author: $author$
#   Date: 9/3/2018
#
# QtCreator .pro file for coral executable cgithrower
########################################################################
include(../../../../../build/QtCreator/coral.pri)
include(../../../../QtCreator/coral.pri)
include(../../coral.pri)
include(../../../../QtCreator/app/cgithrower/cgithrower.pri)

TARGET = $${cgithrower_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${cgithrower_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${cgithrower_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${cgithrower_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${cgithrower_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${cgithrower_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${cgithrower_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${cgithrower_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${cgithrower_LIBS} \
$${FRAMEWORKS} \


