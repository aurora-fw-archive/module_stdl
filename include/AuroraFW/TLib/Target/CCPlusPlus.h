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

//TODO: Need to be documented and structured

#ifndef AURORAFW_TLIB_TARGET_CCPLUSPLUS_H
#define AURORAFW_TLIB_TARGET_CCPLUSPLUS_H

#include <AuroraFW/TLib/Target/Compiler.h>

#ifdef __cplusplus
	#ifndef AFW_TARGET_CXX
		#define AFW_TARGET_CXX __cplusplus
	#endif
	#ifdef AFW_TARGET_CC
		#undef AFW_TARGET_CC
	#endif
    #if __cplusplus >= 199711L
        #define AFW_TARGET_CXX_98
    #endif
    #if __cplusplus >= 201103L
        #define AFW_TARGET_CXX_11
    #endif
    #if __cplusplus >= 201402L
        #define AFW_TARGET_CXX_14
    #endif
    #if __cplusplus >= 201703L
        #define AFW_TARGET_CXX_17
    #endif
#else
	#ifndef AFW_TARGET_CC
		#define AFW_TARGET_CC
	#endif
	#ifdef AFW_TARGET_CXX
		#undef AFW_TARGET_CXX
	#endif
#endif

#endif // AURORAFW_TLIB_TARGET_CCPLUSPLUS_H
