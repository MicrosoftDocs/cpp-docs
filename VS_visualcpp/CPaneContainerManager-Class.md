---
title: "CPaneContainerManager Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 3d974c15-a62f-4648-bb5b-cc31ab7950af
caps.latest.revision: 25
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CPaneContainerManager Class
The `CPaneContainerManager` class manages the storage and display of the current docking layout.  
  
## Syntax  
  
```  
class CPaneContainerManager : public CObject  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneContainerManager::AddPane](#cpanecontainermanager__addpane)||  
|[CPaneContainerManager::AddPaneContainerManager](#cpanecontainermanager__addpanecontainermanager)||  
|[CPaneContainerManager::AddPaneContainerManagerToDockablePane](#cpanecontainermanager__addpanecontainermanagertodockablepane)||  
|[CPaneContainerManager::AddPanesToList](#cpanecontainermanager__addpanestolist)||  
|[CPaneContainerManager::AddPaneToList](#cpanecontainermanager__addpanetolist)||  
|[CPaneContainerManager::AddPaneToRecentPaneContainer](#cpanecontainermanager__addpanetorecentpanecontainer)||  
|[CPaneContainerManager::CalcRects](#cpanecontainermanager__calcrects)||  
|[CPaneContainerManager::CanBeAttached](#cpanecontainermanager__canbeattached)||  
|[CPaneContainerManager::CheckAndRemoveNonValidPane](#cpanecontainermanager__checkandremovenonvalidpane)||  
|[CPaneContainerManager::CheckForMiniFrameAndCaption](#cpanecontainermanager__checkforminiframeandcaption)||  
|[CPaneContainerManager::Create](#cpanecontainermanager__create)||  
|[CPaneContainerManager::DoesAllowDynInsertBefore](#cpanecontainermanager__doesallowdyninsertbefore)||  
|[CPaneContainerManager::DoesContainFloatingPane](#cpanecontainermanager__doescontainfloatingpane)||  
|[CPaneContainerManager::EnableGrippers](#cpanecontainermanager__enablegrippers)||  
|[CPaneContainerManager::FindPaneContainer](#cpanecontainermanager__findpanecontainer)||  
|[CPaneContainerManager::FindTabbedPane](#cpanecontainermanager__findtabbedpane)||  
|[CPaneContainerManager::GetAvailableSpace](#cpanecontainermanager__getavailablespace)||  
|[CPaneContainerManager::GetDefaultPaneDivider](#cpanecontainermanager__getdefaultpanedivider)||  
|[CPaneContainerManager::GetDockSiteFrameWnd](#cpanecontainermanager__getdocksiteframewnd)||  
|[CPaneContainerManager::GetFirstPane](#cpanecontainermanager__getfirstpane)||  
|[CPaneContainerManager::GetFirstVisiblePane](#cpanecontainermanager__getfirstvisiblepane)||  
|[CPaneContainerManager::GetMinMaxOffset](#cpanecontainermanager__getminmaxoffset)||  
|[CPaneContainerManager::GetMinSize](#cpanecontainermanager__getminsize)||  
|[CPaneContainerManager::GetNodeCount](#cpanecontainermanager__getnodecount)||  
|[CPaneContainerManager::GetPaneContainerRTC](#cpanecontainermanager__getpanecontainerrtc)||  
|[CPaneContainerManager::GetPaneCount](#cpanecontainermanager__getpanecount)||  
|[CPaneContainerManager::GetTotalRefCount](#cpanecontainermanager__gettotalrefcount)||  
|[CPaneContainerManager::GetVisiblePaneCount](#cpanecontainermanager__getvisiblepanecount)||  
|[CPaneContainerManager::GetWindowRect](#cpanecontainermanager__getwindowrect)||  
|[CPaneContainerManager::HideAll](#cpanecontainermanager__hideall)||  
|[CPaneContainerManager::InsertPane](#cpanecontainermanager__insertpane)||  
|[CPaneContainerManager::IsAutoHideMode](#cpanecontainermanager__isautohidemode)||  
|[CPaneContainerManager::IsEmpty](#cpanecontainermanager__isempty)||  
|[CPaneContainerManager::IsRootPaneContainerVisible](#cpanecontainermanager__isrootpanecontainervisible)||  
|[CPaneContainerManager::NotifyPaneDivider](#cpanecontainermanager__notifypanedivider)||  
|[CPaneContainerManager::OnPaneDividerMove](#cpanecontainermanager__onpanedividermove)||  
|[CPaneContainerManager::OnShowPane](#cpanecontainermanager__onshowpane)||  
|[CPaneContainerManager::PaneFromPoint](#cpanecontainermanager__panefrompoint)||  
|[CPaneContainerManager::ReleaseEmptyPaneContainers](#cpanecontainermanager__releaseemptypanecontainers)||  
|[CPaneContainerManager::RemoveAllPanesAndPaneDividers](#cpanecontainermanager__removeallpanesandpanedividers)||  
|[CPaneContainerManager::RemoveNonValidPanes](#cpanecontainermanager__removenonvalidpanes)||  
|[CPaneContainerManager::RemovePaneDivider](#cpanecontainermanager__removepanedivider)||  
|[CPaneContainerManager::RemovePaneFromPaneContainer](#cpanecontainermanager__removepanefrompanecontainer)||  
|[CPaneContainerManager::ReplacePane](#cpanecontainermanager__replacepane)||  
|[CPaneContainerManager::ResizePaneContainers](#cpanecontainermanager__resizepanecontainers)||  
|[CPaneContainerManager::Serialize](#cpanecontainermanager__serialize)|Reads or writes this object from or to an archive. (Overrides [CObject::Serialize](../VS_visualcpp/CObject-Class.md#cobject__serialize).)|  
|[CPaneContainerManager::SetDefaultPaneDividerForPanes](#cpanecontainermanager__setdefaultpanedividerforpanes)||  
|[CPaneContainerManager::SetPaneContainerRTC](#cpanecontainermanager__setpanecontainerrtc)||  
|[CPaneContainerManager::SetResizeMode](#cpanecontainermanager__setresizemode)||  
|[CPaneContainerManager::StoreRecentDockSiteInfo](#cpanecontainermanager__storerecentdocksiteinfo)||  
  
### Remarks  
 The framework automatically creates instances of `CPaneContainerManager` objects and embeds them either into [CPaneDivider Class](../VS_visualcpp/CPaneDivider-Class.md) objects or into [CMultiPaneFrameWnd Class](../VS_visualcpp/CMultiPaneFrameWnd-Class.md) objects.  
  
 The `CPaneContainerManager` class stores a pointer to the root of a binary tree that is built from [CPaneContainer](../VS_visualcpp/CPaneContainer-Class.md) objects.  
  
## Example  
 The following example demonstrates how to get a reference to a `CPaneContainerManager` object. This code snippet is part of the [Set Pane Size sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_SetPaneSize#5](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_SetPaneSize#5)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CPaneContainerManager](../VS_visualcpp/CPaneContainerManager-Class.md)  
  
## Requirements  
 **Header:** afxpanecontainermanager.h  
  
##  <a name="cpanecontainermanager__addpane"></a>  CPaneContainerManager::AddPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void AddPane( CDockablePane* pControlBarToAdd );  
```  
  
### Parameters  
 [in] `pControlBarToAdd`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__addpanecontainermanager"></a>  CPaneContainerManager::AddPaneContainerManager  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL AddPaneContainerManager(  
    CPaneContainerManager& srcManager,  
    BOOL bOuterEdge );  
  
virtual BOOL AddPaneContainerManager(  
    CDockablePane* pTargetControlBar,  
    DWORD dwAlignment,  
    CPaneContainerManager& srcManager,  
    BOOL bCopy );  
```  
  
### Parameters  
 [in] `srcManager`  
  [in] `bOuterEdge`  
  [in] `pTargetControlBar`  
  [in] `dwAlignment`  
  [in] `bCopy`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__addpanecontainermanagertodockablepane"></a>  CPaneContainerManager::AddPaneContainerManagerToDockablePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL AddPaneContainerManagerToDockablePane(  
    CDockablePane* pTargetControlBar,  
    CPaneContainerManager& srcManager );  
```  
  
### Parameters  
 [in] `pTargetControlBar`  
  [in] `srcManager`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__addpanestolist"></a>  CPaneContainerManager::AddPanesToList  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void AddPanesToList(  
    CObList* plstControlBars,  
    CObList* plstSliders );  
```  
  
### Parameters  
 [in] `plstControlBars`  
  [in] `plstSliders`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__addpanetolist"></a>  CPaneContainerManager::AddPaneToList  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void AddPaneToList( CDockablePane* pControlBarToAdd );  
```  
  
### Parameters  
 [in] `pControlBarToAdd`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__addpanetorecentpanecontainer"></a>  CPaneContainerManager::AddPaneToRecentPaneContainer  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CDockablePane* AddPaneToRecentPaneContainer(  
    CDockablePane* pBarToAdd,  
    CPaneContainer* pRecentContainer );  
```  
  
### Parameters  
 [in] `pBarToAdd`  
  [in] `pRecentContainer`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__calcrects"></a>  CPaneContainerManager::CalcRects  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void CalcRects(  
    CRect& rectOriginal,  
    CRect& rectInserted,  
    CRect& rectSlider,  
    DWORD& dwSliderStyle,  
    DWORD dwAlignment,  
    CSize sizeMinOriginal,  
    CSize sizeMinInserted );  
```  
  
### Parameters  
 [in] `rectOriginal`  
  [in] `rectInserted`  
  [in] `rectSlider`  
  [in] `dwSliderStyle`  
  [in] `dwAlignment`  
  [in] `sizeMinOriginal`  
  [in] `sizeMinInserted`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__canbeattached"></a>  CPaneContainerManager::CanBeAttached  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL CanBeAttached() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__checkandremovenonvalidpane"></a>  CPaneContainerManager::CheckAndRemoveNonValidPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL CheckAndRemoveNonValidPane( CWnd* pWnd );  
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__checkforminiframeandcaption"></a>  CPaneContainerManager::CheckForMiniFrameAndCaption  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL CheckForMiniFrameAndCaption(  
    CPoint point,  
    CDockablePane** ppTargetControlBar );  
```  
  
### Parameters  
 [in] `point`  
  [in] `ppTargetControlBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__create"></a>  CPaneContainerManager::Create  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL Create(  
    CWnd* pParentWnd,  
    CPaneDivider* pDefaultSlider,  
    CRuntimeClass* pContainerRTC = NULL);  
```  
  
### Parameters  
 [in] `pParentWnd`  
  [in] `pDefaultSlider`  
  [in] `pContainerRTC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__doesallowdyninsertbefore"></a>  CPaneContainerManager::DoesAllowDynInsertBefore  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__doescontainfloatingpane"></a>  CPaneContainerManager::DoesContainFloatingPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL DoesContainFloatingPane();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__enablegrippers"></a>  CPaneContainerManager::EnableGrippers  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void EnableGrippers( BOOL bEnable );  
```  
  
### Parameters  
 [in] `bEnable`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__findpanecontainer"></a>  CPaneContainerManager::FindPaneContainer  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CPaneContainer* FindPaneContainer(  
    CDockablePane* pBar,  
    BOOL& bLeftBar );  
```  
  
### Parameters  
 [in] `pBar`  
  [in] `bLeftBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__findtabbedpane"></a>  CPaneContainerManager::FindTabbedPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CDockablePane* FindTabbedPane( UINT nID );  
```  
  
### Parameters  
 [in] `nID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getavailablespace"></a>  CPaneContainerManager::GetAvailableSpace  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void GetAvailableSpace( CRect& rect ) const;  
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getdefaultpanedivider"></a>  CPaneContainerManager::GetDefaultPaneDivider  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CPaneDivider* GetDefaultPaneDivider() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getdocksiteframewnd"></a>  CPaneContainerManager::GetDockSiteFrameWnd  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CWnd* GetDockSiteFrameWnd();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getfirstpane"></a>  CPaneContainerManager::GetFirstPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CBasePane* GetFirstPane() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getfirstvisiblepane"></a>  CPaneContainerManager::GetFirstVisiblePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CWnd* GetFirstVisiblePane() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getminmaxoffset"></a>  CPaneContainerManager::GetMinMaxOffset  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void GetMinMaxOffset(  
    CPaneDivider* pSlider,  
    int& nMinOffset,  
    int& nMaxOffset,  
    int& nStep );  
```  
  
### Parameters  
 [in] `pSlider`  
  [in] `nMinOffset`  
  [in] `nMaxOffset`  
  [in] `nStep`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getminsize"></a>  CPaneContainerManager::GetMinSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void GetMinSize( CSize& size );  
```  
  
### Parameters  
 [in] `size`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getnodecount"></a>  CPaneContainerManager::GetNodeCount  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetNodeCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getpanecontainerrtc"></a>  CPaneContainerManager::GetPaneContainerRTC  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CRuntimeClass* GetPaneContainerRTC() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getpanecount"></a>  CPaneContainerManager::GetPaneCount  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetPaneCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__gettotalrefcount"></a>  CPaneContainerManager::GetTotalRefCount  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetTotalRefCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getvisiblepanecount"></a>  CPaneContainerManager::GetVisiblePaneCount  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetVisiblePaneCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__getwindowrect"></a>  CPaneContainerManager::GetWindowRect  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void GetWindowRect( CRect& rect ) const;  
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__hideall"></a>  CPaneContainerManager::HideAll  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void HideAll();  
```  
  
### Remarks  
  
##  <a name="cpanecontainermanager__insertpane"></a>  CPaneContainerManager::InsertPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL InsertPane(  
    CDockablePane* pControlBarToInsert,  
    CDockablePane* pTargetControlBar,  
    DWORD dwAlignment,  
    LPCRECT lpRect = NULL,  
    AFX_DOCK_METHOD dockMethod = DM_UNKNOWN);  
```  
  
### Parameters  
 [in] `pControlBarToInsert`  
  [in] `pTargetControlBar`  
  [in] `dwAlignment`  
  [in] `lpRect`  
  [in] `dockMethod`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__isautohidemode"></a>  CPaneContainerManager::IsAutoHideMode  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsAutoHideMode() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__isempty"></a>  CPaneContainerManager::IsEmpty  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsEmpty() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__isrootpanecontainervisible"></a>  CPaneContainerManager::IsRootPaneContainerVisible  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsRootPaneContainerVisible() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__notifypanedivider"></a>  CPaneContainerManager::NotifyPaneDivider  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void NotifyPaneDivider();  
```  
  
### Remarks  
  
##  <a name="cpanecontainermanager__onpanedividermove"></a>  CPaneContainerManager::OnPaneDividerMove  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int OnPaneDividerMove(  
    CPaneDivider* pSlider,  
    UINT uFlags,  
    int nOffset,  
    HDWP& hdwp );  
```  
  
### Parameters  
 [in] `pSlider`  
  [in] `uFlags`  
  [in] `nOffset`  
  [in] `hdwp`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__onshowpane"></a>  CPaneContainerManager::OnShowPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnShowPane(  
    CDockablePane* pBar,  
    BOOL bShow );  
```  
  
### Parameters  
 [in] `pBar`  
  [in] `bShow`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__panefrompoint"></a>  CPaneContainerManager::PaneFromPoint  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CDockablePane* PaneFromPoint(  
    CPoint point,  
    int nSensitivity,  
    BOOL bExactBar,  
    BOOL& bIsTabArea,  
    BOOL& bCaption );  
```  
  
### Parameters  
 [in] `point`  
  [in] `nSensitivity`  
  [in] `bExactBar`  
  [in] `bIsTabArea`  
  [in] `bCaption`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__releaseemptypanecontainers"></a>  CPaneContainerManager::ReleaseEmptyPaneContainers  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void ReleaseEmptyPaneContainers();  
```  
  
### Remarks  
  
##  <a name="cpanecontainermanager__removeallpanesandpanedividers"></a>  CPaneContainerManager::RemoveAllPanesAndPaneDividers  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void RemoveAllPanesAndPaneDividers();  
```  
  
### Remarks  
  
##  <a name="cpanecontainermanager__removenonvalidpanes"></a>  CPaneContainerManager::RemoveNonValidPanes  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void RemoveNonValidPanes();  
```  
  
### Remarks  
  
##  <a name="cpanecontainermanager__removepanedivider"></a>  CPaneContainerManager::RemovePaneDivider  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void RemovePaneDivider( CPaneDivider* pSlider );  
```  
  
### Parameters  
 [in] `pSlider`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__removepanefrompanecontainer"></a>  CPaneContainerManager::RemovePaneFromPaneContainer  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL RemovePaneFromPaneContainer( CDockablePane* pControlBar );  
```  
  
### Parameters  
 [in] `pControlBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__replacepane"></a>  CPaneContainerManager::ReplacePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL ReplacePane(  
    CDockablePane* pBarOld,  
    CDockablePane* pBarNew );  
```  
  
### Parameters  
 [in] `pBarOld`  
  [in] `pBarNew`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainermanager__resizepanecontainers"></a>  CPaneContainerManager::ResizePaneContainers  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void ResizePaneContainers(  
    UINT nSide,  
    BOOL bExpand,  
    int nOffset,  
    HDWP& hdwp );  
  
virtual void ResizePaneContainers(  
    CRect rect,  
    HDWP& hdwp );  
```  
  
### Parameters  
 [in] `nSide`  
  [in] `bExpand`  
  [in] `nOffset`  
  [in] `hdwp`  
  [in] `rect`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__serialize"></a>  CPaneContainerManager::Serialize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void Serialize( CArchive& ar );  
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__setdefaultpanedividerforpanes"></a>  CPaneContainerManager::SetDefaultPaneDividerForPanes  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void SetDefaultPaneDividerForPanes( CPaneDivider* pSlider );  
```  
  
### Parameters  
 [in] `pSlider`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__setpanecontainerrtc"></a>  CPaneContainerManager::SetPaneContainerRTC  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void SetPaneContainerRTC( CRuntimeClass* pContainerRTC );  
```  
  
### Parameters  
 [in] `pContainerRTC`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__setresizemode"></a>  CPaneContainerManager::SetResizeMode  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void SetResizeMode( BOOL bResize );  
```  
  
### Parameters  
 [in] `bResize`  
  
### Remarks  
  
##  <a name="cpanecontainermanager__storerecentdocksiteinfo"></a>  CPaneContainerManager::StoreRecentDockSiteInfo  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void StoreRecentDockSiteInfo( CDockablePane* pBar );  
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CObject Class](../VS_visualcpp/CObject-Class.md)   
 [CPaneContainer Class](../VS_visualcpp/CPaneContainer-Class.md)   
 [CPaneDivider Class](../VS_visualcpp/CPaneDivider-Class.md)