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

#ifndef AURORAFW_STDL_EXPORT_H
#define AURORAFW_STDL_EXPORT_H

#include <AuroraFW/STDL/Target/Platform.h>

#ifdef AFW_TARGET_PLATFORM_WINDOWS
	#ifdef AFW__COMPILING
		#define AFW_EXPORT __declspec(dllexport)
	#else
		#define AFW_EXPORT __declspec(dllimport)
	#endif //AFW_IS_COMPILING
#else
	#define AFW_EXPORT
#endif //AFW_TARGET_PLATFORM_WINDOWS

#endif // AURORAFW_STDL_EXPORT_H