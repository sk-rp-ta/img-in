#pragma once

class IImage
{
public:
    virtual ~IImage() = default;
    virtual void resize() = 0;
};
