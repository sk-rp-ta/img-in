#include "gtest/gtest.h"

#include "Image.hpp"

TEST(TestImage, expectThrowOnMissingFile)
{
    EXPECT_THROW(
    {
        try
        {
            imgin::Image("./missingFile.png");
        }
        catch (const std::runtime_error& error)
        {
            EXPECT_STREQ(error.what(), "File does not exist");
            throw;
        }

    }, std::runtime_error);
}