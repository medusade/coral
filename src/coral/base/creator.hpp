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
///   File: creator.hpp
///
/// Author: $author$
///   Date: 4/8/2015
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_BASE_CREATOR_HPP
#define _CORAL_BASE_CREATOR_HPP

#include "coral/base/base.hpp"
#if !defined(USE_NADIR_BASE)
#include "xos/base/creator.hpp"
#else // !defined(USE_NADIR_BASE)
#endif // !defined(USE_NADIR_BASE)

namespace coral {

#if !defined(USE_NADIR_BASE)
///////////////////////////////////////////////////////////////////////
///  Enum: creator_exception
///////////////////////////////////////////////////////////////////////
enum creator_exception {
    failed_to_create = xos::base::failed_to_create,
    failed_to_destroy = xos::base::failed_to_destroy
};

typedef xos::base::implement_base creator_implements;
///////////////////////////////////////////////////////////////////////
///  Class: creatort
///////////////////////////////////////////////////////////////////////
#if defined(USE_CPP_11)
template
<class TImplements = creator_implements>

using creatort = typename xos::base::creatort<TImplements>;
#else // defined(USE_CPP_11)
#endif // defined(USE_CPP_11)
#else // !defined(USE_NADIR_BASE)
#endif // !defined(USE_NADIR_BASE)

} // namespace coral

#endif // _CORAL_BASE_CREATOR_HPP 
