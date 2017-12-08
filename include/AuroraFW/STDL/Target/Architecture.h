/****************************************************************************
** ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
** ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
** ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
** A Powerful General Purpose Framework
** More information in: https://aurora-fw.github.io/
**
** Copyright (C) 2017 Intel Corporation.
** Copyright (C) 2017 Aurora Framework.
**
** This file is part of the Aurora Framework. This framework is free
** software; you can redistribute it and/or modify it under the terms of
** the GNU Lesser General Public License version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE included in
** the packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** NOTE: All products, services or anything associated to Intel is a
** trademark or registered trademarks of Intel Corporation or its
** subsidiaries in the U.S. and/or other countries. Other names and brands
** may be claimed as the property of others. More info:
** https://www.intel.com/content/www/us/en/legal/trademarks.html .
****************************************************************************/

/** @file AuroraFW/STDL/Target/Architecture.h
 * Detect target architecture
 * @note This file use the following syntax: AFW_TARGET_ARCH_FAMILY_VARIANT. Can
	also use revision instead of variant, e.g. ARM family processors:
	AFW_TARGET_ARCH_FAMILY_REVISION.
 *
 * @author Luís “ljmf00” Ferreira <contact@lsferreira.net>
 * 
 * @todo Need to be documented
 * @todo Add https://sourceforge.net/p/predef/wiki/Architectures/
 */

#ifndef AURORAFW_STDL_TARGET_ARCHITECTURE_H
#define AURORAFW_STDL_TARGET_ARCHITECTURE_H

//Define ix86 processor architecture detection
#if defined(__i386) || defined(__i386__) || defined(_M_IX86)
	//Define x86 processor wordsize
	#define AFW_TARGET_ARCH_X86_32

	#ifdef (_M_IX86)
		#define AFW_TARGET_ARCH_X86 (_M_IX86/100)
	#elif defined(__i686__) || defined(__athlon__) || defined(__SSE__) || defined(__pentiumpro__)
		#define AFW_TARGET_ARCH_X86 6
	#elif defined(__i586__) || defined(__k6__) || defined(__pentium__)
		#define AFW_TARGET_ARCH_X86 5
	#elif defined(__i486__) || defined(__80486__)
		#define AFW_TARGET_ARCH_X86 4
	#else
		#define AFW_TARGET_ARCH_X86 3
	#endif

//Define x86_64 processor architecture detection
#elif defined(__x86_64) || defined(__x86_64__) || defined(__amd64) || defined(_M_X64)
	//Define i686 as x86 processor version
	#define AFW_TARGET_ARCH_X86 6
	//Define x86_64 processor wordsize
	#define AFW_TARGET_ARCH_X86_64


#elif defined(__arm__) || defined(__TARGET_ARCH_ARM) || defined(_M_ARM) || defined(__aarch64__) || defined(__ARM64__)
	//Define ARM processor wordsize
	#if defined(__aarch64__) || defined(__ARM64__)
		#define AFW_TARGET_ARCH_ARM_64
	#else
		#define AFW_TARGET_ARCH_ARM_32
	#endif
	
	//Define ARM processor version
	#if defined(__ARM_ARCH) && __ARM_ARCH > 1
		#define AFW_TARGET_ARCH_ARM __ARM_ARCH
	#elif defined(__TARGET_ARCH_ARM) && __TARGET_ARCH_ARM > 1
		#define AFW_TARGET_ARCH_ARM __TARGET_ARCH_ARM
	#elif defined(_M_ARM) && _M_ARM > 1
		#define AFW_TARGET_ARCH_ARM _M_ARM
	#elif defined(__ARM64_ARCH_8__) || defined(__aarch64__) || defined(__ARMv8__) || defined(__ARMv8_A__)
		#define AFW_TARGET_ARCH_ARM 8
	#elif defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) \
		|| defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__) || defined(_ARM_ARCH_7) || defined(__CORE_CORTEXA__)
		#define AFW_TARGET_ARCH_ARM 7
	#elif defined(__ARM_ARCH_6__) || defined(__ARM_ARCH_6J__) || defined(__ARM_ARCH_6T2__) || defined(__ARM_ARCH_6Z__) \
		|| defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6ZK__) || defined(__ARM_ARCH_6M__)
		#define AFW_TARGET_ARCH_ARM 6
	#elif defined(__ARM_ARCH_5TEJ__) || defined(__ARM_ARCH_5TE__)
		#define AFW_TARGET_ARCH_ARM 5
	#else
		#define AFW_TARGET_ARCH_ARM 0
	#endif
	
	//ARM version alias
	#if AFW_TARGET_ARCH_ARM >= 8
		#define AFW_TARGET_ARCH_ARM_V8
	#endif
	#if AFW_TARGET_ARCH_ARM >= 7
		#define AFW_TARGET_ARCH_ARM_V7
	#endif
	#if AFW_TARGET_ARCH_ARM >= 6
		#define AFW_TARGET_ARCH_ARM_V6
	#endif
	#if AFW_TARGET_ARCH_ARM >= 5
		#define AFW_TARGET_ARCH_ARM_V5
	#else
		#error "Unknown ARM architecture"
	#endif

/*
	Define Intel Itanium processor architecture (IA-64) family
	NOTE: No revisions or variants
*/
#elif defined(__ia64) || defined(__ia64__) || defined(__itanium__) || defined(_M_IA64)
	#define AFW_TARGET_ARCH_IA64
	//Alias macro
	#define AFW_TARGET_ARCH_ITANIUM

//Define MIPS processor architecture family
#elif defined(__mips) || defined(__mips__) || defined(_M_MRX000)
	#define AFW_TARGET_ARCH_MIPS
	#if defined(_MIPS_ARCH_MIPS1) || (defined(__mips) && __mips - 0 >= 1)
		#define AFW_TARGET_ARCH_MIPS_1
	#endif
	#if defined(_MIPS_ARCH_MIPS2) || (defined(__mips) && __mips - 0 >= 2)
		#define AFW_TARGET_ARCH_MIPS_2
	#endif
	#if defined(_MIPS_ARCH_MIPS3) || (defined(__mips) && __mips - 0 >= 3)
		#define AFW_TARGET_ARCH_MIPS_3
	#endif
	#if defined(_MIPS_ARCH_MIPS4) || (defined(__mips) && __mips - 0 >= 4)
		#define AFW_TARGET_ARCH_MIPS_4
	#endif
	#if defined(_MIPS_ARCH_MIPS5) || (defined(__mips) && __mips - 0 >= 5)
		#define AFW_TARGET_ARCH_MIPS_5
	#endif
	#if defined(_MIPS_ARCH_MIPS32) || defined(__mips32) || (defined(__mips) && __mips - 0 >= 32)
		#define AFW_TARGET_ARCH_MIPS_32
	#endif
	#if defined(_MIPS_ARCH_MIPS64) || defined(__mips64)
		#define AFW_TARGET_ARCH_MIPS_64
# endif

//Define PowerPC processor architecture family
#elif defined(__ppc__) || defined(__ppc) || defined(__powerpc__) || defined(_ARCH_COM) || defined(_ARCH_PWR) \
	|| defined(_ARCH_PPC) || defined(_M_MPPC) || defined(_M_PPC)

	#define AFW_TARGET_ARCH_POWERPC
	#if defined(__ppc64__) || defined(__powerpc64__) || defined(__64BIT__)
		#define AFW_TARGET_ARCH_POWERPC_64
	#else
		#define AFW_TARGET_ARCH_POWERPC_32
	#endif

//Define SPARC processor architecture family
#elif defined(__sparc) || defined(__sparc__)
	#define AFW_TARGET_ARCH_SPARC
	#ifdef __sparc_v9__
		#define AFW_TARGET_ARCH_SPARC_V9
	#endif
	#ifdef __sparc64__
		#define AFW_TARGET_ARCH_SPARC_64
	#endif

//Define s390 processor architecture family
#elif defined(__s390__)
	#define AFW_TARGET_ARCH_S390
	#ifdef __s390x__
		#define AFW_TARGET_ARCH_S390_X
	#endif

#endif

#endif // AURORAFW_STDL_TARGET_ARCHITECTURE_H
