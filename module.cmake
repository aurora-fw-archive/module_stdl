# ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
# ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
# ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
# A Powerful General Purpose Framework
# More information in: https://aurora-fw.github.io/
#
# Copyright (C) 2017 Aurora Framework, All rights reserved.
#
# This file is part of the Aurora Framework. This framework is free
# software; you can redistribute it and/or modify it under the terms of
# the GNU Lesser General Public License version 3 as published by the
# Free Software Foundation and appearing in the file LICENSE included in
# the packaging of this file. Please review the following information to
# ensure the GNU Lesser General Public License version 3 requirements
# will be met: https://www.gnu.org/licenses/lgpl-3.0.html.

message(STATUS "Loading tlib module...")

if (NOT CONFIGURED_ONCE)
	set(AURORAFW_MODULE_TLIB_SOURCE_DIR ${AURORAFW_MODULE_TLIB_DIR}/src)
endif()

include_directories(${AURORAFW_MODULE_TLIB_DIR}/include)
file(GLOB AURORAFW_MODULE_TLIB_HEADERS_TLIB ${AURORAFW_MODULE_CORE_DIR}/include/AuroraFW/TLib/*.h)
file(GLOB AURORAFW_MODULE_TLIB_HEADERS_TLIB_TARGET ${AURORAFW_MODULE_CORE_DIR}/include/AuroraFW/TLib/Target/*.h)

add_library (aurorafw-tlib SHARED ${AURORAFW_MODULE_TLIB_SOURCE_DIR}/CircularShift.cpp
                            	${AURORAFW_MODULE_TLIB_SOURCE_DIR}/Endian.cpp
                                ${AURORAFW_MODULE_TLIB_SOURCE_DIR}/String.cpp
								${AURORAFW_MODULE_TLIB_SOURCE_DIR}/Memory.c)

#Temporary Link
target_link_libraries(aurorafw-tlib aurorafw-io)

set_target_properties(aurorafw-tlib PROPERTIES OUTPUT_NAME aurorafw-tlib)
