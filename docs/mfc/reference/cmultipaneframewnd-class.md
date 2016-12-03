---
title: "CMultiPaneFrameWnd Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMultiPaneFrameWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMultiPaneFrameWnd class"
ms.assetid: 989a548e-0d70-46b7-a513-8cf740e1be3e
caps.latest.revision: 36
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CMultiPaneFrameWnd Class
The `CMultiPaneFrameWnd` class extends [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md). It can support multiple panes. Instead of a single embedded handle to a control bar, `CMultiPaneFrameWnd` contains a [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md) object that enables the user to dock one `CMultiPaneFrameWnd` to another and dynamically create multiple floating, tabbed windows.  
  
## Syntax  
  
```  
class CMultiPaneFrameWnd : public CPaneFrameWnd  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMultiPaneFrameWnd::AddPane](#cmultipaneframewnd__addpane)|Adds a pane. (Overrides [CPaneFrameWnd::AddPane](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__addpane).)|  
|[CMultiPaneFrameWnd::AddRecentPane](#cmultipaneframewnd__addrecentpane)||  
|[CMultiPaneFrameWnd::AdjustLayout](#cmultipaneframewnd__adjustlayout)|Adjusts the layout of the mini-frame window. (Overrides [CPaneFrameWnd::AdjustLayout](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__adjustlayout).)|  
|[CMultiPaneFrameWnd::AdjustPaneFrames](#cmultipaneframewnd__adjustpaneframes)|(Overrides [CPaneFrameWnd::AdjustPaneFrames](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__adjustpaneframes).)|  
|[CMultiPaneFrameWnd::CalcExpectedDockedRect](#cmultipaneframewnd__calcexpecteddockedrect)|Calculates the expected rectangle of a docked window. (Overrides [CPaneFrameWnd::CalcExpectedDockedRect](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__calcexpecteddockedrect).)|  
|[CMultiPaneFrameWnd::CanBeAttached](#cmultipaneframewnd__canbeattached)|Determines whether the current pane can dock to another pane or frame window. (Overrides [CPaneFrameWnd::CanBeAttached](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__canbeattached).)|  
|[CMultiPaneFrameWnd::CanBeDockedToPane](#cmultipaneframewnd__canbedockedtopane)|Determines whether the mini-frame window can dock to a pane. (Overrides [CPaneFrameWnd::CanBeDockedToPane](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__canbedockedtopane).)|  
|[CMultiPaneFrameWnd::CheckGripperVisibility](#cmultipaneframewnd__checkgrippervisibility)|(Overrides [CPaneFrameWnd::CheckGripperVisibility](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__checkgrippervisibility).)|  
|[CMultiPaneFrameWnd::CloseMiniFrame](#cmultipaneframewnd__closeminiframe)|(Overrides `CPaneFrameWnd::CloseMiniFrame`.)|  
|[CMultiPaneFrameWnd::ConvertToTabbedDocument](#cmultipaneframewnd__converttotabbeddocument)|Converts the pane to a tabbed document. (Overrides [CPaneFrameWnd::ConvertToTabbedDocument](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__converttotabbeddocument).)|  
|[CMultiPaneFrameWnd::DockFrame](#cmultipaneframewnd__dockframe)||  
|[CMultiPaneFrameWnd::DockPane](#cmultipaneframewnd__dockpane)|Docks the pane. (Overrides [CPaneFrameWnd::DockPane](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__dockpane).)|  
|[CMultiPaneFrameWnd::DockRecentPaneToMainFrame](#cmultipaneframewnd__dockrecentpanetomainframe)||  
|[CMultiPaneFrameWnd::GetCaptionText](#cmultipaneframewnd__getcaptiontext)|Returns the caption text. (Overrides [CPaneFrameWnd::GetCaptionText](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__getcaptiontext).)|  
|[CMultiPaneFrameWnd::GetPaneContainerManager](#cmultipaneframewnd__getpanecontainermanager)|Returns a reference to the internal container manager object.|  
|[CMultiPaneFrameWnd::GetFirstVisiblePane](#cmultipaneframewnd__getfirstvisiblepane)|Returns the first visible pane that is contained in a mini-frame window. (Overrides [CPaneFrameWnd::GetFirstVisiblePane](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__getfirstvisiblepane).)|  
|[CMultiPaneFrameWnd::GetPane](#cmultipaneframewnd__getpane)|Returns a pane that is contained in the mini-frame window. (Overrides [CPaneFrameWnd::GetPane](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__getpane).)|  
|[CMultiPaneFrameWnd::GetPaneCount](#cmultipaneframewnd__getpanecount)|Returns the number of panes that are contained in a mini-frame window. (Overrides [CPaneFrameWnd::GetPaneCount](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__getpanecount).)|  
|[CMultiPaneFrameWnd::GetVisiblePaneCount](#cmultipaneframewnd__getvisiblepanecount)|Returns the number of visible panes that are contained in a mini-frame window. (Overrides [CPaneFrameWnd::GetVisiblePaneCount](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__getvisiblepanecount).)|  
|[CMultiPaneFrameWnd::InsertPane](#cmultipaneframewnd__insertpane)||  
|[CMultiPaneFrameWnd::LoadState](#cmultipaneframewnd__loadstate)|Loads the pane's state from the registry. (Overrides [CPaneFrameWnd::LoadState](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__loadstate).)|  
|[CMultiPaneFrameWnd::OnDockToRecentPos](#cmultipaneframewnd__ondocktorecentpos)|Docks the mini-frame window at its most recent position. (Overrides [CPaneFrameWnd::OnDockToRecentPos](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__ondocktorecentpos).)|  
|[CMultiPaneFrameWnd::OnKillRollUpTimer](#cmultipaneframewnd__onkillrolluptimer)|Stops the rollup timer. (Overrides [CPaneFrameWnd::OnKillRollUpTimer](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__onkillrolluptimer).)|  
|[CMultiPaneFrameWnd::OnPaneRecalcLayout](#cmultipaneframewnd__onpanerecalclayout)|Adjusts the layout of a pane inside a mini-frame window. (Overrides [CPaneFrameWnd::OnPaneRecalcLayout](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__onpanerecalclayout).)|  
|[CMultiPaneFrameWnd::OnSetRollUpTimer](#cmultipaneframewnd__onsetrolluptimer)|Sets the rollup timer. (Overrides [CPaneFrameWnd::OnSetRollUpTimer](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__onsetrolluptimer).)|  
|[CMultiPaneFrameWnd::OnShowPane](#cmultipaneframewnd__onshowpane)|Called by the framework when a pane in the mini-frame window is hidden or displayed. (Overrides [CPaneFrameWnd::OnShowPane](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__onshowpane).)|  
|[CMultiPaneFrameWnd::PaneFromPoint](#cmultipaneframewnd__panefrompoint)|Returns a pane if it contains a user-supplied point inside a mini-frame window. (Overrides [CPaneFrameWnd::PaneFromPoint](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__panefrompoint).)|  
|[CMultiPaneFrameWnd::RemoveNonValidPanes](#cmultipaneframewnd__removenonvalidpanes)|Called by the framework to remove non-valid panes. (Overrides [CPaneFrameWnd::RemoveNonValidPanes](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__removenonvalidpanes).)|  
|[CMultiPaneFrameWnd::RemovePane](#cmultipaneframewnd__removepane)|Removes a pane from the mini-frame window. (Overrides [CPaneFrameWnd::RemovePane](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__removepane).)|  
|[CMultiPaneFrameWnd::ReplacePane](#cmultipaneframewnd__replacepane)|Replaces one pane with another. (Overrides [CPaneFrameWnd::ReplacePane](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__replacepane).)|  
|[CMultiPaneFrameWnd::SaveState](#cmultipaneframewnd__savestate)|Saves the pane's state to the registry. (Overrides [CPaneFrameWnd::SaveState](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__savestate).)|  
|[CMultiPaneFrameWnd::Serialize](#cmultipaneframewnd__serialize)|(Overrides `CPaneFrameWnd::Serialize`.)|  
|[CMultiPaneFrameWnd::SetDockState](#cmultipaneframewnd__setdockstate)|Sets the docking state. (Overrides [CPaneFrameWnd::SetDockState](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__setdockstate).)|  
|[CMultiPaneFrameWnd::SetLastFocusedPane](#cmultipaneframewnd__setlastfocusedpane)||  
|[CMultiPaneFrameWnd::SetPreDockState](#cmultipaneframewnd__setpredockstate)|Sets the predocking state. (Overrides [CPaneFrameWnd::SetPreDockState](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__setpredockstate).)|  
|[CMultiPaneFrameWnd::StoreRecentDockSiteInfo](#cmultipaneframewnd__storerecentdocksiteinfo)|(Overrides [CPaneFrameWnd::StoreRecentDockSiteInfo](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__storerecentdocksiteinfo).)|  
|[CMultiPaneFrameWnd::StoreRecentTabRelatedInfo](#cmultipaneframewnd__storerecenttabrelatedinfo)|(Overrides [CPaneFrameWnd::StoreRecentTabRelatedInfo](../../mfc/reference/cpaneframewnd-class.md#cpaneframewnd__storerecenttabrelatedinfo).)|  
  
## Remarks  
 Most of the methods in this class override methods in the [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md) class.  
  
 If a pane uses the `AFX_CBRS_AUTO_ROLLUP` style and the user docks that pane to a multi-pane frame window, the user can roll up the window regardless of the style settings of the other docked panes.  
  
 The framework automatically creates a `CMultiPaneFrameWnd` object when the user floats a pane that uses the `CBRS_FLOAT_MULTI` style.  
  
 For information about deriving a class from the `CPaneFrameWnd` class and creating it dynamically, see [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).  
  
## Example  
 The following example demonstrates how to retrieve a pointer to a `CMultiPaneFrameWnd` object. This code snippet is part of the [Set Pane Size sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_SetPaneSize#4](../../mfc/reference/codesnippet/cpp/cmultipaneframewnd-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)  
  
 [CMultiPaneFrameWnd](../../mfc/reference/cmultipaneframewnd-class.md)  
  
## Requirements  
 **Header:** afxMultiPaneFrameWnd.h  
  
##  <a name="cmultipaneframewnd__addpane"></a>  CMultiPaneFrameWnd::AddPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AddPane(CBasePane* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__addrecentpane"></a>  CMultiPaneFrameWnd::AddRecentPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL AddRecentPane(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__adjustlayout"></a>  CMultiPaneFrameWnd::AdjustLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustLayout();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__adjustpaneframes"></a>  CMultiPaneFrameWnd::AdjustPaneFrames  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustPaneFrames();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__calcexpecteddockedrect"></a>  CMultiPaneFrameWnd::CalcExpectedDockedRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CalcExpectedDockedRect(
    CWnd* pWndToDock,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar);
```  
  
### Parameters  
 [in] `pWndToDock`  
 [in] `ptMouse`  
 [in] `rectResult`  
 [in] `bDrawTab`  
 [in] `ppTargetBar`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__canbeattached"></a>  CMultiPaneFrameWnd::CanBeAttached  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CanBeAttached() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__canbedockedtopane"></a>  CMultiPaneFrameWnd::CanBeDockedToPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CanBeDockedToPane(const CDockablePane* pDockingBar) const;

 
```  
  
### Parameters  
 [in] `pDockingBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__checkgrippervisibility"></a>  CMultiPaneFrameWnd::CheckGripperVisibility  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CheckGripperVisibility();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__closeminiframe"></a>  CMultiPaneFrameWnd::CloseMiniFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CloseMiniFrame();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__converttotabbeddocument"></a>  CMultiPaneFrameWnd::ConvertToTabbedDocument  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ConvertToTabbedDocument();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__dockframe"></a>  CMultiPaneFrameWnd::DockFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DockFrame(
    CPaneFrameWnd* pDockedFrame,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
 [in] `pDockedFrame`  
 [in] `dockMethod`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__dockpane"></a>  CMultiPaneFrameWnd::DockPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DockPane(CDockablePane* pDockedBar);
```  
  
### Parameters  
 [in] `pDockedBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__dockrecentpanetomainframe"></a>  CMultiPaneFrameWnd::DockRecentPaneToMainFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void DockRecentPaneToMainFrame(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__getcaptiontext"></a>  CMultiPaneFrameWnd::GetCaptionText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CString GetCaptionText();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__getfirstvisiblepane"></a>  CMultiPaneFrameWnd::GetFirstVisiblePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CWnd* GetFirstVisiblePane() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__getpane"></a>  CMultiPaneFrameWnd::GetPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CWnd* GetPane() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__getpanecontainermanager"></a>  CMultiPaneFrameWnd::GetPaneContainerManager  
 Returns a reference to the internal container manager object.  
  
```  
CPaneContainerManager& GetPaneContainerManager();
```  
  
### Return Value  
 A reference to the internal container manager object.  
  
### Remarks  
 This method can be used to access the internal [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md) object.  
  
##  <a name="cmultipaneframewnd__getpanecount"></a>  CMultiPaneFrameWnd::GetPaneCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetPaneCount() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__getvisiblepanecount"></a>  CMultiPaneFrameWnd::GetVisiblePaneCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetVisiblePaneCount() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__insertpane"></a>  CMultiPaneFrameWnd::InsertPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter);
```  
  
### Parameters  
 [in] `pControlBar`  
 [in] `pTarget`  
 [in] `bAfter`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__loadstate"></a>  CMultiPaneFrameWnd::LoadState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 [in] `uiID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__ondocktorecentpos"></a>  CMultiPaneFrameWnd::OnDockToRecentPos  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDockToRecentPos();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__onkillrolluptimer"></a>  CMultiPaneFrameWnd::OnKillRollUpTimer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnKillRollUpTimer();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__onpanerecalclayout"></a>  CMultiPaneFrameWnd::OnPaneRecalcLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnPaneRecalcLayout();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__onsetrolluptimer"></a>  CMultiPaneFrameWnd::OnSetRollUpTimer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnSetRollUpTimer();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__onshowpane"></a>  CMultiPaneFrameWnd::OnShowPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnShowPane(
    CDockablePane* pBar,  
    BOOL bShow);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `bShow`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__panefrompoint"></a>  CMultiPaneFrameWnd::PaneFromPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    BOOL bCheckVisibility);
```  
  
### Parameters  
 [in] `point`  
 [in] `nSensitivity`  
 [in] `bCheckVisibility`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__removenonvalidpanes"></a>  CMultiPaneFrameWnd::RemoveNonValidPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemoveNonValidPanes();
```  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__removepane"></a>  CMultiPaneFrameWnd::RemovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemovePane(
    CBasePane* pBar,  
    BOOL bDestroy = FALSE,  
    BOOL bNoDelayedDestroy = TRUE);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `bDestroy`  
 [in] `bNoDelayedDestroy`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__replacepane"></a>  CMultiPaneFrameWnd::ReplacePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ReplacePane(
    CBasePane* pBarOrg,  
    CBasePane* pBarReplaceWith);
```  
  
### Parameters  
 [in] `pBarOrg`  
 [in] `pBarReplaceWith`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__savestate"></a>  CMultiPaneFrameWnd::SaveState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 [in] `uiID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__serialize"></a>  CMultiPaneFrameWnd::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__setdockstate"></a>  CMultiPaneFrameWnd::SetDockState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetDockState(CDockingManager* pDockManager);
```  
  
### Parameters  
 [in] `pDockManager`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__setlastfocusedpane"></a>  CMultiPaneFrameWnd::SetLastFocusedPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetLastFocusedPane(HWND hwnd);
```  
  
### Parameters  
 [in] `hwnd`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__setpredockstate"></a>  CMultiPaneFrameWnd::SetPreDockState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL SetPreDockState(
    AFX_PREDOCK_STATE preDockState,  
    CBasePane* pBarToDock = NULL,  
    AFX_DOCK_METHOD dockMethod = DM_MOUSE);
```  
  
### Parameters  
 [in] `preDockState`  
 [in] `pBarToDock`  
 [in] `dockMethod`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__storerecentdocksiteinfo"></a>  CMultiPaneFrameWnd::StoreRecentDockSiteInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreRecentDockSiteInfo(CPane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="cmultipaneframewnd__storerecenttabrelatedinfo"></a>  CMultiPaneFrameWnd::StoreRecentTabRelatedInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,  
    CDockablePane* pTabbedBar);
```  
  
### Parameters  
 [in] `pDockingBar`  
 [in] `pTabbedBar`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md)
