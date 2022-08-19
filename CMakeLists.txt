cmake_minimum_required(VERSION 3.0.0)
project(billnye)

include(CTest)
enable_testing()

add_executable(billnye main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
endif()
