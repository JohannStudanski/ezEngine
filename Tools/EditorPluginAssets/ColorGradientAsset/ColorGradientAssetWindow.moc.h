#pragma once

#include <Foundation/Basics.h>
#include <GuiFoundation/DocumentWindow/DocumentWindow.moc.h>
#include <ToolsFoundation/Object/DocumentObjectManager.h>

class QColorGradientEditorWidget;

class ezColorGradientAssetDocumentWindow : public ezQtDocumentWindow
{
  Q_OBJECT

public:
  ezColorGradientAssetDocumentWindow(ezDocument* pDocument);
  ~ezColorGradientAssetDocumentWindow();

  virtual const char* GetGroupName() const { return "ColorGradientAsset"; }

private slots:
  void onGradientColorCpAdded(float posX, const ezColorGammaUB& color);
  void onGradientAlphaCpAdded(float posX, ezUInt8 alpha);
  void onGradientIntensityCpAdded(float posX, float intensity);

  void MoveCP(ezInt32 idx, float newPosX, const char* szArrayName);
  void onGradientColorCpMoved(ezInt32 idx, float newPosX);
  void onGradientAlphaCpMoved(ezInt32 idx, float newPosX);
  void onGradientIntensityCpMoved(ezInt32 idx, float newPosX);
  
  void RemoveCP(ezInt32 idx, const char* szArrayName);
  void onGradientColorCpDeleted(ezInt32 idx);
  void onGradientAlphaCpDeleted(ezInt32 idx);
  void onGradientIntensityCpDeleted(ezInt32 idx);

  void onGradientColorCpChanged(ezInt32 idx, const ezColorGammaUB& color);
  void onGradientAlphaCpChanged(ezInt32 idx, ezUInt8 alpha);
  void onGradientIntensityCpChanged(ezInt32 idx, float intensity);

  void onGradientBeginOperation();
  void onGradientEndOperation(bool commit);

private:
  void UpdatePreview();
  void PropertyEventHandler(const ezDocumentObjectPropertyEvent& e);
  void StructureEventHandler(const ezDocumentObjectStructureEvent& e);

  QColorGradientEditorWidget* m_pGradientEditor;
};