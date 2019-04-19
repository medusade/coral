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
# generic Gcc Makefile for coral Library libcoral
########################################################################


#
# target
#
libcoral_LIBTARGET = libcoral.${LIBEXT}

########################################################################

#
# user c++ flags
#
libcoral_USRCXXFLAGS += \
${coral_USRCXXFLAGS} \

#
# user defines
#
libcoral_USRDEFINES += \
${coral_USRDEFINES} \

#
# user includes
#
libcoral_USRINCLUDES += \
${coral_USRINCLUDES} \

#
# user libdirs
#
libcoral_USRLIBDIRS += \
${coral_USRLIBDIRS} \

########################################################################

#
# Library .c sources
#
#libcoral_LIB_C_SOURCES += \
#${CORAL_SRC}/coral/base/Base.c \

#
# Library .cc sources
#
#libcoral_LIB_CC_SOURCES += \
#${CORAL_SRC}/coral/base/Base.cc \

#
# Library .cxx sources
#
#libcoral_LIB_CXX_SOURCES += \
#${CORAL_SRC}/coral/base/Base.cxx \

#
# Library .cpp sources
#
libcoral_LIB_CPP_SOURCES += \
${CORAL_SRC}/coral/base/string.cpp \
${CORAL_SRC}/coral/base/array.cpp \
${CORAL_SRC}/coral/base/types.cpp \
${CORAL_SRC}/coral/base/base.cpp \
\
${CORAL_SRC}/coral/io/stream.cpp \
${CORAL_SRC}/coral/io/writer.cpp \
${CORAL_SRC}/coral/io/reader.cpp \
${CORAL_SRC}/coral/io/sequence.cpp \
\
${CORAL_SRC}/coral/lib/coral/version.cpp \


#
# Library .m sources
#
#libcoral_LIB_M_SOURCES += \
#${CORAL_SRC}/coral/base/Base.m \

#
# Library .mm sources
#
#libcoral_LIB_MM_SOURCES += \
#${CORAL_SRC}/coral/base/Base.mm \


########################################################################




