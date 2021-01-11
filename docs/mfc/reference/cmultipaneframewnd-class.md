---
description: "Learn more about: CMultiPaneFrameWnd Class"
title: "CMultiPaneFrameWnd Class"
ms.date: "11/04/2016"
f1_keywords: ["CMultiPaneFrameWnd", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AddPane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AddRecentPane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AdjustLayout", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AdjustPaneFrames", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CalcExpectedDockedRect", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CanBeAttached", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CanBeDockedToPane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CheckGripperVisibility", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CloseMiniFrame", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::ConvertToTabbedDocument", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::DockFrame", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::DockPane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::DockRecentPaneToMainFrame", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetCaptionText", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetPaneContainerManager", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetFirstVisiblePane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetPane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetPaneCount", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetVisiblePaneCount", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::InsertPane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::LoadState", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnDockToRecentPos", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnKillRollUpTimer", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnPaneRecalcLayout", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnSetRollUpTimer", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnShowPane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::PaneFromPoint", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::RemoveNonValidPanes", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::RemovePane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::ReplacePane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SaveState", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::Serialize", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SetDockState", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SetLastFocusedPane", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SetPreDockState", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::StoreRecentDockSiteInfo", "AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::StoreRecentTabRelatedInfo"]
helpviewer_keywords: ["CMultiPaneFrameWnd [MFC], AddPane", "CMultiPaneFrameWnd [MFC], AddRecentPane", "CMultiPaneFrameWnd [MFC], AdjustLayout", "CMultiPaneFrameWnd [MFC], AdjustPaneFrames", "CMultiPaneFrameWnd [MFC], CalcExpectedDockedRect", "CMultiPaneFrameWnd [MFC], CanBeAttached", "CMultiPaneFrameWnd [MFC], CanBeDockedToPane", "CMultiPaneFrameWnd [MFC], CheckGripperVisibility", "CMultiPaneFrameWnd [MFC], CloseMiniFrame", "CMultiPaneFrameWnd [MFC], ConvertToTabbedDocument", "CMultiPaneFrameWnd [MFC], DockFrame", "CMultiPaneFrameWnd [MFC], DockPane", "CMultiPaneFrameWnd [MFC], DockRecentPaneToMainFrame", "CMultiPaneFrameWnd [MFC], GetCaptionText", "CMultiPaneFrameWnd [MFC], GetPaneContainerManager", "CMultiPaneFrameWnd [MFC], GetFirstVisiblePane", "CMultiPaneFrameWnd [MFC], GetPane", "CMultiPaneFrameWnd [MFC], GetPaneCount", "CMultiPaneFrameWnd [MFC], GetVisiblePaneCount", "CMultiPaneFrameWnd [MFC], InsertPane", "CMultiPaneFrameWnd [MFC], LoadState", "CMultiPaneFrameWnd [MFC], OnDockToRecentPos", "CMultiPaneFrameWnd [MFC], OnKillRollUpTimer", "CMultiPaneFrameWnd [MFC], OnPaneRecalcLayout", "CMultiPaneFrameWnd [MFC], OnSetRollUpTimer", "CMultiPaneFrameWnd [MFC], OnShowPane", "CMultiPaneFrameWnd [MFC], PaneFromPoint", "CMultiPaneFrameWnd [MFC], RemoveNonValidPanes", "CMultiPaneFrameWnd [MFC], RemovePane", "CMultiPaneFrameWnd [MFC], ReplacePane", "CMultiPaneFrameWnd [MFC], SaveState", "CMultiPaneFrameWnd [MFC], Serialize", "CMultiPaneFrameWnd [MFC], SetDockState", "CMultiPaneFrameWnd [MFC], SetLastFocusedPane", "CMultiPaneFrameWnd [MFC], SetPreDockState", "CMultiPaneFrameWnd [MFC], StoreRecentDockSiteInfo", "CMultiPaneFrameWnd [MFC], StoreRecentTabRelatedInfo"]
ms.assetid: 989a548e-0d70-46b7-a513-8cf740e1be3e
---
# CMultiPaneFrameWnd Class

The `CMultiPaneFrameWnd` class extends [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md). It can support multiple panes. Instead of a single embedded handle to a control bar, `CMultiPaneFrameWnd` contains a [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md) object that enables the user to dock one `CMultiPaneFrameWnd` to another and dynamically create multiple floating, tabbed windows.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMultiPaneFrameWnd : public CPaneFrameWnd
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMultiPaneFrameWnd::AddPane](#addpane)|Adds a pane. (Overrides [CPaneFrameWnd::AddPane](../../mfc/reference/cpaneframewnd-class.md#addpane).)|
|[CMultiPaneFrameWnd::AddRecentPane](#addrecentpane)||
|[CMultiPaneFrameWnd::AdjustLayout](#adjustlayout)|Adjusts the layout of the mini-frame window. (Overrides [CPaneFrameWnd::AdjustLayout](../../mfc/reference/cpaneframewnd-class.md#adjustlayout).)|
|[CMultiPaneFrameWnd::AdjustPaneFrames](#adjustpaneframes)|(Overrides [CPaneFrameWnd::AdjustPaneFrames](../../mfc/reference/cpaneframewnd-class.md#adjustpaneframes).)|
|[CMultiPaneFrameWnd::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calculates the expected rectangle of a docked window. (Overrides [CPaneFrameWnd::CalcExpectedDockedRect](../../mfc/reference/cpaneframewnd-class.md#calcexpecteddockedrect).)|
|[CMultiPaneFrameWnd::CanBeAttached](#canbeattached)|Determines whether the current pane can dock to another pane or frame window. (Overrides [CPaneFrameWnd::CanBeAttached](../../mfc/reference/cpaneframewnd-class.md#canbeattached).)|
|[CMultiPaneFrameWnd::CanBeDockedToPane](#canbedockedtopane)|Determines whether the mini-frame window can dock to a pane. (Overrides [CPaneFrameWnd::CanBeDockedToPane](../../mfc/reference/cpaneframewnd-class.md#canbedockedtopane).)|
|[CMultiPaneFrameWnd::CheckGripperVisibility](#checkgrippervisibility)|(Overrides [CPaneFrameWnd::CheckGripperVisibility](../../mfc/reference/cpaneframewnd-class.md#checkgrippervisibility).)|
|[CMultiPaneFrameWnd::CloseMiniFrame](#closeminiframe)|(Overrides `CPaneFrameWnd::CloseMiniFrame`.)|
|[CMultiPaneFrameWnd::ConvertToTabbedDocument](#converttotabbeddocument)|Converts the pane to a tabbed document. (Overrides [CPaneFrameWnd::ConvertToTabbedDocument](../../mfc/reference/cpaneframewnd-class.md#converttotabbeddocument).)|
|[CMultiPaneFrameWnd::DockFrame](#dockframe)||
|[CMultiPaneFrameWnd::DockPane](#dockpane)|Docks the pane. (Overrides [CPaneFrameWnd::DockPane](../../mfc/reference/cpaneframewnd-class.md#dockpane).)|
|[CMultiPaneFrameWnd::DockRecentPaneToMainFrame](#dockrecentpanetomainframe)||
|[CMultiPaneFrameWnd::GetCaptionText](#getcaptiontext)|Returns the caption text. (Overrides [CPaneFrameWnd::GetCaptionText](../../mfc/reference/cpaneframewnd-class.md#getcaptiontext).)|
|[CMultiPaneFrameWnd::GetPaneContainerManager](#getpanecontainermanager)|Returns a reference to the internal container manager object.|
|[CMultiPaneFrameWnd::GetFirstVisiblePane](#getfirstvisiblepane)|Returns the first visible pane that is contained in a mini-frame window. (Overrides [CPaneFrameWnd::GetFirstVisiblePane](../../mfc/reference/cpaneframewnd-class.md#getfirstvisiblepane).)|
|[CMultiPaneFrameWnd::GetPane](#getpane)|Returns a pane that is contained in the mini-frame window. (Overrides [CPaneFrameWnd::GetPane](../../mfc/reference/cpaneframewnd-class.md#getpane).)|
|[CMultiPaneFrameWnd::GetPaneCount](#getpanecount)|Returns the number of panes that are contained in a mini-frame window. (Overrides [CPaneFrameWnd::GetPaneCount](../../mfc/reference/cpaneframewnd-class.md#getpanecount).)|
|[CMultiPaneFrameWnd::GetVisiblePaneCount](#getvisiblepanecount)|Returns the number of visible panes that are contained in a mini-frame window. (Overrides [CPaneFrameWnd::GetVisiblePaneCount](../../mfc/reference/cpaneframewnd-class.md#getvisiblepanecount).)|
|[CMultiPaneFrameWnd::InsertPane](#insertpane)||
|[CMultiPaneFrameWnd::LoadState](#loadstate)|Loads the pane's state from the registry. (Overrides [CPaneFrameWnd::LoadState](../../mfc/reference/cpaneframewnd-class.md#loadstate).)|
|[CMultiPaneFrameWnd::OnDockToRecentPos](#ondocktorecentpos)|Docks the mini-frame window at its most recent position. (Overrides [CPaneFrameWnd::OnDockToRecentPos](../../mfc/reference/cpaneframewnd-class.md#ondocktorecentpos).)|
|[CMultiPaneFrameWnd::OnKillRollUpTimer](#onkillrolluptimer)|Stops the rollup timer. (Overrides [CPaneFrameWnd::OnKillRollUpTimer](../../mfc/reference/cpaneframewnd-class.md#onkillrolluptimer).)|
|[CMultiPaneFrameWnd::OnPaneRecalcLayout](#onpanerecalclayout)|Adjusts the layout of a pane inside a mini-frame window. (Overrides [CPaneFrameWnd::OnPaneRecalcLayout](../../mfc/reference/cpaneframewnd-class.md#onpanerecalclayout).)|
|[CMultiPaneFrameWnd::OnSetRollUpTimer](#onsetrolluptimer)|Sets the rollup timer. (Overrides [CPaneFrameWnd::OnSetRollUpTimer](../../mfc/reference/cpaneframewnd-class.md#onsetrolluptimer).)|
|[CMultiPaneFrameWnd::OnShowPane](#onshowpane)|Called by the framework when a pane in the mini-frame window is hidden or displayed. (Overrides [CPaneFrameWnd::OnShowPane](../../mfc/reference/cpaneframewnd-class.md#onshowpane).)|
|[CMultiPaneFrameWnd::PaneFromPoint](#panefrompoint)|Returns a pane if it contains a user-supplied point inside a mini-frame window. (Overrides [CPaneFrameWnd::PaneFromPoint](../../mfc/reference/cpaneframewnd-class.md#panefrompoint).)|
|[CMultiPaneFrameWnd::RemoveNonValidPanes](#removenonvalidpanes)|Called by the framework to remove non-valid panes. (Overrides [CPaneFrameWnd::RemoveNonValidPanes](../../mfc/reference/cpaneframewnd-class.md#removenonvalidpanes).)|
|[CMultiPaneFrameWnd::RemovePane](#removepane)|Removes a pane from the mini-frame window. (Overrides [CPaneFrameWnd::RemovePane](../../mfc/reference/cpaneframewnd-class.md#removepane).)|
|[CMultiPaneFrameWnd::ReplacePane](#replacepane)|Replaces one pane with another. (Overrides [CPaneFrameWnd::ReplacePane](../../mfc/reference/cpaneframewnd-class.md#replacepane).)|
|[CMultiPaneFrameWnd::SaveState](#savestate)|Saves the pane's state to the registry. (Overrides [CPaneFrameWnd::SaveState](../../mfc/reference/cpaneframewnd-class.md#savestate).)|
|[CMultiPaneFrameWnd::Serialize](#serialize)|(Overrides `CPaneFrameWnd::Serialize`.)|
|[CMultiPaneFrameWnd::SetDockState](#setdockstate)|Sets the docking state. (Overrides [CPaneFrameWnd::SetDockState](../../mfc/reference/cpaneframewnd-class.md#setdockstate).)|
|[CMultiPaneFrameWnd::SetLastFocusedPane](#setlastfocusedpane)||
|[CMultiPaneFrameWnd::SetPreDockState](#setpredockstate)|Sets the predocking state. (Overrides [CPaneFrameWnd::SetPreDockState](../../mfc/reference/cpaneframewnd-class.md#setpredockstate).)|
|[CMultiPaneFrameWnd::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)|(Overrides [CPaneFrameWnd::StoreRecentDockSiteInfo](../../mfc/reference/cpaneframewnd-class.md#storerecentdocksiteinfo).)|
|[CMultiPaneFrameWnd::StoreRecentTabRelatedInfo](#storerecenttabrelatedinfo)|(Overrides [CPaneFrameWnd::StoreRecentTabRelatedInfo](../../mfc/reference/cpaneframewnd-class.md#storerecenttabrelatedinfo).)|

## Remarks

Most of the methods in this class override methods in the [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md) class.

If a pane uses the AFX_CBRS_AUTO_ROLLUP style and the user docks that pane to a multi-pane frame window, the user can roll up the window regardless of the style settings of the other docked panes.

The framework automatically creates a `CMultiPaneFrameWnd` object when the user floats a pane that uses the CBRS_FLOAT_MULTI style.

For information about deriving a class from the `CPaneFrameWnd` class and creating it dynamically, see [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).

## Example

The following example demonstrates how to retrieve a pointer to a `CMultiPaneFrameWnd` object. This code snippet is part of the [Set Pane Size sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_SetPaneSize#4](../../mfc/reference/codesnippet/cpp/cmultipaneframewnd-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)

[CMultiPaneFrameWnd](../../mfc/reference/cmultipaneframewnd-class.md)

## Requirements

**Header:** afxMultiPaneFrameWnd.h

## <a name="addpane"></a> CMultiPaneFrameWnd::AddPane

```
virtual void AddPane(CBasePane* pWnd);
```

### Parameters

[in] *pWnd*<br/>

### Remarks

## <a name="addrecentpane"></a> CMultiPaneFrameWnd::AddRecentPane

```
virtual BOOL AddRecentPane(CDockablePane* pBar);
```

### Parameters

[in] *pBar*<br/>

### Return Value

### Remarks

## <a name="adjustlayout"></a> CMultiPaneFrameWnd::AdjustLayout

```
virtual void AdjustLayout();
```

### Remarks

## <a name="adjustpaneframes"></a> CMultiPaneFrameWnd::AdjustPaneFrames

```
virtual void AdjustPaneFrames();
```

### Remarks

## <a name="calcexpecteddockedrect"></a> CMultiPaneFrameWnd::CalcExpectedDockedRect

```
virtual void CalcExpectedDockedRect(
    CWnd* pWndToDock,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### Parameters

[in] *pWndToDock*<br/>
[in] *ptMouse*<br/>
[in] *rectResult*<br/>
[in] *bDrawTab*<br/>
[in] *ppTargetBar*<br/>

### Remarks

## <a name="canbeattached"></a> CMultiPaneFrameWnd::CanBeAttached

```
virtual BOOL CanBeAttached() const;
```

### Return Value

### Remarks

## <a name="canbedockedtopane"></a> CMultiPaneFrameWnd::CanBeDockedToPane

```
virtual BOOL CanBeDockedToPane(const CDockablePane* pDockingBar) const;
```

### Parameters

[in] *pDockingBar*<br/>

### Return Value

### Remarks

## <a name="checkgrippervisibility"></a> CMultiPaneFrameWnd::CheckGripperVisibility

```
virtual void CheckGripperVisibility();
```

### Remarks

## <a name="closeminiframe"></a> CMultiPaneFrameWnd::CloseMiniFrame

```
virtual void CloseMiniFrame();
```

### Remarks

## <a name="converttotabbeddocument"></a> CMultiPaneFrameWnd::ConvertToTabbedDocument

```
virtual void ConvertToTabbedDocument();
```

### Remarks

## <a name="dockframe"></a> CMultiPaneFrameWnd::DockFrame

```
virtual BOOL DockFrame(
    CPaneFrameWnd* pDockedFrame,
    AFX_DOCK_METHOD dockMethod);
```

### Parameters

[in] *pDockedFrame*<br/>
[in] *dockMethod*<br/>

### Return Value

### Remarks

## <a name="dockpane"></a> CMultiPaneFrameWnd::DockPane

```
virtual BOOL DockPane(CDockablePane* pDockedBar);
```

### Parameters

[in] *pDockedBar*<br/>

### Return Value

### Remarks

## <a name="dockrecentpanetomainframe"></a> CMultiPaneFrameWnd::DockRecentPaneToMainFrame

```
virtual void DockRecentPaneToMainFrame(CDockablePane* pBar);
```

### Parameters

[in] *pBar*<br/>

### Remarks

## <a name="getcaptiontext"></a> CMultiPaneFrameWnd::GetCaptionText

```
virtual CString GetCaptionText();
```

### Return Value

### Remarks

## <a name="getfirstvisiblepane"></a> CMultiPaneFrameWnd::GetFirstVisiblePane

```
virtual CWnd* GetFirstVisiblePane() const;
```

### Return Value

### Remarks

## <a name="getpane"></a> CMultiPaneFrameWnd::GetPane

```
virtual CWnd* GetPane() const;
```

### Return Value

### Remarks

## <a name="getpanecontainermanager"></a> CMultiPaneFrameWnd::GetPaneContainerManager

Returns a reference to the internal container manager object.

```
CPaneContainerManager& GetPaneContainerManager();
```

### Return Value

A reference to the internal container manager object.

### Remarks

This method can be used to access the internal [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md) object.

## <a name="getpanecount"></a> CMultiPaneFrameWnd::GetPaneCount

```
virtual int GetPaneCount() const;
```

### Return Value

### Remarks

## <a name="getvisiblepanecount"></a> CMultiPaneFrameWnd::GetVisiblePaneCount

```
virtual int GetVisiblePaneCount() const;
```

### Return Value

### Remarks

## <a name="insertpane"></a> CMultiPaneFrameWnd::InsertPane

```
virtual BOOL InsertPane(
    CBasePane* pControlBar,
    CBasePane* pTarget,
    BOOL bAfter);
```

### Parameters

[in] *pControlBar*<br/>
[in] *pTarget*<br/>
[in] *bAfter*<br/>

### Return Value

### Remarks

## <a name="loadstate"></a> CMultiPaneFrameWnd::LoadState

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### Parameters

[in] *lpszProfileName*<br/>
[in] *uiID*<br/>

### Return Value

### Remarks

## <a name="ondocktorecentpos"></a> CMultiPaneFrameWnd::OnDockToRecentPos

```
virtual void OnDockToRecentPos();
```

### Remarks

## <a name="onkillrolluptimer"></a> CMultiPaneFrameWnd::OnKillRollUpTimer

```
virtual void OnKillRollUpTimer();
```

### Remarks

## <a name="onpanerecalclayout"></a> CMultiPaneFrameWnd::OnPaneRecalcLayout

```
virtual void OnPaneRecalcLayout();
```

### Remarks

## <a name="onsetrolluptimer"></a> CMultiPaneFrameWnd::OnSetRollUpTimer

```
virtual void OnSetRollUpTimer();
```

### Remarks

## <a name="onshowpane"></a> CMultiPaneFrameWnd::OnShowPane

```
virtual void OnShowPane(
    CDockablePane* pBar,
    BOOL bShow);
```

### Parameters

[in] *pBar*<br/>
[in] *bShow*<br/>

### Remarks

## <a name="panefrompoint"></a> CMultiPaneFrameWnd::PaneFromPoint

```
virtual CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    BOOL bCheckVisibility);
```

### Parameters

[in] *point*<br/>
[in] *nSensitivity*<br/>
[in] *bCheckVisibility*<br/>

### Return Value

### Remarks

## <a name="removenonvalidpanes"></a> CMultiPaneFrameWnd::RemoveNonValidPanes

```
virtual void RemoveNonValidPanes();
```

### Remarks

## <a name="removepane"></a> CMultiPaneFrameWnd::RemovePane

```
virtual void RemovePane(
    CBasePane* pBar,
    BOOL bDestroy = FALSE,
    BOOL bNoDelayedDestroy = TRUE);
```

### Parameters

[in] *pBar*<br/>
[in] *bDestroy*<br/>
[in] *bNoDelayedDestroy*<br/>

### Remarks

## <a name="replacepane"></a> CMultiPaneFrameWnd::ReplacePane

```
virtual void ReplacePane(
    CBasePane* pBarOrg,
    CBasePane* pBarReplaceWith);
```

### Parameters

[in] *pBarOrg*<br/>
[in] *pBarReplaceWith*<br/>

### Remarks

## <a name="savestate"></a> CMultiPaneFrameWnd::SaveState

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### Parameters

[in] *lpszProfileName*<br/>
[in] *uiID*<br/>

### Return Value

### Remarks

## <a name="serialize"></a> CMultiPaneFrameWnd::Serialize

```
virtual void Serialize(CArchive& ar);
```

### Parameters

[in] *ar*<br/>

### Remarks

## <a name="setdockstate"></a> CMultiPaneFrameWnd::SetDockState

```
virtual void SetDockState(CDockingManager* pDockManager);
```

### Parameters

[in] *pDockManager*<br/>

### Remarks

## <a name="setlastfocusedpane"></a> CMultiPaneFrameWnd::SetLastFocusedPane

```cpp
void SetLastFocusedPane(HWND hwnd);
```

### Parameters

[in] *hwnd*<br/>

### Remarks

## <a name="setpredockstate"></a> CMultiPaneFrameWnd::SetPreDockState

```
virtual BOOL SetPreDockState(
    AFX_PREDOCK_STATE preDockState,
    CBasePane* pBarToDock = NULL,
    AFX_DOCK_METHOD dockMethod = DM_MOUSE);
```

### Parameters

[in] *preDockState*<br/>
[in] *pBarToDock*<br/>
[in] *dockMethod*<br/>

### Return Value

### Remarks

## <a name="storerecentdocksiteinfo"></a> CMultiPaneFrameWnd::StoreRecentDockSiteInfo

```
virtual void StoreRecentDockSiteInfo(CPane* pBar);
```

### Parameters

[in] *pBar*<br/>

### Remarks

## <a name="storerecenttabrelatedinfo"></a> CMultiPaneFrameWnd::StoreRecentTabRelatedInfo

```
virtual void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,
    CDockablePane* pTabbedBar);
```

### Parameters

[in] *pDockingBar*<br/>
[in] *pTabbedBar*<br/>

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md)
