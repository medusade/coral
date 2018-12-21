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
#   File: ncoral.pri
#
# Author: $author$
#   Date: 12/21/2018
#
# QtCreator .pri file for coral executable ncoral
########################################################################

########################################################################
# ncoral

# ncoral_exe TARGET
#
ncoral_exe_TARGET = ncoral

# ncoral_exe INCLUDEPATH
#
ncoral_exe_INCLUDEPATH += \
$${ncoral_INCLUDEPATH} \

# ncoral_exe DEFINES
#
ncoral_exe_DEFINES += \
$${ncoral_DEFINES} \

########################################################################
# ncoral_exe OBJECTIVE_HEADERS
#
#ncoral_exe_OBJECTIVE_HEADERS += \
#$${CORAL_SRC}/coral/base/Base.hh \

# ncoral_exe OBJECTIVE_SOURCES
#
#ncoral_exe_OBJECTIVE_SOURCES += \
#$${CORAL_SRC}/coral/base/Base.mm \

########################################################################
# ncoral_exe HEADERS
#
ncoral_exe_HEADERS += \
$${CORAL_SRC}/coral/app/console/coral/main.hpp \

# ncoral_exe SOURCES
#
ncoral_exe_SOURCES += \
$${CORAL_SRC}/coral/app/console/coral/main.cpp \

########################################################################
# ncoral_exe FRAMEWORKS
#
ncoral_exe_FRAMEWORKS += \
$${ncoral_FRAMEWORKS} \

# ncoral_exe LIBS
#
ncoral_exe_LIBS += \
$${ncoral_LIBS} \


