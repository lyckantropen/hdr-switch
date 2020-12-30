#ifndef TOGGLE_H
#define TOGGLE_H

#include <tuple>
#include <vector>

#include "nvapi_deps.h"
#include "include/toggle.h"

namespace core
{
    class ToggleImpl : Toggle
    {

    public:
        NV_HDR_COLOR_DATA setHdrData(bool enabled);
        NV_COLOR_DATA setColorData(COLOR_MODE mode);
        std::vector<NV_GPU_DISPLAYIDS> getHdrDisplayIds();
    };

} // namespace core

#endif