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
#   File: libncoral.pri
#
# Author: $author$
#   Date: 12/19/2018
#
# QtCreator .pri file for coral library libncoral
########################################################################

########################################################################
# libncoral

# libncoral TARGET
#
libncoral_TARGET = ncoral
libncoral_TEMPLATE = lib
libncoral_CONFIG += staticlib

# libncoral INCLUDEPATH
#
libncoral_INCLUDEPATH += \
$${ncoral_INCLUDEPATH} \

# libncoral DEFINES
#
libncoral_DEFINES += \
$${ncoral_DEFINES} \

########################################################################
# libncoral OBJECTIVE_HEADERS
#
#libncoral_OBJECTIVE_HEADERS += \
#$${CORAL_SRC}/coral/base/Base.hh \

# libncoral OBJECTIVE_SOURCES
#
#libncoral_OBJECTIVE_SOURCES += \
#$${CORAL_SRC}/coral/base/Base.mm \

########################################################################
# libncoral HEADERS
#
libncoral_HEADERS += \
$${CORAL_SRC}/coral/nadir/base/base.hpp \
$${CORAL_SRC}/coral/nadir/base/types.hpp \
$${CORAL_SRC}/coral/nadir/base/array.hpp \
$${CORAL_SRC}/coral/nadir/base/string.hpp \
$${CORAL_SRC}/coral/nadir/base/argv.hpp \
\
$${CORAL_SRC}/coral/nadir/io/sequence.hpp \
$${CORAL_SRC}/coral/nadir/io/reader.hpp \
$${CORAL_SRC}/coral/nadir/io/writer.hpp \
$${CORAL_SRC}/coral/nadir/io/stream.hpp \
$${CORAL_SRC}/coral/nadir/io/file.hpp \
$${CORAL_SRC}/coral/nadir/io/string.hpp \
$${CORAL_SRC}/coral/nadir/io/types.hpp \
$${CORAL_SRC}/coral/nadir/io/logger.hpp \
\
$${CORAL_SRC}/coral/nadir/console/main_opt.hpp \
$${CORAL_SRC}/coral/nadir/console/main.hpp \
\
$${CORAL_SRC}/coral/nadir/lib/version.hpp \
$${CORAL_SRC}/coral/lib/version.hpp \
$${CORAL_SRC}/coral/lib/coral/version.hpp \

# libncoral SOURCES
#
libncoral_SOURCES += \
$${CORAL_SRC}/coral/nadir/base/base.cpp \
$${CORAL_SRC}/coral/nadir/base/array.cpp \
$${CORAL_SRC}/coral/nadir/base/argv.cpp \
\
$${CORAL_SRC}/coral/nadir/io/sequence.cpp \
$${CORAL_SRC}/coral/nadir/io/reader.cpp \
$${CORAL_SRC}/coral/nadir/io/writer.cpp \
$${CORAL_SRC}/coral/nadir/io/stream.cpp \
$${CORAL_SRC}/coral/nadir/io/file.cpp \
$${CORAL_SRC}/coral/nadir/io/string.cpp \
$${CORAL_SRC}/coral/nadir/io/types.cpp \
$${CORAL_SRC}/coral/nadir/io/logger.cpp \
\
$${CORAL_SRC}/coral/nadir/console/main_opt.cpp \
$${CORAL_SRC}/coral/nadir/console/main.cpp \
\
$${CORAL_SRC}/coral/lib/coral/version.cpp \

########################################################################



