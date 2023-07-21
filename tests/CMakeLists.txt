include(AddUnitTest)

include_directories(${PROJECT_SOURCE_DIR}/src)

add_ut(TestImage TestImage.cpp img-in)

enable_testing()