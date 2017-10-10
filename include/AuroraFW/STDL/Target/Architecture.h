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

/** @file AuroraFW/STDL/Target/Architecture.h
 * Detect target architecture
 * @todo Need to be documented
 * @todo Change x86 arch definitions according to microsoft compiler
 */

#ifndef AURORAFW_STDL_TARGET_ARCHITECTURE_H
#define AURORAFW_STDL_TARGET_ARCHITECTURE_H

#if defined(__powerpc__) || defined(__ppc__) || defined(__PPC__)
	#define AFW_TARGET_ARCH_POWERPC
	#if defined(__powerpc64__) || defined(__ppc64__) || defined(__PPC64__) || defined(__64BIT__) || defined(_LP64) || defined(__LP64__)
		#define AFW_TARGET_ARCH_POWERPC_64
	#else
		#define AFW_TARGET_ARCH_POWERPC_32
	#endif
#endif

#if defined(__x86_64__) || defined(_M_X64)
	#define AFW_TARGET_ARCH_X86
	#define AFW_TARGET_ARCH_X86_64
#elif defined(__i386) || defined(_M_IX86)
	#define AFW_TARGET_ARCH_X86
	#define AFW_TARGET_ARCH_X86_32
#endif

#if defined(__arm__)
	#define AFW_TARGET_ARCH_ARM
#endif

#if defined(__ia64) || defined(__itanium__) || defined(_M_IA64)
	#define AFW_TARGET_ARCH_ITANIUM
#endif

#ifdef __sparc
	#define AFW_TARGET_ARCH_SPARC
#endif

#endif // AURORAFW_STDL_TARGET_ARCHITECTURE_H
