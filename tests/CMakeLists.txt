include(AddUnitTest)

include_directories(${PROJECT_SOURCE_DIR}/img-in)

add_ut(TestImage TestImage.cpp ${PROJECT_NAME})

enable_testing()