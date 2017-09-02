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

//TODO: Need to be documented and structured !

#ifndef INCLUDE_H_AFW_LIB_TARGET_WORDSIZE
#define INCLUDE_H_AFW_LIB_TARGET_WORDSIZE 1

#include <AuroraFW/TLib/Target/DataModel.h>
#include <AuroraFW/TLib/Target/Architecture.h>

#if defined(AFW_TARGET_CPUARCH_86_64) && !defined(AFW_TARGET_DATAMODEL_ILP32)
	#define AFW_TARGET_WORDSIZE   64
#else
	#define AFW_TARGET_WORDSIZE   32
#endif

#endif /// INCLUDE_H_AFW_LIB_TARGET_WORDSIZE
