########################################################################
# Copyright (c) 1988-2015 $organization$
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
#   File: Makefile
#
# Author: $author$
#   Date: 12/16/2016
#
# Common Gcc Makefile for coral
########################################################################
CORAL_PKG = ${PKG}
CORAL_SRC = ${CORAL_PKG}/src
CORAL_BLD = ${CORAL_PKG}/${BLD}/${BUILD_TYPE}
CORAL_LIB = ${CORAL_BLD}/lib
CORAL_BIN = ${CORAL_BLD}/bin

########################################################################
# xde
XDE_PKG = ${CORAL_PKG}/../xde
XDE_PRJ = ${XDE_PKG}
XDE_SRC = ${XDE_PKG}/c/src
XDE_BLD = ${XDE_PKG}/c/${BLD}
XDE_LIB = ${XDE_BLD}/lib
XDE_BIN = ${XDE_BLD}/bin

xde_USRDEFINES += \
-DDB_PRINTF=platform_db_printf \
-DNO_CDEBUG_PRINTF \

xde_ccgi_USRINCLUDES += \
-I${XDE_SRC}/clib/ccgi \
-I${XDE_SRC}/clib/cxttp \
-I${XDE_SRC}/clib/ct \
-I${XDE_SRC}/clib/cyy \

xde_cos_USRINCLUDES += \
-I${XDE_SRC}/clib/csocket \
-I${XDE_SRC}/clib/cfs \
-I${XDE_SRC}/clib/cos/cwin \
-I${XDE_SRC}/clib/cos/cunix \
-I${XDE_SRC}/clib/cos \

xde_cbase_USRINCLUDES += \
-I${XDE_SRC}/clib/cbase \
-I${XDE_SRC}/clib \

xde_USRLIBDIRS += \
-L${XDE_LIB} \

xde_cbase_LIBS += \
-lcos \
-lcbase \

xde_ct_LIBS += \
-lct \

########################################################################
# medusaxde
MEDUSAXDE_PKG = ${CORAL_PKG}/../medusaxde
MEDUSAXDE_PRJ = ${MEDUSAXDE_PKG}
MEDUSAXDE_SRC = ${MEDUSAXDE_PKG}/c/src
MEDUSAXDE_BLD = ${MEDUSAXDE_PKG}/c/${BLD}
MEDUSAXDE_LIB = ${MEDUSAXDE_BLD}/lib
MEDUSAXDE_BIN = ${MEDUSAXDE_BLD}/bin

medusaxde_cbase_USRINCLUDES += \
-I${MEDUSAXDE_SRC}/clib/cos/cthread/cpthread \
-I${MEDUSAXDE_SRC}/clib/cos/cthread \
-I${MEDUSAXDE_SRC}/clib/cos/cfs/cunixfs \
-I${MEDUSAXDE_SRC}/clib/cos/cfs \
-I${MEDUSAXDE_SRC}/clib/cos \
-I${MEDUSAXDE_SRC}/clib/cbase \

medusaxde_clibxslt_USRINCLUDES += \
-I${HOME}/build/libxslt/include \
-I${HOME}/build/libxml2/include/libxml2 \
-I${MEDUSAXDE_SRC}/clib/cxml/cxslt \
-I${MEDUSAXDE_SRC}/clib/cxml \

medusaxde_cbase_USRLIBDIRS += \
-L${MEDUSAXDE_LIB} \

medusaxde_clibxslt_USRLIBDIRS += \
-L${HOME}/build/libxslt/lib \
-L${HOME}/build/libxml2/lib \

#-L${HOME}/build/zlib/lib \

medusaxde_cbase_LIBS += \
-lcos \
-lcbase \

medusaxde_clibxslt_LIBS += \
-lclibxslt \
-lcxslt \
-lcxml \
-lxslt \
-lexslt \
-lxml2 \

#-lz \

########################################################################
# xos
XOS_PKG = ${CORAL_PKG}/../nadir
XOS_SRC = ${XOS_PKG}/src
XOS_BLD = ${XOS_PKG}/${BLD}/${BUILD_TYPE}
XOS_LIB = ${XOS_BLD}/lib
XOS_BIN = ${XOS_BLD}/bin

########################################################################
# medusa
MEDUSA_PKG = ${CORAL_PKG}/../medusa
MEDUSA_SRC = ${MEDUSA_PKG}/src
MEDUSA_BLD = ${MEDUSA_PKG}/${BLD}/${BUILD_TYPE}
MEDUSA_LIB = ${MEDUSA_BLD}/lib
MEDUSA_BIN = ${MEDUSA_BLD}/bin

########################################################################
# coral
coral_USRDEFINES += \

coral_USRINCLUDES += \
-I${CORAL_SRC} \
-I${MEDUSA_SRC} \
-I${XOS_SRC} \

coral_USRCXXFLAGS += \
-std=c++0x

coral_USRLIBDIRS += \
-L${XOS_LIB} \

coral_LIBS += \
-lxosnadir \

