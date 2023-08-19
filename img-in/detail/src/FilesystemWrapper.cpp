#include "../inc/FilesystemWrapper.hpp"

namespace imgin::detail
{

bool FilesystemWrapper::exists(const std::filesystem::path path)
{
    return std::filesystem::exists(path);
};

} // namespace imgin::detail