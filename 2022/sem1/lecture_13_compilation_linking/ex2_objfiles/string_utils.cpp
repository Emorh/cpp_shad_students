#include "string_utils.h"

#include "convert.h"

#include <cstdio>

namespace string_utils
{
    void mul(const char* const a1, const char* const a2) noexcept
    {
        const int x2 = convert_to_int(a2);
        for (int i = 0; i < x2; ++i)
            std::puts(a1);
    }
}  // namespace string_utils

