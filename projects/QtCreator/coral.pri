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
#   File: coral.pri
#
# Author: $author$
#   Date: 12/15/2014
########################################################################

CORAL_PKG = ../../../../..
CORAL_BLD = ../..
CORAL_PRJ = $${CORAL_PKG}
CORAL_BIN = $${CORAL_BLD}/bin
CORAL_LIB = $${CORAL_BLD}/lib
CORAL_SRC = $${CORAL_PKG}/src

########################################################################
# xos
XOS_PKG = $${CORAL_PKG}/../nadir
XOS_PRJ = $${XOS_PKG}
XOS_SRC = $${XOS_PKG}/src

xos_INCLUDEPATH += \
$${XOS_SRC} \

xos_DEFINES += \

########################################################################
# coral
coral_INCLUDEPATH += \
$${CORAL_SRC} \
$${xos_INCLUDEPATH} \

coral_DEFINES += \
$${xos_DEFINES} \

