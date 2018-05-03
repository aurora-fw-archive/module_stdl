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

message(STATUS "Loading stdl-stl module...")

if (NOT CONFIGURED_ONCE)
	set(AURORAFW_MODULE_STDL_SOURCE_DIR ${AURORAFW_MODULE_STDL_DIR}/src)
endif()

include_directories(${AURORAFW_MODULE_STDL_DIR}/include)
file(GLOB_RECURSE AURORAFW_MODULE_STDL_HEADERS ${AURORAFW_MODULE_STDL_DIR}/include/*.*)
file(GLOB AURORAFW_MODULE_STDL_SOURCE_CC ${AURORAFW_MODULE_STDL_SOURCE_DIR}/*.c)
file(GLOB AURORAFW_MODULE_STDL_SOURCE_CXX ${AURORAFW_MODULE_STDL_SOURCE_DIR}/*.cpp)

add_library (aurorafw-stdl-cc SHARED ${AURORAFW_MODULE_STDL_SOURCE_CC})
add_library (aurorafw-stdl-cc-static STATIC ${AURORAFW_MODULE_STDL_SOURCE_CC})
#add_library (aurorafw-stdl-cpp SHARED ${AURORAFW_MODULE_STDL_SOURCE_CXX})
#add_library (aurorafw-stdl-cpp-static STATIC ${AURORAFW_MODULE_STDL_SOURCE_CXX})
aurorafw_add_library_target(aurorafw-stdl-cc SHARED)
aurorafw_add_library_target(aruroafw-stdl-cc-static STATIC)
#aurorafw_add_library_target(aurorafw-stdl-cpp SHARED)
#aurorafw_add_library_target(aruroafw-stdl-cpp-static STATIC)

if(AURORAFW_PCH)
	add_precompiled_header(aurorafw-stdl-cc "${AURORAFW_MODULE_STDL_HEADERS}")
	add_precompiled_header(aurorafw-stdl-cc-static "${AURORAFW_MODULE_STDL_HEADERS}")
endif()

#set_target_properties(aurorafw-stdl-cc PROPERTIES COMPILE_FLAGS "-nodefaultlibs -nostdlib -static-libgcc")
set_target_properties(aurorafw-stdl-cc-static PROPERTIES COMPILE_FLAGS "-nodefaultlibs -nostdlib -static-libgcc")
#set_target_properties(aurorafw-stdl-cpp PROPERTIES COMPILE_FLAGS "-nodefaultlibs -nostdlib -static-libgcc -static-libstdc++")
#set_target_properties(aurorafw-stdl-cpp-static PROPERTIES COMPILE_FLAGS "-nodefaultlibs -nostdlib -static-libgcc -static-libstdc++")

install(TARGETS aurorafw-stdl-cc DESTINATION lib)
install(FILES ${AURORAFW_MODULE_CORE_HEADERS_CORE} DESTINATION include/Aurora/Core)
