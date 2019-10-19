cmake_minimum_required(VERSION 3.14)
project(ExampleTests VERSION 1.0 DESCRIPTION "CMake için demo proje Testleri" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

#find_package(Qt5 REQUIRED COMPONENTS Core Widgets Test)

set(SOURCES
        ExampleTest.cpp)
add_executable(ExampleTests ${SOURCES})
target_link_libraries(ExampleTests PUBLIC gtest_main CMakeDemo)
#add_test(NAME ExampleTests2 COMMAND ExampleTests)

