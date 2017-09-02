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

#include <AuroraFW/TLib/Endian.h>
#include <AuroraFW/TLib/Type.h>

#ifdef AFW_TARGET_CXX
	namespace AuroraFW
	{
		/* @brief Ported functions from Endian C file
		**	H	- Host
		**	BE	- Big Endian
		**	LE	- Little Endian
		*/

		//16-bits
		inline ArUInt16_t Endian::HtoBE16(ArUInt16_t h) { return htobe16(h); }
		inline ArUInt16_t Endian::HtoLE16(ArUInt16_t h) { return htole16(h); }
		inline ArUInt16_t Endian::BE16toH(ArUInt16_t be) { return be16toh(be); }
		inline ArUInt16_t Endian::LE16toH(ArUInt16_t le) { return le16toh(le); }

		//32-bits
		inline ArUInt32_t Endian::HtoBE32(ArUInt32_t h) { return htobe32(h); }
		inline ArUInt32_t Endian::HtoLE32(ArUInt32_t h) { return htole32(h); }
		inline ArUInt32_t Endian::BE32toH(ArUInt32_t be) { return be32toh(be); }
		inline ArUInt32_t Endian::LE32toH(ArUInt32_t le) { return le32toh(le); }

		//64-bits
		inline ArUInt64_t Endian::HtoBE64(ArUInt64_t h) { return htobe64(h); }
		inline ArUInt64_t Endian::HtoLE64(ArUInt64_t h) { return htole64(h); }
		inline ArUInt64_t Endian::BE64toH(ArUInt64_t be) { return be64toh(be); }
		inline ArUInt64_t Endian::LE64toH(ArUInt64_t le) { return le64toh(le); }
	}
#endif
