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
#   File: Makefile
#
# Author: $author$
#   Date: 10/15/2018
#
# build Gcc Makefile for coral
########################################################################


########################################################################
# nadir
#
# pkg-config --cflags --libs nadir
#

ifndef USE_HOME_BUILD_nadir
USE_HOME_BUILD_nadir = no
endif

ifeq ($(USE_HOME_BUILD_nadir),yes)
#
# home build nadir
#
build_nadir_USRDEFINES += \

build_nadir_USRINCLUDES += \
-I$(HOME)/build/nadir/include \

build_nadir_USRCXXFLAGS += \

build_nadir_USRLIBDIRS += \
-L$(HOME)/build/nadir/lib \

build_nadir_LIBS += \
-lnadir \

build_nadir_FRAMEWORKS += \

else
#
# build nadir
#
build_nadir_USRDEFINES += \

build_nadir_USRINCLUDES += \

build_nadir_USRCXXFLAGS += \

build_nadir_USRLIBDIRS += \

build_nadir_LIBS += \

build_nadir_FRAMEWORKS += \

endif

########################################################################
# medusa
#
# pkg-config --cflags --libs medusa
#

ifndef USE_HOME_BUILD_medusa
USE_HOME_BUILD_medusa = no
endif

ifeq ($(USE_HOME_BUILD_medusa),yes)
#
# home build medusa
#
build_medusa_USRDEFINES += \

build_medusa_USRINCLUDES += \
-I$(HOME)/build/medusa/include \

build_medusa_USRCXXFLAGS += \

build_medusa_USRLIBDIRS += \
-L$(HOME)/build/medusa/lib \

build_medusa_LIBS += \
-lmedusa \

build_medusa_FRAMEWORKS += \

else
#
# build medusa
#
build_medusa_USRDEFINES += \

build_medusa_USRINCLUDES += \

build_medusa_USRCXXFLAGS += \

build_medusa_USRLIBDIRS += \

build_medusa_LIBS += \

build_medusa_FRAMEWORKS += \

endif

########################################################################
# coral

# build coral USRDEFINES
#
build_coral_USRDEFINES += \
${build_nadir_USRDEFINES} \
${build_medusa_USRDEFINES} \


# build coral USRINCLUDES
#
build_coral_USRINCLUDES += \
${build_medusa_USRINCLUDES} \
${build_nadir_USRINCLUDES} \


# build coral USRCXXFLAGS
#
build_coral_USRCXXFLAGS += \
${build_nadir_USRCXXFLAGS} \
${build_medusa_USRCXXFLAGS} \


# build coral USRLIBDIRS
#
build_coral_USRLIBDIRS += \
${build_medusa_USRLIBDIRS} \
${build_nadir_USRLIBDIRS} \


# build coral FRAMEWORKS
#
build_coral_FRAMEWORKS += \
${build_medusa_FRAMEWORKS} \
${build_nadir_FRAMEWORKS} \


# build coral LIBS
#
build_coral_LIBS += \
${build_medusa_LIBS} \
${build_nadir_LIBS} \
${build_coral_FRAMEWORKS}


