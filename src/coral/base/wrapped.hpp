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
///   File: wrapped.hpp
///
/// Author: $author$
///   Date: 4/8/2015
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_BASE_WRAPPED_HPP
#define _CORAL_BASE_WRAPPED_HPP

#include "coral/base/base.hpp"
#if !defined(USE_NADIR_BASE)
#include "xos/base/wrapped.hpp"
#else // !defined(USE_NADIR_BASE)
#include "nadir/base/wrapped.hpp"
#endif // !defined(USE_NADIR_BASE)

namespace coral {

#if !defined(USE_NADIR_BASE)
typedef xos::base::wrapped_initalized_t wrapped_initalized_t;
enum { wrapped_initalized = xos::base::wrapped_initalized, };
typedef xos::base::wrapped_extends wrapped_extends;
typedef xos::base::wrapped_implements wrapped_implements;
///////////////////////////////////////////////////////////////////////
///  Class: wrappedt
///////////////////////////////////////////////////////////////////////
#if defined(USE_CPP_11)
template
<typename TWrapped,
 typename TInitialized = xos::base::wrapped_initalized_t,
 TInitialized VInitialized = xos::base::wrapped_initalized,
 class TExtends = xos::base::wrapped_extends,
 class TImplements = xos::base::wrapped_implements>

using wrappedt = typename xos::base::wrappedt
<TWrapped, TInitialized, VInitialized, TExtends, TImplements>;
#else // defined(USE_CPP_11)
#endif // defined(USE_CPP_11)
#else // !defined(USE_NADIR_BASE)
typedef nadir::wrapped_initalized_t wrapped_initalized_t;
enum { wrapped_initalized = nadir::wrapped_initalized, };
typedef nadir::wrappedt_extends wrapped_extends;
typedef nadir::wrappedt_implements wrapped_implements;
#endif // !defined(USE_NADIR_BASE)

} // namespace coral

#endif // _CORAL_BASE_WRAPPED_HPP 
