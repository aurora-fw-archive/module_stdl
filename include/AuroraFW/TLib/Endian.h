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

#ifndef INCLUDE_H_AFW_TLIB_ENDIAN
#define INCLUDE_H_AFW_TLIB_ENDIAN

#include <AuroraFW/TLib/Target/Platform.h>
#include <AuroraFW/TLib/Target/Kernel.h>
#include <AuroraFW/TLib/Target/CCPlusPlus.h>

#if defined(AFW_TARGET_KERNEL_LINUX) || defined(AFW_TARGET_CYGWIN)
	#include <endian.h>
#elif defined(AFW_TARGET_PLATFORM_APPLE)
	#include <libkern/OSByteOrder.h>

	#define htobe16(x) OSSwapHostToBigInt16(x)
	#define htole16(x) OSSwapHostToLittleInt16(x)
	#define be16toh(x) OSSwapBigToHostInt16(x)
	#define le16toh(x) OSSwapLittleToHostInt16(x)

	#define htobe32(x) OSSwapHostToBigInt32(x)
	#define htole32(x) OSSwapHostToLittleInt32(x)
	#define be32toh(x) OSSwapBigToHostInt32(x)
	#define le32toh(x) OSSwapLittleToHostInt32(x)

	#define htobe64(x) OSSwapHostToBigInt64(x)
	#define htole64(x) OSSwapHostToLittleInt64(x)
	#define be64toh(x) OSSwapBigToHostInt64(x)
	#define le64toh(x) OSSwapLittleToHostInt64(x)

	#define __BYTE_ORDER    BYTE_ORDER
	#define __BIG_ENDIAN    BIG_ENDIAN
	#define __LITTLE_ENDIAN LITTLE_ENDIAN
	#define __PDP_ENDIAN    PDP_ENDIAN
#elif defined(AFW_TARGET_KERNEL_OPENBSD)
	#include <sys/endian.h>
#elif defined(AFW_TARGET_KERNEL_NETBSD) || defined(AFW_TARGET_KERNEL_FREEBSD) || defined(AFW_TARGET_KERNEL_DRAGONFLY)
	#include <sys/endian.h>
	#define be16toh(x) betoh16(x)
	#define le16toh(x) letoh16(x)

	#define be32toh(x) betoh32(x)
	#define le32toh(x) letoh32(x)

	#define be64toh(x) betoh64(x)
	#define le64toh(x) letoh64(x)
#elif defined(AFW_TARGET_PLATFORM_WINDOWS)
	#include <winsock2.h>
	#include <sys/param.h>

	#if BYTE_ORDER == LITTLE_ENDIAN
		#define htobe16(x) htons(x)
		#define htole16(x) (x)
		#define be16toh(x) ntohs(x)
		#define le16toh(x) (x)

		#define htobe32(x) htonl(x)
		#define htole32(x) (x)
		#define be32toh(x) ntohl(x)
		#define le32toh(x) (x)

		#define htobe64(x) htonll(x)
		#define htole64(x) (x)
		#define be64toh(x) ntohll(x)
		#define le64toh(x) (x)
	#elif BYTE_ORDER == BIG_ENDIAN

		#define htobe16(x) (x)
		#define htole16(x) __builtin_bswap16(x)
		#define be16toh(x) (x)
		#define le16toh(x) __builtin_bswap16(x)

		#define htobe32(x) (x)
		#define htole32(x) __builtin_bswap32(x)
		#define be32toh(x) (x)
		#define le32toh(x) __builtin_bswap32(x)

		#define htobe64(x) (x)
		#define htole64(x) __builtin_bswap64(x)
		#define be64toh(x) (x)
		#define le64toh(x) __builtin_bswap64(x)
	#endif

	#define __BYTE_ORDER    BYTE_ORDER
	#define __BIG_ENDIAN    BIG_ENDIAN
	#define __LITTLE_ENDIAN LITTLE_ENDIAN
	#define __PDP_ENDIAN    PDP_ENDIAN
#endif

#ifndef __AFW_ENDIAN
	#define __AFW_ENDIAN

	#define AFW_HTOBE16(x) htobe16(x)
	#define AFW_HTOLE16(x) htole16(x)
	#define AFW_BE16TOH(x) be16toh(x)
	#define AFW_LE16TOH(x) le16toh(x)

	#define AFW_HTOBE32(x) htobe32(x)
	#define AFW_HTOLE32(x) htole32(x)
	#define AFW_BE32TOH(x) be32toh(x)
	#define AFW_LE32TOH(x) le32toh(x)

	#define AFW_HTOBE64(x) htobe64(x)
	#define AFW_HTOLE64(x) htole64(x)
	#define AFW_BE64TOH(x) be64toh(x)
	#define AFW_LE64TOH(x) le64toh(x)

	#define AFW_ENDIAN_BYTE_ORDER    __BYTE_ORDER
	#define AFW_BIG_ENDIAN           __BIG_ENDIAN
	#define AFW_LITTLE_ENDIAN 	    __LITTLE_ENDIAN
	#define AFW_PDP_ENDIAN           __PDP_ENDIAN

	#ifdef AFW_TARGET_CXX
		#include <AuroraFW/TLib/Type.h>
		namespace AuroraFW
		{
			class Endian
			{
				static inline ArUInt16_t HtoBE16(const ArUInt16_t& h);
				static inline ArUInt16_t HtoLE16(const ArUInt16_t& h);
				static inline ArUInt16_t BE16toH(const ArUInt16_t& be);
				static inline ArUInt16_t LE16toH(const ArUInt16_t& le);

				static inline ArUInt32_t HtoBE32(const ArUInt32_t& h);
				static inline ArUInt32_t HtoLE32(const ArUInt32_t& h);
				static inline ArUInt32_t BE32toH(const ArUInt32_t& be);
				static inline ArUInt32_t LE32toH(const ArUInt32_t& le);

				static inline ArUInt64_t HtoBE64(const ArUInt64_t& h);
				static inline ArUInt64_t HtoLE64(const ArUInt64_t& h);
				static inline ArUInt64_t BE64toH(const ArUInt64_t& be);
				static inline ArUInt64_t LE64toH(const ArUInt64_t& le);
			};
		}
	#endif
#endif

#endif // INCLUDE_H_AFW_TLIB_ENDIAN
