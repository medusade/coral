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
#   File: coral.pro
#
# Author: $author$
#   Date: 10/18/2018
#
# QtCreator .pro file for coral executable coral
########################################################################
include(../../../../../build/QtCreator/coral.pri)
include(../../../../QtCreator/coral.pri)
include(../../coral.pri)
include(../../../../QtCreator/app/coral/coral.pri)

TARGET = $${coral_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${coral_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${coral_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${coral_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
SOURCES += \
$${coral_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${coral_exe_HEADERS} \

# SOURCES
#
SOURCES += \
$${coral_exe_SOURCES} \
$${OBJECTIVE_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${coral_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${coral_exe_LIBS} \
$${FRAMEWORKS} \


