#ifndef _G_GPU_HALSPEC_NVOC_H_
#define _G_GPU_HALSPEC_NVOC_H_
#include "nvoc/runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * SPDX-FileCopyrightText: Copyright (c) 2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "g_gpu_halspec_nvoc.h"

#ifndef GPU_HALSPEC_H
#define GPU_HALSPEC_H

#include "g_chips2halspec.h"        // NVOC halspec, generated by rmconfig.pl


// Private field names are wrapped in PRIVATE_FIELD, which does nothing for
// the matching C source file, but causes diagnostics to be issued if another
// source file references the field.
#ifdef NVOC_GPU_HALSPEC_H_PRIVATE_ACCESS_ALLOWED
#define PRIVATE_FIELD(x) x
#else
#define PRIVATE_FIELD(x) NVOC_PRIVATE_FIELD(x)
#endif

struct RmHalspecOwner {
    const struct NVOC_RTTI *__nvoc_rtti;
    struct RmHalspecOwner *__nvoc_pbase_RmHalspecOwner;
    struct ChipHal chipHal;
    struct RmVariantHal rmVariantHal;
    struct TegraChipHal tegraChipHal;
    struct DispIpHal dispIpHal;
};

#ifndef __NVOC_CLASS_RmHalspecOwner_TYPEDEF__
#define __NVOC_CLASS_RmHalspecOwner_TYPEDEF__
typedef struct RmHalspecOwner RmHalspecOwner;
#endif /* __NVOC_CLASS_RmHalspecOwner_TYPEDEF__ */

#ifndef __nvoc_class_id_RmHalspecOwner
#define __nvoc_class_id_RmHalspecOwner 0x34a6d6
#endif /* __nvoc_class_id_RmHalspecOwner */

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmHalspecOwner;

#define __staticCast_RmHalspecOwner(pThis) \
    ((pThis)->__nvoc_pbase_RmHalspecOwner)

#ifdef __nvoc_gpu_halspec_h_disabled
#define __dynamicCast_RmHalspecOwner(pThis) ((RmHalspecOwner*)NULL)
#else //__nvoc_gpu_halspec_h_disabled
#define __dynamicCast_RmHalspecOwner(pThis) \
    ((RmHalspecOwner*)__nvoc_dynamicCast(staticCast((pThis), Dynamic), classInfo(RmHalspecOwner)))
#endif //__nvoc_gpu_halspec_h_disabled


NV_STATUS __nvoc_objCreateDynamic_RmHalspecOwner(RmHalspecOwner**, Dynamic*, NvU32, va_list);

NV_STATUS __nvoc_objCreate_RmHalspecOwner(RmHalspecOwner**, Dynamic*, NvU32,
        NvU32 ChipHal_arch, NvU32 ChipHal_impl, NvU32 ChipHal_hidrev,
        RM_RUNTIME_VARIANT RmVariantHal_rmVariant,
        TEGRA_CHIP_TYPE TegraChipHal_tegraType,
        NvU32 DispIpHal_ipver);
#define __objCreate_RmHalspecOwner(ppNewObj, pParent, createFlags, ChipHal_arch, ChipHal_impl, ChipHal_hidrev, RmVariantHal_rmVariant, TegraChipHal_tegraType, DispIpHal_ipver) \
    __nvoc_objCreate_RmHalspecOwner((ppNewObj), staticCast((pParent), Dynamic), (createFlags), ChipHal_arch, ChipHal_impl, ChipHal_hidrev, RmVariantHal_rmVariant, TegraChipHal_tegraType, DispIpHal_ipver)

#undef PRIVATE_FIELD


#endif // GPU_HALSPEC_H

#ifdef __cplusplus
} // extern "C"
#endif

#endif // _G_GPU_HALSPEC_NVOC_H_
