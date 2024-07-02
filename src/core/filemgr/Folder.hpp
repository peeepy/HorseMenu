#pragma once
#include "BaseObj.hpp"

namespace RDONatives
{
    class Folder final : public BaseObj
    {
    public:
        Folder(const std::filesystem::path& folder);

    };
}