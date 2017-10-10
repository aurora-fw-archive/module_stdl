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

#include <AuroraFW/STDL/Endian.h>
#include <AuroraFW/STDL/Type.h>

#ifdef AFW_TARGET_CXX
	namespace AuroraFW
	{
		/* @brief Ported functions from Endian C file
		**	H	- Host
		**	BE	- Big Endian
		**	LE	- Little Endian
		*/

		//16-bits
		inline afwuint16_t HtoBE16(const afwuint16_t& h) { return htobe16(h); }
		inline afwuint16_t HtoLE16(const afwuint16_t& h) { return htole16(h); }
		inline afwuint16_t BE16toH(const afwuint16_t& be) { return be16toh(be); }
		inline afwuint16_t LE16toH(const afwuint16_t& le) { return le16toh(le); }

		//32-bits
		inline afwuint32_t HtoBE32(const afwuint32_t& h) { return htobe32(h); }
		inline afwuint32_t HtoLE32(const afwuint32_t& h) { return htole32(h); }
		inline afwuint32_t BE32toH(const afwuint32_t& be) { return be32toh(be); }
		inline afwuint32_t LE32toH(const afwuint32_t& le) { return le32toh(le); }

		//64-bits
		inline afwuint64_t HtoBE64(const afwuint64_t& h) { return htobe64(h); }
		inline afwuint64_t HtoLE64(const afwuint64_t& h) { return htole64(h); }
		inline afwuint64_t BE64toH(const afwuint64_t& be) { return be64toh(be); }
		inline afwuint64_t LE64toH(const afwuint64_t& le) { return le64toh(le); }
	}
#endif
