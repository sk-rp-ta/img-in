#pragma once

#include "detail/if/IConfigFactory.hpp"
#include "detail/if/IImage.hpp"
#include "detail/if/IFilesystem.hpp"

#include <filesystem>
#include <memory>

namespace imgin
{

class Image
{
public:
    using Config = std::unique_ptr<interface::IConfigFactory>;

    Image() = default;
    Image(const std::filesystem::path, Config);
    void load(const std::filesystem::path, Config);
private:
    std::unique_ptr<interface::IFilesystem> filesystem;
    std::unique_ptr<interface::IImage> image;
};

}