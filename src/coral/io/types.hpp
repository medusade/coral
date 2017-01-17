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
///   File: types.hpp
///
/// Author: $author$
///   Date: 4/8/2015
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_IO_TYPES_HPP
#define _CORAL_IO_TYPES_HPP

#include "coral/base/base.hpp"
#if !defined(USE_NADIR_BASE)
#include "xos/io/types.hpp"
#else // !defined(USE_NADIR_BASE)
#include "nadir/io/chars.hpp"
#endif // !defined(USE_NADIR_BASE)

namespace coral {
namespace io {

namespace chars {
#if !defined(USE_NADIR_BASE)
typedef xos::io::chars::reader reader;
#else // !defined(USE_NADIR_BASE)
typedef nadir::io::chars::reader reader;
#endif // !defined(USE_NADIR_BASE)
} // namespace chars

} // namespace io
} // namespace coral 

#endif // _CORAL_IO_TYPES_HPP 
