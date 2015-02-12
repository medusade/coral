///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2014 $organization$
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
///   File: base.hpp
///
/// Author: $author$
///   Date: 12/15/2014
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_BASE_BASE_HPP
#define _CORAL_BASE_BASE_HPP

#include "xos/base/base.hpp"
#include "xos/base/argv.hpp"
#include "xos/base/array.hpp"
#include "xos/base/attached.hpp"
#include "xos/base/attacher.hpp"
#include "xos/base/created.hpp"
#include "xos/base/creator.hpp"
#include "xos/base/string.hpp"
#include "xos/base/string_base.hpp"
#include "xos/base/types.hpp"
#include "xos/base/wrapped.hpp"
#include "xos/io/read/file.hpp"
#include "xos/io/write/file.hpp"
#include "xos/io/echoed/writer.hpp"
#include "xos/io/writer.hpp"
#include "xos/io/reader.hpp"
#include "xos/io/sequence.hpp"
#include "xos/io/types.hpp"
#include "xos/io/logger.hpp"

#define CORAL_LOG_ANY XOS_LOG_ANY
#define CORAL_LOG_FATAL XOS_LOG_FATAL
#define CORAL_LOG_ERROR XOS_LOG_ERROR
#define CORAL_LOG_WARN XOS_LOG_WARN
#define CORAL_LOG_INFO XOS_LOG_INFO
#define CORAL_LOG_DEBUG XOS_LOG_DEBUG
#define CORAL_LOG_TRACE XOS_LOG_TRACE

#define CORAL_LOG_ANYF XOS_LOG_ANYF
#define CORAL_LOG_FATALF XOS_LOG_FATALF
#define CORAL_LOG_ERRORF XOS_LOG_ERRORF
#define CORAL_LOG_WARNF XOS_LOG_WARNF
#define CORAL_LOG_INFOF XOS_LOG_INFOF
#define CORAL_LOG_DEBUGF XOS_LOG_DEBUGF
#define CORAL_LOG_TRACEF XOS_LOG_TRACEF

#define CORAL_LOG_MESSAGE_ANY XOS_LOG_MESSAGE_ANY
#define CORAL_LOG_MESSAGE_FATAL XOS_LOG_MESSAGE_FATAL
#define CORAL_LOG_MESSAGE_ERROR XOS_LOG_MESSAGE_ERROR
#define CORAL_LOG_MESSAGE_WARN XOS_LOG_MESSAGE_WARN
#define CORAL_LOG_MESSAGE_INFO XOS_LOG_MESSAGE_INFO
#define CORAL_LOG_MESSAGE_DEBUG XOS_LOG_MESSAGE_DEBUG
#define CORAL_LOG_MESSAGE_TRACE XOS_LOG_MESSAGE_TRACE

#define CORAL_LOG_MESSAGE_ANYF XOS_LOG_MESSAGE_ANYF
#define CORAL_LOG_MESSAGE_FATALF XOS_LOG_MESSAGE_FATALF
#define CORAL_LOG_MESSAGE_ERRORF XOS_LOG_MESSAGE_ERRORF
#define CORAL_LOG_MESSAGE_WARNF XOS_LOG_MESSAGE_WARNF
#define CORAL_LOG_MESSAGE_INFOF XOS_LOG_MESSAGE_INFOF
#define CORAL_LOG_MESSAGE_DEBUGF XOS_LOG_MESSAGE_DEBUGF
#define CORAL_LOG_MESSAGE_TRACEF XOS_LOG_MESSAGE_TRACEF

namespace coral {

typedef xos::base::implement_base implement_base;
typedef xos::base::base base;

///////////////////////////////////////////////////////////////////////
/// argv
///////////////////////////////////////////////////////////////////////
typedef xos::base::argv_t argv_t;

///////////////////////////////////////////////////////////////////////
/// array
///////////////////////////////////////////////////////////////////////
#define CORAL_ARRAY_DEFAULT_SIZE XOS_ARRAY_DEFAULT_SIZE
typedef xos::base::array_implements array_implements;
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TWhat = char_t, typename TSize = size_t, TSize VSize = CORAL_ARRAY_DEFAULT_SIZE,
 class TExtends = xos::base::arrayt<TWhat, TSize, VSize>, class TImplements = array_implements>

using arrayt = typename xos::base::arrayt
<TWhat, TSize, VSize, TExtends, TImplements>;
#endif // !defined(CPP_11)
typedef xos::base::arrayt<> array;
typedef xos::base::arrayt<char_t> char_array;
typedef xos::base::arrayt<wchar_t> wchar_array;
typedef xos::base::arrayt<tchar_t> tchar_array;
typedef xos::base::arrayt<byte_t> byte_array;
typedef xos::base::arrayt<word_t> word_array;

typedef xos::base::implement_base attacher_implements;
///////////////////////////////////////////////////////////////////////
///  attacher
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TAttached = void*, typename TUnattached = int,
 TUnattached VUnattached = 0, class TImplements = attacher_implements>

using attachert = typename xos::base::attachert
<TAttached, TUnattached, VUnattached, TImplements>;
#endif // !defined(CPP_11)

typedef xos::base::base attached_extends;
///////////////////////////////////////////////////////////////////////
///  attached
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TAttached = void*, typename TUnattached = int,
 TUnattached VUnattached = 0, class TImplements = xos::base::attachert
 <TAttached, TUnattached, VUnattached, attacher_implements>,
 class TExtends = attached_extends>

using attachedt = typename xos::base::attachedt
<TAttached, TUnattached, VUnattached, TImplements, TExtends>;
#endif // !defined(CPP_11)

///////////////////////////////////////////////////////////////////////
///  creator exception
///////////////////////////////////////////////////////////////////////
enum creator_exception {
    failed_to_create = xos::base::failed_to_create,
    failed_to_destroy = xos::base::failed_to_destroy
};
typedef xos::base::implement_base creator_implements;
///////////////////////////////////////////////////////////////////////
///  creator
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TAttached = void*, typename TUnattached = int,
 TUnattached VUnattached = 0, class TImplements = creator_implements>

using creatort = typename xos::base::creatort
<TAttached, TUnattached, VUnattached, TImplements>;
#endif // !defined(CPP_11)

typedef xos::base::creator created_implements;
typedef xos::base::base created_extends;
///////////////////////////////////////////////////////////////////////
///  created
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TAttached = void*,
 typename TUnattached = int, TUnattached VUnattached = 0,
 class TImplements = attachert
 <TAttached, TUnattached, VUnattached, created_implements>,
 class TExtends = attachedt
 <TAttached, TUnattached, VUnattached, TImplements, created_extends> >

using createdt = typename xos::base::createdt
<TAttached, TUnattached, VUnattached, TImplements, TExtends>;
#endif // !defined(CPP_11)

///////////////////////////////////////////////////////////////////////
/// string
///////////////////////////////////////////////////////////////////////
typedef xos::base::string_implement string_implements;
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TChar = char, typename TEnd = TChar, TEnd VEnd = 0,
 class TExtends = std::basic_string<TChar>, class TImplements = string_implements>

using stringt = typename xos::base::stringt
<TChar, TEnd, VEnd, TExtends, TImplements>;
#endif // !defined(CPP_11)
typedef xos::base::string string_t;
typedef xos::base::tstring tstring_t;
typedef xos::base::wstring wstring_t;

///////////////////////////////////////////////////////////////////////
/// string_base
///////////////////////////////////////////////////////////////////////
typedef xos::base::string_base_implements string_base_implements;
typedef xos::base::string_base_extends string_base_extends;
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TChar = char, typename TSize = size_t,
 TSize VSize = XOS_BASE_STRING_BASE_DEFAULT_SIZE,
 typename TEnd = TChar, TEnd VEnd = 0,
 class TExtends = string_base_extends,
 class TImplements = string_base_implements>

using string_baset = typename xos::base::string_baset
<TChar, TSize, VSize, TEnd, VEnd, TExtends, TImplements>;
#endif // !defined(CPP_11)
typedef xos::base::string_base string_base_t;
typedef xos::base::tstring_base tstring_base_t;
typedef xos::base::wstring_base wstring_base_t;

///////////////////////////////////////////////////////////////////////
/// types
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<class TWhat = char, class TEndWhat = TWhat, TEndWhat VEndWhat = 0,
 class TInt = int, class TUInt = unsigned, class TSize = size_t,
 class TLength = ssize_t, TLength VUndefinedLength = -1>

using typest = typename xos::base::typest
<TWhat, TEndWhat, VEndWhat, TInt, TUInt, TSize, TLength, VUndefinedLength>;
#endif // !defined(CPP_11)
typedef xos::base::chars_t chars_t;
typedef xos::base::tchars_t tchars_t;
typedef xos::base::wchars_t wchars_t;
typedef xos::base::bytes_t bytes_t;

///////////////////////////////////////////////////////////////////////
/// wrappedt
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TWrapped,
 typename TInitialized = xos::base::wrapped_initalized_t,
 TInitialized VInitialized = xos::base::wrapped_initalized,
 class TExtends = xos::base::wrapped_extends,
 class TImplements = xos::base::wrapped_implements>

using wrappedt = typename xos::base::wrappedt
<TWrapped, TInitialized, VInitialized, TExtends, TImplements>;
#endif // !defined(CPP_11)

namespace io {
///////////////////////////////////////////////////////////////////////
/// sequencet
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TWhat = char_t, typename TEnd = int, TEnd VEnd = 0,
 class TImplements = xos::io::sequence_implement>

using sequencet = typename xos::io::sequencet
<TWhat, TEnd, VEnd, TImplements>;
#endif // !defined(CPP_11)
typedef xos::io::sequence sequence;
typedef xos::io::char_sequence char_sequence;
typedef xos::io::wchar_sequence wchar_sequence;
typedef xos::io::tchar_sequence tchar_sequence;
///////////////////////////////////////////////////////////////////////
/// writert
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TWhat = void, typename TSized = char_t,
 typename TEnd = int, TEnd VEnd = 0,
 class TImplements = sequencet<TSized, TEnd, VEnd> >

using writert = typename xos::io::writert
<TWhat, TSized, TEnd, VEnd, TImplements>;
#endif // !defined(CPP_11)
typedef xos::io::writer writer;
typedef xos::io::char_writer char_writer;
typedef xos::io::wchar_writer wchar_writer;
typedef xos::io::tchar_writer tchar_writer;
///////////////////////////////////////////////////////////////////////
/// readert
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TWhat = void, typename TSized = char_t,
 typename TEnd = int, TEnd VEnd = 0,
 class TImplements = xos::io::reader_implement>

using readert = typename xos::io::readert
<TWhat, TSized, TEnd, VEnd, TImplements>;
#endif // !defined(CPP_11)
typedef xos::io::reader reader;
typedef xos::io::char_reader char_reader;
typedef xos::io::wchar_reader wchar_reader;
typedef xos::io::tchar_reader tchar_reader;
} // namespace io

namespace io {
namespace echoed {
///////////////////////////////////////////////////////////////////////
/// writert
///////////////////////////////////////////////////////////////////////
#if !defined(CPP_11)
#error Requires C++11
#else // !defined(CPP_11)
template
<typename TWhat = void, typename TSized = char_t,
 typename TEnd = int, TEnd VEnd = 0,
 class TWriter = xos::io::writert<TWhat, TSized, TEnd, VEnd>,
 class TImplements = TWriter, class TExtends = xos::io::echoed::writer_extends>

using writert = typename xos::io::echoed::writert
<TWhat, TSized, TEnd, VEnd, TWriter, TImplements, TExtends>;
#endif // !defined(CPP_11)
typedef xos::io::echoed::writer writer;
} // namespace echoed
} // namespace io

namespace io {
namespace read {
typedef xos::io::read::file file;
} // namespace read
namespace write {
typedef xos::io::write::file file;
} // namespace write
} // namespace io

namespace io {
namespace chars {
typedef xos::io::chars::reader reader;
} // namespace chars
} // namespace io

} // namespace coral

#endif // _CORAL_BASE_BASE_HPP
