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
#   Date: 12/17/2015
#
# Generic Gcc Makefile for coral tcgi Executable
########################################################################

#
# user defines
#
tcgi_USRDEFINES = \
${libcoral_USRDEFINES} \

#
# user includes
#
tcgi_USRINCLUDES += \
${libcoral_USRINCLUDES} \
-I${XOS_SRC}/thirdparty/xde/clib/cos/cplatform \
${xde_ccgi_USRINCLUDES} \
${xde_cos_USRINCLUDES} \
${xde_cbase_USRINCLUDES} \

#
# user libdirs
#
tcgi_USRLIBDIRS = \
${xde_USRLIBDIRS} \
${libcoral_USRLIBDIRS} \

#
# user c++ flags
#
tcgi_USRCXXFLAGS = \
${libcoral_USRCXXFLAGS} \

#
# Executable C++ .cxx sources
#
tcgi_EXE_CXX_SOURCES += \
${XDE_SRC}/clib/ct/ctfunctions.cxx \
${XDE_SRC}/clib/ct/ctfilefunctions.cxx \
${XDE_SRC}/clib/ct/ctdatefunctions.cxx \

#
# Executable C++ .cpp sources
#
tcgi_EXE_CPP_SOURCES += \
${CORAL_SRC}/coral/app/cgi/t/main.cpp \
${CORAL_SRC}/coral/console/main_main.cpp \
${XOS_SRC}/thirdparty/xde/clib/cos/cplatform/cplatform.cpp \

#
# Executable libs
#
#LIBS = \
#-lsomelib
#
tcgi_LIBS += \
${xde_ct_LIBS} \
${xde_cbase_LIBS} \
${libcoral_LIBS} \

