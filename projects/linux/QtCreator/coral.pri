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
#   Date: 2/14/2015
########################################################################

QMAKE_CXXFLAGS += -std=c++11
BUILD_OS = linux

########################################################################
# xde
XDE_BLD = ../$${XDE_PKG}/c/build/$${BUILD_OS}/QtCreator/$${BUILD_CONFIG}
XDE_LIB = $${XDE_BLD}/lib

xde_cbase_LIBS += \
-L$${XDE_LIB}/libcos \
-lcos \
-L$${XDE_LIB}/libcbase \
-lcbase \

xde_ct_LIBS += \
-L$${XDE_LIB}/libct \
-lct \

########################################################################
# medusaxde
MEDUSAXDE_BLD = ../$${MEDUSAXDE_PKG}/c/build/$${BUILD_OS}/QtCreator/$${BUILD_CONFIG}
MEDUSAXDE_LIB = $${MEDUSAXDE_BLD}/lib

medusaxde_cbase_LIBS += \
-L$${MEDUSAXDE_LIB}/libcos \
-lcos \
-L$${MEDUSAXDE_LIB}/libcbase \
-lcbase \

medusaxde_clibxslt_LIBS += \
-L$${MEDUSAXDE_LIB}/libclibxslt \
-lclibxslt \
-L$${MEDUSAXDE_LIB}/libcxslt \
-lcxslt \
-L$${MEDUSAXDE_LIB}/libcxml \
-lcxml \
-L${HOME}/build/libxslt/lib \
-lxslt \
-lexslt \
-L${HOME}/build/libxml2/lib \
-lxml2 \

########################################################################
# nadir
NADIR_BLD = ../$${NADIR_PKG}/build/$${BUILD_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_LIB = $${NADIR_BLD}/lib

nadir_LIBS += \
-L$${NADIR_LIB}/libnadir \
-lnadir \
-lpthread \
-ldl \
-lrt \

xosnadir_LIBS += \
-L$${NADIR_LIB}/libxosnadir \
-lxosnadir \
-lpthread \
-ldl \
-lrt \

########################################################################
# medusa
MEDUSA_BLD = ../$${MEDUSA_PKG}/build/$${BUILD_OS}/QtCreator/$${BUILD_CONFIG}
MEDUSA_LIB = $${MEDUSA_BLD}/lib

medusa_LIBS += \
-L$${MEDUSA_LIB}/libmedusa \
-lmedusa \

xosmedusa_LIBS += \
-L$${MEDUSA_LIB}/libxosmedusa \
-lxosmedusa \

########################################################################
# coral
coral_LIBS += \
-L$${CORAL_LIB}/libcoral \
-lcoral \
$${nadir_LIBS} \

xoscoral_LIBS += \
-L$${CORAL_LIB}/libxoscoral \
-lxoscoral \
$${xosnadir_LIBS} \
