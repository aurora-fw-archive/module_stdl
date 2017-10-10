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

// TODO: Include all Compiler Targets ( https://sourceforge.net/p/predef/wiki/Compilers/ )

#ifndef AURORAFW_STDL_TARGET_COMPILER_H
#define AURORAFW_STDL_TARGET_COMPILER_H

#if defined(__GNUG__) || (defined(__GNUC__) && defined(__cplusplus))
	#ifndef AFW_TARGET_COMPILER_GNU
		#define AFW_TARGET_COMPILER_GNU
	#endif
	#define AFW_TARGET_COMPILER_GNU_CXX
	#ifdef __GNUG__
		#define AFW_TARGET_COMPILER_GNU_GXX
	#endif
#elif defined(__GNUC__) && !defined(__cplusplus)
	#ifndef AFW_TARGET_COMPILER_GNU
		#define AFW_TARGET_COMPILER_GNU
	#endif
	#define AFW_TARGET_COMPILER_GNU_CC
	#define AFW_TARGET_COMPILER_GNU_GCC
#endif

#if defined(__BORLANDC__) || defined(__CODEGEARC__)
	#define AFW_TARGET_COMPILER_BORLAND
#elif defined(__COMO__)
	#define AFW_TARGET_COMPILER_COMEAU
#elif defined(__DECC)
	#define AFW_TARGET_COMPILER_COMPAQ_CC
#elif defined(__DECCXX)
	#define AFW_TARGET_COMPILER_COMPAQ_CXX
#elif defined(__convexc__)
	#define AFW_TARGET_COMPILER_CONVEXC
#elif defined(_MSC_VER)
	#define AFW_TARGET_COMPILER_MICROSOFT
#endif

#ifdef __CC_ARM
	#define AFW_TARGET_COMPILER_ARM
#endif

#ifdef __MINGW32__
	#define AFW_TARGET_COMPILER_MINGW
#endif

#ifdef __clang__
	#define AFW_TARGET_COMPILER_CLANG
#endif

#endif // AURORAFW_STDL_TARGET_COMPILER_H
