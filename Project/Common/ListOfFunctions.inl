////////////////////////////////////////////////////////////////////////////////
// Copyright 2018 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License.  You may obtain a copy
// of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
// License for the specific language governing permissions and limitations
// under the License.
////////////////////////////////////////////////////////////////////////////////

// ************************************************************ //
// Exported functions                                           //
//                                                              //
// These functions are always exposed by vulkan libraries.      //
// ************************************************************ //

#if !defined(VK_EXPORTED_FUNCTION)
#define VK_EXPORTED_FUNCTION( fun )
#endif

VK_EXPORTED_FUNCTION( vkGetInstanceProcAddr )

#undef VK_EXPORTED_FUNCTION


// ************************************************************ //
// Global level functions                                       //
//                                                              //
// They allow checking what instance extensions are available   //
// and allow creation of a Vulkan Instance.                     //
// ************************************************************ //

#if !defined(VK_GLOBAL_LEVEL_FUNCTION)
#define VK_GLOBAL_LEVEL_FUNCTION( fun, ver )
#endif

VK_GLOBAL_LEVEL_FUNCTION( vkCreateInstance, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_GLOBAL_LEVEL_FUNCTION( vkEnumerateInstanceExtensionProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_GLOBAL_LEVEL_FUNCTION( vkEnumerateInstanceLayerProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_GLOBAL_LEVEL_FUNCTION( vkEnumerateInstanceVersion, VK_MAKE_VERSION( 1, 1, 0 ) )

#undef VK_GLOBAL_LEVEL_FUNCTION


// ************************************************************ //
// Instance level functions                                     //
//                                                              //
// These functions allow for device queries and creation.       //
// They help choose which device is well suited for our needs.  //
// ************************************************************ //

#if !defined(VK_INSTANCE_LEVEL_FUNCTION)
#define VK_INSTANCE_LEVEL_FUNCTION( fun, ver )
#endif

// API Version 1.0
VK_INSTANCE_LEVEL_FUNCTION( vkEnumeratePhysicalDevices, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkEnumerateDeviceExtensionProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkEnumerateDeviceLayerProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceFeatures, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceQueueFamilyProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceMemoryProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceFormatProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceImageFormatProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceSparseImageFormatProperties, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkCreateDevice, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetDeviceProcAddr, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkDestroyInstance, VK_MAKE_VERSION( 1, 0, 0 ) )

// API Version 1.1
VK_INSTANCE_LEVEL_FUNCTION( vkEnumeratePhysicalDeviceGroups, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceExternalBufferProperties, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceExternalFenceProperties, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceExternalSemaphoreProperties, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceFeatures2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceFormatProperties2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceImageFormatProperties2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceMemoryProperties2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceProperties2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceQueueFamilyProperties2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceSparseImageFormatProperties2, VK_MAKE_VERSION( 1, 1, 0 ) )

#undef VK_INSTANCE_LEVEL_FUNCTION

#if !defined(VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION)
#define VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( fun, ext )
#endif

VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkEnumeratePhysicalDeviceGroupsKHR, VK_KHR_DEVICE_GROUP_CREATION_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceSurfaceSupportKHR, VK_KHR_SURFACE_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceSurfaceCapabilitiesKHR, VK_KHR_SURFACE_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceSurfaceFormatsKHR, VK_KHR_SURFACE_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceSurfacePresentModesKHR, VK_KHR_SURFACE_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkDestroySurfaceKHR, VK_KHR_SURFACE_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateDisplayModeKHR, VK_KHR_DISPLAY_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateDisplayPlaneSurfaceKHR, VK_KHR_DISPLAY_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetDisplayModePropertiesKHR, VK_KHR_DISPLAY_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetDisplayPlaneCapabilitiesKHR, VK_KHR_DISPLAY_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetDisplayPlaneSupportedDisplaysKHR, VK_KHR_DISPLAY_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceDisplayPlanePropertiesKHR, VK_KHR_DISPLAY_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceDisplayPropertiesKHR, VK_KHR_DISPLAY_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateDebugReportCallbackEXT, VK_EXT_DEBUG_REPORT_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkDebugReportMessageEXT, VK_EXT_DEBUG_REPORT_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkDestroyDebugReportCallbackEXT, VK_EXT_DEBUG_REPORT_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceExternalBufferPropertiesKHR, VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceExternalFencePropertiesKHR, VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceExternalImageFormatPropertiesNV, VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceExternalSemaphorePropertiesKHR, VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceFeatures2KHR, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceFormatProperties2KHR, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceImageFormatProperties2KHR, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceMemoryProperties2KHR, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceProperties2KHR, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceQueueFamilyProperties2KHR, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceSparseImageFormatProperties2KHR, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceSurfaceCapabilities2EXT, VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceSurfaceCapabilities2KHR, VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceSurfaceFormats2KHR, VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkReleaseDisplayEXT, VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdBeginDebugUtilsLabelEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdEndDebugUtilsLabelEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdInsertDebugUtilsLabelEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateDebugUtilsMessengerEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkDestroyDebugUtilsMessengerEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkQueueBeginDebugUtilsLabelEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkQueueEndDebugUtilsLabelEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkQueueInsertDebugUtilsLabelEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkSetDebugUtilsObjectNameEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkSetDebugUtilsObjectTagEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkSubmitDebugUtilsMessageEXT, VK_EXT_DEBUG_UTILS_EXTENSION_NAME )

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateWin32SurfaceKHR, VK_KHR_WIN32_SURFACE_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceWin32PresentationSupportKHR, VK_KHR_WIN32_SURFACE_EXTENSION_NAME )
#elif defined(VK_USE_PLATFORM_XCB_KHR)
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateXcbSurfaceKHR, VK_KHR_XCB_SURFACE_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceXcbPresentationSupportKHR, VK_KHR_XCB_SURFACE_EXTENSION_NAME )
#elif defined(VK_USE_PLATFORM_XLIB_KHR)
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateXlibSurfaceKHR, VK_KHR_XLIB_SURFACE_EXTENSION_NAME )
VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceXlibPresentationSupportKHR, VK_KHR_XLIB_SURFACE_EXTENSION_NAME )
#endif

#undef VK_INSTANCE_LEVEL_FUNCTION_FROM_EXTENSION


// ************************************************************ //
// Device level functions                                       //
//                                                              //
// These functions are used mainly for drawing                  //
// ************************************************************ //

#if !defined(VK_DEVICE_LEVEL_FUNCTION)
#define VK_DEVICE_LEVEL_FUNCTION( fun, ver )
#endif

// API Version 1.0
VK_DEVICE_LEVEL_FUNCTION( vkGetDeviceQueue, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDeviceWaitIdle, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyDevice, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateSemaphore, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateCommandPool, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkAllocateCommandBuffers, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkBeginCommandBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdPipelineBarrier, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdClearColorImage, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkEndCommandBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkQueueSubmit, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkFreeCommandBuffers, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyCommandPool, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroySemaphore, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateImageView, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateRenderPass, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateFramebuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateShaderModule, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreatePipelineLayout, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateGraphicsPipelines, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBeginRenderPass, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBindPipeline, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdDraw, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdEndRenderPass, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyShaderModule, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyPipelineLayout, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyPipeline, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyRenderPass, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyFramebuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyImageView, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateFence, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetBufferMemoryRequirements, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkAllocateMemory, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkBindBufferMemory, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkMapMemory, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkFlushMappedMemoryRanges, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkUnmapMemory, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetViewport, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetScissor, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBindVertexBuffers, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkWaitForFences, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkResetFences, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkFreeMemory, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyFence, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdCopyBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateImage, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetImageMemoryRequirements, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkBindImageMemory, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateSampler, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdCopyBufferToImage, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateDescriptorSetLayout, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateDescriptorPool, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkAllocateDescriptorSets, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkUpdateDescriptorSets, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBindDescriptorSets, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyDescriptorPool, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyDescriptorSetLayout, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroySampler, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyImage, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBindIndexBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdPushConstants, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdDrawIndexed, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkResetCommandPool, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkFreeDescriptorSets, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBeginQuery, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBlitImage, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdClearAttachments, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdClearDepthStencilImage, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdCopyImage, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdCopyImageToBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdCopyQueryPoolResults, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdDispatch, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdDispatchIndirect, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdDrawIndexedIndirect, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdDrawIndirect, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdEndQuery, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdExecuteCommands, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdFillBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdNextSubpass, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdResetEvent, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdResetQueryPool, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdResolveImage, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetBlendConstants, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetDepthBias, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetDepthBounds, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetEvent, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetLineWidth, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetStencilCompareMask, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetStencilReference, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetStencilWriteMask, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdUpdateBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdWaitEvents, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdWriteTimestamp, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateBufferView, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateComputePipelines, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateEvent, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreatePipelineCache, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateQueryPool, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyBufferView, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyEvent, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyPipelineCache, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyQueryPool, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetDeviceMemoryCommitment, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetEventStatus, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetFenceStatus, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetImageSparseMemoryRequirements, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetImageSubresourceLayout, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetPipelineCacheData, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetQueryPoolResults, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetRenderAreaGranularity, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkInvalidateMappedMemoryRanges, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkMergePipelineCaches, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkQueueBindSparse, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkQueueWaitIdle, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkResetCommandBuffer, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkResetDescriptorPool, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkResetEvent, VK_MAKE_VERSION( 1, 0, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkSetEvent, VK_MAKE_VERSION( 1, 0, 0 ) )

// API Version 1.1
VK_DEVICE_LEVEL_FUNCTION( vkBindBufferMemory2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkBindImageMemory2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdDispatchBase, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetDeviceMask, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateDescriptorUpdateTemplate, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkCreateSamplerYcbcrConversion, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyDescriptorUpdateTemplate, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkDestroySamplerYcbcrConversion, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetBufferMemoryRequirements2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetDescriptorSetLayoutSupport, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetDeviceGroupPeerMemoryFeatures, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetDeviceQueue2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetImageMemoryRequirements2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkGetImageSparseMemoryRequirements2, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkTrimCommandPool, VK_MAKE_VERSION( 1, 1, 0 ) )
VK_DEVICE_LEVEL_FUNCTION( vkUpdateDescriptorSetWithTemplate, VK_MAKE_VERSION( 1, 1, 0 ) )

#undef VK_DEVICE_LEVEL_FUNCTION

#if !defined(VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION)
#define VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( fun, ext )
#endif

VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateSwapchainKHR, VK_KHR_SWAPCHAIN_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetSwapchainImagesKHR, VK_KHR_SWAPCHAIN_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkAcquireNextImageKHR, VK_KHR_SWAPCHAIN_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkQueuePresentKHR, VK_KHR_SWAPCHAIN_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkDestroySwapchainKHR, VK_KHR_SWAPCHAIN_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkBindBufferMemory2KHR, VK_KHR_BIND_MEMORY_2_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkBindImageMemory2KHR, VK_KHR_BIND_MEMORY_2_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdDebugMarkerBeginEXT, VK_EXT_DEBUG_MARKER_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdDebugMarkerEndEXT, VK_EXT_DEBUG_MARKER_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdDebugMarkerInsertEXT, VK_EXT_DEBUG_MARKER_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkDebugMarkerSetObjectNameEXT, VK_EXT_DEBUG_MARKER_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkDebugMarkerSetObjectTagEXT, VK_EXT_DEBUG_MARKER_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdDispatchBaseKHR, VK_KHR_DEVICE_GROUP_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdSetDeviceMaskKHR, VK_KHR_DEVICE_GROUP_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetDeviceGroupPeerMemoryFeaturesKHR, VK_KHR_DEVICE_GROUP_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetDeviceGroupPresentCapabilitiesKHR, VK_KHR_DEVICE_GROUP_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetDeviceGroupSurfacePresentModesKHR, VK_KHR_DEVICE_GROUP_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDevicePresentRectanglesKHR, VK_KHR_DEVICE_GROUP_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkAcquireNextImage2KHR, VK_KHR_DEVICE_GROUP_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdDrawIndexedIndirectCountAMD, VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdDrawIndirectCountAMD, VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdProcessCommandsNVX, VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdReserveSpaceForCommandsNVX, VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateIndirectCommandsLayoutNVX, VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateObjectTableNVX, VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkDestroyIndirectCommandsLayoutNVX, VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkDestroyObjectTableNVX, VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX, VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkRegisterObjectsNVX, VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkUnregisterObjectsNVX, VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdPushDescriptorSetKHR, VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdPushDescriptorSetWithTemplateKHR, VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdSetDiscardRectangleEXT, VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdSetSampleLocationsEXT, VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPhysicalDeviceMultisamplePropertiesEXT, VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdSetViewportWScalingNV, VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCmdWriteBufferMarkerAMD, VK_AMD_BUFFER_MARKER_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateDescriptorUpdateTemplateKHR, VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkDestroyDescriptorUpdateTemplateKHR, VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkUpdateDescriptorSetWithTemplateKHR, VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateSamplerYcbcrConversionKHR, VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkDestroySamplerYcbcrConversionKHR, VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateSharedSwapchainsKHR, VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkCreateValidationCacheEXT, VK_EXT_VALIDATION_CACHE_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkDestroyValidationCacheEXT, VK_EXT_VALIDATION_CACHE_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetValidationCacheDataEXT, VK_EXT_VALIDATION_CACHE_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkMergeValidationCachesEXT, VK_EXT_VALIDATION_CACHE_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkDisplayPowerControlEXT, VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetSwapchainCounterEXT, VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkRegisterDeviceEventEXT, VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkRegisterDisplayEventEXT, VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetBufferMemoryRequirements2KHR, VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetImageMemoryRequirements2KHR, VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetImageSparseMemoryRequirements2KHR, VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetDescriptorSetLayoutSupportKHR, VK_KHR_MAINTENANCE3_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetMemoryFdKHR, VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetMemoryFdPropertiesKHR, VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetMemoryHostPointerPropertiesEXT, VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetPastPresentationTimingGOOGLE, VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetRefreshCycleDurationGOOGLE, VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetFenceFdKHR, VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkImportFenceFdKHR, VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkImportSemaphoreFdKHR, VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetSemaphoreFdKHR, VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkTrimCommandPoolKHR, VK_KHR_MAINTENANCE1_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetSwapchainStatusKHR, VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetShaderInfoAMD, VK_AMD_SHADER_INFO_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkSetHdrMetadataEXT, VK_EXT_HDR_METADATA_EXTENSION_NAME )

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetMemoryWin32HandleKHR, VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetMemoryWin32HandlePropertiesKHR, VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetFenceWin32HandleKHR, VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkImportFenceWin32HandleKHR, VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkImportSemaphoreWin32HandleKHR, VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME )
VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION( vkGetSemaphoreWin32HandleKHR, VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME )
#endif

#undef VK_DEVICE_LEVEL_FUNCTION_FROM_EXTENSION