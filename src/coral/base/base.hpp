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

#if defined(CPP_11)
#if !defined(USE_CPP_11)
//#define USE_CPP_11
#endif // !defined(USE_CPP_11)
#endif // defined(CPP_11)

namespace coral {

typedef xos::base::implement_base implement_base;
typedef xos::base::base base;

} // namespace coral

#include "coral/base/argv.hpp"
#include "coral/base/array.hpp"
#include "coral/base/string.hpp"
#include "coral/base/types.hpp"
#include "coral/base/wrapped.hpp"
#include "coral/base/created.hpp"
#include "coral/base/creator.hpp"
#include "coral/base/attached.hpp"
#include "coral/base/attacher.hpp"
#include "coral/io/file.hpp"
#include "coral/io/writer.hpp"
#include "coral/io/reader.hpp"
#include "coral/io/sequence.hpp"
#include "coral/io/types.hpp"
#include "coral/io/logger.hpp"

#endif // _CORAL_BASE_BASE_HPP
