---
title: "CPaneContainerManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CPaneContainerManager", "AFXPANECONTAINERMANAGER/CPaneContainerManager", "AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPaneContainerManager", "AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPaneContainerManagerToDockablePane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPanesToList", "AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPaneToList", "AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPaneToRecentPaneContainer", "AFXPANECONTAINERMANAGER/CPaneContainerManager::CalcRects", "AFXPANECONTAINERMANAGER/CPaneContainerManager::CanBeAttached", "AFXPANECONTAINERMANAGER/CPaneContainerManager::CheckAndRemoveNonValidPane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::CheckForMiniFrameAndCaption", "AFXPANECONTAINERMANAGER/CPaneContainerManager::Create", "AFXPANECONTAINERMANAGER/CPaneContainerManager::DoesAllowDynInsertBefore", "AFXPANECONTAINERMANAGER/CPaneContainerManager::DoesContainFloatingPane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::EnableGrippers", "AFXPANECONTAINERMANAGER/CPaneContainerManager::FindPaneContainer", "AFXPANECONTAINERMANAGER/CPaneContainerManager::FindTabbedPane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetAvailableSpace", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetDefaultPaneDivider", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetDockSiteFrameWnd", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetFirstPane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetFirstVisiblePane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetMinMaxOffset", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetMinSize", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetNodeCount", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetPaneContainerRTC", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetPaneCount", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetTotalRefCount", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetVisiblePaneCount", "AFXPANECONTAINERMANAGER/CPaneContainerManager::GetWindowRect", "AFXPANECONTAINERMANAGER/CPaneContainerManager::HideAll", "AFXPANECONTAINERMANAGER/CPaneContainerManager::InsertPane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::IsAutoHideMode", "AFXPANECONTAINERMANAGER/CPaneContainerManager::IsEmpty", "AFXPANECONTAINERMANAGER/CPaneContainerManager::IsRootPaneContainerVisible", "AFXPANECONTAINERMANAGER/CPaneContainerManager::NotifyPaneDivider", "AFXPANECONTAINERMANAGER/CPaneContainerManager::OnPaneDividerMove", "AFXPANECONTAINERMANAGER/CPaneContainerManager::OnShowPane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::PaneFromPoint", "AFXPANECONTAINERMANAGER/CPaneContainerManager::ReleaseEmptyPaneContainers", "AFXPANECONTAINERMANAGER/CPaneContainerManager::RemoveAllPanesAndPaneDividers", "AFXPANECONTAINERMANAGER/CPaneContainerManager::RemoveNonValidPanes", "AFXPANECONTAINERMANAGER/CPaneContainerManager::RemovePaneDivider", "AFXPANECONTAINERMANAGER/CPaneContainerManager::RemovePaneFromPaneContainer", "AFXPANECONTAINERMANAGER/CPaneContainerManager::ReplacePane", "AFXPANECONTAINERMANAGER/CPaneContainerManager::ResizePaneContainers", "AFXPANECONTAINERMANAGER/CPaneContainerManager::Serialize", "AFXPANECONTAINERMANAGER/CPaneContainerManager::SetDefaultPaneDividerForPanes", "AFXPANECONTAINERMANAGER/CPaneContainerManager::SetPaneContainerRTC", "AFXPANECONTAINERMANAGER/CPaneContainerManager::SetResizeMode", "AFXPANECONTAINERMANAGER/CPaneContainerManager::StoreRecentDockSiteInfo"]
dev_langs: ["C++"]
helpviewer_keywords: ["CPaneContainerManager [MFC], AddPane", "CPaneContainerManager [MFC], AddPaneContainerManager", "CPaneContainerManager [MFC], AddPaneContainerManagerToDockablePane", "CPaneContainerManager [MFC], AddPanesToList", "CPaneContainerManager [MFC], AddPaneToList", "CPaneContainerManager [MFC], AddPaneToRecentPaneContainer", "CPaneContainerManager [MFC], CalcRects", "CPaneContainerManager [MFC], CanBeAttached", "CPaneContainerManager [MFC], CheckAndRemoveNonValidPane", "CPaneContainerManager [MFC], CheckForMiniFrameAndCaption", "CPaneContainerManager [MFC], Create", "CPaneContainerManager [MFC], DoesAllowDynInsertBefore", "CPaneContainerManager [MFC], DoesContainFloatingPane", "CPaneContainerManager [MFC], EnableGrippers", "CPaneContainerManager [MFC], FindPaneContainer", "CPaneContainerManager [MFC], FindTabbedPane", "CPaneContainerManager [MFC], GetAvailableSpace", "CPaneContainerManager [MFC], GetDefaultPaneDivider", "CPaneContainerManager [MFC], GetDockSiteFrameWnd", "CPaneContainerManager [MFC], GetFirstPane", "CPaneContainerManager [MFC], GetFirstVisiblePane", "CPaneContainerManager [MFC], GetMinMaxOffset", "CPaneContainerManager [MFC], GetMinSize", "CPaneContainerManager [MFC], GetNodeCount", "CPaneContainerManager [MFC], GetPaneContainerRTC", "CPaneContainerManager [MFC], GetPaneCount", "CPaneContainerManager [MFC], GetTotalRefCount", "CPaneContainerManager [MFC], GetVisiblePaneCount", "CPaneContainerManager [MFC], GetWindowRect", "CPaneContainerManager [MFC], HideAll", "CPaneContainerManager [MFC], InsertPane", "CPaneContainerManager [MFC], IsAutoHideMode", "CPaneContainerManager [MFC], IsEmpty", "CPaneContainerManager [MFC], IsRootPaneContainerVisible", "CPaneContainerManager [MFC], NotifyPaneDivider", "CPaneContainerManager [MFC], OnPaneDividerMove", "CPaneContainerManager [MFC], OnShowPane", "CPaneContainerManager [MFC], PaneFromPoint", "CPaneContainerManager [MFC], ReleaseEmptyPaneContainers", "CPaneContainerManager [MFC], RemoveAllPanesAndPaneDividers", "CPaneContainerManager [MFC], RemoveNonValidPanes", "CPaneContainerManager [MFC], RemovePaneDivider", "CPaneContainerManager [MFC], RemovePaneFromPaneContainer", "CPaneContainerManager [MFC], ReplacePane", "CPaneContainerManager [MFC], ResizePaneContainers", "CPaneContainerManager [MFC], Serialize", "CPaneContainerManager [MFC], SetDefaultPaneDividerForPanes", "CPaneContainerManager [MFC], SetPaneContainerRTC", "CPaneContainerManager [MFC], SetResizeMode", "CPaneContainerManager [MFC], StoreRecentDockSiteInfo"]
ms.assetid: 3d974c15-a62f-4648-bb5b-cc31ab7950af
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CPaneContainerManager Class
The `CPaneContainerManager` class manages the storage and display of the current docking layout.  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
## Syntax  
  
```  
class CPaneContainerManager : public CObject  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneContainerManager::AddPane](#addpane)||  
|[CPaneContainerManager::AddPaneContainerManager](#addpanecontainermanager)||  
|[CPaneContainerManager::AddPaneContainerManagerToDockablePane](#addpanecontainermanagertodockablepane)||  
|[CPaneContainerManager::AddPanesToList](#addpanestolist)||  
|[CPaneContainerManager::AddPaneToList](#addpanetolist)||  
|[CPaneContainerManager::AddPaneToRecentPaneContainer](#addpanetorecentpanecontainer)||  
|[CPaneContainerManager::CalcRects](#calcrects)||  
|[CPaneContainerManager::CanBeAttached](#canbeattached)||  
|[CPaneContainerManager::CheckAndRemoveNonValidPane](#checkandremovenonvalidpane)||  
|[CPaneContainerManager::CheckForMiniFrameAndCaption](#checkforminiframeandcaption)||  
|[CPaneContainerManager::Create](#create)||  
|[CPaneContainerManager::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)||  
|[CPaneContainerManager::DoesContainFloatingPane](#doescontainfloatingpane)||  
|[CPaneContainerManager::EnableGrippers](#enablegrippers)||  
|[CPaneContainerManager::FindPaneContainer](#findpanecontainer)||  
|[CPaneContainerManager::FindTabbedPane](#findtabbedpane)||  
|[CPaneContainerManager::GetAvailableSpace](#getavailablespace)||  
|[CPaneContainerManager::GetDefaultPaneDivider](#getdefaultpanedivider)||  
|[CPaneContainerManager::GetDockSiteFrameWnd](#getdocksiteframewnd)||  
|[CPaneContainerManager::GetFirstPane](#getfirstpane)||  
|[CPaneContainerManager::GetFirstVisiblePane](#getfirstvisiblepane)||  
|[CPaneContainerManager::GetMinMaxOffset](#getminmaxoffset)||  
|[CPaneContainerManager::GetMinSize](#getminsize)||  
|[CPaneContainerManager::GetNodeCount](#getnodecount)||  
|[CPaneContainerManager::GetPaneContainerRTC](#getpanecontainerrtc)||  
|[CPaneContainerManager::GetPaneCount](#getpanecount)||  
|[CPaneContainerManager::GetTotalRefCount](#gettotalrefcount)||  
|[CPaneContainerManager::GetVisiblePaneCount](#getvisiblepanecount)||  
|[CPaneContainerManager::GetWindowRect](#getwindowrect)||  
|[CPaneContainerManager::HideAll](#hideall)||  
|[CPaneContainerManager::InsertPane](#insertpane)||  
|[CPaneContainerManager::IsAutoHideMode](#isautohidemode)||  
|[CPaneContainerManager::IsEmpty](#isempty)||  
|[CPaneContainerManager::IsRootPaneContainerVisible](#isrootpanecontainervisible)||  
|[CPaneContainerManager::NotifyPaneDivider](#notifypanedivider)||  
|[CPaneContainerManager::OnPaneDividerMove](#onpanedividermove)||  
|[CPaneContainerManager::OnShowPane](#onshowpane)||  
|[CPaneContainerManager::PaneFromPoint](#panefrompoint)||  
|[CPaneContainerManager::ReleaseEmptyPaneContainers](#releaseemptypanecontainers)||  
|[CPaneContainerManager::RemoveAllPanesAndPaneDividers](#removeallpanesandpanedividers)||  
|[CPaneContainerManager::RemoveNonValidPanes](#removenonvalidpanes)||  
|[CPaneContainerManager::RemovePaneDivider](#removepanedivider)||  
|[CPaneContainerManager::RemovePaneFromPaneContainer](#removepanefrompanecontainer)||  
|[CPaneContainerManager::ReplacePane](#replacepane)||  
|[CPaneContainerManager::ResizePaneContainers](#resizepanecontainers)||  
|[CPaneContainerManager::Serialize](#serialize)|Reads or writes this object from or to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).)|  
|[CPaneContainerManager::SetDefaultPaneDividerForPanes](#setdefaultpanedividerforpanes)||  
|[CPaneContainerManager::SetPaneContainerRTC](#setpanecontainerrtc)||  
|[CPaneContainerManager::SetResizeMode](#setresizemode)||  
|[CPaneContainerManager::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)||  
  
### Remarks  
 The framework automatically creates instances of `CPaneContainerManager` objects and embeds them either into [CPaneDivider Class](../../mfc/reference/cpanedivider-class.md) objects or into [CMultiPaneFrameWnd Class](../../mfc/reference/cmultipaneframewnd-class.md) objects.  
  
 The `CPaneContainerManager` class stores a pointer to the root of a binary tree that is built from [CPaneContainer](../../mfc/reference/cpanecontainer-class.md) objects.  
  
## Example  
 The following example demonstrates how to get a reference to a `CPaneContainerManager` object. This code snippet is part of the [Set Pane Size sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_SetPaneSize#5](../../mfc/reference/codesnippet/cpp/cpanecontainermanager-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CPaneContainerManager](../../mfc/reference/cpanecontainermanager-class.md)  
  
## Requirements  
 **Header:** afxpanecontainermanager.h  
  
##  <a name="addpane"></a>  CPaneContainerManager::AddPane  

  
```  
virtual void AddPane(CDockablePane* pControlBarToAdd);
```  
  
### Parameters  
 [in] *pControlBarToAdd*  
  
### Remarks  
  
##  <a name="addpanecontainermanager"></a>  CPaneContainerManager::AddPaneContainerManager  

  
```  
virtual BOOL AddPaneContainerManager(
    CPaneContainerManager& srcManager,  
    BOOL bOuterEdge);

 
virtual BOOL AddPaneContainerManager(
    CDockablePane* pTargetControlBar,  
    DWORD dwAlignment,  
    CPaneContainerManager& srcManager,  
    BOOL bCopy);
```  
  
### Parameters  
 [in] *srcManager*  
 [in] *bOuterEdge*  
 [in] *pTargetControlBar*  
 [in] *dwAlignment*  
 [in] *bCopy*  
  
### Return Value  
  
### Remarks  
  
##  <a name="addpanecontainermanagertodockablepane"></a>  CPaneContainerManager::AddPaneContainerManagerToDockablePane  

  
```  
virtual BOOL AddPaneContainerManagerToDockablePane(
    CDockablePane* pTargetControlBar,  
    CPaneContainerManager& srcManager);
```  
  
### Parameters  
 [in] *pTargetControlBar*  
 [in] *srcManager*  
  
### Return Value  
  
### Remarks  
  
##  <a name="addpanestolist"></a>  CPaneContainerManager::AddPanesToList  

  
```  
void AddPanesToList(
    CObList* plstControlBars,  
    CObList* plstSliders);
```  
  
### Parameters  
 [in] *plstControlBars*  
 [in] *plstSliders*  
  
### Remarks  
  
##  <a name="addpanetolist"></a>  CPaneContainerManager::AddPaneToList  

  
```  
void AddPaneToList(CDockablePane* pControlBarToAdd);
```  
  
### Parameters  
 [in] *pControlBarToAdd*  
  
### Remarks  
  
##  <a name="addpanetorecentpanecontainer"></a>  CPaneContainerManager::AddPaneToRecentPaneContainer  

  
```  
virtual CDockablePane* AddPaneToRecentPaneContainer(
    CDockablePane* pBarToAdd,  
    CPaneContainer* pRecentContainer);
```  
  
### Parameters  
 [in] *pBarToAdd*  
 [in] *pRecentContainer*  
  
### Return Value  
  
### Remarks  
  
##  <a name="calcrects"></a>  CPaneContainerManager::CalcRects  

  
```  
void CalcRects(
    CRect& rectOriginal,  
    CRect& rectInserted,  
    CRect& rectSlider,  
    DWORD& dwSliderStyle,  
    DWORD dwAlignment,  
    CSize sizeMinOriginal,  
    CSize sizeMinInserted);
```  
  
### Parameters  
 [in] *rectOriginal*  
 [in] *rectInserted*  
 [in] *rectSlider*  
 [in] *dwSliderStyle*  
 [in] *dwAlignment*  
 [in] *sizeMinOriginal*  
 [in] *sizeMinInserted*  
  
### Remarks  
  
##  <a name="canbeattached"></a>  CPaneContainerManager::CanBeAttached  

  
```  
virtual BOOL CanBeAttached() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="checkandremovenonvalidpane"></a>  CPaneContainerManager::CheckAndRemoveNonValidPane  

  
```  
BOOL CheckAndRemoveNonValidPane(CWnd* pWnd);
```  
  
### Parameters  
 [in] *pWnd*  
  
### Return Value  
  
### Remarks  
  
##  <a name="checkforminiframeandcaption"></a>  CPaneContainerManager::CheckForMiniFrameAndCaption  

  
```  
virtual BOOL CheckForMiniFrameAndCaption(
    CPoint point,  
    CDockablePane** ppTargetControlBar);
```  
  
### Parameters  
 [in] *point*  
 [in] *ppTargetControlBar*  
  
### Return Value  
  
### Remarks  
  
##  <a name="create"></a>  CPaneContainerManager::Create  

  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    CPaneDivider* pDefaultSlider,  
    CRuntimeClass* pContainerRTC = NULL);
```  
  
### Parameters  
 [in] *pParentWnd*  
 [in] *pDefaultSlider*  
 [in] *pContainerRTC*  
  
### Return Value  
  
### Remarks  
  
##  <a name="doesallowdyninsertbefore"></a>  CPaneContainerManager::DoesAllowDynInsertBefore  

  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="doescontainfloatingpane"></a>  CPaneContainerManager::DoesContainFloatingPane  

  
```  
virtual BOOL DoesContainFloatingPane();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="enablegrippers"></a>  CPaneContainerManager::EnableGrippers  

  
```  
virtual void EnableGrippers(BOOL bEnable);
```  
  
### Parameters  
 [in] *bEnable*  
  
### Remarks  
  
##  <a name="findpanecontainer"></a>  CPaneContainerManager::FindPaneContainer  

  
```  
virtual CPaneContainer* FindPaneContainer(
    CDockablePane* pBar,  
    BOOL& bLeftBar);
```  
  
### Parameters  
 [in] *pBar*  
 [in] *bLeftBar*  
  
### Return Value  
  
### Remarks  
  
##  <a name="findtabbedpane"></a>  CPaneContainerManager::FindTabbedPane  

  
```  
CDockablePane* FindTabbedPane(UINT nID);
```  
  
### Parameters  
 [in] *nID*  
  
### Return Value  
  
### Remarks  
  
##  <a name="getavailablespace"></a>  CPaneContainerManager::GetAvailableSpace  

  
```  
virtual void GetAvailableSpace(CRect& rect) const;  
```  
  
### Parameters  
 [in] *rect*  
  
### Remarks  
  
##  <a name="getdefaultpanedivider"></a>  CPaneContainerManager::GetDefaultPaneDivider  

  
```  
CPaneDivider* GetDefaultPaneDivider() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getdocksiteframewnd"></a>  CPaneContainerManager::GetDockSiteFrameWnd  

  
```  
virtual CWnd* GetDockSiteFrameWnd();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getfirstpane"></a>  CPaneContainerManager::GetFirstPane  

  
```  
virtual CBasePane* GetFirstPane() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getfirstvisiblepane"></a>  CPaneContainerManager::GetFirstVisiblePane  

  
```  
virtual CWnd* GetFirstVisiblePane() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getminmaxoffset"></a>  CPaneContainerManager::GetMinMaxOffset  

  
```  
virtual void GetMinMaxOffset(
    CPaneDivider* pSlider,  
    int& nMinOffset,  
    int& nMaxOffset,  
    int& nStep);
```  
  
### Parameters  
 [in] *pSlider*  
 [in] *nMinOffset*  
 [in] *nMaxOffset*  
 [in] *nStep*  
  
### Remarks  
  
##  <a name="getminsize"></a>  CPaneContainerManager::GetMinSize  

  
```  
virtual void GetMinSize(CSize& size);
```  
  
### Parameters  
 [in] *size*  
  
### Remarks  
  
##  <a name="getnodecount"></a>  CPaneContainerManager::GetNodeCount  

  
```  
int GetNodeCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanecontainerrtc"></a>  CPaneContainerManager::GetPaneContainerRTC  

  
```  
CRuntimeClass* GetPaneContainerRTC() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanecount"></a>  CPaneContainerManager::GetPaneCount  

  
```  
int GetPaneCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="gettotalrefcount"></a>  CPaneContainerManager::GetTotalRefCount  

  
```  
int GetTotalRefCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getvisiblepanecount"></a>  CPaneContainerManager::GetVisiblePaneCount  

  
```  
virtual int GetVisiblePaneCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getwindowrect"></a>  CPaneContainerManager::GetWindowRect  

  
```  
virtual void GetWindowRect(CRect& rect) const;  
```  
  
### Parameters  
 [in] *rect*  
  
### Remarks  
  
##  <a name="hideall"></a>  CPaneContainerManager::HideAll  

  
```  
virtual void HideAll();
```  
  
### Remarks  
  
##  <a name="insertpane"></a>  CPaneContainerManager::InsertPane  

  
```  
virtual BOOL InsertPane(
    CDockablePane* pControlBarToInsert,  
    CDockablePane* pTargetControlBar,  
    DWORD dwAlignment,  
    LPCRECT lpRect = NULL,  
    AFX_DOCK_METHOD dockMethod = DM_UNKNOWN);
```  
  
### Parameters  
 [in] *pControlBarToInsert*  
 [in] *pTargetControlBar*  
 [in] *dwAlignment*  
 [in] *lpRect*  
 [in] *dockMethod*  
  
### Return Value  
  
### Remarks  
  
##  <a name="isautohidemode"></a>  CPaneContainerManager::IsAutoHideMode  

  
```  
BOOL IsAutoHideMode() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="isempty"></a>  CPaneContainerManager::IsEmpty  

  
```  
BOOL IsEmpty() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="isrootpanecontainervisible"></a>  CPaneContainerManager::IsRootPaneContainerVisible  

  
```  
virtual BOOL IsRootPaneContainerVisible() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="notifypanedivider"></a>  CPaneContainerManager::NotifyPaneDivider  

  
```  
void NotifyPaneDivider();
```  
  
### Remarks  
  
##  <a name="onpanedividermove"></a>  CPaneContainerManager::OnPaneDividerMove  

  
```  
virtual int OnPaneDividerMove(
    CPaneDivider* pSlider,  
    UINT uFlags,  
    int nOffset,  
    HDWP& hdwp);
```  
  
### Parameters  
 [in] *pSlider*  
 [in] *uFlags*  
 [in] *nOffset*  
 [in] *hdwp*  
  
### Return Value  
  
### Remarks  
  
##  <a name="onshowpane"></a>  CPaneContainerManager::OnShowPane  

  
```  
virtual BOOL OnShowPane(
    CDockablePane* pBar,  
    BOOL bShow);
```  
  
### Parameters  
 [in] *pBar*  
 [in] *bShow*  
  
### Return Value  
  
### Remarks  
  
##  <a name="panefrompoint"></a>  CPaneContainerManager::PaneFromPoint  

  
```  
virtual CDockablePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    BOOL bExactBar,  
    BOOL& bIsTabArea,  
    BOOL& bCaption);
```  
  
### Parameters  
 [in] *point*  
 [in] *nSensitivity*  
 [in] *bExactBar*  
 [in] *bIsTabArea*  
 [in] *bCaption*  
  
### Return Value  
  
### Remarks  
  
##  <a name="releaseemptypanecontainers"></a>  CPaneContainerManager::ReleaseEmptyPaneContainers  

  
```  
void ReleaseEmptyPaneContainers();
```  
  
### Remarks  
  
##  <a name="removeallpanesandpanedividers"></a>  CPaneContainerManager::RemoveAllPanesAndPaneDividers  

  
```  
void RemoveAllPanesAndPaneDividers();
```  
  
### Remarks  
  
##  <a name="removenonvalidpanes"></a>  CPaneContainerManager::RemoveNonValidPanes  

  
```  
void RemoveNonValidPanes();
```  
  
### Remarks  
  
##  <a name="removepanedivider"></a>  CPaneContainerManager::RemovePaneDivider  

  
```  
virtual void RemovePaneDivider(CPaneDivider* pSlider);
```  
  
### Parameters  
 [in] *pSlider*  
  
### Remarks  
  
##  <a name="removepanefrompanecontainer"></a>  CPaneContainerManager::RemovePaneFromPaneContainer  

  
```  
virtual BOOL RemovePaneFromPaneContainer(CDockablePane* pControlBar);
```  
  
### Parameters  
 [in] *pControlBar*  
  
### Return Value  
  
### Remarks  
  
##  <a name="replacepane"></a>  CPaneContainerManager::ReplacePane  

  
```  
virtual BOOL ReplacePane(
    CDockablePane* pBarOld,  
    CDockablePane* pBarNew);
```  
  
### Parameters  
 [in] *pBarOld*  
 [in] *pBarNew*  
  
### Return Value  
  
### Remarks  
  
##  <a name="resizepanecontainers"></a>  CPaneContainerManager::ResizePaneContainers  

  
```  
virtual void ResizePaneContainers(
    UINT nSide,  
    BOOL bExpand,  
    int nOffset,  
    HDWP& hdwp);

 
virtual void ResizePaneContainers(
    CRect rect,  
    HDWP& hdwp);
```  
  
### Parameters  
 [in] *nSide*  
 [in] *bExpand*  
 [in] *nOffset*  
 [in] *hdwp*  
 [in] *rect*  
  
### Remarks  
  
##  <a name="serialize"></a>  CPaneContainerManager::Serialize  

  
```  
void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] *ar*  
  
### Remarks  
  
##  <a name="setdefaultpanedividerforpanes"></a>  CPaneContainerManager::SetDefaultPaneDividerForPanes  

  
```  
void SetDefaultPaneDividerForPanes(CPaneDivider* pSlider);
```  
  
### Parameters  
 [in] *pSlider*  
  
### Remarks  
  
##  <a name="setpanecontainerrtc"></a>  CPaneContainerManager::SetPaneContainerRTC  

  
```  
void SetPaneContainerRTC(CRuntimeClass* pContainerRTC);
```  
  
### Parameters  
 [in] *pContainerRTC*  
  
### Remarks  
  
##  <a name="setresizemode"></a>  CPaneContainerManager::SetResizeMode  

  
```  
virtual void SetResizeMode(BOOL bResize);
```  
  
### Parameters  
 [in] *bResize*  
  
### Remarks  
  
##  <a name="storerecentdocksiteinfo"></a>  CPaneContainerManager::StoreRecentDockSiteInfo  

  
```  
virtual void StoreRecentDockSiteInfo(CDockablePane* pBar);
```  
  
### Parameters  
 [in] *pBar*  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md)   
 [CPaneDivider Class](../../mfc/reference/cpanedivider-class.md)
