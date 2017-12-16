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

#if !defined(USE_NADIR_BASE)
#include "xos/base/base.hpp"
#else // !defined(USE_NADIR_BASE)
#include "nadir/base/base.hpp"
#endif // !defined(USE_NADIR_BASE)

#if defined(CPP_11)
#if !defined(USE_CPP_11)
//#define USE_CPP_11
#endif // !defined(USE_CPP_11)
#endif // defined(CPP_11)

namespace coral {

#if !defined(USE_NADIR_BASE)
typedef xos::base::implement_base implement_base;
typedef xos::base::base base;
#else // !defined(USE_NADIR_BASE)
typedef nadir::implement_base implement_base;
typedef nadir::base base;
#endif // !defined(USE_NADIR_BASE)

} // namespace coral

#endif // _CORAL_BASE_BASE_HPP
