########################################################################
# Copyright (c) 1988-2014 $organization$
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
#   File: libcoral.pri
#
# Author: $author$
#   Date: 12/15/2014
########################################################################

TEMPLATE = lib
CONFIG += staticlib

########################################################################
# libxoscoral
libxoscoral_TARGET = xoscoral

libxoscoral_INCLUDEPATH += \
$${coral_INCLUDEPATH} \

libxoscoral_DEFINES += \
$${coral_DEFINES} \

########################################################################
libxoscoral_HEADERS += \
$${CORAL_SRC}/coral/base/base.hpp \

libxoscoral_SOURCES += \
$${CORAL_SRC}/coral/base/base.cpp \

########################################################################
# libcoral
libcoral_TARGET = coral

libcoral_INCLUDEPATH += \
$${libxoscoral_INCLUDEPATH} \

libcoral_DEFINES += \
$${libxoscoral_DEFINES} \
USE_NADIR_BASE \

########################################################################
libcoral_HEADERS += \
$${libxoscoral_HEADERS} \

libcoral_SOURCES += \
$${libxoscoral_SOURCES} \
