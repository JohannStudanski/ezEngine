#include <ThirdParty/enet/enet.h>
#include "Main.h"
#include "Application.h"
#include "Window.h"
#include <Foundation/Logging/ConsoleWriter.h>
#include <Foundation/Logging/VisualStudioWriter.h>
#include <Foundation/Time/Time.h>
#include <Foundation/Configuration/Startup.h>
#include <Foundation/Communication/Telemetry.h>
#include <Foundation/Configuration/Plugin.h>


SampleGameApp::SampleGameApp()
{
  m_bActiveRenderLoop = false;
  m_pWindow = nullptr;
}

void SampleGameApp::AfterEngineInit()
{
  ezTelemetry::CreateServer();

  if (ezPlugin::LoadPlugin("InspectorPlugin") == EZ_SUCCESS)
  {

  }

  // Setup the logging system
  ezLog::AddLogWriter(ezLogWriter::Console::LogMessageHandler);
  ezLog::AddLogWriter(ezLogWriter::VisualStudio::LogMessageHandler);

  // Map the input keys to actions
  SetupInput();

  srand((ezUInt32) ezSystemTime::Now().GetMicroSeconds());

  CreateGameLevel();

  m_pWindow = EZ_DEFAULT_NEW(GameWindow);

  ezStartup::StartupEngine();

  m_bActiveRenderLoop = true;
}

void SampleGameApp::BeforeEngineShutdown()
{
  ezStartup::ShutdownEngine();

  EZ_DEFAULT_DELETE(m_pWindow);

  EZ_DEFAULT_DELETE(m_pThumbstick);
  EZ_DEFAULT_DELETE(m_pThumbstick2);

  DestroyGameLevel();

  ezTelemetry::CloseConnection();
}

ezApplication::ApplicationExecution SampleGameApp::Run()
{
  m_bActiveRenderLoop = (m_pWindow->ProcessWindowMessages() == ezWindow::Continue);

  if(!m_bActiveRenderLoop)
    return ezApplication::Quit;

  RenderSingleFrame();
  m_pWindow->SwapBuffers();
  

  ezTelemetry::PerFrameUpdate();

  Sleep(10);  // still necessary?

  return ezApplication::Continue;
}


EZ_CONSOLEAPP_ENTRY_POINT(SampleGameApp);





