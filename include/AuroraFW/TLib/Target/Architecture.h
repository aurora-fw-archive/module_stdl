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

//TODO: Need to be documented

#ifndef AURORAFW_TLIB_TARGET_ARCHITECTURE_H
#define AURORAFW_TLIB_TARGET_ARCHITECTURE_H

#if defined(__ppc__) || defined(__powerpc__) || defined(__PPC__) || defined(__POWERPC__)
	#define AFW_TARGET_CPUARCH_POWERPC
	#define AFW_TARGET_CPUARCH_POWERPC_32
	#if defined(__powerpc64__) || defined(__ppc64__) || defined(__PPC64__)
		#define AFW_TARGET_CPUARCH_POWERPC_64
	#endif
#endif

#if defined(__i386) || defined(_M_IX86) || defined(__i386__) || (defined(__MWERKS__) && defined(__INTEL__))
	#define AFW_TARGET_CPUARCH_INTELX86
#elif defined(__x86_64__) || defined(_M_X64) || defined(__amd64__) || defined(__amd64) || defined(_M_AMD64)
	#define AFW_TARGET_CPUARCH_AMD64
#elif defined(__arm__)
	#define AFW_TARGET_CPUARCH_ARM
#endif

#if defined(__ia64) || defined(__itanium__) || defined(_M_IA64)
	#define AFW_TARGET_CPUARCH_ITANIUM
#elif defined(__sparc)
	#define AFW_TARGET_CPUARCH_SPARC
#endif

#endif // AURORAFW_TLIB_TARGET_ARCHITECTURE_H
