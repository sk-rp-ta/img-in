#include "Image.hpp"

#include "detail/inc/ConfigFactory.hpp"

#include <utility>
#include <system_error>

namespace imgin
{

void Image::load(const std::filesystem::path image, Config factory = std::make_unique<detail::ConfigFactory>())
{
    filesystem = factory->createFilesystem();

    if (not filesystem->exists(image))
    {
        throw std::runtime_error("File does not exist");
    }
};

Image::Image(const std::filesystem::path image, Config factory = std::make_unique<detail::ConfigFactory>())
{
    load(image, std::move(factory));
};

}