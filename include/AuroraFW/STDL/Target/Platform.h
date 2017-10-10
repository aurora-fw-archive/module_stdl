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

#ifndef AURORAFW_STDL_TARGET_PLATFORM_H
#define AURORAFW_STDL_TARGET_PLATFORM_H

#include <AuroraFW/STDL/Target/Kernel.h>

#ifdef _WIN16
	#define AFW_TARGET_PLATFORM_WINDOWS
	#define AFW_TARGET_PLATFORM_WINDOWS_16
#elif defined(_WIN32)
	#define AFW_TARGET_PLATFORM_WINDOWS
	#define AFW_TARGET_PLATFORM_WINDOWS_32
	#ifdef _WIN64
		#define AFW_TARGET_PLATFORM_WINDOWS_86_64
	#endif
#elif __APPLE__
	#define AFW_TARGET_PLATFORM_APPLE
	#if defined(__APPLE_CPP__) || defined(__APPLE_CC__) || defined(__MACOS_CLASSIC__)
		#if (defined(__APPLE__) && defined(__MACH__)) || defined(macintosh) || defined(Macintosh)
			#define AFW_TARGET_PLATFORM_APPLE_MAC
		#endif
		#if defined(__GNUC__)
			#define INTERNAL_AFW_TARGET_PLATFORM_OS_EMBEDDED          @CONFIG_EMBEDDED@
			#define INTERNAL_AFW_TARGET_PLATFORM_OS_IPHONE            @CONFIG_IPHONE@
			#define INTERNAL_AFW_TARGET_PLATFORM_IPHONE_SIMULATOR     @CONFIG_IPHONE_SIMULATOR@
			#if INTERNAL_AFW_TARGET_PLATFORM_IPHONE_SIMULATOR
				#define AFW_TARGET_PLATFORM_APPLE_IPHONE_SIMULATOR
			#elif INTERNAL_AFW_TARGET_PLATFORM_OS_IPHONE
				#define AFW_TARGET_PLATFORM_APPLE_IPHONE
			#elif INTERNAL_AFW_TARGET_PLATFORM_OS_EMBEDDED
				#define AFW_TARGET_PLATFORM_APPLE_EMBEDDED
			#endif
			#undef INTERNAL_AFW_TARGET_PLATFORM_OS_EMBEDDED
			#undef INTERNAL_AFW_TARGET_PLATFORM_OS_IPHONE
			#undef INTERNAL_AFW_TARGET_PLATFORM_IPHONE_SIMULATOR
		#endif
	#endif
#elif defined(AFW_TARGET_KERNEL_LINUX)
	#ifdef __gnu_linux__
		#define AFW_TARGET_PLATFORM_GNU_LINUX
	#endif
#elif defined(__ANDROID__)
    #define AFW_TARGET_PLATFORM_ANDROID
#endif

#endif // AURORAFW_STDL_TARGET_PLATFORM_H
