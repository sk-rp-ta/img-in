add_subdirectory(detail)

add_library(Image OBJECT Image.cpp)

add_library(${PROJECT_NAME} STATIC Image.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE detail)
