#pragma once

#include "../../img-in/detail/if/IConfigFactory.hpp"

#include "gmock/gmock.h"

class ConfigFactoryMock : public imgin::interface::IConfigFactory
{
public:
    MOCK_METHOD0(createFilesystem, std::unique_ptr<imgin::interface::IFilesystem>());
};
