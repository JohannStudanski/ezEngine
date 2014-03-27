#include <Foundation/PCH.h>

EZ_STATICLINK_LIBRARY(Foundation)
{
  if(bReturn)
    return;

  EZ_STATICLINK_REFERENCE(Foundation_Algorithm_Implementation_Hashing);
  EZ_STATICLINK_REFERENCE(Foundation_Basics_Assert);
  EZ_STATICLINK_REFERENCE(Foundation_Basics_Basics);
  EZ_STATICLINK_REFERENCE(Foundation_Basics_IncludeAll);
  EZ_STATICLINK_REFERENCE(Foundation_Basics_Types_Implementation_Variant);
  EZ_STATICLINK_REFERENCE(Foundation_Communication_Implementation_GlobalEvent);
  EZ_STATICLINK_REFERENCE(Foundation_Communication_Implementation_Message);
  EZ_STATICLINK_REFERENCE(Foundation_Communication_Implementation_Telemetry);
  EZ_STATICLINK_REFERENCE(Foundation_Communication_Implementation_TelemetryHelpers);
  EZ_STATICLINK_REFERENCE(Foundation_Communication_Implementation_TelemetryMessage);
  EZ_STATICLINK_REFERENCE(Foundation_Communication_Implementation_TelemetryThread);
  EZ_STATICLINK_REFERENCE(Foundation_Configuration_Implementation_CVar);
  EZ_STATICLINK_REFERENCE(Foundation_Configuration_Implementation_Plugin);
  EZ_STATICLINK_REFERENCE(Foundation_Configuration_Implementation_ReloadableVariable);
  EZ_STATICLINK_REFERENCE(Foundation_Configuration_Implementation_Startup);
  EZ_STATICLINK_REFERENCE(Foundation_IO_FileSystem_Implementation_DataDirType);
  EZ_STATICLINK_REFERENCE(Foundation_IO_FileSystem_Implementation_DataDirTypeFolder);
  EZ_STATICLINK_REFERENCE(Foundation_IO_FileSystem_Implementation_FileReader);
  EZ_STATICLINK_REFERENCE(Foundation_IO_FileSystem_Implementation_FileSystem);
  EZ_STATICLINK_REFERENCE(Foundation_IO_FileSystem_Implementation_FileWriter);
  EZ_STATICLINK_REFERENCE(Foundation_IO_Implementation_BinaryStreamOperationsOther);
  EZ_STATICLINK_REFERENCE(Foundation_IO_Implementation_CompressedStream);
  EZ_STATICLINK_REFERENCE(Foundation_IO_Implementation_ExtendedJSONWriter);
  EZ_STATICLINK_REFERENCE(Foundation_IO_Implementation_JSONWriter);
  EZ_STATICLINK_REFERENCE(Foundation_IO_Implementation_MemoryStream);
  EZ_STATICLINK_REFERENCE(Foundation_IO_Implementation_OSFile);
  EZ_STATICLINK_REFERENCE(Foundation_IO_Implementation_StandardJSONWriter);
  EZ_STATICLINK_REFERENCE(Foundation_Logging_Implementation_ConsoleWriter);
  EZ_STATICLINK_REFERENCE(Foundation_Logging_Implementation_HTMLWriter);
  EZ_STATICLINK_REFERENCE(Foundation_Logging_Implementation_Log);
  EZ_STATICLINK_REFERENCE(Foundation_Logging_Implementation_VisualStudioWriter);
  EZ_STATICLINK_REFERENCE(Foundation_Math_Implementation_Float16);
  EZ_STATICLINK_REFERENCE(Foundation_Math_Implementation_Frustum);
  EZ_STATICLINK_REFERENCE(Foundation_Math_Implementation_Math);
  EZ_STATICLINK_REFERENCE(Foundation_Memory_Implementation_AllocatorWrapper);
  EZ_STATICLINK_REFERENCE(Foundation_Memory_Implementation_EndianHelper);
  EZ_STATICLINK_REFERENCE(Foundation_Memory_Implementation_LargeBlockAllocator);
  EZ_STATICLINK_REFERENCE(Foundation_Memory_Implementation_MemoryTracker);
  EZ_STATICLINK_REFERENCE(Foundation_Memory_Implementation_MemoryUtils);
  EZ_STATICLINK_REFERENCE(Foundation_Memory_Implementation_PageAllocator);
  EZ_STATICLINK_REFERENCE(Foundation_Profiling_Implementation_Profiling);
  EZ_STATICLINK_REFERENCE(Foundation_Reflection_Implementation_RTTI);
  EZ_STATICLINK_REFERENCE(Foundation_Reflection_Implementation_StandardTypes);
  EZ_STATICLINK_REFERENCE(Foundation_Strings_Implementation_HashedString);
  EZ_STATICLINK_REFERENCE(Foundation_Strings_Implementation_PathUtils);
  EZ_STATICLINK_REFERENCE(Foundation_Strings_Implementation_StringBuilder);
  EZ_STATICLINK_REFERENCE(Foundation_Strings_Implementation_StringConversion);
  EZ_STATICLINK_REFERENCE(Foundation_Strings_Implementation_StringUtils);
  EZ_STATICLINK_REFERENCE(Foundation_Strings_Implementation_snprintf);
  EZ_STATICLINK_REFERENCE(Foundation_System_Implementation_SystemInformation);
  EZ_STATICLINK_REFERENCE(Foundation_Threading_Implementation_OSThread);
  EZ_STATICLINK_REFERENCE(Foundation_Threading_Implementation_TaskGroups);
  EZ_STATICLINK_REFERENCE(Foundation_Threading_Implementation_TaskSystem);
  EZ_STATICLINK_REFERENCE(Foundation_Threading_Implementation_TaskWorkers);
  EZ_STATICLINK_REFERENCE(Foundation_Threading_Implementation_Tasks);
  EZ_STATICLINK_REFERENCE(Foundation_Threading_Implementation_Thread);
  EZ_STATICLINK_REFERENCE(Foundation_Threading_Implementation_ThreadLocalStorage);
  EZ_STATICLINK_REFERENCE(Foundation_Threading_Implementation_ThreadSignal);
  EZ_STATICLINK_REFERENCE(Foundation_Threading_Implementation_ThreadUtils);
  EZ_STATICLINK_REFERENCE(Foundation_Time_Implementation_Clock);
  EZ_STATICLINK_REFERENCE(Foundation_Time_Implementation_DefaultTimeStepSmoothing);
  EZ_STATICLINK_REFERENCE(Foundation_Time_Implementation_Stopwatch);
  EZ_STATICLINK_REFERENCE(Foundation_Time_Implementation_Time);
  EZ_STATICLINK_REFERENCE(Foundation_Time_Implementation_Timestamp);
  EZ_STATICLINK_REFERENCE(Foundation_Utilities_Implementation_CommandLineUtils);
  EZ_STATICLINK_REFERENCE(Foundation_Utilities_Implementation_ConversionUtils);
  EZ_STATICLINK_REFERENCE(Foundation_Utilities_Implementation_GraphicsUtils);
  EZ_STATICLINK_REFERENCE(Foundation_Utilities_Implementation_StackTracer);
  EZ_STATICLINK_REFERENCE(Foundation_Utilities_Implementation_Stats);
}

