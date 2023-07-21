cmake_minimum_required(VERSION 3.16.3)

project(img-in)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

add_subdirectory(img-in)

if(CMAKE_BUILD_TYPE MATCHES "Debug")
    include(FetchGtest)
    add_subdirectory(tests)
endif()
