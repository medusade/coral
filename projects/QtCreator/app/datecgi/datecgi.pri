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
#   File: datecgi.pri
#
# Author: $author$
#   Date: 1/13/2017
########################################################################

datecgi_INCLUDEPATH += \
$${coral_INCLUDEPATH} \

datecgi_DEFINES += \
$${coral_DEFINES} \
USE_NADIR_BASE \

########################################################################
datecgi_HEADERS += \
$${NADIR_SRC}/nadir/console/getopt/main_opt.hpp \
$${NADIR_SRC}/nadir/io/crt/file_stream.hpp \
$${NADIR_SRC}/nadir/io/crt/file.hpp \
$${NADIR_SRC}/nadir/io/stream.hpp \
$${NADIR_SRC}/nadir/io/writer.hpp \
$${NADIR_SRC}/nadir/io/reader.hpp \
$${NADIR_SRC}/nadir/base/string_base.hpp \
$${NADIR_SRC}/nadir/base/argv.hpp \

datecgi_SOURCES += \
$${NADIR_SRC}/nadir/console/getopt/main_opt.cpp \
$${NADIR_SRC}/nadir/io/crt/file_stream.cpp \
$${NADIR_SRC}/nadir/io/crt/file.cpp \
$${NADIR_SRC}/nadir/io/stream.cpp \
$${NADIR_SRC}/nadir/io/writer.cpp \
$${NADIR_SRC}/nadir/io/reader.cpp \
$${NADIR_SRC}/nadir/base/string_base.cpp \
$${NADIR_SRC}/nadir/base/argv.cpp \

########################################################################
datecgi_HEADERS += \
$${CORAL_SRC}/coral/base/base.hpp \

datecgi_SOURCES += \
$${CORAL_SRC}/coral/base/base.cpp \

########################################################################
datecgi_HEADERS += \
$${CORAL_SRC}/coral/app/cgi/date/main.hpp \
$${CORAL_SRC}/coral/console/main.hpp \
$${CORAL_SRC}/coral/console/main_main.hpp \

datecgi_SOURCES += \
$${CORAL_SRC}/coral/app/cgi/date/main.cpp \
$${CORAL_SRC}/coral/console/main_main.cpp \

