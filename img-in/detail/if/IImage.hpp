#pragma once

namespace imgin::interface
{

class IImage
{
public:
    virtual ~IImage() = default;
    virtual void resize() = 0;
};

} // namespace imgin::interface
