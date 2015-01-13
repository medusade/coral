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
#   File: cgicatcher.pri
#
# Author: $author$
#   Date: 12/30/2014
########################################################################

########################################################################
cgicatcher_HEADERS += \
$${CORAL_SRC}/coral/base/base.hpp \

cgicatcher_SOURCES += \
$${CORAL_SRC}/coral/base/base.cpp \

########################################################################
cgicatcher_HEADERS += \
$${CORAL_SRC}/coral/inet/cgi/main.hpp \
$${CORAL_SRC}/coral/inet/cgi/environment/variables/writer.hpp \
$${CORAL_SRC}/coral/inet/cgi/environment/variables/values.hpp \
$${CORAL_SRC}/coral/inet/cgi/environment/variable/value.hpp \
$${CORAL_SRC}/coral/inet/cgi/environment/variable/name.hpp \
$${CORAL_SRC}/coral/inet/cgi/environment/variable/which.hpp \

cgicatcher_SOURCES += \
$${CORAL_SRC}/coral/inet/cgi/environment/variables/writer.cpp \
$${CORAL_SRC}/coral/inet/cgi/environment/variables/values.cpp \
$${CORAL_SRC}/coral/inet/cgi/environment/variable/value.cpp \
$${CORAL_SRC}/coral/inet/cgi/environment/variable/name.cpp \
$${CORAL_SRC}/coral/inet/cgi/environment/variable/which.cpp \

########################################################################
cgicatcher_HEADERS += \
$${CORAL_SRC}/coral/app/cgi/catcher/main.hpp \
$${CORAL_SRC}/coral/console/main.hpp \
$${CORAL_SRC}/coral/console/main_main.hpp \

cgicatcher_SOURCES += \
$${CORAL_SRC}/coral/app/cgi/catcher/main.cpp \
$${CORAL_SRC}/coral/console/main_main.cpp \

