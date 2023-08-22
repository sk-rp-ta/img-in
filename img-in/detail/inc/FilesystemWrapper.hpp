#pragma once

#include "../if/IFilesystem.hpp"

namespace imgin::detail
{

class FilesystemWrapper : public interface::IFilesystem
{
public:
    bool exists(const std::filesystem::path& path) override;
};

} // namespace imgin::detail