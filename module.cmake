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

message(STATUS "Loading stdl module...")

if (NOT CONFIGURED_ONCE)
	set(AURORAFW_MODULE_STDL_SOURCE_DIR ${AURORAFW_MODULE_STDL_DIR}/src)
endif()

include_directories(${AURORAFW_MODULE_STDL_DIR}/include)
file(GLOB_RECURSE AURORAFW_MODULE_STDL_HEADERS ${AURORAFW_MODULE_STDL_DIR}/include/*.*)
file(GLOB AURORAFW_MODULE_STDL_SOURCE ${AURORAFW_MODULE_STDL_SOURCE_DIR}/*.*)

add_library (aurorafw-stdl SHARED ${AURORAFW_MODULE_STDL_SOURCE})
aurora_add_library_target(aurorafw-stdl)
if(AURORA_PCH)
	add_precompiled_header(aurorafw-stdl "${AURORAFW_MODULE_STDL_HEADERS}")
endif()

set_target_properties(aurorafw-stdl PROPERTIES COMPILE_FLAGS "-nodefaultlibs -nostdlib -static-libstdc++ -static-libgcc")

install(TARGETS aurorafw-stdl DESTINATION lib)
install(FILES ${AURORAFW_MODULE_CORE_HEADERS_CORE} DESTINATION include/Aurora/Core)