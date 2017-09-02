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

#ifndef AURORAFW_TLIB_TARGET_KERNEL_H
#define AURORAFW_TLIB_TARGET_KERNEL_H

#include <AuroraFW/TLib/Target/Platform.h>

#if defined(__linux__) || defined(__linux) || defined(linux)
    #define AFW_TARGET_KERNEL_LINUX
#elif defined(AFW_TARGET_PLATFORM_WINDOWS)
    #define AFW_TARGET_KERNEL_NT
#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
    #define AFW_TARGET_KERNEL_FREEBSD
#elif defined(__OpenBSD__)
    #define AFW_TARGET_KERNEL_OPENBSD
#elif defined(__NetBSD__)
    #define AFW_TARGET_KERNEL_NETBSD
#elif defined(__DragonFly__)
    #define AFW_TARGET_KERNEL_DRAGONFLY
#endif

#endif // AURORAFW_TLIB_TARGET_KERNEL_H
