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
#   File: tcgi.pri
#
# Author: $author$
#   Date: 1/22/2015
########################################################################

tcgi_TARGET = coral-tcgi

tcgi_INCLUDEPATH += \
$${coral_INCLUDEPATH} \
$${NADIR_SRC}/thirdparty/xde/clib/cos/cplatform \
$${xde_ccgi_INCLUDEPATH} \
$${xde_cos_INCLUDEPATH} \
$${xde_cbase_INCLUDEPATH} \

tcgi_DEFINES += \
$${coral_DEFINES} \
$${xde_DEFINES} \

########################################################################
tcgi_HEADERS += \
$${CORAL_SRC}/coral/app/cgi/t/main.hpp \
$${CORAL_SRC}/coral/console/main.hpp \
$${CORAL_SRC}/coral/console/main_main.hpp \
$${NADIR_SRC}/thirdparty/xde/clib/cos/cplatform/cplatform.hpp \

tcgi_SOURCES += \
$${CORAL_SRC}/coral/app/cgi/t/main.cpp \
$${CORAL_SRC}/coral/console/main_main.cpp \
$${NADIR_SRC}/thirdparty/xde/clib/cos/cplatform/cplatform.cpp \

########################################################################
tcgi_HEADERS += \

tcgi_SOURCES += \
$${XDE_SRC}/clib/ct/ctfunctions.cxx \
$${XDE_SRC}/clib/ct/ctfilefunctions.cxx \
$${XDE_SRC}/clib/ct/ctdatefunctions.cxx \

########################################################################
tcgi_LIBS += \
$${coral_LIBS} \
$${xde_ct_LIBS} \
$${xde_cbase_LIBS} \
