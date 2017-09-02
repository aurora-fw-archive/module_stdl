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

#include <AuroraFW/TLib/Target/Platform.h>
#include <AuroraFW/TLib/Target/Kernel.h>
#include <AuroraFW/TLib/Target/Environment.h>

#ifdef AFW_TARGET_PLATFORM_ANDROID
	#ifndef AFW_TARGET_IS_OPENSOURCE
		#define AFW_TARGET_IS_OPENSOURCE
    #endif
#elif defined(AFW_TARGET_CYGWIN)
	#ifndef AFW_TARGET_IS_OPENSOURCE
		#define AFW_TARGET_IS_OPENSOURCE
    #endif
#endif

#ifdef AFW_TARGET_KERNEL_LINUX
    #ifndef AFW_TARGET_IS_OPENSOURCE
        #define AFW_TARGET_IS_OPENSOURCE
    #endif
#elif defined(AFW_TARGET_FREEBSD)
	#ifndef AFW_TARGET_IS_OPENSOURCE
		#define AFW_TARGET_IS_OPENSOURCE
	#endif
#elif defined(AFW_TARGET_OPENBSD)
	#ifndef AFW_TARGET_IS_OPENSOURCE
		#define AFW_TARGET_IS_OPENSOURCE
	#endif
#elif defined(AFW_TARGET_NETBSD)
	#ifndef AFW_TARGET_IS_OPENSOURCE
		#define AFW_TARGET_IS_OPENSOURCE
	#endif
#elif defined(AFW_TARGET_DRAGONFLY)
	#ifndef AFW_TARGET_IS_OPENSOURCE
		#define AFW_TARGET_IS_OPENSOURCE
	#endif
#endif
