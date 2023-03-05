cmake_minimum_required(VERSION 3.22.0)

project(HomeWorkCPP2.11.3)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(LeaverLibraryDynamic SHARED Leaver.h Leaver.cpp)

add_executable(HomeWorkCPPExe HomeWorkCPP2.11.3.cpp)

target_link_libraries(HomeWorkCPPExe LeaverLibraryDynamic)