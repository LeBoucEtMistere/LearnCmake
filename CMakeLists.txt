cmake_minimum_required(VERSION 3.2)

project(LearnCMake)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE})

SET(CMAKE_CXX_FLAGS_RELEASE "-O3")
SET(CMAKE_CXX_FLAGS_DEBUG "-Wall")

if($ENV{TRAVIS})
    if($ENV{TRAVIS} STREQUAL "true")
        message(STATUS "Building on Travis-CI.")
        set(IS_TRAVIS_BUILD TRUE)
    else()
        add_subdirectory(${CMAKE_SOURCE_DIR}/external)
        message(STATUS "Not building on Travis-CI.")
    endif()
else()
	add_subdirectory(${CMAKE_SOURCE_DIR}/external)
    message(STATUS "Not building on Travis-CI.")
endif()
add_subdirectory(${CMAKE_SOURCE_DIR}/src)
add_subdirectory(${CMAKE_SOURCE_DIR}/test)
