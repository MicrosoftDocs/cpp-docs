---
description: "Learn more about: CDockingManager Class"
title: "CDockingManager Class"
ms.date: "11/04/2016"
f1_keywords: ["CDockingManager", "AFXDOCKINGMANAGER/CDockingManager", "AFXDOCKINGMANAGER/CDockingManager::AddDockSite", "AFXDOCKINGMANAGER/CDockingManager::AddHiddenMDITabbedBar", "AFXDOCKINGMANAGER/CDockingManager::AddMiniFrame", "AFXDOCKINGMANAGER/CDockingManager::AddPane", "AFXDOCKINGMANAGER/CDockingManager::AdjustDockingLayout", "AFXDOCKINGMANAGER/CDockingManager::AdjustPaneFrames", "AFXDOCKINGMANAGER/CDockingManager::AdjustRectToClientArea", "AFXDOCKINGMANAGER/CDockingManager::AlignAutoHidePane", "AFXDOCKINGMANAGER/CDockingManager::AutoHidePane", "AFXDOCKINGMANAGER/CDockingManager::BringBarsToTop", "AFXDOCKINGMANAGER/CDockingManager::BuildPanesMenu", "AFXDOCKINGMANAGER/CDockingManager::CalcExpectedDockedRect", "AFXDOCKINGMANAGER/CDockingManager::Create", "AFXDOCKINGMANAGER/CDockingManager::DeterminePaneAndStatus", "AFXDOCKINGMANAGER/CDockingManager::DisableRestoreDockState", "AFXDOCKINGMANAGER/CDockingManager::DockPane", "AFXDOCKINGMANAGER/CDockingManager::DockPaneLeftOf", "AFXDOCKINGMANAGER/CDockingManager::EnableAutoHidePanes", "AFXDOCKINGMANAGER/CDockingManager::EnableDocking", "AFXDOCKINGMANAGER/CDockingManager::EnableDockSiteMenu", "AFXDOCKINGMANAGER/CDockingManager::EnablePaneContextMenu", "AFXDOCKINGMANAGER/CDockingManager::FindDockSite", "AFXDOCKINGMANAGER/CDockingManager::FindDockSiteByPane", "AFXDOCKINGMANAGER/CDockingManager::FindPaneByID", "AFXDOCKINGMANAGER/CDockingManager::FixupVirtualRects", "AFXDOCKINGMANAGER/CDockingManager::FrameFromPoint", "AFXDOCKINGMANAGER/CDockingManager::GetClientAreaBounds", "AFXDOCKINGMANAGER/CDockingManager::GetDockingMode", "AFXDOCKINGMANAGER/CDockingManager::GetDockSiteFrameWnd", "AFXDOCKINGMANAGER/CDockingManager::GetEnabledAutoHideAlignment", "AFXDOCKINGMANAGER/CDockingManager::GetMiniFrames", "AFXDOCKINGMANAGER/CDockingManager::GetOuterEdgeBounds", "AFXDOCKINGMANAGER/CDockingManager::GetPaneList", "AFXDOCKINGMANAGER/CDockingManager::GetSmartDockingManager", "AFXDOCKINGMANAGER/CDockingManager::GetSmartDockingManagerPermanent", "AFXDOCKINGMANAGER/CDockingManager::GetSmartDockingParams", "AFXDOCKINGMANAGER/CDockingManager::GetSmartDockingTheme", "AFXDOCKINGMANAGER/CDockingManager::HideAutoHidePanes", "AFXDOCKINGMANAGER/CDockingManager::InsertDockSite", "AFXDOCKINGMANAGER/CDockingManager::InsertPane", "AFXDOCKINGMANAGER/CDockingManager::IsDockSiteMenu", "AFXDOCKINGMANAGER/CDockingManager::IsInAdjustLayout", "AFXDOCKINGMANAGER/CDockingManager::IsOLEContainerMode", "AFXDOCKINGMANAGER/CDockingManager::IsPointNearDockSite", "AFXDOCKINGMANAGER/CDockingManager::IsPrintPreviewValid", "AFXDOCKINGMANAGER/CDockingManager::LoadState", "AFXDOCKINGMANAGER/CDockingManager::LockUpdate", "AFXDOCKINGMANAGER/CDockingManager::OnActivateFrame", "AFXDOCKINGMANAGER/CDockingManager::OnClosePopupMenu", "AFXDOCKINGMANAGER/CDockingManager::OnMoveMiniFrame", "AFXDOCKINGMANAGER/CDockingManager::OnPaneContextMenu", "AFXDOCKINGMANAGER/CDockingManager::PaneFromPoint", "AFXDOCKINGMANAGER/CDockingManager::ProcessPaneContextMenuCommand", "AFXDOCKINGMANAGER/CDockingManager::RecalcLayout", "AFXDOCKINGMANAGER/CDockingManager::ReleaseEmptyPaneContainers", "AFXDOCKINGMANAGER/CDockingManager::RemoveHiddenMDITabbedBar", "AFXDOCKINGMANAGER/CDockingManager::RemoveMiniFrame", "AFXDOCKINGMANAGER/CDockingManager::RemovePaneFromDockManager", "AFXDOCKINGMANAGER/CDockingManager::ReplacePane", "AFXDOCKINGMANAGER/CDockingManager::ResortMiniFramesForZOrder", "AFXDOCKINGMANAGER/CDockingManager::SaveState", "AFXDOCKINGMANAGER/CDockingManager::SendMessageToMiniFrames", "AFXDOCKINGMANAGER/CDockingManager::Serialize", "AFXDOCKINGMANAGER/CDockingManager::SetAutohideZOrder", "AFXDOCKINGMANAGER/CDockingManager::SetDockingMode", "AFXDOCKINGMANAGER/CDockingManager::SetDockState", "AFXDOCKINGMANAGER/CDockingManager::SetPrintPreviewMode", "AFXDOCKINGMANAGER/CDockingManager::SetSmartDockingParams", "AFXDOCKINGMANAGER/CDockingManager::ShowDelayShowMiniFrames", "AFXDOCKINGMANAGER/CDockingManager::ShowPanes", "AFXDOCKINGMANAGER/CDockingManager::StartSDocking", "AFXDOCKINGMANAGER/CDockingManager::StopSDocking", "AFXDOCKINGMANAGER/CDockingManager::m_bHideDockingBarsInContainerMode", "AFXDOCKINGMANAGER/CDockingManager::m_dockModeGlobal", "AFXDOCKINGMANAGER/CDockingManager::m_nDockSensitivity", "AFXDOCKINGMANAGER/CDockingManager::m_nTimeOutBeforeDockingBarDock", "AFXDOCKINGMANAGER/CDockingManager::m_nTimeOutBeforeToolBarDock"]
helpviewer_keywords: ["CDockingManager [MFC], AddDockSite", "CDockingManager [MFC], AddHiddenMDITabbedBar", "CDockingManager [MFC], AddMiniFrame", "CDockingManager [MFC], AddPane", "CDockingManager [MFC], AdjustDockingLayout", "CDockingManager [MFC], AdjustPaneFrames", "CDockingManager [MFC], AdjustRectToClientArea", "CDockingManager [MFC], AlignAutoHidePane", "CDockingManager [MFC], AutoHidePane", "CDockingManager [MFC], BringBarsToTop", "CDockingManager [MFC], BuildPanesMenu", "CDockingManager [MFC], CalcExpectedDockedRect", "CDockingManager [MFC], Create", "CDockingManager [MFC], DeterminePaneAndStatus", "CDockingManager [MFC], DisableRestoreDockState", "CDockingManager [MFC], DockPane", "CDockingManager [MFC], DockPaneLeftOf", "CDockingManager [MFC], EnableAutoHidePanes", "CDockingManager [MFC], EnableDocking", "CDockingManager [MFC], EnableDockSiteMenu", "CDockingManager [MFC], EnablePaneContextMenu", "CDockingManager [MFC], FindDockSite", "CDockingManager [MFC], FindDockSiteByPane", "CDockingManager [MFC], FindPaneByID", "CDockingManager [MFC], FixupVirtualRects", "CDockingManager [MFC], FrameFromPoint", "CDockingManager [MFC], GetClientAreaBounds", "CDockingManager [MFC], GetDockingMode", "CDockingManager [MFC], GetDockSiteFrameWnd", "CDockingManager [MFC], GetEnabledAutoHideAlignment", "CDockingManager [MFC], GetMiniFrames", "CDockingManager [MFC], GetOuterEdgeBounds", "CDockingManager [MFC], GetPaneList", "CDockingManager [MFC], GetSmartDockingManager", "CDockingManager [MFC], GetSmartDockingManagerPermanent", "CDockingManager [MFC], GetSmartDockingParams", "CDockingManager [MFC], GetSmartDockingTheme", "CDockingManager [MFC], HideAutoHidePanes", "CDockingManager [MFC], InsertDockSite", "CDockingManager [MFC], InsertPane", "CDockingManager [MFC], IsDockSiteMenu", "CDockingManager [MFC], IsInAdjustLayout", "CDockingManager [MFC], IsOLEContainerMode", "CDockingManager [MFC], IsPointNearDockSite", "CDockingManager [MFC], IsPrintPreviewValid", "CDockingManager [MFC], LoadState", "CDockingManager [MFC], LockUpdate", "CDockingManager [MFC], OnActivateFrame", "CDockingManager [MFC], OnClosePopupMenu", "CDockingManager [MFC], OnMoveMiniFrame", "CDockingManager [MFC], OnPaneContextMenu", "CDockingManager [MFC], PaneFromPoint", "CDockingManager [MFC], ProcessPaneContextMenuCommand", "CDockingManager [MFC], RecalcLayout", "CDockingManager [MFC], ReleaseEmptyPaneContainers", "CDockingManager [MFC], RemoveHiddenMDITabbedBar", "CDockingManager [MFC], RemoveMiniFrame", "CDockingManager [MFC], RemovePaneFromDockManager", "CDockingManager [MFC], ReplacePane", "CDockingManager [MFC], ResortMiniFramesForZOrder", "CDockingManager [MFC], SaveState", "CDockingManager [MFC], SendMessageToMiniFrames", "CDockingManager [MFC], Serialize", "CDockingManager [MFC], SetAutohideZOrder", "CDockingManager [MFC], SetDockingMode", "CDockingManager [MFC], SetDockState", "CDockingManager [MFC], SetPrintPreviewMode", "CDockingManager [MFC], SetSmartDockingParams", "CDockingManager [MFC], ShowDelayShowMiniFrames", "CDockingManager [MFC], ShowPanes", "CDockingManager [MFC], StartSDocking", "CDockingManager [MFC], StopSDocking", "CDockingManager [MFC], m_bHideDockingBarsInContainerMode", "CDockingManager [MFC], m_dockModeGlobal", "CDockingManager [MFC], m_nDockSensitivity", "CDockingManager [MFC], m_nTimeOutBeforeDockingBarDock", "CDockingManager [MFC], m_nTimeOutBeforeToolBarDock"]
ms.assetid: 98e69c43-55d8-4f43-b861-4fda80ec1e32
---
# CDockingManager Class

Implements the core functionality that controls docking layout in a main frame window.

## Syntax

```
class CDockingManager : public CObject
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDockingManager::AddDockSite](#adddocksite)|Creates a dock pane and adds it to the list of control bars.|
|[CDockingManager::AddHiddenMDITabbedBar](#addhiddenmditabbedbar)|Adds a handle to a bar pane to the list of hidden MDI tabbed bar panes.|
|[CDockingManager::AddMiniFrame](#addminiframe)|Adds a frame to the list of mini frames.|
|[CDockingManager::AddPane](#addpane)|Registers a pane with the docking manager.|
|[CDockingManager::AdjustDockingLayout](#adjustdockinglayout)|Recalculates and adjusts the layout of all panes in a frame window.|
|[CDockingManager::AdjustPaneFrames](#adjustpaneframes)|Causes the WM_NCCALCSIZE message to be sent to all panes and `CPaneFrameWnd` windows.|
|[CDockingManager::AdjustRectToClientArea](#adjustrecttoclientarea)|Adjusts the alignment of a rectangle.|
|[CDockingManager::AlignAutoHidePane](#alignautohidepane)|Resizes a docking pane in autohide mode so that it takes the full width or height of the frame’s client area surrounded by dock sites.|
|[CDockingManager::AutoHidePane](#autohidepane)|Creates an autohide toolbar.|
|[CDockingManager::BringBarsToTop](#bringbarstotop)|Brings the docked bars that have the specified alignment to the top.|
|[CDockingManager::BuildPanesMenu](#buildpanesmenu)|Adds names of docking panes and toolbars to a menu.|
|[CDockingManager::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calculates the expected rectangle of a docked window.|
|[CDockingManager::Create](#create)|Creates a docking manager.|
|[CDockingManager::DeterminePaneAndStatus](#determinepaneandstatus)|Determines the pane that contains a given point and its docking status.|
|[CDockingManager::DisableRestoreDockState](#disablerestoredockstate)|Enables or disables loading of docking layout from the registry.|
|[CDockingManager::DockPane](#dockpane)|Docks a pane to another pane or to a frame window.|
|[CDockingManager::DockPaneLeftOf](#dockpaneleftof)|Docks a pane to the left of another pane.|
|[CDockingManager::EnableAutoHidePanes](#enableautohidepanes)|Enables docking of the pane to the main frame, creates a dock pane, and adds it to the list of control bars.|
|[CDockingManager::EnableDocking](#enabledocking)|Creates a dock pane and enables docking of the pane to the main frame.|
|[CDockingManager::EnableDockSiteMenu](#enabledocksitemenu)|Displays an additional button that opens a pop-up menu on the captions of all docking panes.|
|[CDockingManager::EnablePaneContextMenu](#enablepanecontextmenu)|Tells the library to display a special context menu that has a list of application toolbars and docking panes when the user clicks the right mouse button and the library is processing the WM_CONTEXTMENU message.|
|[CDockingManager::FindDockSite](#finddocksite)|Retrieves the bar pane that is at the specified position and that has the specified alignment.|
|[CDockingManager::FindDockSiteByPane](#finddocksitebypane)|Returns the bar pane that has the id of the target bar pane.|
|[CDockingManager::FindPaneByID](#findpanebyid)|Finds a pane by the specified control ID.|
|[CDockingManager::FixupVirtualRects](#fixupvirtualrects)|Commits all current toolbar positions to virtual rectangles.|
|[CDockingManager::FrameFromPoint](#framefrompoint)|Returns the frame that contains the given point.|
|[CDockingManager::GetClientAreaBounds](#getclientareabounds)|Gets the rectangle that contains the bounds of the client area.|
|[CDockingManager::GetDockingMode](#getdockingmode)|Returns the current docking mode.|
|[CDockingManager::GetDockSiteFrameWnd](#getdocksiteframewnd)|Gets a pointer to the parent window frame.|
|[CDockingManager::GetEnabledAutoHideAlignment](#getenabledautohidealignment)|Returns the enabled alignment of the panes.|
|[CDockingManager::GetMiniFrames](#getminiframes)|Gets a list of miniframes.|
|[CDockingManager::GetOuterEdgeBounds](#getouteredgebounds)|Gets a rectangle that contains the outer edges of the frame.|
|[CDockingManager::GetPaneList](#getpanelist)|Returns a list of panes that belong to the docking manager. This includes all floating panes.|
|[CDockingManager::GetSmartDockingManager](#getsmartdockingmanager)|Retrieves a pointer to the smart docking manager.|
|[CDockingManager::GetSmartDockingManagerPermanent](#getsmartdockingmanagerpermanent)|Retrieves a pointer to the smart docking manager.|
|[CDockingManager::GetSmartDockingParams](#getsmartdockingparams)|Returns the smart docking parameters for the docking manager.|
|[CDockingManager::GetSmartDockingTheme](#getsmartdockingtheme)|A static method that returns a theme used to display smart docking markers.|
|[CDockingManager::HideAutoHidePanes](#hideautohidepanes)|Hides a pane that is in autohide mode.|
|[CDockingManager::InsertDockSite](#insertdocksite)|Creates a dock pane and inserts it into the list of control bars.|
|[CDockingManager::InsertPane](#insertpane)|Inserts a control pane into the list of control bars.|
|[CDockingManager::IsDockSiteMenu](#isdocksitemenu)|Specifies whether a pop-up menu is displayed on the captions of all panes.|
|[CDockingManager::IsInAdjustLayout](#isinadjustlayout)|Determines if the layouts of all panes are adjusted.|
|[CDockingManager::IsOLEContainerMode](#isolecontainermode)|Specifies whether the docking manager is in OLE container mode.|
|[CDockingManager::IsPointNearDockSite](#ispointneardocksite)|Determines whether a specified point is near the dock site.|
|[CDockingManager::IsPrintPreviewValid](#isprintpreviewvalid)|Determines if the print preview mode is set.|
|[CDockingManager::LoadState](#loadstate)|Loads the docking manager's state from the registry.|
|[CDockingManager::LockUpdate](#lockupdate)|Locks the given window.|
|[CDockingManager::OnActivateFrame](#onactivateframe)|Called by the framework when the frame window is made active or is deactivated.|
|[CDockingManager::OnClosePopupMenu](#onclosepopupmenu)|Called by the framework when an active pop-up menu processes a WM_DESTROY message.|
|[CDockingManager::OnMoveMiniFrame](#onmoveminiframe)|Called by the framework to move a mini-frame window.|
|[CDockingManager::OnPaneContextMenu](#onpanecontextmenu)|Called by the framework when it builds a menu that has a list of panes.|
|[CDockingManager::PaneFromPoint](#panefrompoint)|Returns the pane that contains the given point.|
|[CDockingManager::ProcessPaneContextMenuCommand](#processpanecontextmenucommand)|Called by the framework to select or to clear a check box for the specified command and recalculate the layout of a shown pane.|
|[CDockingManager::RecalcLayout](#recalclayout)|Recalculates the internal layout of the controls present in the list of controls.|
|[CDockingManager::ReleaseEmptyPaneContainers](#releaseemptypanecontainers)|Releases the empty pane containers.|
|[CDockingManager::RemoveHiddenMDITabbedBar](#removehiddenmditabbedbar)|Removes the specified hidden bar pane.|
|[CDockingManager::RemoveMiniFrame](#removeminiframe)|Removes a specified frame from the list of mini frames.|
|[CDockingManager::RemovePaneFromDockManager](#removepanefromdockmanager)|Unregisters a pane and removes it from the list in the docking manager.|
|[CDockingManager::ReplacePane](#replacepane)|Replaces one pane with another.|
|[CDockingManager::ResortMiniFramesForZOrder](#resortminiframesforzorder)|Resorts the frames in the list of mini frames.|
|[CDockingManager::SaveState](#savestate)|Saves the docking manager's state to the registry.|
|[CDockingManager::SendMessageToMiniFrames](#sendmessagetominiframes)|Sends the specified message to all mini frames.|
|[CDockingManager::Serialize](#serialize)|Writes the docking manager to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).)|
|[CDockingManager::SetAutohideZOrder](#setautohidezorder)|Sets the size, width, and height of the control bars and the specified pane.|
|[CDockingManager::SetDockingMode](#setdockingmode)|Sets the docking mode.|
|[CDockingManager::SetDockState](#setdockstate)|Sets the docking state of the control bars, the mini frames, and the autohide bars.|
|[CDockingManager::SetPrintPreviewMode](#setprintpreviewmode)|Sets the print preview mode of the bars that are displayed in the print preview.|
|[CDockingManager::SetSmartDockingParams](#setsmartdockingparams)|Sets the parameters that define the behavior of smart docking.|
|[CDockingManager::ShowDelayShowMiniFrames](#showdelayshowminiframes)|Shows or hides the windows of the mini frames.|
|[CDockingManager::ShowPanes](#showpanes)|Shows or hides the panes of the control and autohide bars.|
|[CDockingManager::StartSDocking](#startsdocking)|Starts the smart docking of the specified window according to the alignment of the smart docking manager.|
|[CDockingManager::StopSDocking](#stopsdocking)|Stops smart docking.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CDockingManager::m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode)|Specifies whether the docking manager hides panes in OLE container mode.|
|[CDockingManager::m_dockModeGlobal](#m_dockmodeglobal)|Specifies the global docking mode.|
|[CDockingManager::m_nDockSensitivity](#m_ndocksensitivity)|Specifies the docking sensitivity.|
|[CDockingManager::m_nTimeOutBeforeDockingBarDock](#m_ntimeoutbeforedockingbardock)|Specifies the time, in milliseconds, before a docking pane is docked in immediate docking mode.|
|[CDockingManager::m_nTimeOutBeforeToolBarDock](#m_ntimeoutbeforetoolbardock)|Specifies the time, in milliseconds, before a toolbar is docked to the main frame window.|

## Remarks

The main frame window creates and initializes this class automatically.

The docking manager object holds a list of all panes that are in the docking layout, and also a list of all [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) windows that belong to the main frame window.

The `CDockingManager` class implements some services that you can use to find a pane or a `CPaneFrameWnd` window. You usually do not call these services directly because they are wrapped in the main frame window object. For more information, see [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md).

## Customization Tips

The following tips apply to `CDockingManager` objects:

- [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) supports these docking modes:

  - `AFX_DOCK_TYPE::DT_IMMEDIATE`

  - `AFX_DOCK_TYPE::DT_STANDARD`

  - `AFX_DOCK_TYPE::DT_SMART`

  These docking modes are defined by [CDockingManager::m_dockModeGlobal](#m_dockmodeglobal) and are set by calling [CDockingManager::SetDockingMode](#setdockingmode).

- If you want to create a non-floating, non-resizable pane, call the [CDockingManager::AddPane](#addpane) method. This method registers the pane with the docking manager, which is responsible for the layout of the pane.

## Example

The following example demonstrates how to use various methods in the `CDockingManager` class to configure a `CDockingManager` object. The example shows how to display an additional button that opens a pop-up menu on the captions of all docking panes and how to set the docking mode of the object. This code snippet is part of the [Visual Studio Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#24](../../mfc/codesnippet/cpp/cdockingmanager-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CDockingManager](../../mfc/reference/cdockingmanager-class.md)

## Requirements

**Header:** afxDockingManager.h

## <a name="adddocksite"></a> CDockingManager::AddDockSite

Creates a dock pane and adds it to the list of control bars.

```
BOOL AddDockSite(
    const AFX_DOCKSITE_INFO& info,
    CDockSite** ppDockBar = NULL);
```

### Parameters

*info*<br/>
[in] A reference to an info structure that contains dock pane alignment.

*ppDockBar*<br/>
[out] A pointer to a pointer to the new dock pane.

### Return Value

TRUE if the dock pane was created successfully; FALSE otherwise.

## <a name="addhiddenmditabbedbar"></a> CDockingManager::AddHiddenMDITabbedBar

Adds a handle to a bar pane to the list of hidden MDI tabbed bar panes.

```cpp
void AddHiddenMDITabbedBar(CDockablePane* pBar);
```

### Parameters

*pBar*<br/>
[in] A pointer to a bar pane

## <a name="addpane"></a> CDockingManager::AddPane

Registers a pane with the docking manager.

```
BOOL AddPane(
    CBasePane* pWnd,
    BOOL bTail = TRUE,
    BOOL bAutoHide = FALSE,
    BOOL bInsertForOuterEdge = FALSE);
```

### Parameters

*pWnd*<br/>
[in, out] Specifies the pane to add to the docking manager.

*bTail*<br/>
[in] TRUE to add the pane to the end of the list of panes for the docking manager; otherwise, FALSE.

*bAutoHide*<br/>
[in] For internal use only. Always use the default value FALSE.

*bInsertForOuterEdge*<br/>
[in] For internal use only. Always use the default value FALSE.

### Return Value

TRUE if the pane was successfully registered with the docking manager; otherwise, FALSE.

### Remarks

Call this method to register non-floating, non-resizable panes with the docking manager. If you do not register the panes, they will not appear correctly when the docking manager is laid out.

## <a name="adjustdockinglayout"></a> CDockingManager::AdjustDockingLayout

Recalculates and adjusts the layout of all panes in a frame window.

```
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```

### Parameters

*hdwp*<br/>
[in] Specifies the deferred window position structure. For more information, see [Windows Data Types](/windows/win32/WinProg/windows-data-types).

### Remarks

## <a name="addminiframe"></a> CDockingManager::AddMiniFrame

Adds a frame to the list of mini frames.

```
virtual BOOL AddMiniFrame(CPaneFrameWnd* pWnd);
```

### Parameters

*pWnd*<br/>
[in] A pointer to a frame.

### Return Value

TRUE if the frame is not in the list of mini frames and was added successfully; FALSE otherwise.

## <a name="adjustpaneframes"></a> CDockingManager::AdjustPaneFrames

Causes the WM_NCCALCSIZE message to be sent to all panes and `CPaneFrameWnd` windows.

```
virtual void AdjustPaneFrames();
```

### Remarks

## <a name="adjustrecttoclientarea"></a> CDockingManager::AdjustRectToClientArea

Adjusts the alignment of a rectangle.

```
virtual BOOL AdjustRectToClientArea(
    CRect& rectResult,
    DWORD dwAlignment);
```

### Parameters

*rectResult*<br/>
[in] A reference to a `CRect` object

*dwAlignment*<br/>
[in] The alignment of the `CRect` object

### Return Value

TRUE if the alignment of the `CRect` object was adjusted; FALSE otherwise.

### Remarks

The *dwAlignment* parameter can have one of the following values:

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

## <a name="alignautohidepane"></a> CDockingManager::AlignAutoHidePane

Resizes a docking pane in autohide mode so that it takes the full width or height of the frame’s client area surrounded by dock sites.

```cpp
void AlignAutoHidePane(
    CPaneDivider* pDefaultSlider,
    BOOL bIsVisible = TRUE);
```

### Parameters

*pDefaultSlider*<br/>
[in] The docking slider pane.

*bIsVisible*<br/>
[in] TRUE if the docking pane is visible; FALSE otherwise.

## <a name="autohidepane"></a> CDockingManager::AutoHidePane

Creates an autohide toolbar.

```
CMFCAutoHideToolBar* AutoHidePane(
    CDockablePane* pBar,
    CMFCAutoHideToolBar* pCurrAutoHideToolBar = NULL);
```

### Parameters

*pBar*<br/>
[in] A pointer to the bar pane.

*pCurrAutoHideToolBar*<br/>
[in] A pointer to an auto hide toolbar.

### Return Value

NULL if the auto hide toolbar was not created; otherwise a pointer to the new toolbar.

## <a name="bringbarstotop"></a> CDockingManager::BringBarsToTop

Brings the docked bars that have the specified alignment to the top.

```cpp
void BringBarsToTop(
    DWORD dwAlignment = 0,
    BOOL bExcludeDockedBars = TRUE);
```

### Parameters

*dwAlignment*<br/>
[in] The alignment of the dock bars that are brought to the top of other windows.

*bExcludeDockedBars*<br/>
[in] TRUE to exclude the docked bars from being on top; otherwise FALSE.

## <a name="buildpanesmenu"></a> CDockingManager::BuildPanesMenu

Adds names of docking panes and toolbars to a menu.

```cpp
void BuildPanesMenu(
    CMenu& menu,
    BOOL bToolbarsOnly);
```

### Parameters

*menu*<br/>
[in] A menu to add the names of docking panes and toolbars to.

*bToolbarsOnly*<br/>
[in] TRUE to add only toolbar names to the menu; FALSE otherwise.

## <a name="calcexpecteddockedrect"></a> CDockingManager::CalcExpectedDockedRect

Calculates the expected rectangle of a docked window.

```cpp
void CalcExpectedDockedRect(
    CWnd* pWnd,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### Parameters

*pWnd*<br/>
[in] A pointer to the window to dock.

*ptMouse*<br/>
[in] The mouse location.

*rectResult*<br/>
[out] The calculated rectangle.

*bDrawTab*<br/>
[in] TRUE to draw a tab; otherwise FALSE.

*ppTargetBar*<br/>
[out] A pointer to a pointer to the target pane.

### Remarks

This method calculates the rectangle that a window would occupy if a user dragged the window to the point specified by *ptMouse* and docked it there.

## <a name="create"></a> CDockingManager::Create

Creates a docking manager.

```
BOOL Create(CFrameWnd* pParentWnd);
```

### Parameters

*pParentWnd*<br/>
[in] A pointer to the parent frame of the docking manager. This value must not be NULL.

### Return Value

TRUE always.

## <a name="determinepaneandstatus"></a> CDockingManager::DeterminePaneAndStatus

Determines the pane that contains a given point and its docking status.

```
virtual AFX_CS_STATUS DeterminePaneAndStatus(
    CPoint pt,
    int nSensitivity,
    DWORD dwEnabledAlignment,
    CBasePane** ppTargetBar,
    const CBasePane* pBarToIgnore,
    const CBasePane* pBarToDock);
```

### Parameters

*pt*<br/>
[in] The location of the pane to check.

*nSensitivity*<br/>
[in] The value to increase the window rectangle of each checked pane. A pane satisfies the search criteria if the given point is in this increased region.

*dwEnabledAlignment*<br/>
[in] The alignment of the docking pane.

*ppTargetBar*<br/>
[out] A pointer to a pointer to the target pane.

*pBarToIgnore*<br/>
[in] The pane that the method ignores.

*pBarToDock*<br/>
[in] The pane that is docked.

### Return Value

The docking status.

### Remarks

The docking status can be one of the following values:

|AFX_CS_STATUS value|Meaning|
|---------------------------|-------------|
|CS_NOTHING|The pointer is not over a dock site. Therefore, keep the pane floating.|
|CS_DOCK_IMMEDIATELY|The pointer is over the dock site in the immediate mode (DT_IMMEDIATE style is enabled), so the pane must be docked immediately.|
|CS_DELAY_DOCK|The pointer is over a dock site that is another docking pane or is an edge of the main frame.|
|CS_DELAY_DOCK_TO_TAB|The pointer is over a dock site that causes the pane to be docked in a tabbed window. This occurs when the mouse is over a caption of another docking pane or over a tab area of a tabbed pane.|

## <a name="disablerestoredockstate"></a> CDockingManager::DisableRestoreDockState

Enables or disables loading of docking layout from the registry.

```cpp
void DisableRestoreDockState(BOOL bDisable = TRUE);
```

### Parameters

*bDisable*<br/>
[in] TRUE to disable loading of docking layout from the registry; otherwise, FALSE.

### Remarks

Call this method when you must preserve the current layout of docking panes and toolbars when the application state is loading.

## <a name="dockpane"></a> CDockingManager::DockPane

Docks a pane to another pane or to a frame window.

```cpp
void DockPane(
    CBasePane* pBar,
    UINT nDockBarID = 0,
    LPCRECT lpRect = NULL);
```

### Parameters

*pBar*<br/>
[in] A pointer to a bar pane to dock to.

*nDockBarID*<br/>
[in] The id of the bar to dock.

*lpRect*<br/>
[in] The destination rectangle.

## <a name="dockpaneleftof"></a> CDockingManager::DockPaneLeftOf

Docks a pane to the left of another pane.

```
BOOL DockPaneLeftOf(
    CPane* pBarToDock,
    CPane* pTargetBar);
```

### Parameters

*pBarToDock*<br/>
[in] A pointer to the pane to be docked to the left of *pTargetBar*.

*pTargetBar*<br/>
[in] A pointer to the target pane.

### Return Value

TRUE if the pane was docked successfully; otherwise, FALSE.

## <a name="enableautohidepanes"></a> CDockingManager::EnableAutoHidePanes

Enables docking of the pane to the main frame, creates a dock pane, and adds it to the list of control bars.

```
BOOL EnableAutoHidePanes(DWORD dwStyle);
```

### Parameters

*dwStyle*<br/>
[in] The docking alignment.

### Return Value

TRUE if the dock pane was created successfully; FALSE otherwise.

## <a name="enabledocking"></a> CDockingManager::EnableDocking

Creates a dock pane and enables docking of the pane to the main frame.

```
BOOL EnableDocking(DWORD dwStyle);
```

### Parameters

*dwStyle*<br/>
[in] The docking alignment.

### Return Value

TRUE if the dock pane was created successfully; FALSE otherwise.

## <a name="enabledocksitemenu"></a> CDockingManager::EnableDockSiteMenu

Displays an additional button that opens a pop-up menu on the captions of all docking panes.

```
static void EnableDockSiteMenu(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable the dock site menu; otherwise, FALSE.

### Remarks

The dock site menu displays the following options for changing the docking state of the pane:

- `Floating` - Floats a pane

- `Docking` - Docks a pane at the main frame at the location where the pane was last docked

- `AutoHide` - Switches the pane to autohide mode

- `Hide` - Hides a pane

By default, this menu is not displayed.

## <a name="enablepanecontextmenu"></a> CDockingManager::EnablePaneContextMenu

Tells the library to display a special context menu that has a list of application toolbars and docking panes when the user clicks the right mouse button and the library is processing the WM_CONTEXTMENU message.

```cpp
void EnablePaneContextMenu(
    BOOL bEnable,
    UINT uiCustomizeCmd,
    const CString& strCustomizeText,
    BOOL bToolbarsOnly = FALSE);
```

### Parameters

*bEnable*<br/>
[in] If TRUE, the library turns on the support for automatic context menu; if FALSE the library turns off the support for automatic context menu.

*uiCustomizeCmd*<br/>
[in] A command id for the **Customize** item in the menu.

*strCustomizeText*<br/>
[in] The text of the **Customize** item.

*bToolbarsOnly*<br/>
[in] If TRUE, the menu displays only a list of application toolbars; if FALSE, the library adds application docking panes to this list.

## <a name="finddocksite"></a> CDockingManager::FindDockSite

Retrieves the bar pane that is at the specified position and that has the specified alignment.

```
virtual CDockSite* FindDockSite(
    DWORD dwAlignment,
    BOOL bOuter);
```

### Parameters

*dwAlignment*<br/>
[in] The alignment of the bar pane.

*bOuter*<br/>
[in] If TRUE, retrieve the bar in the head position in the list of control bars. Otherwise, retrieve the bar in the tail position in the list of control bars.

### Return Value

The docking pane that has the specified alignment; NULL otherwise.

## <a name="findpanebyid"></a> CDockingManager::FindPaneByID

Finds a pane by the specified control ID.

```
virtual CBasePane* FindPaneByID(
    UINT uBarID,
    BOOL bSearchMiniFrames = FALSE);
```

### Parameters

*uBarID*<br/>
[in] Specifies the control ID of the pane to find.

*bSearchMiniFrames*<br/>
[in] TRUE to include all floating panes in the search. FALSE to include only the docked panes.

### Return Value

The [CBasePane](../../mfc/reference/cbasepane-class.md) object that has the specified control ID, or NULL if the specified pane cannot be found.

### Remarks

## <a name="finddocksitebypane"></a> CDockingManager::FindDockSiteByPane

Returns the bar pane that has the id of the target bar pane.

```
virtual CDockSite* FindDockSiteByPane(CPane* pTargetBar);
```

### Parameters

*pTargetBar*<br/>
[in] A pointer to the target bar pane.

### Return Value

The bar pane that has the id of the target bar pane; NULL if no such bar pane exists.

## <a name="fixupvirtualrects"></a> CDockingManager::FixupVirtualRects

Commits all current toolbar positions to virtual rectangles.

```
virtual void FixupVirtualRects();
```

### Remarks

When the user starts to drag a toolbar, the application remembers its original position in the *virtual rectangle*. When the user moves a toolbar across its dock site, the toolbar may shift other toolbars. The original positions of the other toolbars are stored in the corresponding virtual rectangles.

## <a name="framefrompoint"></a> CDockingManager::FrameFromPoint

Returns the frame that contains the given point.

```
virtual CPaneFrameWnd* FrameFromPoint(
    CPoint pt,
    CPaneFrameWnd* pFrameToExclude,
    BOOL bFloatMultiOnly) const;
```

### Parameters

*pt*<br/>
[in] Specifies the point, in screen coordinates, to check.

*pFrameToExclude*<br/>
[in] A pointer to a frame to exclude.

*bFloatMultiOnly*<br/>
[in] TRUE to exclude frames that are not instances of `CMultiPaneFrameWnd`; FALSE otherwise.

### Return Value

The frame that contains the given point; NULL otherwise.

## <a name="getclientareabounds"></a> CDockingManager::GetClientAreaBounds

Gets the rectangle that contains the bounds of the client area.

```
CRect GetClientAreaBounds() const;

void GetClientAreaBounds(CRect& rcClient);
```

### Parameters

*rcClient*<br/>
[out] A reference to the rectangle that contains the bounds of the client area.

### Return Value

The rectangle that contains the bounds of the client area.

## <a name="getdockingmode"></a> CDockingManager::GetDockingMode

Returns the current docking mode.

```
static AFX_DOCK_TYPE GetDockingMode();
```

### Return Value

An enumerator value that represents the current docking mode. It can be one of the following values:

- DT_STANDARD

- DT_IMMEDIATE

- DT_SMART

### Remarks

To set the docking mode, call [CDockingManager::SetDockingMode](#setdockingmode).

## <a name="getdocksiteframewnd"></a> CDockingManager::GetDockSiteFrameWnd

Gets a pointer to the parent window frame.

```
CFrameWnd* GetDockSiteFrameWnd() const;
```

### Return Value

A pointer to the parent window frame.

## <a name="getenabledautohidealignment"></a> CDockingManager::GetEnabledAutoHideAlignment

Returns the enabled alignment of the panes.

```
DWORD GetEnabledAutoHideAlignment() const;
```

### Return Value

A bitwise combination of CBRS_ALIGN_ flags, or 0 if autohide panes are not enabled. For more information, see [CFrameWnd::EnableDocking](../../mfc/reference/cframewnd-class.md#enabledocking).

### Remarks

The method returns the enabled alignment for autohide control bars. To enable autohide bars, call [CFrameWndEx::EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#enableautohidepanes).

## <a name="getminiframes"></a> CDockingManager::GetMiniFrames

Gets a list of miniframes.

```
const CObList& GetMiniFrames() const;
```

### Return Value

A list of miniframes that contain the control bars that belong to the docking manager.

## <a name="getouteredgebounds"></a> CDockingManager::GetOuterEdgeBounds

Gets a rectangle that contains the outer edges of the frame.

```
CRect GetOuterEdgeBounds() const;
```

### Return Value

A rectangle that contains the outer edges of the frame.

## <a name="getpanelist"></a> CDockingManager::GetPaneList

Returns a list of panes that belong to the docking manager. This includes all floating panes.

```cpp
void GetPaneList(
    CObList& lstBars,
    BOOL bIncludeAutohide = FALSE,
    CRuntimeClass* pRTCFilter = NULL,
    BOOL bIncludeTabs = FALSE);
```

### Parameters

*lstBars*<br/>
[in, out] Contains all the panes of the current docking manager.

*bIncludeAutohide*<br/>
[in] TRUE to include the panes that are in autohide mode; otherwise, FALSE.

*pRTCFilter*<br/>
[in] If not NULL, the returned list contains panes only of the specified runtime class.

*bIncludeTabs*<br/>
[in] TRUE to include tabs; otherwise, FALSE.

### Remarks

If there are any tabbed panes in the docking manager, the method returns pointers to [CBaseTabbedPane Class](../../mfc/reference/cbasetabbedpane-class.md) objects and you must enumerate the tabs explicitly.

Use *pRTCFilter* to obtain a particular class of panes. For example, you can obtain only toolbars by setting this value appropriately.

## <a name="getsmartdockingmanager"></a> CDockingManager::GetSmartDockingManager

Retrieves a pointer to the smart docking manager.

```
CSmartDockingManager* GetSmartDockingManager();
```

### Return Value

A pointer to the smart docking manager.

## <a name="getsmartdockingmanagerpermanent"></a> CDockingManager::GetSmartDockingManagerPermanent

Retrieves a pointer to the smart docking manager.

```
CSmartDockingManager* GetSmartDockingManagerPermanent() const;
```

### Return Value

A pointer to the smart docking manager.

## <a name="getsmartdockingparams"></a> CDockingManager::GetSmartDockingParams

Returns the smart docking parameters for the docking manager.

```
static CSmartDockingInfo& GetSmartDockingParams();
```

### Return Value

The class that contains the smart docking parameters for the current docking manager. For more information, see [CSmartDockingInfo Class](../../mfc/reference/csmartdockinginfo-class.md).

### Remarks

## <a name="hideautohidepanes"></a> CDockingManager::HideAutoHidePanes

Hides a pane that is in autohide mode.

```cpp
void HideAutoHidePanes(
    CDockablePane* pBarToExclude = NULL,
    BOOL bImmediately = FALSE);
```

### Parameters

*pBarToExclude*<br/>
[in] A pointer to a bar to exclude from hiding.

*bImmediately*<br/>
[in] TRUE to hide the pane immediately; FALSE to hide the pane with the autohide effect.

## <a name="insertdocksite"></a> CDockingManager::InsertDockSite

Creates a dock pane and inserts it into the list of control bars.

```
BOOL InsertDockSite(
    const AFX_DOCKSITE_INFO& info,
    DWORD dwAlignToInsertAfter,
    CDockSite** ppDockBar = NULL);
```

### Parameters

*info*<br/>
[in] A structure that contains the alignment information about the dock pane.

*dwAlignToInsertAfter*<br/>
[in] Alignment of the dock pane.

*ppDockBar*<br/>
[out] A pointer to a pointer to a dock pane.

### Return Value

TRUE if the dock pane was created successfully; FALSE otherwise.

## <a name="insertpane"></a> CDockingManager::InsertPane

Inserts a control pane into the list of control bars.

```
BOOL InsertPane(
    CBasePane* pControlBar,
    CBasePane* pTarget,
    BOOL bAfter = TRUE);
```

### Parameters

*pControlBar*<br/>
[in] A pointer to a control pane.

*pTarget*<br/>
[in] A pointer to a target pane.

*bAfter*<br/>
[in] TRUE to insert the pane after the position of the target pane; FALSE otherwise.

### Return Value

TRUE if the control pane is successfully added to the list of control bars; FALSE otherwise.

### Remarks

This method returns false if the control pane is already in the list of control bars or if the target pane does not exist in the list of control bars.

## <a name="isdocksitemenu"></a> CDockingManager::IsDockSiteMenu

Specifies whether a pop-up menu is displayed on the captions of all panes.

```
static BOOL IsDockSiteMenu();
```

### Return Value

TRUE if a dock site menu is displayed on the captions of all docking panes; otherwise FALSE.

### Remarks

You can enable the dock site menu by calling [CDockingManager::EnableDockSiteMenu](#enabledocksitemenu).

## <a name="isinadjustlayout"></a> CDockingManager::IsInAdjustLayout

Determines if the layouts of all panes are adjusted.

```
BOOL IsInAdjustLayout() const;
```

### Return Value

TRUE if the layouts of all panes are adjusted; FALSE otherwise.

## <a name="isolecontainermode"></a> CDockingManager::IsOLEContainerMode

Specifies whether the docking manager is in OLE container mode.

```
BOOL IsOLEContainerMode() const;
```

### Return Value

TRUE if the docking manager is in OLE container mode; otherwise, FALSE.

### Remarks

In OLE container mode, all docking panes and application toolbars are hidden. The panes are also hidden in this mode if you have set [CDockingManager::m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode) to TRUE.

## <a name="ispointneardocksite"></a> CDockingManager::IsPointNearDockSite

Determines whether a specified point is near the dock site.

```
BOOL IsPointNearDockSite(
    CPoint point,
    DWORD& dwBarAlignment,
    BOOL& bOuterEdge) const;
```

### Parameters

*point*<br/>
[in] The specified point.

*dwBarAlignment*<br/>
[out] Specifies which edge the point is near. Possible values are CBRS_ALIGN_LEFT, CBRS_ALIGN_RIGHT, CBRS_ALIGN_TOP, and CBRS_ALIGN_BOTTOM.

*bOuterEdge*<br/>
[out] TRUE if the point is near the outer border of the dock site; FALSE otherwise.

### Return Value

TRUE if the point is near the dock site; otherwise FALSE.

## <a name="isprintpreviewvalid"></a> CDockingManager::IsPrintPreviewValid

Determines if the print preview mode is set.

```
BOOL IsPrintPreviewValid() const;
```

### Return Value

TRUE if the print preview mode is set; FALSE otherwise.

## <a name="loadstate"></a> CDockingManager::LoadState

Loads the docking manager's state from the registry.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### Parameters

*lpszProfileName*<br/>
[in] Profile name.

*uiID*<br/>
[in] The id of the docking manager.

### Return Value

TRUE if the docking manager state was loaded successfully; otherwise FALSE.

## <a name="lockupdate"></a> CDockingManager::LockUpdate

Locks the given window.

```cpp
void LockUpdate(BOOL bLock);
```

### Parameters

*bLock*<br/>
[in] TRUE if the window is locked; FALSE otherwise.

### Remarks

When a window is locked, it cannot be moved and it cannot be redrawn.

## <a name="m_bhidedockingbarsincontainermode"></a> CDockingManager::m_bHideDockingBarsInContainerMode

Specifies whether the docking manager hides panes in OLE container mode.

```
AFX_IMPORT_DATA static BOOL m_bHideDockingBarsInContainerMode;
```

### Remarks

Set this value to FALSE if you want to keep all panes docked to the main frame visible when the application is in OLE container mode. By default, this value is TRUE.

## <a name="m_dockmodeglobal"></a> CDockingManager::m_dockModeGlobal

Specifies the global docking mode.

```
AFX_IMPORT_DATA static AFX_DOCK_TYPE m_dockModeGlobal;
```

### Remarks

By default, each docking pane uses this docking mode. For more information about the values that this field can be set to, see [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#getdockingmode).

## <a name="m_ndocksensitivity"></a> CDockingManager::m_nDockSensitivity

Specifies the docking sensitivity.

```
AFX_IMPORT_DATA static int m_nDockSensitivity;
```

### Remarks

The docking sensitivity defines how close a floating pane can approach a docking pane, docking site, or another pane before the framework changes its state to docked.

## <a name="m_ntimeoutbeforedockingbardock"></a> CDockingManager::m_nTimeOutBeforeDockingBarDock

Specifies the time, in milliseconds, before a docking pane is docked in immediate docking mode.

```
static UINT m_nTimeOutBeforeDockingBarDock;
```

### Remarks

Before a pane is docked, the framework waits the specified length of time. This prevents the pane from being accidentally docked to a location while the user is still dragging it.

## <a name="m_ntimeoutbeforetoolbardock"></a> CDockingManager::m_nTimeOutBeforeToolBarDock

Specifies the time, in milliseconds, before a toolbar is docked to the main frame window.

```
static UINT m_nTimeOutBeforeToolBarDock;
```

### Remarks

Before a toolbar is docked, the framework waits the specified length of time. This prevents the toolbar from being accidentally docked to a location while the user is still dragging it.

## <a name="onactivateframe"></a> CDockingManager::OnActivateFrame

Called by the framework when the frame window is made active or is deactivated.

```
virtual void OnActivateFrame(BOOL bActivate);
```

### Parameters

*bActivate*<br/>
[in] If TRUE, the frame window is made active; if FALSE, the frame window is deactivated.

## <a name="onclosepopupmenu"></a> CDockingManager::OnClosePopupMenu

Called by the framework when an active pop-up menu processes a WM_DESTROY message.

```cpp
void OnClosePopupMenu();
```

### Remarks

The framework sends a WM_DESTROY message when it is about to close the current main window. Override this method to handle notifications from `CMFCPopupMenu` objects that belong to the frame window when a `CMFCPopupMenu` object processes a WM_DESTROY message.

## <a name="onmoveminiframe"></a> CDockingManager::OnMoveMiniFrame

Called by the framework to move a mini-frame window.

```
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```

### Parameters

*pFrame*<br/>
[in] A pointer to a mini-frame window.

### Return Value

TRUE if the method succeeds; otherwise FALSE.

## <a name="onpanecontextmenu"></a> CDockingManager::OnPaneContextMenu

Called by the framework when it builds a menu that has a list of panes.

```cpp
void OnPaneContextMenu(CPoint point);
```

### Parameters

*point*<br/>
[in] Specifies the location of the menu.

## <a name="panefrompoint"></a> CDockingManager::PaneFromPoint

Returns the pane that contains the given point.

```
virtual CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    bool bExactBar = false,
    CRuntimeClass* pRTCBarType = NULL,
    BOOL bCheckVisibility = FALSE,
    const CBasePane* pBarToIgnore = NULL) const;

virtual CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    DWORD& dwAlignment,
    CRuntimeClass* pRTCBarType = NULL,
    const CBasePane* pBarToIgnore = NULL) const;
```

### Parameters

*point*<br/>
[in] Specifies the point, in screen coordinates, to check.

*nSensitivity*<br/>
[in] The value to inflate the window rectangle of each checked pane. A pane satisfies the search criteria if the given point is in this inflated region.

*bExactBar*<br/>
[in] TRUE to ignore the *nSensitivity* parameter; otherwise, FALSE.

*pRTCBarType*<br/>
[in] If not NULL, the method searches only the panes of the specified type.

*bCheckVisibility*<br/>
[in] TRUE to check only visible panes; otherwise, FALSE.

*dwAlignment*<br/>
[out] If a pane is found at the specified point, this parameter contains the side of the pane that was closest to the specified point. For more information, see the Remarks section.

*pBarToIgnore*<br/>
[in] If not NULL, the method ignores panes specified by this parameter.

### Return Value

The [CBasePane](../../mfc/reference/cbasepane-class.md)-derived object that contains the given point, or NULL if no pane was found.

### Remarks

When the function returns and a pane was found, *dwAlignment* contains the alignment of the specified point. For example, if the point was closest to the top of the pane, *dwAlignment* is set to CBRS_ALIGN_TOP.

## <a name="processpanecontextmenucommand"></a> CDockingManager::ProcessPaneContextMenuCommand

Called by the framework to select or to clear a check box for the specified command and recalculate the layout of a shown pane.

```
BOOL ProcessPaneContextMenuCommand(
    UINT nID,
    int nCode,
    void* pExtra,
    AFX_CMDHANDLERINFO* pHandlerInfo);
```

### Parameters

*nID*<br/>
[in] The id of a control bar in the menu.

*nCode*<br/>
[in] The command notification code.

*pExtra*<br/>
[in] A pointer to void that is casted to a pointer to `CCmdUI` if *nCode* is CN_UPDATE_COMMAND_UI.

*pHandlerInfo*<br/>
[in] A pointer to an info structure. This parameter is not used.

### Return Value

TRUE if *pEXtra* is not NULL and *nCode* equals CN_UPDATE_COMMAND_UI, or if there is a control bar with the specified *nID*.

## <a name="recalclayout"></a> CDockingManager::RecalcLayout

Recalculates the internal layout of the controls present in the list of controls.

```
virtual void RecalcLayout(BOOL bNotify = TRUE);
```

### Parameters

*bNotify*<br/>
[in] This parameter is not used.

## <a name="releaseemptypanecontainers"></a> CDockingManager::ReleaseEmptyPaneContainers

Releases the empty pane containers.

```cpp
void ReleaseEmptyPaneContainers();
```

## <a name="removehiddenmditabbedbar"></a> CDockingManager::RemoveHiddenMDITabbedBar

Removes the specified hidden bar pane.

```cpp
void RemoveHiddenMDITabbedBar(CDockablePane* pBar);
```

### Parameters

*pBar*<br/>
[in] A pointer to a bar pane to remove.

## <a name="removeminiframe"></a> CDockingManager::RemoveMiniFrame

Removes a specified frame from the list of mini frames.

```
virtual BOOL RemoveMiniFrame(CPaneFrameWnd* pWnd);
```

### Parameters

*pWnd*<br/>
[in] A pointer to a frame to remove.

### Return Value

TRUE if the specified frame is removed; FALSE otherwise.

## <a name="removepanefromdockmanager"></a> CDockingManager::RemovePaneFromDockManager

Unregisters a pane and removes it from the list in the docking manager.

```cpp
void RemovePaneFromDockManager(
    CBasePane* pWnd,
    BOOL bDestroy,
    BOOL bAdjustLayout,
    BOOL bAutoHide = FALSE,
    CBasePane* pBarReplacement = NULL);
```

### Parameters

*pWnd*<br/>
[in] A pointer to a pane to be removed.

*bDestroy*<br/>
[in] If TRUE, the removed pane is destroyed.

*bAdjustLayout*<br/>
[in] If TRUE, adjust the docking layout immediately.

*bAutoHide*<br/>
[in] If TRUE, the pane is removed from the list of autohide bars. If FALSE, the pane is removed from the list of regular panes.

*pBarReplacement*<br/>
[in] A pointer to a pane that replaces the removed pane.

## <a name="replacepane"></a> CDockingManager::ReplacePane

Replaces one pane with another.

```
BOOL ReplacePane(
    CDockablePane* pOriginalBar,
    CDockablePane* pNewBar);
```

### Parameters

*pOriginalBar*<br/>
[in] A pointer to the original pane.

*pNewBar*<br/>
[in] A pointer to the pane that replaces the original pane.

### Return Value

TRUE if the pane is successfully replaced; FALSE otherwise.

## <a name="resortminiframesforzorder"></a> CDockingManager::ResortMiniFramesForZOrder

Resorts the frames in the list of mini frames.

```cpp
void ResortMiniFramesForZOrder();
```

## <a name="savestate"></a> CDockingManager::SaveState

Saves the docking manager's state to the registry.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### Parameters

*lpszProfileName*<br/>
[in] A path to a registry key.

*uiID*<br/>
[in] The docking manager ID.

### Return Value

TRUE if the state was saved successfully; otherwise FALSE.

### Remarks

Saving the docking manager's state to the registry involves saving the states of the control bars, the states of the autohide bars, and the states of the mini frames present in the docking manager.

## <a name="sendmessagetominiframes"></a> CDockingManager::SendMessageToMiniFrames

Sends the specified message to all mini frames.

```
BOOL SendMessageToMiniFrames(
    UINT uMessage,
    WPARAM wParam = 0,
    LPARAM lParam = 0);
```

### Parameters

*uMessage*<br/>
[in] The message to be sent.

*wParam*<br/>
[in] Additional message dependent information.

*lParam*<br/>
[in] Additional message dependent information.

### Return Value

TRUE always.

## <a name="serialize"></a> CDockingManager::Serialize

Writes the docking manager to an archive.

```cpp
void Serialize(CArchive& ar);
```

### Parameters

*ar*<br/>
[in] A reference to an archive object.

### Remarks

Writing the docking manager to an archive involves determining the number of docking control bars and sliders, and writing the control bars, the mini frames, the autohide bars, and the MDI tabbed bars to the archive.

## <a name="setautohidezorder"></a> CDockingManager::SetAutohideZOrder

Sets the size, width, and height of the control bars and the specified pane.

```cpp
void SetAutohideZOrder(CDockablePane* pAHDockingBar);
```

### Parameters

*pAHDockingBar*<br/>
[in] A pointer to a dockable pane.

## <a name="setdockingmode"></a> CDockingManager::SetDockingMode

Sets the docking mode.

```
static void SetDockingMode(
    AFX_DOCK_TYPE dockMode,
    AFX_SMARTDOCK_THEME theme = AFX_SDT_DEFAULT);
```

### Parameters

*dockMode*<br/>
Specifies the new docking mode. For more information, see the Remarks section.

*theme*<br/>
Specifies the theme to be used for smart docking markers. It can be  one of the following enumerated values: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.

### Remarks

Call this static method to set the docking mode.

*dockMode* can be one of following values:

- DT_STANDARD - Standard docking mode as implemented in Visual Studio .NET 2003. Panes are dragged without a dragging context.

- DT_IMMEDIATE - Immediate docking mode as implemented in Microsoft Visio. Panes are dragged with a dragging context, but no markers are displayed.

- DT_SMART - Smart docking mode as implemented in Visual Studio 2005. Panes are dragged with a dragging context and smart markers are displayed that show where the pane can be docked.

## <a name="setdockstate"></a> CDockingManager::SetDockState

Sets the docking state of the control bars, the mini frames, and the autohide bars.

```
virtual void SetDockState();
```

## <a name="setprintpreviewmode"></a> CDockingManager::SetPrintPreviewMode

Sets the print preview mode of the bars that are displayed in the print preview.

```cpp
void SetPrintPreviewMode(
    BOOL bPreview,
    CPrintPreviewState* pState);
```

### Parameters

*bPreview*<br/>
[in] TRUE if print preview mode is set; FALSE otherwise.

*pState*<br/>
[in] A pointer to a preview state. This parameter is not used.

## <a name="setsmartdockingparams"></a> CDockingManager::SetSmartDockingParams

Sets the parameters that define the behavior of smart docking.

```
static void SetSmartDockingParams(CSmartDockingInfo& params);
```

### Parameters

*params*<br/>
[in, out] Defines the parameters for smart docking.

### Remarks

Call this method if you want to customize the appearance, color, or shape of the smart docking markers.

To use the default look for smart docking markers, pass an uninitialized instance of [CSmartDockingInfo Class](../../mfc/reference/csmartdockinginfo-class.md) to *params*.

## <a name="showdelayshowminiframes"></a> CDockingManager::ShowDelayShowMiniFrames

Shows or hides the windows of the mini frames.

```cpp
void ShowDelayShowMiniFrames(BOOL bshow);
```

### Parameters

*bShow*<br/>
[in] TRUE to make the window of the shown frame active; FALSE to hide the window of the frame.

## <a name="showpanes"></a> CDockingManager::ShowPanes

Shows or hides the panes of the control and autohide bars.

```
virtual BOOL ShowPanes(BOOL bShow);
```

### Parameters

*bShow*<br/>
[in] TRUE to show the panes; FALSE to hide the panes.

### Return Value

Always FALSE.

## <a name="startsdocking"></a> CDockingManager::StartSDocking

Starts the smart docking of the specified window according to the alignment of the smart docking manager.

```cpp
void StartSDocking(CWnd* pDockingWnd);
```

### Parameters

*pDockingWnd*<br/>
[in] A pointer to a window to dock.

## <a name="stopsdocking"></a> CDockingManager::StopSDocking

Stops smart docking.

```cpp
void StopSDocking();
```

## <a name="getsmartdockingtheme"></a> CDockingManager::GetSmartDockingTheme

A static method that returns a theme used to display smart docking markers.

```
static AFX_SMARTDOCK_THEME __stdcall GetSmartDockingTheme();
```

### Return Value

Returns one of the following enumerated values: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[CFrameWndEx Class](../../mfc/reference/cframewndex-class.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)<br/>
[CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md)
