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

#ifndef AURORAFW_TLIB_TYPE_H
#define AURORAFW_TLIB_TYPE_H

#include <AuroraFW/STDL/LibC/Math.h>
#include <AuroraFW/STDL/LibC/STDDef.h>

#define AFW_DONTCARE -1

typedef long double real_t;
typedef unsigned char byte_t;

typedef void afwvoid_t;
typedef void* afwvoidptr;

typedef afwvoid_t afwslot;
typedef afwslot* afwcallb;

//Floating-point types
#include <AuroraFW/STDL/LibC/Float.h>

#define AFW_NAN NAN

typedef float afwfloat_t;
typedef double afwdouble_t;

typedef float_t afwreal_t;
typedef long double afwlreal_t;

//Byte and char types
#ifdef AFW_TARGET_CXX
	//typedef afwstd::byte afwbyte_t;
	//Temporary implementation
	typedef byte_t afwbyte_t;
#else
	typedef byte_t afwbyte_t;
#endif

typedef unsigned char uchar_t;
typedef char afwchar_t;
typedef uchar_t afwuchar_t;

//Boolean types
#include <AuroraFW/STDL/LibC/STDBool.h>

typedef bool afwbool_t;

//Integer types
#include <AuroraFW/STDL/LibC/STDInt.h>

#define AFW_NULL NULL

typedef unsigned int uint_t;
typedef unsigned int uint;

typedef unsigned short int ushort;

typedef int afwint_t;
typedef unsigned int afwuint_t;

#ifdef AFW_TARGET_PLATFORM_WINDOWS
typedef __int8 afwint8_t;
typedef __int16 afwint16_t;
typedef __int32 afwint32_t;
typedef __int64 afwint64_t;
#else
typedef int8_t afwint8_t;
typedef int16_t afwint16_t;
typedef int32_t afwint32_t;
typedef int64_t afwint64_t;
#endif

#ifdef AFW_TARGET_PLATFORM_WINDOWS
typedef unsigned __int8 afwuint8_t;
typedef unsigned __int16 afwuint16_t;
typedef unsigned __int32 afwuint32_t;
typedef unsigned __int64 afwuint64_t;
#else
typedef uint8_t afwuint8_t;
typedef uint16_t afwuint16_t;
typedef uint32_t afwuint32_t;
typedef uint64_t afwuint64_t;
#endif

#ifdef AFW_TARGET_PLATFORM_WINDOWS
typedef unsigned __int8 uint8;
typedef unsigned __int16 uint16;
typedef unsigned __int32 uint32;
typedef unsigned __int64 uint64;
#endif

#endif // AURORAFW_TLIB_TYPE_H
