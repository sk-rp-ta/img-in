#pragma once

#include "../if/IConfigFactory.hpp"

#include <memory>

namespace imgin::detail
{

class ConfigFactory : public interface::IConfigFactory
{
public:
    std::unique_ptr<interface::IFilesystem> createFilesystem();
};

} // namespace imgin::detail