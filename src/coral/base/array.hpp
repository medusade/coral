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
///   File: array.hpp
///
/// Author: $author$
///   Date: 4/8/2015
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_BASE_ARRAY_HPP
#define _CORAL_BASE_ARRAY_HPP

#include "coral/base/base.hpp"
#if !defined(USE_NADIR_BASE)
#include "xos/base/array.hpp"
#else // !defined(USE_NADIR_BASE)
#include "nadir/base/array.hpp"
#endif // !defined(USE_NADIR_BASE)

namespace coral {

#if !defined(USE_NADIR_BASE)
#define CORAL_ARRAY_DEFAULT_SIZE XOS_ARRAY_DEFAULT_SIZE
typedef xos::base::array_implements array_implements;
typedef xos::base::array_extends array_extends;
///////////////////////////////////////////////////////////////////////
///  Class: array
///////////////////////////////////////////////////////////////////////
#if defined(USE_CPP_11)
template
<typename TWhat = char_t, typename TSize = size_t, TSize VSize = CORAL_ARRAY_DEFAULT_SIZE,
 class TExtends = xos::base::arrayt<TWhat, TSize, VSize>, class TImplements = array_implements>

using arrayt = typename xos::base::arrayt
<TWhat, TSize, VSize, TExtends, TImplements>;
#else // defined(USE_CPP_11)
#endif // defined(USE_CPP_11)

typedef xos::base::arrayt<> array;
typedef xos::base::arrayt<char_t> char_array;
typedef xos::base::arrayt<wchar_t> wchar_array;
typedef xos::base::arrayt<tchar_t> tchar_array;
typedef xos::base::arrayt<byte_t> byte_array;
typedef xos::base::arrayt<word_t> word_array;
#else // !defined(USE_NADIR_BASE)
#define CORAL_ARRAY_DEFAULT_SIZE NADIR_ARRAY_DEFAULT_SIZE
typedef nadir::arrayt_implements array_implements;
typedef nadir::arrayt_extends array_extends;
typedef nadir::arrayt<> array;
typedef nadir::arrayt<char_t> char_array;
typedef nadir::arrayt<wchar_t> wchar_array;
typedef nadir::arrayt<tchar_t> tchar_array;
typedef nadir::arrayt<byte_t> byte_array;
typedef nadir::arrayt<word_t> word_array;
#endif // !defined(USE_NADIR_BASE)

} // namespace coral

#endif // _CORAL_BASE_ARRAY_HPP 
