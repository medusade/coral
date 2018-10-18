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
#   File: cgi.pri
#
# Author: $author$
#   Date: 9/3/2018
#
# QtCreator .pri file for coral executable cgi
########################################################################

########################################################################
# cgi

# cgi TARGET
#
cgi_TARGET = coral-cgi

# cgi INCLUDEPATH
#
cgi_INCLUDEPATH += \
$${coral_INCLUDEPATH} \

# cgi DEFINES
#
cgi_DEFINES += \
$${coral_DEFINES} \

########################################################################
# cgi OBJECTIVE_HEADERS
#
#cgi_OBJECTIVE_HEADERS += \
#$${CORAL_SRC}/coral/base/Base.hh \

# cgi OBJECTIVE_SOURCES
#
#cgi_OBJECTIVE_SOURCES += \
#$${CORAL_SRC}/coral/base/Base.mm \

########################################################################
# cgi HEADERS
#
cgi_HEADERS += \
$${CORAL_SRC}/coral/app/cgi/main.hpp \

# cgi SOURCES
#
cgi_SOURCES += \
$${CORAL_SRC}/coral/app/cgi/main.cpp \

########################################################################
# cgi FRAMEWORKS
#
cgi_FRAMEWORKS += \
$${coral_FRAMEWORKS} \

# cgi LIBS
#
cgi_LIBS += \
$${coral_LIBS} \


