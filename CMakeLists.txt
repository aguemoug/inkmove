cmake_minimum_required(VERSION 3.10)
project(inkmove VERSION 0.0.1)
set(BUILD_MAJOR "0")
set(BUILD_MINOR "0")
set(BUILD_MICRO "1")
include(${CMAKE_SOURCE_DIR}/cmake/configure.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/sources.cmake)
if( NOT TARGET cinder )
add_subdirectory(external/Cinder)
endif()

target_include_directories(cinder PUBLIC include)

add_library(inkmove ${INKMOVE_CORE_SRC_SET})
#main is an executable to test inkmove functionality during developpemnt
add_executable(main ${INKMOVE_TEST_SRC_SET})
target_link_libraries(main inkmove cinder)
target_link_libraries(inkmove cinder)
