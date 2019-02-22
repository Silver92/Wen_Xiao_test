cmake_minimum_required(VERSION 3.10)
project(Ormuco)

set(CMAKE_CXX_STANDARD 11)

#add_library(Ormuco SHARED library.cpp library.h)
add_executable(Ormuco GTest.cpp library.cpp library.h)

set(googleTestDir ./googletest-master)
#Add the google test subdirectory
add_subdirectory(${googleTestDir})
#include googletest/include dir
include_directories(${googleTestDir}/googletest/include)
#include the googlemock/include dir
include_directories(${googleTestDir}/googlemock/include)

# Link with GoogleTest
target_link_libraries(Ormuco gtest gtest_main)
#Link with GoogleMock
target_link_libraries(Ormuco gmock gmock_main)