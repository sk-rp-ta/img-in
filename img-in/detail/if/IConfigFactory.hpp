#pragma once

#include "IFilesystem.hpp"

#include <memory>

namespace imgin::interface
{

class IConfigFactory
{
public:
    virtual ~IConfigFactory() = default;
    virtual std::unique_ptr<interface::IFilesystem> createFilesystem() = 0;
};

} // namespace imgin::interface
