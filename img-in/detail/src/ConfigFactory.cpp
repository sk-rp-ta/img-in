#include "inc/ConfigFactory.hpp"
#include "inc/FilesystemWrapper.hpp"

namespace imgin::detail
{

std::unique_ptr<interface::IFilesystem> ConfigFactory::createFilesystem()
{
    return std::make_unique<FilesystemWrapper>();
};

} // namespace imgin::detail