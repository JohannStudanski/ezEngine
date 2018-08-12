#include <PCH.h>

EZ_STATICLINK_LIBRARY(RendererFoundation)
{
  if (bReturn)
    return;

  EZ_STATICLINK_REFERENCE(RendererFoundation_Basics);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Context_Implementation_Context);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Context_Implementation_ContextState);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Device_Implementation_Device);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Device_Implementation_DeviceCapabilities);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Device_Implementation_SwapChain);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Profiling_Implementation_GPUStopwatch);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Profiling_Implementation_Profiling);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Resources_Implementation_Buffer);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Resources_Implementation_Fence);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Resources_Implementation_Query);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Resources_Implementation_RenderTargetSetup);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Resources_Implementation_RenderTargetView);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Resources_Implementation_ResourceFormats);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Resources_Implementation_ResourceView);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Resources_Implementation_Texture);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Resources_Implementation_UnorderedAccessView);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Shader_Implementation_Shader);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Shader_Implementation_ShaderByteCode);
  EZ_STATICLINK_REFERENCE(RendererFoundation_Shader_Implementation_VertexDeclaration);
  EZ_STATICLINK_REFERENCE(RendererFoundation_State_Implementation_State);
}
