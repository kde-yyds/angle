#ifndef _VKTCOMPUTEBASICCOMPUTESHADERTESTS_HPP
#define _VKTCOMPUTEBASICCOMPUTESHADERTESTS_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2016 The Khronos Group Inc.
 * Copyright (c) 2023 LunarG, Inc.
 * Copyright (c) 2023 Nintendo
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *//*!
 * \file
 * \brief Compute Shader Tests
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "vktTestCase.hpp"
#include "vkComputePipelineConstructionUtil.hpp"

namespace vkt
{
namespace compute
{

tcu::TestCaseGroup* createBasicComputeShaderTests (tcu::TestContext& testCtx, vk::ComputePipelineConstructionType computePipelineConstructionType);
tcu::TestCaseGroup* createBasicDeviceGroupComputeShaderTests (tcu::TestContext& testCtx, vk::ComputePipelineConstructionType computePipelineConstructionType);

} // compute
} // vkt

#endif // _VKTCOMPUTEBASICCOMPUTESHADERTESTS_HPP