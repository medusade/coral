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
#   File: hellocgi.pri
#
# Author: $author$
#   Date: 10/15/2018
#
# QtCreator .pri file for coral executable hellocgi
########################################################################

########################################################################
# hellocgi

# hellocgi TARGET
#
hellocgi_TARGET = hellocgi

# hellocgi INCLUDEPATH
#
hellocgi_INCLUDEPATH += \
$${coral_INCLUDEPATH} \

# hellocgi DEFINES
#
hellocgi_DEFINES += \
$${coral_DEFINES} \

########################################################################
# hellocgi OBJECTIVE_HEADERS
#
#hellocgi_OBJECTIVE_HEADERS += \
#$${CORAL_SRC}/coral/base/Base.hh \

# hellocgi OBJECTIVE_SOURCES
#
#hellocgi_OBJECTIVE_SOURCES += \
#$${CORAL_SRC}/coral/base/Base.mm \

########################################################################
# hellocgi HEADERS
#
hellocgi_HEADERS += \
$${MEDUSA_SRC}/medusa/io/reader.hpp \
$${MEDUSA_SRC}/medusa/io/writer.hpp \
$${MEDUSA_SRC}/medusa/inet/http/form/reader.hpp \
$${MEDUSA_SRC}/medusa/inet/http/form/writer.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/encoded/form/fields.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/encoded/reader.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/encoded/writer.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/encoded/string.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/part.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/scheme.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/authority.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/path.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/query.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/fragment.hpp \
$${MEDUSA_SRC}/medusa/inet/http/url/location.hpp \
$${CORAL_SRC}/coral/io/string.hpp \
$${CORAL_SRC}/coral/inet/http/url.hpp \
$${CORAL_SRC}/coral/app/cgi/hello/cgi.hpp \

# hellocgi SOURCES
#
hellocgi_SOURCES += \
$${MEDUSA_SRC}/medusa/inet/http/form/reader.cpp \
$${MEDUSA_SRC}/medusa/inet/http/form/writer.cpp \
$${MEDUSA_SRC}/medusa/inet/http/url/encoded/form/fields.cpp \
$${MEDUSA_SRC}/medusa/inet/http/url/encoded/string.cpp \
$${MEDUSA_SRC}/medusa/inet/http/url/part.cpp \
$${MEDUSA_SRC}/medusa/inet/http/url/scheme.cpp \
$${MEDUSA_SRC}/medusa/inet/http/url/authority.cpp \
$${MEDUSA_SRC}/medusa/inet/http/url/path.cpp \
$${MEDUSA_SRC}/medusa/inet/http/url/query.cpp \
$${MEDUSA_SRC}/medusa/inet/http/url/fragment.cpp \
$${MEDUSA_SRC}/medusa/inet/http/url/location.cpp \
$${CORAL_SRC}/coral/inet/http/url.cpp \
$${CORAL_SRC}/coral/app/cgi/hello/cgi.cpp \

########################################################################
# hellocgi FRAMEWORKS
#
hellocgi_FRAMEWORKS += \
$${coral_FRAMEWORKS} \

# hellocgi LIBS
#
hellocgi_LIBS += \
$${coral_LIBS} \


