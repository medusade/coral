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
#include "nadir/base/array.hpp"

namespace coral {

#define CORAL_ARRAY_DEFAULT_SIZE NADIR_ARRAY_DEFAULT_SIZE
typedef nadir::arrayt_implements array_implements;
typedef nadir::arrayt_extends array_extends;
typedef nadir::arrayt<> array;
typedef nadir::arrayt<char_t> char_array;
typedef nadir::arrayt<wchar_t> wchar_array;
typedef nadir::arrayt<tchar_t> tchar_array;
typedef nadir::arrayt<byte_t> byte_array;
typedef nadir::arrayt<word_t> word_array;

} // namespace coral

#endif // _CORAL_BASE_ARRAY_HPP 
