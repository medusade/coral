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
#   File: timecgi.pro
#
# Author: $author$
#   Date: 12/15/2017
########################################################################
include(../../../../QtCreator/coral.pri)
include(../../coral.pri)
include(../../../../QtCreator/app/timecgi/timecgi.pri)

TARGET = $${timecgi_TARGET}

INCLUDEPATH += \
$${timecgi_INCLUDEPATH} \

DEFINES += \
$${timecgi_DEFINES} \

########################################################################
HEADERS += \
$${timecgi_HEADERS} \

SOURCES += \
$${timecgi_SOURCES} \

########################################################################
LIBS += \
$${timecgi_LIBS} \

