
include(CheckCXXCompilerFlag)
include(CheckCXXSourceCompiles)
include(CheckIncludeFile)
include(CheckIncludeFiles)
include(CheckTypeSize)
string(TIMESTAMP BUILD_DATE "%m/%d/%Y")
add_definitions(-DBUILD_DATE="${BUILD_DATE}")


set(CMAKE_VERBOSE_MAKEFILE ON )
#set(CMAKE_EXPORT_COMPILE_COMMANDS ON )
#set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_INCLUDE_DIRECTORIES_BEFORE ON)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_STANDARD 17)

configure_file(
   ${CMAKE_SOURCE_DIR}/src/include/build_info.h.in
   src/include/build_info.h
)
if(${CMAKE_SIZEOF_VOID_P} EQUAL 4)
   set(TARGETBITS 32)
else()
   set(TARGETBITS 64)
endif()
message("")
message("Inkmove:  ${CMAKE_SYSTEM_NAME} ${TARGETBITS} bit, ${CMAKE_BUILD_TYPE} Mode")
message("\n")