///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2015 $organization$
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
///   File: file.hpp
///
/// Author: $author$
///   Date: 4/8/2015
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_IO_FILE_HPP
#define _CORAL_IO_FILE_HPP

#include "coral/base/base.hpp"
#if !defined(USE_NADIR_BASE)
#include "xos/os/file/stream.hpp"
#include "xos/io/read/file.hpp"
#include "xos/io/write/file.hpp"
#else // !defined(USE_NADIR_BASE)
#include "nadir/io/crt/file.hpp"
#endif // !defined(USE_NADIR_BASE)

namespace coral {
namespace io {

namespace read {
///////////////////////////////////////////////////////////////////////
///  Class: file
///////////////////////////////////////////////////////////////////////
#if !defined(USE_NADIR_BASE)
typedef xos::io::read::file file;
#else // !defined(USE_NADIR_BASE)
typedef nadir::io::crt::read::file file;
#endif // !defined(USE_NADIR_BASE)
} // namespace read

namespace write {
///////////////////////////////////////////////////////////////////////
///  Class: file
///////////////////////////////////////////////////////////////////////
#if !defined(USE_NADIR_BASE)
typedef xos::io::write::file file;
#else // !defined(USE_NADIR_BASE)
typedef nadir::io::crt::write::file file;
#endif // !defined(USE_NADIR_BASE)
} // namespace write

namespace file {
///////////////////////////////////////////////////////////////////////
///  Class: stream
///////////////////////////////////////////////////////////////////////
#if !defined(USE_NADIR_BASE)
typedef xos::os::file::stream stream;
#else // !defined(USE_NADIR_BASE)
typedef nadir::io::crt::file_stream stream;
#endif // !defined(USE_NADIR_BASE)
} // namespace file

} // namespace io
} // namespace coral 

#endif // _CORAL_IO_FILE_HPP 
