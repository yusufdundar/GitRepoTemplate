cmake_minimum_required(VERSION 3.14)
project(CMakeDemo VERSION 1.0 DESCRIPTION "CMake için demo proje" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
#find_package(Qt5 REQUIRED COMPONENTS Core Widgets Test)

enable_testing()
add_subdirectory(libs/gtest)


set(HEADERS
        ./src/Example.h)
set(SOURCES
        ./src/Example.cpp)

add_library(CMakeDemo SHARED ${SOURCES} ${HEADERS} )
add_subdirectory(test)



#include_directories(${source.dir}/lib/gtest/googletest/include)
#target_link_libraries(CmakeDemo Qt5::Widgets Qt5::Core Qt5::Test)