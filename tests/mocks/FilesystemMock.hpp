#pragma once

#include "../../img-in/detail/if/IFilesystem.hpp"

#include "gmock/gmock.h"

class FilesystemMock : public imgin::interface::IFilesystem
{
public:
    MOCK_METHOD(bool, exists, (const std::filesystem::path&), (override));
};
