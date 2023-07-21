#include "../inc/Image.hpp"

#include <system_error>

namespace imgin
{

Image::Image()
{

}

Image::Image(std::filesystem::path&& image)
{
    if (not std::filesystem::exists(image))
    {
        throw std::runtime_error("File does not exist");
    };
}

}