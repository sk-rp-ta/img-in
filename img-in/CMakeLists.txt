add_subdirectory(detail)

add_library(Image OBJECT Image.cpp)

add_library(${PROJECT_NAME} STATIC Image.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE detail)
#target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)