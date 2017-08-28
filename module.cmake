message(STATUS "Loading tlib module...")

if (NOT CONFIGURED_ONCE)
	set(MODULE_TLIB_SOURCE_DIR ${MODULE_TLIB_DIR}/src)
endif()

include_directories(${MODULE_TLIB_DIR}/include)

add_library (aurora-tlib SHARED ${MODULE_TLIB_SOURCE_DIR}/CircularShift.cpp
                            	${MODULE_TLIB_SOURCE_DIR}/Endian.cpp
                                ${MODULE_TLIB_SOURCE_DIR}/IOStream.cpp
                                ${MODULE_TLIB_SOURCE_DIR}/String.cpp
								${MODULE_TLIB_SOURCE_DIR}/Memory.c)

target_link_libraries(aurora-tlib aurora-io)

set_target_properties(aurora-tlib PROPERTIES OUTPUT_NAME aurora-tlib)
