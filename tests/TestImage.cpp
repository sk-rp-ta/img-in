#include "../img-in/Image.hpp"

#include "mocks/FilesystemMock.hpp"
#include "mocks/ConfigFactoryMock.hpp"

#include "gtest/gtest.h"

using namespace testing;
using namespace imgin;


class TestImage : public Test
{
public:
    using StrictFilesystemMock = StrictMock<FilesystemMock>;
    using StrictConfigMock = StrictMock<ConfigFactoryMock>;

    void SetUp()
    {
        EXPECT_CALL(*configMockPtr, createFilesystem()).WillOnce(Return(std::move(filesystemMock)));
    };

    std::unique_ptr<StrictFilesystemMock> filesystemMock = std::make_unique<StrictFilesystemMock>();
    StrictFilesystemMock* filesystemMockPtr = filesystemMock.get();

    std::unique_ptr<StrictConfigMock> configMock = std::make_unique<StrictConfigMock>();
    StrictConfigMock* configMockPtr = configMock.get();
};

TEST_F(TestImage, expectThrowOnMissingFile)
{
    std::filesystem::path path = "./missingFile.png";

    EXPECT_CALL(*filesystemMockPtr, exists(_)).WillOnce(Return(false));

    EXPECT_THROW(
    {
        try
        {
            imgin::Image(path, std::move(configMock));
        }
        catch (const std::runtime_error& error)
        {
            EXPECT_STREQ(error.what(), "File does not exist");
            throw;
        }

    }, std::runtime_error);
}