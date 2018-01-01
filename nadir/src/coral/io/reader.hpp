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
///   File: reader.hpp
///
/// Author: $author$
///   Date: 4/8/2015
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_IO_READER_HPP
#define _CORAL_IO_READER_HPP

#include "coral/io/sequence.hpp"
#include "nadir/io/reader.hpp"

namespace coral {
namespace io {

typedef ::nadir::io::reader reader;
typedef ::nadir::io::char_reader char_reader;
typedef ::nadir::io::wchar_reader wchar_reader;
typedef ::nadir::io::tchar_reader tchar_reader;

} // namespace io
} // namespace coral 

#endif // _CORAL_IO_READER_HPP 
