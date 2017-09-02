/****************************************************************************
** ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
** ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
** ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
** A Powerful General Purpose Framework
** More information in: https://aurora-fw.github.io/
**
** Copyright (C) 2017 Aurora Framework, All rights reserved.
**
** This file is part of the Aurora Framework. This framework is free
** software; you can redistribute it and/or modify it under the terms of
** the GNU Lesser General Public License version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE included in
** the packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
****************************************************************************/

#ifndef AURORAFW_TLIB_TARGET_PRAGMAONCE_H
#define AURORAFW_TLIB_TARGET_PRAGMAONCE_H

#include <AuroraFW/TLib/Target/Compiler.h>

// Oracle Developer Studio C/C++ (12.5 or later)
#if (defined(__SUNPRO_C)&&(__SUNPRO_C>=0x5140))||(defined(__SUNPRO_CC)&&(__SUNPRO_CC>=0x5140))
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// MSVC
#elif defined(_MSC_VER)&&(_MSC_VER>=1020)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// clang
#elif defined(__clang__)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// comeau
#elif defined(__COMO__)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// C++Builder (XE3 or greater)
#elif defined(__CODEGEARC__)&&(__CODEGEARC__ >=650)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// Digital Mars
#elif defined(__DMC__)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// GCC
#elif defined(__GNUC__)&&((__GNUC__ >3)||(defined(__GNUC_MINOR__)&&(__GNUC__ ==3)&&(__GNUC_MINOR__ >=4)))
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// HP aC++ (A.06.12)
#elif defined(__HP_aCC)&&(__HP_aCC >=61200)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// IBM
#elif defined(__xlC__)&&((__xlC__ >1301)||((__xlC__ ==1301)&&(__xlC_ver__ >0100)))
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// Intel
#elif defined(__INTEL_COMPILER)||defined(__ICC)||defined(__ECC)||defined(__ICL)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// Pelles C
#elif defined(__POCC__)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// ARM compiler
#elif defined(__CC_ARM)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// IAR C/C++
#elif defined(__IAR_SYSTEMS_ICC__)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 1
// Portland Group C/C++
#elif defined(__PGI)
	#define AFW_TARGET_PRAGMA_ONCE_SUPPORT 0
#endif

#endif /// INCLUDE_H_AFW_LIB_TARGET_PRAGMAONCE
