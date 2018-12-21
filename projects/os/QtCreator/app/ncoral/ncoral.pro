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
#   File: ncoral.pro
#
# Author: $author$
#   Date: 12/21/2018
#
# QtCreator .pro file for coral executable ncoral
########################################################################
include(../../../../../build/QtCreator/coral.pri)
include(../../../../QtCreator/coral.pri)
include(../../coral.pri)
include(../../../../QtCreator/app/ncoral/ncoral.pri)

TARGET = $${ncoral_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${ncoral_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${ncoral_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${ncoral_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${ncoral_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${ncoral_exe_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${ncoral_exe_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${ncoral_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${ncoral_exe_LIBS} \
$${FRAMEWORKS} \


