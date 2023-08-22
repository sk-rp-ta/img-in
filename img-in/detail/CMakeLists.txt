include_directories(inc)
include_directories(if)

file(GLOB sources src/*.cpp)
add_library(detail ${sources})
target_include_directories(detail PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${PROJECT_SOURCE_DIR}/img-in/detail)
