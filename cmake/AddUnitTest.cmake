include(GoogleTest)

function(add_ut UT_NAME FILE LIBRARIES)
    add_executable(${UT_NAME} ${FILE})

    target_link_libraries(${UT_NAME}
        PRIVATE
        GTest::gtest_main
        ${LIBRARIES})

    gtest_discover_tests(${UT_NAME})
endfunction()
