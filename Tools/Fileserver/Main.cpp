#include <Fileserver/Main.h>
#include <Foundation/IO/FileSystem/FileSystem.h>
#include <Foundation/IO/FileSystem/DataDirTypeFolder.h>
#include <Foundation/IO/FileSystem/FileReader.h>
#include <Foundation/Logging/Log.h>
#include <Foundation/Logging/ConsoleWriter.h>
#include <Foundation/Logging/VisualStudioWriter.h>
#include <Foundation/Logging/HTMLWriter.h>
#include <FileservePlugin/Network/NetworkInterfaceEnet.h>
#include <FileservePlugin/FileserveDataDir.h>

ezFileserverApp::ezFileserverApp()
{
}

void ezFileserverApp::AfterCoreStartup()
{
  ezDataDirectory::FileserveType::s_bEnableFileserve = false;

  ezGlobalLog::AddLogWriter(ezLogWriter::Console::LogMessageHandler);
  ezGlobalLog::AddLogWriter(ezLogWriter::VisualStudio::LogMessageHandler);

  // Add standard folder factory
  ezFileSystem::RegisterDataDirectoryFactory(ezDataDirectory::FolderType::Factory);

  // Add the empty data directory to access files via absolute paths
  ezFileSystem::AddDataDirectory("", "App", ":", ezFileSystem::AllowWrites);

  m_Network = EZ_DEFAULT_NEW(ezNetworkInterfaceEnet);
  m_Network->StartServer('EZFS', 1042, false);
  m_Network->SetMessageHandler('FSRV', ezMakeDelegate(&ezFileserverApp::NetworkMsgHandler, this));
}

void ezFileserverApp::BeforeCoreShutdown()
{
  m_Network->ShutdownConnection();
  m_Network.Reset();

  ezGlobalLog::RemoveLogWriter(ezLogWriter::Console::LogMessageHandler);
  ezGlobalLog::RemoveLogWriter(ezLogWriter::VisualStudio::LogMessageHandler);
}

void ezFileserverApp::NetworkMsgHandler(ezNetworkMessage& msg)
{
  ezLog::Info("FSRV: '{0}' - {1} bytes", msg.GetMessageID(), msg.GetMessageSize());

  ezStringBuilder tmp;
  ezNetworkMessage ret;

  if (msg.GetMessageID() == 'MNT')
  {
    msg.GetReader() >> tmp;
    ezLog::Info(" Mount: '{0}'", tmp);

    ret.SetMessageID('FSRV', 'RMNT');
    m_Network->Send(ezNetworkTransmitMode::Reliable, ret);
  }
}

ezApplication::ApplicationExecution ezFileserverApp::Run()
{
  if (m_Network)
  {
    //ezLog::Info("Updating Network");
    m_Network->UpdateNetwork();
    m_Network->ExecuteAllMessageHandlers();

    ezThreadUtils::Sleep(25);

    return ezApplication::Continue;
  }

  return ezApplication::Quit;
}

EZ_CONSOLEAPP_ENTRY_POINT(ezFileserverApp);