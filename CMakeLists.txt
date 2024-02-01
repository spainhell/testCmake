cmake_minimum_required(VERSION 3.17)
project(testCmake)

set(CMAKE_CXX_STANDARD 11)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/)
option(cil "Linux or Windows")

if(cil STREQUAL "Linux")
    set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/Linux)
endif()

if(cil STREQUAL "Windows")
    set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/Windows)
endif()
include_directories(${INCLUDE_DIR})

add_executable(testCmake main.cpp
        ${INCLUDE_DIR}/func.h
        ${INCLUDE_DIR}/func.cpp
)
