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

#ifndef AURORAFW_STDL_LIBC_STDINT_H
#define AURORAFW_STDL_LIBC_STDINT_H

#include <AuroraFW/STDL/Internal/Config.h>
#include <AuroraFW/STDL/Internal/LibC/STDInt.h>

#if (AFW_STDLIB_CC == 0) || !defined(AURORAFW_STDL_LIBC__STDINT_H)


#ifdef __INT64_TYPE__
	#define INT64_MAX INT64_C( 9223372036854775807)
	#define INT64_MIN (-INT64_C( 9223372036854775807)-1)
	#define UINT64_MAX UINT64_C(18446744073709551615)
	#define __INT_LEAST64_MIN INT64_MIN
	#define __INT_LEAST64_MAX INT64_MAX
	#define __UINT_LEAST64_MAX UINT64_MAX
	#define __INT_LEAST32_MIN INT64_MIN
	#define __INT_LEAST32_MAX INT64_MAX
	#define __UINT_LEAST32_MAX UINT64_MAX
	#define __INT_LEAST16_MIN INT64_MIN
	#define __INT_LEAST16_MAX INT64_MAX
	#define __UINT_LEAST16_MAX UINT64_MAX
	#define __INT_LEAST8_MIN INT64_MIN
	#define __INT_LEAST8_MAX INT64_MAX
	#define __UINT_LEAST8_MAX UINT64_MAX
#endif // __INT64_TYPE__

#ifdef __INT_LEAST64_MIN
	#define INT_LEAST64_MIN __INT_LEAST64_MIN
	#define INT_LEAST64_MAX __INT_LEAST64_MAX
	#define UINT_LEAST64_MAX __UINT_LEAST64_MAX
	#define INT_FAST64_MIN __INT_LEAST64_MIN
	#define INT_FAST64_MAX __INT_LEAST64_MAX
	#define UINT_FAST64_MAX __UINT_LEAST64_MAX
#endif // __INT_LEAST64_MIN

#ifdef __INT56_TYPE__
	#define INT56_MAX INT56_C(36028797018963967)
	#define INT56_MIN (-INT56_C(36028797018963967)-1)
	#define UINT56_MAX UINT56_C(72057594037927935)
	#define INT_LEAST56_MIN INT56_MIN
	#define INT_LEAST56_MAX INT56_MAX
	#define UINT_LEAST56_MAX UINT56_MAX
	#define INT_FAST56_MIN INT56_MIN
	#define INT_FAST56_MAX INT56_MAX
	#define UINT_FAST56_MAX UINT56_MAX
	#define __INT_LEAST32_MIN INT56_MIN
	#define __INT_LEAST32_MAX INT56_MAX
	#define __UINT_LEAST32_MAX UINT56_MAX
	#define __INT_LEAST16_MIN INT56_MIN
	#define __INT_LEAST16_MAX INT56_MAX
	#define __UINT_LEAST16_MAX UINT56_MAX
	#define __INT_LEAST8_MIN INT56_MIN
	#define __INT_LEAST8_MAX INT56_MAX
	#define __UINT_LEAST8_MAX UINT56_MAX
#endif // __INT56_TYPE__

#ifdef __INT48_TYPE__
	#define INT48_MAX INT48_C(140737488355327)
	#define INT48_MIN (-INT48_C(140737488355327)-1)
	#define UINT48_MAX UINT48_C(281474976710655)
	#define INT_LEAST48_MIN INT48_MIN
	#define INT_LEAST48_MAX INT48_MAX
	#define UINT_LEAST48_MAX UINT48_MAX
	#define INT_FAST48_MIN INT48_MIN
	#define INT_FAST48_MAX INT48_MAX
	#define UINT_FAST48_MAX UINT48_MAX
	#define __INT_LEAST32_MIN INT48_MIN
	#define __INT_LEAST32_MAX INT48_MAX
	#define __UINT_LEAST32_MAX UINT48_MAX
	#define __INT_LEAST16_MIN INT48_MIN
	#define __INT_LEAST16_MAX INT48_MAX
	#define __UINT_LEAST16_MAX UINT48_MAX
	#define __INT_LEAST8_MIN INT48_MIN
	#define __INT_LEAST8_MAX INT48_MAX
	#define __UINT_LEAST8_MAX UINT48_MAX
#endif // __INT48_TYPE__

#ifdef __INT40_TYPE__
	#define INT40_MAX INT40_C(549755813887)
	#define INT40_MIN (-INT40_C(549755813887)-1)
	#define UINT40_MAX UINT40_C(1099511627775)
	#define INT_LEAST40_MIN INT40_MIN
	#define INT_LEAST40_MAX INT40_MAX
	#define UINT_LEAST40_MAX UINT40_MAX
	#define INT_FAST40_MIN INT40_MIN
	#define INT_FAST40_MAX INT40_MAX
	#define UINT_FAST40_MAX UINT40_MAX
	#define __INT_LEAST32_MIN INT40_MIN
	#define __INT_LEAST32_MAX INT40_MAX
	#define __UINT_LEAST32_MAX UINT40_MAX
	#define __INT_LEAST16_MIN INT40_MIN
	#define __INT_LEAST16_MAX INT40_MAX
	#define __UINT_LEAST16_MAX UINT40_MAX
	#define __INT_LEAST8_MIN INT40_MIN
	#define __INT_LEAST8_MAX INT40_MAX
	#define __UINT_LEAST8_MAX UINT40_MAX
#endif // __INT40_TYPE__

#ifdef __INT32_TYPE__
	#define INT32_MAX INT32_C(2147483647)
	#define INT32_MIN (-INT32_C(2147483647)-1)
	#define UINT32_MAX UINT32_C(4294967295)
	#define __INT_LEAST32_MIN INT32_MIN
	#define __INT_LEAST32_MAX INT32_MAX
	#define __UINT_LEAST32_MAX UINT32_MAX
	#define __INT_LEAST16_MIN INT32_MIN
	#define __INT_LEAST16_MAX INT32_MAX
	#define __UINT_LEAST16_MAX UINT32_MAX
	#define __INT_LEAST8_MIN INT32_MIN
	#define __INT_LEAST8_MAX INT32_MAX
	#define __UINT_LEAST8_MAX UINT32_MAX
#endif // __INT32_TYPE__

#ifdef __INT_LEAST32_MIN
	#define INT_LEAST32_MIN __INT_LEAST32_MIN
	#define INT_LEAST32_MAX __INT_LEAST32_MAX
	#define UINT_LEAST32_MAX __UINT_LEAST32_MAX
	#define INT_FAST32_MIN __INT_LEAST32_MIN
	#define INT_FAST32_MAX __INT_LEAST32_MAX
	#define UINT_FAST32_MAX __UINT_LEAST32_MAX
#endif // __INT_LEAST32_MIN

#ifdef __INT24_TYPE__
	#define INT24_MAX INT24_C(8388607)
	#define INT24_MIN (-INT24_C(8388607)-1)
	#define UINT24_MAX UINT24_C(16777215)
	#define INT_LEAST24_MIN INT24_MIN
	#define INT_LEAST24_MAX INT24_MAX
	#define UINT_LEAST24_MAX UINT24_MAX
	#define INT_FAST24_MIN INT24_MIN
	#define INT_FAST24_MAX INT24_MAX
	#define UINT_FAST24_MAX UINT24_MAX
	#define __INT_LEAST16_MIN INT24_MIN
	#define __INT_LEAST16_MAX INT24_MAX
	#define __UINT_LEAST16_MAX UINT24_MAX
	#define __INT_LEAST8_MIN INT24_MIN
	#define __INT_LEAST8_MAX INT24_MAX
	#define __UINT_LEAST8_MAX UINT24_MAX
#endif // __INT24_TYPE__


#ifdef __INT16_TYPE__
	#define INT16_MAX INT16_C(32767)
	#define INT16_MIN (-INT16_C(32767)-1)
	#define UINT16_MAX UINT16_C(65535)
	#define __INT_LEAST16_MIN INT16_MIN
	#define __INT_LEAST16_MAX INT16_MAX
	#define __UINT_LEAST16_MAX UINT16_MAX
	#define __INT_LEAST8_MIN INT16_MIN
	#define __INT_LEAST8_MAX INT16_MAX
	#define __UINT_LEAST8_MAX UINT16_MAX
#endif // __INT16_TYPE__

#ifdef __INT_LEAST16_MIN
	#define INT_LEAST16_MIN __INT_LEAST16_MIN
	#define INT_LEAST16_MAX __INT_LEAST16_MAX
	#define UINT_LEAST16_MAX __UINT_LEAST16_MAX
	#define INT_FAST16_MIN __INT_LEAST16_MIN
	#define INT_FAST16_MAX __INT_LEAST16_MAX
	#define UINT_FAST16_MAX __UINT_LEAST16_MAX
#endif // __INT_LEAST16_MIN


#ifdef __INT8_TYPE__
	#define INT8_MAX INT8_C(127)
	#define INT8_MIN (-INT8_C(127)-1)
	#define UINT8_MAX UINT8_C(255)
	#define __INT_LEAST8_MIN INT8_MIN
	#define __INT_LEAST8_MAX INT8_MAX
	#define __UINT_LEAST8_MAX UINT8_MAX
#endif // __INT8_TYPE__

#ifdef __INT_LEAST8_MIN
	#define INT_LEAST8_MIN __INT_LEAST8_MIN
	#define INT_LEAST8_MAX __INT_LEAST8_MAX
	#define UINT_LEAST8_MAX __UINT_LEAST8_MAX
	#define INT_FAST8_MIN __INT_LEAST8_MIN
	#define INT_FAST8_MAX __INT_LEAST8_MAX
	#define UINT_FAST8_MAX __UINT_LEAST8_MAX
#endif // __INT_LEAST8_MIN

#define INTMAX_C(v) __int_c(v, __INTMAX_C_SUFFIX__)
#define UINTMAX_C(v) __int_c(v, __UINTMAX_C_SUFFIX__)

#endif

#endif // AURORAFW_STDL_LIBC_STDINT_H