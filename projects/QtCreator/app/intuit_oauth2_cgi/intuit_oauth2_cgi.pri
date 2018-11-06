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
#   File: intuit_oauth2_cgi.pri
#
# Author: $author$
#   Date: 11/1/2018
#
# QtCreator .pri file for coral executable intuit_oauth2_cgi
########################################################################

########################################################################
# intuit_oauth2_cgi

# intuit_oauth2_cgi TARGET
#
intuit_oauth2_cgi_TARGET = intuit-oauth2-cgi

# intuit_oauth2_cgi INCLUDEPATH
#
intuit_oauth2_cgi_INCLUDEPATH += \
$${coral_INCLUDEPATH} \

# intuit_oauth2_cgi DEFINES
#
intuit_oauth2_cgi_DEFINES += \
$${coral_DEFINES} \

########################################################################
# intuit_oauth2_cgi OBJECTIVE_HEADERS
#
#intuit_oauth2_cgi_OBJECTIVE_HEADERS += \
#$${CORAL_SRC}/coral/base/Base.hh \

# intuit_oauth2_cgi OBJECTIVE_SOURCES
#
#intuit_oauth2_cgi_OBJECTIVE_SOURCES += \
#$${CORAL_SRC}/coral/base/Base.mm \

########################################################################
# intuit_oauth2_cgi HEADERS
#
intuit_oauth2_cgi_HEADERS += \
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
\
$${CORAL_SRC}/coral/inet/http/url.hpp \
$${CORAL_SRC}/coral/app/cgi/intuit/oauth2/cgi.hpp \

# intuit_oauth2_cgi SOURCES
#
intuit_oauth2_cgi_SOURCES += \
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
\
$${CORAL_SRC}/coral/inet/http/url.cpp \
$${CORAL_SRC}/coral/app/cgi/intuit/oauth2/cgi.cpp \

########################################################################
# intuit_oauth2_cgi FRAMEWORKS
#
intuit_oauth2_cgi_FRAMEWORKS += \
$${coral_FRAMEWORKS} \

# intuit_oauth2_cgi LIBS
#
intuit_oauth2_cgi_LIBS += \
$${coral_LIBS} \


