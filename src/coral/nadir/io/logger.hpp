///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2018 $organization$
///
/// This software is provided by the author and contributors ``as is''
/// and any express or implied warranties, including, but not limited to,
/// the implied warranties of merchantability and fitness for a particular
/// purpose are disclaimed. In no event shall the author or contributors
/// be liable for any direct, indirect, incidental, special, exemplary,
/// or consequential damages (including, but not limited to, procurement
/// of substitute goods or services; loss of use, data, or profits; or
/// business interruption) however caused and on any theory of liability,
/// whether in contract, strict liability, or tort (including negligence
/// or otherwise) arising in any way out of the use of this software,
/// even if advised of the possibility of such damage.
///
///   File: logger.hpp
///
/// Author: $author$
///   Date: 12/21/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_NADIR_IO_LOGGER_HPP
#define _CORAL_NADIR_IO_LOGGER_HPP

#include "coral/nadir/io/stream.hpp"
#include "nadir/io/logger.hpp"

#define CORAL_LOG_FATAL LOG_FATAL
#define CORAL_LOG_ERROR LOG_ERROR
#define CORAL_LOG_WARN LOG_WARN
#define CORAL_LOG_INFO LOG_INFO
#define CORAL_LOG_DEBUG LOG_DEBUG
#define CORAL_LOG_TRACE LOG_TRACE

#define CORAL_LOG_MESSAGE_FATAL LOG_MESSAGE_FATAL
#define CORAL_LOG_MESSAGE_ERROR LOG_MESSAGE_ERROR
#define CORAL_LOG_MESSAGE_WARN LOG_MESSAGE_WARN
#define CORAL_LOG_MESSAGE_INFO LOG_MESSAGE_INFO
#define CORAL_LOG_MESSAGE_DEBUG LOG_MESSAGE_DEBUG
#define CORAL_LOG_MESSAGE_TRACE LOG_MESSAGE_TRACE

#define CORAL_LOG_FATALF LOG_FATALF
#define CORAL_LOG_ERRORF LOG_ERRORF
#define CORAL_LOG_WARNF LOG_WARNF
#define CORAL_LOG_INFOF LOG_INFOF
#define CORAL_LOG_DEBUGF LOG_DEBUGF
#define CORAL_LOG_TRACEF LOG_TRACEF

#define CORAL_LOG_MESSAGE_FATALF LOG_MESSAGE_FATALF
#define CORAL_LOG_MESSAGE_ERRORF LOG_MESSAGE_ERRORF
#define CORAL_LOG_MESSAGE_WARNF LOG_MESSAGE_WARNF
#define CORAL_LOG_MESSAGE_INFOF LOG_MESSAGE_INFOF
#define CORAL_LOG_MESSAGE_DEBUGF LOG_MESSAGE_DEBUGF
#define CORAL_LOG_MESSAGE_TRACEF LOG_MESSAGE_TRACEF

namespace coral {
namespace io {

typedef ::nadir::io::logger logger;

} /// namespace io
} /// namespace coral

#endif /// ndef _CORAL_NADIR_IO_LOGGER_HPP
