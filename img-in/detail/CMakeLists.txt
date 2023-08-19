include_directories(inc)
include_directories(if)

add_library(FilesystemWrapper OBJECT src/FilesystemWrapper.cpp)
add_library(ConfigFactory OBJECT src/ConfigFactory.cpp)

add_library(detail STATIC
    $<TARGET_OBJECTS:FilesystemWrapper>
    $<TARGET_OBJECTS:ConfigFactory>
)

#target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)