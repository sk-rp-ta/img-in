#include "Image.hpp"

#include "detail/inc/ConfigFactory.hpp"

#include <utility>
#include <system_error>

namespace imgin
{

void Image::load(const std::filesystem::path& imagePath, Config factory = std::make_unique<detail::ConfigFactory>())
{
    filesystem = factory->createFilesystem();

    if (not filesystem->exists(imagePath))
    {
        throw std::runtime_error("File " + imagePath.string() + " does not exist");
    }
};

Image::Image(const std::filesystem::path& imagePath, Config factory = std::make_unique<detail::ConfigFactory>())
{
    load(imagePath, std::move(factory));
};

}