cmake_minimum_required(VERSION 3.5.0)
project(juego VERSION 0.1.0 LANGUAGES C CXX)

#Raylib
include(FetchContent)

set(RAYLIB_VERSION 4.5.0)

FetchContent_Declare(
    raylib
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
    FIND_PACKAGE_ARGS ${RAYLIB_VERSION}
)
set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(raylib)


add_executable(juego main.cpp )
target_link_libraries(juego raylib)