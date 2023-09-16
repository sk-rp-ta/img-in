#pragma once

#include <filesystem>

namespace imgin::interface
{

class IFilesystem
{
public:
    virtual ~IFilesystem() = default;
    virtual bool exists(const std::filesystem::path&) = 0;
};

} // namespace imgin::interface
