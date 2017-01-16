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

CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
DEFINES += RELEASE_BUILD
}

########################################################################
# xde
XDE_PKG = $${CORAL_PKG}/../xde
XDE_PRJ = $${XDE_PKG}
XDE_SRC = $${XDE_PKG}/c/src

xde_ccgi_INCLUDEPATH += \
$${XDE_SRC}/clib/ccgi \
$${XDE_SRC}/clib/cxttp \
$${XDE_SRC}/clib/ct \
$${XDE_SRC}/clib/cyy \

xde_cos_INCLUDEPATH += \
$${XDE_SRC}/clib/csocket \
$${XDE_SRC}/clib/cfs \
$${XDE_SRC}/clib/cos/cwin \
$${XDE_SRC}/clib/cos/cunix \
$${XDE_SRC}/clib/cos \

xde_cbase_INCLUDEPATH += \
$${XDE_SRC}/clib/cbase \
$${XDE_SRC}/clib \

xde_DEFINES += \
DB_PRINTF=platform_db_printf \
NO_CDEBUG_PRINTF \

########################################################################
# medusaxde
MEDUSAXDE_PKG = $${CORAL_PKG}/../medusaxde
MEDUSAXDE_PRJ = $${MEDUSAXDE_PKG}
MEDUSAXDE_SRC = $${MEDUSAXDE_PKG}/c/src

medusaxde_cbase_INCLUDEPATH += \
$${MEDUSAXDE_SRC}/clib/cos/cthread/cpthread \
$${MEDUSAXDE_SRC}/clib/cos/cthread \
$${MEDUSAXDE_SRC}/clib/cos/cfs/cunixfs \
$${MEDUSAXDE_SRC}/clib/cos/cfs \
$${MEDUSAXDE_SRC}/clib/cos \
$${MEDUSAXDE_SRC}/clib/cbase \

medusaxde_clibxslt_INCLUDEPATH += \
${HOME}/build/libxslt/include \
${HOME}/build/libxml2/include/libxml2 \
$${MEDUSAXDE_SRC}/clib/cxml/cxslt \
$${MEDUSAXDE_SRC}/clib/cxml \

########################################################################
# nadir
NADIR_PKG = $${CORAL_PKG}/../nadir
NADIR_PRJ = $${NADIR_PKG}
NADIR_SRC = $${NADIR_PKG}/src

nadir_INCLUDEPATH += \
$${NADIR_SRC} \

nadir_DEFINES += \

########################################################################
# medusa
MEDUSA_PKG = $${CORAL_PKG}/../medusa
MEDUSA_PRJ = $${MEDUSA_PKG}
MEDUSA_SRC = $${MEDUSA_PKG}/src

medusa_INCLUDEPATH += \
$${MEDUSA_SRC} \

medusa_DEFINES += \

########################################################################
# coral
coral_INCLUDEPATH += \
$${CORAL_SRC} \
$${medusa_INCLUDEPATH} \
$${nadir_INCLUDEPATH} \

coral_DEFINES += \
$${medusa_DEFINES} \
$${nadir_DEFINES} \

