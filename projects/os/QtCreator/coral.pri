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
#   File: coral.pri
#
# Author: $author$
#   Date: 9/3/2018
#
# Os QtCreator .pri file for coral
########################################################################
UNAME = $$system(uname)

contains(UNAME,Darwin) {
CORAL_OS = macosx
} else {
CORAL_OS = linux
}

#CONFIG += c++11
#CONFIG += c++0x

########################################################################
# rostra
ROSTRA_THIRDPARTY_PKG_MAKE_BLD = $${ROSTRA_THIRDPARTY_PKG}/build/$${CORAL_OS}/$${BUILD_CONFIG}
ROSTRA_THIRDPARTY_PRJ_MAKE_BLD = $${ROSTRA_THIRDPARTY_PRJ}/build/$${CORAL_OS}/$${BUILD_CONFIG}
ROSTRA_THIRDPARTY_PKG_BLD = $${ROSTRA_THIRDPARTY_PKG}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
ROSTRA_THIRDPARTY_PRJ_BLD = $${ROSTRA_THIRDPARTY_PRJ}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
ROSTRA_PKG_BLD = $${OTHER_BLD}/$${ROSTRA_PKG}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
ROSTRA_PRJ_BLD = $${OTHER_BLD}/$${ROSTRA_PRJ}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
#ROSTRA_LIB = $${ROSTRA_THIRDPARTY_PKG_MAKE_BLD}/lib
#ROSTRA_LIB = $${ROSTRA_THIRDPARTY_PRJ_MAKE_BLD}/lib
#ROSTRA_LIB = $${ROSTRA_THIRDPARTY_PKG_BLD}/lib
#ROSTRA_LIB = $${ROSTRA_THIRDPARTY_PRJ_BLD}/lib
#ROSTRA_LIB = $${ROSTRA_PKG_BLD}/lib
ROSTRA_LIB = $${ROSTRA_PRJ_BLD}/lib
#ROSTRA_LIB = $${CORAL_LIB}

# rostra LIBS
#
rostra_LIBS += \
-L$${ROSTRA_LIB}/lib$${ROSTRA_NAME} \
-l$${ROSTRA_NAME} \

########################################################################
# nadir
NADIR_THIRDPARTY_PKG_MAKE_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${CORAL_OS}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_MAKE_BLD = $${NADIR_THIRDPARTY_PRJ}/build/$${CORAL_OS}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PKG_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_BLD = $${NADIR_THIRDPARTY_PRJ}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_PKG_BLD = $${OTHER_BLD}/$${NADIR_PKG}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_PRJ_BLD = $${OTHER_BLD}/$${NADIR_PRJ}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_BLD}/lib
#NADIR_LIB = $${NADIR_PKG_BLD}/lib
NADIR_LIB = $${NADIR_PRJ_BLD}/lib
#NADIR_LIB = $${CORAL_LIB}

# nadir LIBS
#
nadir_LIBS += \
-L$${NADIR_LIB}/lib$${NADIR_NAME} \
-l$${NADIR_NAME} \

# xosnadir LIBS
#
xosnadir_LIBS += \
-L$${NADIR_LIB}/libxos$${NADIR_NAME} \
-lxos$${NADIR_NAME} \

########################################################################
# medusa
MEDUSA_THIRDPARTY_PKG_MAKE_BLD = $${MEDUSA_THIRDPARTY_PKG}/build/$${CORAL_OS}/$${BUILD_CONFIG}
MEDUSA_THIRDPARTY_PRJ_MAKE_BLD = $${MEDUSA_THIRDPARTY_PRJ}/build/$${CORAL_OS}/$${BUILD_CONFIG}
MEDUSA_THIRDPARTY_PKG_BLD = $${MEDUSA_THIRDPARTY_PKG}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
MEDUSA_THIRDPARTY_PRJ_BLD = $${MEDUSA_THIRDPARTY_PRJ}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
MEDUSA_PKG_BLD = $${OTHER_BLD}/$${MEDUSA_PKG}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
MEDUSA_PRJ_BLD = $${OTHER_BLD}/$${MEDUSA_PRJ}/build/$${CORAL_OS}/QtCreator/$${BUILD_CONFIG}
#MEDUSA_LIB = $${MEDUSA_THIRDPARTY_PKG_MAKE_BLD}/lib
#MEDUSA_LIB = $${MEDUSA_THIRDPARTY_PRJ_MAKE_BLD}/lib
#MEDUSA_LIB = $${MEDUSA_THIRDPARTY_PKG_BLD}/lib
#MEDUSA_LIB = $${MEDUSA_THIRDPARTY_PRJ_BLD}/lib
#MEDUSA_LIB = $${MEDUSA_PKG_BLD}/lib
MEDUSA_LIB = $${MEDUSA_PRJ_BLD}/lib
#MEDUSA_LIB = $${CORAL_LIB}

# medusa LIBS
#
medusa_LIBS += \
-L$${MEDUSA_LIB}/lib$${MEDUSA_NAME} \
-l$${MEDUSA_NAME} \

# nmedusa LIBS
#
nmedusa_LIBS += \
-L$${MEDUSA_LIB}/libn$${MEDUSA_NAME} \
-ln$${MEDUSA_NAME} \

########################################################################
# coral

# coral INCLUDEPATH
#
coral_INCLUDEPATH += \

# coral DEFINES
#
coral_DEFINES += \

# coral LIBS
#
coral_LIBS += \
$${medusa_LIBS} \
$${xosnadir_LIBS} \
$${build_coral_LIBS} \
-lpthread \
-ldl \

contains(CORAL_OS,linux) {
coral_LIBS += \
-lrt
} else {
}

########################################################################
# ncoral

# ncoral INCLUDEPATH
#
ncoral_INCLUDEPATH += \

# ncoral DEFINES
#
ncoral_DEFINES += \

# ncoral LIBS
#
ncoral_LIBS += \
$${nmedusa_LIBS} \
$${nadir_LIBS} \
$${rostra_LIBS} \
$${build_ncoral_LIBS} \
-lpthread \
-ldl \

contains(CORAL_OS,linux) {
ncoral_LIBS += \
-lrt
} else {
}
