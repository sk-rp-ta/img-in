#pragma once

#include "interfaces/IImage.hpp"

#include <filesystem>
#include <memory>

namespace imgin
{

class Image
{
public:
    Image();
    Image(std::filesystem::path&&);
private:
    std::unique_ptr<IImage> image_;
};

}