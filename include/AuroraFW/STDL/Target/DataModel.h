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

#ifndef AURORAFW_STDL_TARGET_DATAMODEL_H
#define AURORAFW_STDL_TARGET_DATAMODEL_H

// Data type 	LP32 	ILP32 	LP64 	LLP64 	ILP64 	SILP64
// char 		8 		8 		8 		8 		8 		8
// short 		16 		16 		16 		16 		16 		64
// int 			16 		32 		32 		32 		64 		64
// long 		32 		32 		64 		32 		64 		64
// long long 	64 		64 		64 		64
// pointer 		32 		32 		64 		64 		64 		64

// _ILP32 		Defined by HP aCC and Sun Studio
// __ILP32__ 	Defined by GNU C
#if defined(__ILP32__) || defined(_ILP32)
	#define AFW_TARGET_DATAMODEL_ILP32

// _LP64 		Defined by HP aCC and Sun Studio
// __LP64__ 	Defined by GNU C
#elif defined(__LP64__) || defined(_LP64)
	#define AFW_TARGET_DATAMODEL_LP64
#endif

#endif // AURORAFW_STDL_TARGET_DATAMODEL_H