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
# libcoral
libcoral_TARGET = coral

libcoral_INCLUDEPATH += \
$${coral_INCLUDEPATH} \

libcoral_DEFINES += \
$${coral_DEFINES} \

########################################################################
libcoral_HEADERS += \
$${CORAL_SRC}/coral/base/base.hpp \

libcoral_SOURCES += \
$${CORAL_SRC}/coral/base/base.cpp \

########################################################################
libcoral_HEADERS += \
$${CORAL_SRC}/coral/io/logger.hpp \
$${CORAL_SRC}/coral/io/stream.hpp \
$${CORAL_SRC}/coral/io/writer.hpp \
$${CORAL_SRC}/coral/io/reader.hpp \
$${CORAL_SRC}/coral/io/sequence.hpp \

libcoral_SOURCES += \
$${CORAL_SRC}/coral/io/logger.cpp \
$${CORAL_SRC}/coral/io/stream.cpp \
$${CORAL_SRC}/coral/io/writer.cpp \
$${CORAL_SRC}/coral/io/reader.cpp \
$${CORAL_SRC}/coral/io/sequence.cpp \

########################################################################
libcoral_HEADERS += \
$${CORAL_SRC}/coral/mt/os/process.hpp \
$${CORAL_SRC}/coral/mt/os/pipe.hpp \

libcoral_SOURCES += \
$${CORAL_SRC}/coral/mt/os/process.cpp \
$${CORAL_SRC}/coral/mt/os/pipe.cpp \

