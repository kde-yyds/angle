/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 * This file was generated by /scripts/gen_framework.py
 */

virtual PFN_vkVoidFunction	getDeviceProcAddr						(VkDevice device, const char* pName) const = 0;
virtual void				destroyDevice							(VkDevice device, const VkAllocationCallbacks* pAllocator) const = 0;
virtual void				getDeviceQueue							(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) const = 0;
virtual VkResult			queueSubmit								(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) const = 0;
virtual VkResult			queueWaitIdle							(VkQueue queue) const = 0;
virtual VkResult			deviceWaitIdle							(VkDevice device) const = 0;
virtual VkResult			allocateMemory							(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) const = 0;
virtual VkResult			mapMemory								(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) const = 0;
virtual void				unmapMemory								(VkDevice device, VkDeviceMemory memory) const = 0;
virtual VkResult			flushMappedMemoryRanges					(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) const = 0;
virtual VkResult			invalidateMappedMemoryRanges			(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) const = 0;
virtual void				getDeviceMemoryCommitment				(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) const = 0;
virtual void				getBufferMemoryRequirements				(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) const = 0;
virtual VkResult			bindBufferMemory						(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) const = 0;
virtual void				getImageMemoryRequirements				(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements) const = 0;
virtual VkResult			bindImageMemory							(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) const = 0;
virtual VkResult			createFence								(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const = 0;
virtual void				destroyFence							(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			resetFences								(VkDevice device, uint32_t fenceCount, const VkFence* pFences) const = 0;
virtual VkResult			getFenceStatus							(VkDevice device, VkFence fence) const = 0;
virtual VkResult			waitForFences							(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout) const = 0;
virtual VkResult			createSemaphore							(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) const = 0;
virtual void				destroySemaphore						(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createEvent								(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) const = 0;
virtual void				destroyEvent							(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			getEventStatus							(VkDevice device, VkEvent event) const = 0;
virtual VkResult			setEvent								(VkDevice device, VkEvent event) const = 0;
virtual VkResult			resetEvent								(VkDevice device, VkEvent event) const = 0;
virtual VkResult			createQueryPool							(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) const = 0;
virtual VkResult			getQueryPoolResults						(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags) const = 0;
virtual void				resetQueryPool							(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) const = 0;
virtual VkResult			createBuffer							(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) const = 0;
virtual void				destroyBuffer							(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createBufferView						(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView) const = 0;
virtual void				destroyBufferView						(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createImage								(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) const = 0;
virtual void				destroyImage							(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) const = 0;
virtual void				getImageSubresourceLayout				(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) const = 0;
virtual VkResult			createImageView							(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView) const = 0;
virtual void				destroyImageView						(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createPipelineCache						(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache) const = 0;
virtual void				destroyPipelineCache					(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createGraphicsPipelines					(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) const = 0;
virtual VkResult			createComputePipelines					(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) const = 0;
virtual void				destroyPipeline							(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createPipelineLayout					(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout) const = 0;
virtual void				destroyPipelineLayout					(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createSampler							(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) const = 0;
virtual void				destroySampler							(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createDescriptorSetLayout				(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) const = 0;
virtual void				destroyDescriptorSetLayout				(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createDescriptorPool					(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool) const = 0;
virtual VkResult			resetDescriptorPool						(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) const = 0;
virtual VkResult			allocateDescriptorSets					(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) const = 0;
virtual VkResult			freeDescriptorSets						(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets) const = 0;
virtual void				updateDescriptorSets					(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies) const = 0;
virtual VkResult			createFramebuffer						(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer) const = 0;
virtual void				destroyFramebuffer						(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult			createRenderPass						(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) const = 0;
virtual void				destroyRenderPass						(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) const = 0;
virtual void				getRenderAreaGranularity				(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity) const = 0;
virtual VkResult			createCommandPool						(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool) const = 0;
virtual VkResult			resetCommandPool						(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) const = 0;
virtual VkResult			allocateCommandBuffers					(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) const = 0;
virtual void				freeCommandBuffers						(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) const = 0;
virtual VkResult			beginCommandBuffer						(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) const = 0;
virtual VkResult			endCommandBuffer						(VkCommandBuffer commandBuffer) const = 0;
virtual VkResult			resetCommandBuffer						(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) const = 0;
virtual void				cmdBindPipeline							(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) const = 0;
virtual void				cmdSetViewport							(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports) const = 0;
virtual void				cmdSetScissor							(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors) const = 0;
virtual void				cmdSetLineWidth							(VkCommandBuffer commandBuffer, float lineWidth) const = 0;
virtual void				cmdSetDepthBias							(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) const = 0;
virtual void				cmdSetBlendConstants					(VkCommandBuffer commandBuffer, const float blendConstants[4]) const = 0;
virtual void				cmdSetDepthBounds						(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) const = 0;
virtual void				cmdSetStencilCompareMask				(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) const = 0;
virtual void				cmdSetStencilWriteMask					(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) const = 0;
virtual void				cmdSetStencilReference					(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) const = 0;
virtual void				cmdBindDescriptorSets					(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets) const = 0;
virtual void				cmdBindIndexBuffer						(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) const = 0;
virtual void				cmdBindVertexBuffers					(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) const = 0;
virtual void				cmdDraw									(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) const = 0;
virtual void				cmdDrawIndexed							(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) const = 0;
virtual void				cmdDrawIndirect							(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) const = 0;
virtual void				cmdDrawIndexedIndirect					(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) const = 0;
virtual void				cmdDispatch								(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) const = 0;
virtual void				cmdDispatchIndirect						(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) const = 0;
virtual void				cmdCopyBuffer							(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions) const = 0;
virtual void				cmdCopyImage							(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions) const = 0;
virtual void				cmdBlitImage							(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter) const = 0;
virtual void				cmdCopyBufferToImage					(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions) const = 0;
virtual void				cmdCopyImageToBuffer					(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions) const = 0;
virtual void				cmdUpdateBuffer							(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) const = 0;
virtual void				cmdFillBuffer							(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) const = 0;
virtual void				cmdClearColorImage						(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) const = 0;
virtual void				cmdClearDepthStencilImage				(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) const = 0;
virtual void				cmdClearAttachments						(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects) const = 0;
virtual void				cmdResolveImage							(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions) const = 0;
virtual void				cmdSetEvent								(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const = 0;
virtual void				cmdResetEvent							(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const = 0;
virtual void				cmdWaitEvents							(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) const = 0;
virtual void				cmdPipelineBarrier						(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) const = 0;
virtual void				cmdBeginQuery							(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) const = 0;
virtual void				cmdEndQuery								(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) const = 0;
virtual void				cmdResetQueryPool						(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) const = 0;
virtual void				cmdWriteTimestamp						(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) const = 0;
virtual void				cmdCopyQueryPoolResults					(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) const = 0;
virtual void				cmdPushConstants						(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues) const = 0;
virtual void				cmdBeginRenderPass						(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) const = 0;
virtual void				cmdNextSubpass							(VkCommandBuffer commandBuffer, VkSubpassContents contents) const = 0;
virtual void				cmdEndRenderPass						(VkCommandBuffer commandBuffer) const = 0;
virtual void				cmdExecuteCommands						(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) const = 0;
virtual VkResult			createSharedSwapchainsKHR				(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) const = 0;
virtual VkResult			createSwapchainKHR						(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) const = 0;
virtual VkResult			getSwapchainImagesKHR					(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages) const = 0;
virtual VkResult			acquireNextImageKHR						(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex) const = 0;
virtual VkResult			queuePresentKHR							(VkQueue queue, const VkPresentInfoKHR* pPresentInfo) const = 0;
virtual VkResult			getMemoryFdKHR							(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) const = 0;
virtual VkResult			getMemoryFdPropertiesKHR				(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties) const = 0;
virtual VkResult			getMemorySciBufNV						(VkDevice device, const VkMemoryGetSciBufInfoNV* pGetSciBufInfo, pt::NvSciBufObj* pHandle) const = 0;
virtual VkResult			getSemaphoreFdKHR						(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) const = 0;
virtual VkResult			importSemaphoreFdKHR					(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) const = 0;
virtual VkResult			getFenceFdKHR							(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) const = 0;
virtual VkResult			importFenceFdKHR						(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo) const = 0;
virtual VkResult			getFenceSciSyncFenceNV					(VkDevice device, const VkFenceGetSciSyncInfoNV* pGetSciSyncHandleInfo, void* pHandle) const = 0;
virtual VkResult			getFenceSciSyncObjNV					(VkDevice device, const VkFenceGetSciSyncInfoNV* pGetSciSyncHandleInfo, void* pHandle) const = 0;
virtual VkResult			importFenceSciSyncFenceNV				(VkDevice device, const VkImportFenceSciSyncInfoNV* pImportFenceSciSyncInfo) const = 0;
virtual VkResult			importFenceSciSyncObjNV					(VkDevice device, const VkImportFenceSciSyncInfoNV* pImportFenceSciSyncInfo) const = 0;
virtual VkResult			getSemaphoreSciSyncObjNV				(VkDevice device, const VkSemaphoreGetSciSyncInfoNV* pGetSciSyncInfo, void* pHandle) const = 0;
virtual VkResult			importSemaphoreSciSyncObjNV				(VkDevice device, const VkImportSemaphoreSciSyncInfoNV* pImportSemaphoreSciSyncInfo) const = 0;
virtual VkResult			createSemaphoreSciSyncPoolNV			(VkDevice device, const VkSemaphoreSciSyncPoolCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphoreSciSyncPoolNV* pSemaphorePool) const = 0;
virtual VkResult			displayPowerControlEXT					(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo) const = 0;
virtual VkResult			registerDeviceEventEXT					(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const = 0;
virtual VkResult			registerDisplayEventEXT					(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const = 0;
virtual VkResult			getSwapchainCounterEXT					(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue) const = 0;
virtual void				getDeviceGroupPeerMemoryFeatures		(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) const = 0;
virtual VkResult			bindBufferMemory2						(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) const = 0;
virtual VkResult			bindImageMemory2						(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) const = 0;
virtual void				cmdSetDeviceMask						(VkCommandBuffer commandBuffer, uint32_t deviceMask) const = 0;
virtual VkResult			getDeviceGroupPresentCapabilitiesKHR	(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) const = 0;
virtual VkResult			getDeviceGroupSurfacePresentModesKHR	(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes) const = 0;
virtual VkResult			acquireNextImage2KHR					(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex) const = 0;
virtual void				cmdDispatchBase							(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) const = 0;
virtual void				setHdrMetadataEXT						(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) const = 0;
virtual VkResult			getSwapchainStatusKHR					(VkDevice device, VkSwapchainKHR swapchain) const = 0;
virtual void				cmdSetDiscardRectangleEXT				(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles) const = 0;
virtual void				cmdSetDiscardRectangleEnableEXT			(VkCommandBuffer commandBuffer, VkBool32 discardRectangleEnable) const = 0;
virtual void				cmdSetDiscardRectangleModeEXT			(VkCommandBuffer commandBuffer, VkDiscardRectangleModeEXT discardRectangleMode) const = 0;
virtual void				cmdSetSampleLocationsEXT				(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo) const = 0;
virtual void				getBufferMemoryRequirements2			(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) const = 0;
virtual void				getImageMemoryRequirements2				(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) const = 0;
virtual VkResult			createSamplerYcbcrConversion			(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) const = 0;
virtual void				destroySamplerYcbcrConversion			(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) const = 0;
virtual void				getDeviceQueue2							(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) const = 0;
virtual void				getDescriptorSetLayoutSupport			(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) const = 0;
virtual VkResult			getCalibratedTimestampsEXT				(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation) const = 0;
virtual VkResult			setDebugUtilsObjectNameEXT				(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo) const = 0;
virtual VkResult			setDebugUtilsObjectTagEXT				(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo) const = 0;
virtual void				queueBeginDebugUtilsLabelEXT			(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) const = 0;
virtual void				queueEndDebugUtilsLabelEXT				(VkQueue queue) const = 0;
virtual void				queueInsertDebugUtilsLabelEXT			(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) const = 0;
virtual void				cmdBeginDebugUtilsLabelEXT				(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) const = 0;
virtual void				cmdEndDebugUtilsLabelEXT				(VkCommandBuffer commandBuffer) const = 0;
virtual void				cmdInsertDebugUtilsLabelEXT				(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) const = 0;
virtual VkResult			getMemoryHostPointerPropertiesEXT		(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) const = 0;
virtual VkResult			createRenderPass2						(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) const = 0;
virtual void				cmdBeginRenderPass2						(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo) const = 0;
virtual void				cmdNextSubpass2							(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) const = 0;
virtual void				cmdEndRenderPass2						(VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo) const = 0;
virtual VkResult			getSemaphoreCounterValue				(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) const = 0;
virtual VkResult			waitSemaphores							(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) const = 0;
virtual VkResult			signalSemaphore							(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) const = 0;
virtual void				cmdDrawIndirectCount					(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) const = 0;
virtual void				cmdDrawIndexedIndirectCount				(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) const = 0;
virtual void				cmdSetCheckpointNV						(VkCommandBuffer commandBuffer, const void* pCheckpointMarker) const = 0;
virtual void				getQueueCheckpointDataNV				(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData) const = 0;
virtual VkResult			acquireProfilingLockKHR					(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo) const = 0;
virtual void				releaseProfilingLockKHR					(VkDevice device) const = 0;
virtual VkResult			getImageDrmFormatModifierPropertiesEXT	(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties) const = 0;
virtual uint64_t			getBufferOpaqueCaptureAddress			(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) const = 0;
virtual VkDeviceAddress		getBufferDeviceAddress					(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) const = 0;
virtual uint64_t			getDeviceMemoryOpaqueCaptureAddress		(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) const = 0;
virtual void				cmdSetLineStippleEXT					(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) const = 0;
virtual VkResult			getFaultData							(VkDevice device, VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, uint32_t* pFaultCount, VkFaultData* pFaults) const = 0;
virtual void				cmdSetCullModeEXT						(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) const = 0;
virtual void				cmdSetFrontFaceEXT						(VkCommandBuffer commandBuffer, VkFrontFace frontFace) const = 0;
virtual void				cmdSetPrimitiveTopologyEXT				(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) const = 0;
virtual void				cmdSetViewportWithCountEXT				(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports) const = 0;
virtual void				cmdSetScissorWithCountEXT				(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors) const = 0;
virtual void				cmdBindVertexBuffers2EXT				(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) const = 0;
virtual void				cmdSetDepthTestEnableEXT				(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) const = 0;
virtual void				cmdSetDepthWriteEnableEXT				(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) const = 0;
virtual void				cmdSetDepthCompareOpEXT					(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) const = 0;
virtual void				cmdSetDepthBoundsTestEnableEXT			(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) const = 0;
virtual void				cmdSetStencilTestEnableEXT				(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) const = 0;
virtual void				cmdSetStencilOpEXT						(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) const = 0;
virtual void				cmdSetPatchControlPointsEXT				(VkCommandBuffer commandBuffer, uint32_t patchControlPoints) const = 0;
virtual void				cmdSetRasterizerDiscardEnableEXT		(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) const = 0;
virtual void				cmdSetDepthBiasEnableEXT				(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) const = 0;
virtual void				cmdSetLogicOpEXT						(VkCommandBuffer commandBuffer, VkLogicOp logicOp) const = 0;
virtual void				cmdSetPrimitiveRestartEnableEXT			(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) const = 0;
virtual void				cmdCopyBuffer2KHR						(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo) const = 0;
virtual void				cmdCopyImage2KHR						(VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo) const = 0;
virtual void				cmdBlitImage2KHR						(VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo) const = 0;
virtual void				cmdCopyBufferToImage2KHR				(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo) const = 0;
virtual void				cmdCopyImageToBuffer2KHR				(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo) const = 0;
virtual void				cmdResolveImage2KHR						(VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo) const = 0;
virtual void				cmdRefreshObjectsKHR					(VkCommandBuffer commandBuffer, const VkRefreshObjectListKHR* pRefreshObjects) const = 0;
virtual void				cmdSetFragmentShadingRateKHR			(VkCommandBuffer commandBuffer, const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) const = 0;
virtual void				cmdSetVertexInputEXT					(VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions) const = 0;
virtual void				cmdSetColorWriteEnableEXT				(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkBool32* pColorWriteEnables) const = 0;
virtual void				cmdSetEvent2KHR							(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfoKHR* pDependencyInfo) const = 0;
virtual void				cmdResetEvent2KHR						(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask) const = 0;
virtual void				cmdWaitEvents2KHR						(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfoKHR* pDependencyInfos) const = 0;
virtual void				cmdPipelineBarrier2KHR					(VkCommandBuffer commandBuffer, const VkDependencyInfoKHR* pDependencyInfo) const = 0;
virtual VkResult			queueSubmit2KHR							(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2KHR* pSubmits, VkFence fence) const = 0;
virtual void				cmdWriteTimestamp2KHR					(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) const = 0;
virtual void				getQueueCheckpointData2NV				(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData) const = 0;
virtual void				getCommandPoolMemoryConsumption			(VkDevice device, VkCommandPool commandPool, VkCommandBuffer commandBuffer, VkCommandPoolMemoryConsumption* pConsumption) const = 0;
virtual VkResult			getScreenBufferPropertiesQNX			(VkDevice device, const struct _screen_buffer* buffer, VkScreenBufferPropertiesQNX* pProperties) const = 0;