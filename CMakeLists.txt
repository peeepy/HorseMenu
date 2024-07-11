cmake_minimum_required(VERSION 3.27.x)

project(RDONatives VERSION 0.0.1 DESCRIPTION "A new base using new C++ features optimised for speed and ease of use")

# libs
include(cmake/vulkan.cmake)
include(cmake/async-logger.cmake)
include(cmake/imgui.cmake)
include(cmake/json.cmake)
include(cmake/minhook.cmake)
include(cmake/rdr-classes.cmake)

# source
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
file(GLOB_RECURSE SRC_FILES
    "${SRC_DIR}/**.hpp"
    "${SRC_DIR}/**.cpp"
)
set(DEPS_DIR "${PROJECT_SOURCE_DIR}/deps")

# Change MODULE to SHARED
add_library(${PROJECT_NAME} SHARED ${SRC_FILES})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 23)

set_target_properties(${PROJECT_NAME} PROPERTIES
    WINDOWS_EXPORT_ALL_SYMBOLS FALSE
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)


# Use your custom exports.def file
set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/DEF:${CMAKE_BINARY_DIR}/exports.def")

target_precompile_headers(${PROJECT_NAME} PUBLIC "${SRC_DIR}/common.hpp")

message(STATUS "Setting up include directories.")
target_include_directories(${PROJECT_NAME} PUBLIC
    "${SRC_DIR}"
    "${imgui_SOURCE_DIR}"
    "${minhook_SOURCE_DIR}/include"    
    "${minhook_SOURCE_DIR}/src/hde"    
    "${rdr_classes_SOURCE_DIR}"
    "${vulkan_SOURCE_DIR}/include"
    "${async_logger_SOURCE_DIR}/src/"
    "${async_logger_SOURCE_DIR}/include/AsyncLogger/"
)

message(STATUS "Setting up linked libraries")
target_link_libraries(${PROJECT_NAME} PRIVATE AsyncLogger imgui minhook nlohmann_json::nlohmann_json dbghelp "${DEPS_DIR}/vulkan-1.lib")


# Ensure consistent runtime library usage
if(MSVC)
  set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDLL")
    # Add verbose linker output for debugging
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /VERBOSE")
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /VERBOSE")

  # Force the linker to generate a .MAP file
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /MAP")
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /MAP")
endif()



# Ensure correct shared library settings
set_target_properties(${PROJECT_NAME} PROPERTIES 
    PREFIX ""
    IMPORT_PREFIX ""
)

# Add version information
set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(${PROJECT_NAME} PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})



add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND dumpbin /EXPORTS $<TARGET_FILE:${PROJECT_NAME}> > ${CMAKE_BINARY_DIR}/exports_list.txt
    COMMENT "Generating list of exported symbols"
)

#target_compile_definitions(${PROJECT_NAME} PRIVATE 
    ##_ITERATOR_DEBUG_LEVEL=0
    ##_HAS_EXCEPTIONS=0
##)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "DLL created at $<TARGET_FILE:${PROJECT_NAME}>"
    COMMAND ${CMAKE_COMMAND} -E echo "LIB created at $<TARGET_LINKER_FILE:${PROJECT_NAME}>"
)