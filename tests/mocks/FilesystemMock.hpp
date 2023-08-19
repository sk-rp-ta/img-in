#pragma once

#include "../../img-in/detail/if/IFilesystem.hpp"

#include "gmock/gmock.h"

class FilesystemMock : public imgin::interface::IFilesystem
{
public:
    MOCK_METHOD1(exists, bool(const std::filesystem::path));
};
