---
title: "CDockingManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDockingManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDockingManager class"
ms.assetid: 98e69c43-55d8-4f43-b861-4fda80ec1e32
caps.latest.revision: 37
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
|[CDockingManager::AddDockSite](#cdockingmanager__adddocksite)|Creates a dock pane and adds it to the list of control bars.|  
|[CDockingManager::AddHiddenMDITabbedBar](#cdockingmanager__addhiddenmditabbedbar)|Adds a handle to a bar pane to the list of hidden MDI tabbed bar panes.|  
|[CDockingManager::AddMiniFrame](#cdockingmanager__addminiframe)|Adds a frame to the list of mini frames.|  
|[CDockingManager::AddPane](#cdockingmanager__addpane)|Registers a pane with the docking manager.|  
|[CDockingManager::AdjustDockingLayout](#cdockingmanager__adjustdockinglayout)|Recalculates and adjusts the layout of all panes in a frame window.|  
|[CDockingManager::AdjustPaneFrames](#cdockingmanager__adjustpaneframes)|Causes the `WM_NCCALCSIZE` message to be sent to all panes and `CPaneFrameWnd` windows.|  
|[CDockingManager::AdjustRectToClientArea](#cdockingmanager__adjustrecttoclientarea)|Adjusts the alignment of a rectangle.|  
|[CDockingManager::AlignAutoHidePane](#cdockingmanager__alignautohidepane)|Resizes a docking pane in autohide mode so that it takes the full width or height of the frame’s client area surrounded by dock sites.|  
|[CDockingManager::AutoHidePane](#cdockingmanager__autohidepane)|Creates an autohide toolbar.|  
|[CDockingManager::BringBarsToTop](#cdockingmanager__bringbarstotop)|Brings the docked bars that have the specified alignment to the top.|  
|[CDockingManager::BuildPanesMenu](#cdockingmanager__buildpanesmenu)|Adds names of docking panes and toolbars to a menu.|  
|[CDockingManager::CalcExpectedDockedRect](#cdockingmanager__calcexpecteddockedrect)|Calculates the expected rectangle of a docked window.|  
|[CDockingManager::Create](#cdockingmanager__create)|Creates a docking manager.|  
|[CDockingManager::DeterminePaneAndStatus](#cdockingmanager__determinepaneandstatus)|Determines the pane that contains a given point and its docking status.|  
|[CDockingManager::DisableRestoreDockState](#cdockingmanager__disablerestoredockstate)|Enables or disables loading of docking layout from the registry.|  
|[CDockingManager::DockPane](#cdockingmanager__dockpane)|Docks a pane to another pane or to a frame window.|  
|[CDockingManager::DockPaneLeftOf](#cdockingmanager__dockpaneleftof)|Docks a pane to the left of another pane.|  
|[CDockingManager::EnableAutoHidePanes](#cdockingmanager__enableautohidepanes)|Enables docking of the pane to the main frame, creates a dock pane, and adds it to the list of control bars.|  
|[CDockingManager::EnableDocking](#cdockingmanager__enabledocking)|Creates a dock pane and enables docking of the pane to the main frame.|  
|[CDockingManager::EnableDockSiteMenu](#cdockingmanager__enabledocksitemenu)|Displays an additional button that opens a pop-up menu on the captions of all docking panes.|  
|[CDockingManager::EnablePaneContextMenu](#cdockingmanager__enablepanecontextmenu)|Tells the library to display a special context menu that has a list of application toolbars and docking panes when the user clicks the right mouse button and the library is processing the WM_CONTEXTMENU message.|  
|[CDockingManager::FindDockSite](#cdockingmanager__finddocksite)|Retrieves the bar pane that is at the specified position and that has the specified alignment.|  
|[CDockingManager::FindDockSiteByPane](#cdockingmanager__finddocksitebypane)|Returns the bar pane that has the id of the target bar pane.|  
|[CDockingManager::FindPaneByID](#cdockingmanager__findpanebyid)|Finds a pane by the specified control ID.|  
|[CDockingManager::FixupVirtualRects](#cdockingmanager__fixupvirtualrects)|Commits all current toolbar positions to virtual rectangles.|  
|[CDockingManager::FrameFromPoint](#cdockingmanager__framefrompoint)|Returns the frame that contains the given point.|  
|[CDockingManager::GetClientAreaBounds](#cdockingmanager__getclientareabounds)|Gets the rectangle that contains the bounds of the client area.|  
|[CDockingManager::GetDockingMode](#cdockingmanager__getdockingmode)|Returns the current docking mode.|  
|[CDockingManager::GetDockSiteFrameWnd](#cdockingmanager__getdocksiteframewnd)|Gets a pointer to the parent window frame.|  
|[CDockingManager::GetEnabledAutoHideAlignment](#cdockingmanager__getenabledautohidealignment)|Returns the enabled alignment of the panes.|  
|[CDockingManager::GetMiniFrames](#cdockingmanager__getminiframes)|Gets a list of miniframes.|  
|[CDockingManager::GetOuterEdgeBounds](#cdockingmanager__getouteredgebounds)|Gets a rectangle that contains the outer edges of the frame.|  
|[CDockingManager::GetPaneList](#cdockingmanager__getpanelist)|Returns a list of panes that belong to the docking manager. This includes all floating panes.|  
|[CDockingManager::GetSmartDockingManager](#cdockingmanager__getsmartdockingmanager)|Retrieves a pointer to the smart docking manager.|  
|[CDockingManager::GetSmartDockingManagerPermanent](#cdockingmanager__getsmartdockingmanagerpermanent)|Retrieves a pointer to the smart docking manager.|  
|[CDockingManager::GetSmartDockingParams](#cdockingmanager__getsmartdockingparams)|Returns the smart docking parameters for the docking manager.|  
|[CDockingManager::GetSmartDockingTheme](#cdockingmanager__getsmartdockingtheme)|A static method that returns a theme used to display smart docking markers.|  
|[CDockingManager::HideAutoHidePanes](#cdockingmanager__hideautohidepanes)|Hides a pane that is in autohide mode.|  
|[CDockingManager::InsertDockSite](#cdockingmanager__insertdocksite)|Creates a dock pane and inserts it into the list of control bars.|  
|[CDockingManager::InsertPane](#cdockingmanager__insertpane)|Inserts a control pane into the list of control bars.|  
|[CDockingManager::IsDockSiteMenu](#cdockingmanager__isdocksitemenu)|Specifies whether a pop-up menu is displayed on the captions of all panes.|  
|[CDockingManager::IsInAdjustLayout](#cdockingmanager__isinadjustlayout)|Determines if the layouts of all panes are adjusted.|  
|[CDockingManager::IsOLEContainerMode](#cdockingmanager__isolecontainermode)|Specifies whether the docking manager is in OLE container mode.|  
|[CDockingManager::IsPointNearDockSite](#cdockingmanager__ispointneardocksite)|Determines whether a specified point is near the dock site.|  
|[CDockingManager::IsPrintPreviewValid](#cdockingmanager__isprintpreviewvalid)|Determines if the print preview mode is set.|  
|[CDockingManager::LoadState](#cdockingmanager__loadstate)|Loads the docking manager's state from the registry.|  
|[CDockingManager::LockUpdate](#cdockingmanager__lockupdate)|Locks the given window.|  
|[CDockingManager::OnActivateFrame](#cdockingmanager__onactivateframe)|Called by the framework when the frame window is made active or is deactivated.|  
|[CDockingManager::OnClosePopupMenu](#cdockingmanager__onclosepopupmenu)|Called by the framework when an active pop-up menu processes a WM_DESTROY message.|  
|[CDockingManager::OnMoveMiniFrame](#cdockingmanager__onmoveminiframe)|Called by the framework to move a mini-frame window.|  
|[CDockingManager::OnPaneContextMenu](#cdockingmanager__onpanecontextmenu)|Called by the framework when it builds a menu that has a list of panes.|  
|[CDockingManager::PaneFromPoint](#cdockingmanager__panefrompoint)|Returns the pane that contains the given point.|  
|[CDockingManager::ProcessPaneContextMenuCommand](#cdockingmanager__processpanecontextmenucommand)|Called by the framework to select or to clear a check box for the specified command and recalculate the layout of a shown pane.|  
|[CDockingManager::RecalcLayout](#cdockingmanager__recalclayout)|Recalculates the internal layout of the controls present in the list of controls.|  
|[CDockingManager::ReleaseEmptyPaneContainers](#cdockingmanager__releaseemptypanecontainers)|Releases the empty pane containers.|  
|[CDockingManager::RemoveHiddenMDITabbedBar](#cdockingmanager__removehiddenmditabbedbar)|Removes the specified hidden bar pane.|  
|[CDockingManager::RemoveMiniFrame](#cdockingmanager__removeminiframe)|Removes a specified frame from the list of mini frames.|  
|[CDockingManager::RemovePaneFromDockManager](#cdockingmanager__removepanefromdockmanager)|Unregisters a pane and removes it from the list in the docking manager.|  
|[CDockingManager::ReplacePane](#cdockingmanager__replacepane)|Replaces one pane with another.|  
|[CDockingManager::ResortMiniFramesForZOrder](#cdockingmanager__resortminiframesforzorder)|Resorts the frames in the list of mini frames.|  
|[CDockingManager::SaveState](#cdockingmanager__savestate)|Saves the docking manager's state to the registry.|  
|[CDockingManager::SendMessageToMiniFrames](#cdockingmanager__sendmessagetominiframes)|Sends the specified message to all mini frames.|  
|[CDockingManager::Serialize](#cdockingmanager__serialize)|Writes the docking manager to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#cobject__serialize).)|  
|[CDockingManager::SetAutohideZOrder](#cdockingmanager__setautohidezorder)|Sets the size, width, and height of the control bars and the specified pane.|  
|[CDockingManager::SetDockingMode](#cdockingmanager__setdockingmode)|Sets the docking mode.|  
|[CDockingManager::SetDockState](#cdockingmanager__setdockstate)|Sets the docking state of the control bars, the mini frames, and the autohide bars.|  
|[CDockingManager::SetPrintPreviewMode](#cdockingmanager__setprintpreviewmode)|Sets the print preview mode of the bars that are displayed in the print preview.|  
|[CDockingManager::SetSmartDockingParams](#cdockingmanager__setsmartdockingparams)|Sets the parameters that define the behavior of smart docking.|  
|[CDockingManager::ShowDelayShowMiniFrames](#cdockingmanager__showdelayshowminiframes)|Shows or hides the windows of the mini frames.|  
|[CDockingManager::ShowPanes](#cdockingmanager__showpanes)|Shows or hides the panes of the control and autohide bars.|  
|[CDockingManager::StartSDocking](#cdockingmanager__startsdocking)|Starts the smart docking of the specified window according to the alignment of the smart docking manager.|  
|[CDockingManager::StopSDocking](#cdockingmanager__stopsdocking)|Stops smart docking.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CDockingManager::m_bHideDockingBarsInContainerMode](#cdockingmanager__m_bhidedockingbarsincontainermode)|Specifies whether the docking manager hides panes in OLE container mode.|  
|[CDockingManager::m_dockModeGlobal](#cdockingmanager__m_dockmodeglobal)|Specifies the global docking mode.|  
|[CDockingManager::m_nDockSensitivity](#cdockingmanager__m_ndocksensitivity)|Specifies the docking sensitivity.|  
|[CDockingManager::m_nTimeOutBeforeDockingBarDock](#cdockingmanager__m_ntimeoutbeforedockingbardock)|Specifies the time, in milliseconds, before a docking pane is docked in immediate docking mode.|  
|[CDockingManager::m_nTimeOutBeforeToolBarDock](#cdockingmanager__m_ntimeoutbeforetoolbardock)|Specifies the time, in milliseconds, before a toolbar is docked to the main frame window.|  
  
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
  
     These docking modes are defined by [CDockingManager::m_dockModeGlobal](#cdockingmanager__m_dockmodeglobal) and are set by calling [CDockingManager::SetDockingMode](#cdockingmanager__setdockingmode).  
  
-   If you want to create a non-floating, non-resizable pane, call the [CDockingManager::AddPane](#cdockingmanager__addpane) method. This method registers the pane with the docking manager, which is responsible for the layout of the pane.  
  
## Example  
 The following example demonstrates how to use various methods in the `CDockingManager` class to configure a `CDockingManager` object. The example shows how to display an additional button that opens a pop-up menu on the captions of all docking panes and how to set the docking mode of the object. This code snippet is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#24](../../mfc/codesnippet/cpp/cdockingmanager-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDockingManager](../../mfc/reference/cdockingmanager-class.md)  
  
## Requirements  
 **Header:** afxDockingManager.h  
  
##  <a name="cdockingmanager__adddocksite"></a>  CDockingManager::AddDockSite  
 Creates a dock pane and adds it to the list of control bars.  
  
```  
BOOL AddDockSite(
    const AFX_DOCKSITE_INFO& info,  
    CDockSite** ppDockBar = NULL);
```  
  
### Parameters  
 [in] `info`  
 A reference to an info structure that contains dock pane alignment.  
  
 [out] `ppDockBar`  
 A pointer to a pointer to the new dock pane.  
  
### Return Value  
 `TRUE` if the dock pane was created successfully; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__addhiddenmditabbedbar"></a>  CDockingManager::AddHiddenMDITabbedBar  
 Adds a handle to a bar pane to the list of hidden MDI tabbed bar panes.  
  
```  
void AddHiddenMDITabbedBar(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to a bar pane  
  
##  <a name="cdockingmanager__addpane"></a>  CDockingManager::AddPane  
 Registers a pane with the docking manager.  
  
```  
BOOL AddPane(
    CBasePane* pWnd,  
    BOOL bTail = TRUE,  
    BOOL bAutoHide = FALSE,  
    BOOL bInsertForOuterEdge = FALSE);
```  
  
### Parameters  
 [in, out] `pWnd`  
 Specifies the pane to add to the docking manager.  
  
 [in] `bTail`  
 `TRUE` to add the pane to the end of the list of panes for the docking manager; otherwise, `FALSE`.  
  
 [in] `bAutoHide`  
 For internal use only. Always use the default value `FALSE`.  
  
 [in] `bInsertForOuterEdge`  
 For internal use only. Always use the default value `FALSE`.  
  
### Return Value  
 `TRUE` if the pane was successfully registered with the docking manager; otherwise, `FALSE`.  
  
### Remarks  
 Call this method to register non-floating, non-resizable panes with the docking manager. If you do not register the panes, they will not appear correctly when the docking manager is laid out.  
  
##  <a name="cdockingmanager__adjustdockinglayout"></a>  CDockingManager::AdjustDockingLayout  
 Recalculates and adjusts the layout of all panes in a frame window.  
  
```  
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```  
  
### Parameters  
 [in] `hdwp`  
 Specifies the deferred window position structure. For more information, see [Windows Data Types](http://msdn.microsoft.com/library/windows/desktop/aa383751).  
  
### Remarks  
  
##  <a name="cdockingmanager__addminiframe"></a>  CDockingManager::AddMiniFrame  
 Adds a frame to the list of mini frames.  
  
```  
virtual BOOL AddMiniFrame(CPaneFrameWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to a frame.  
  
### Return Value  
 `TRUE` if the frame is not in the list of mini frames and was added successfully; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__adjustpaneframes"></a>  CDockingManager::AdjustPaneFrames  
 Causes the `WM_NCCALCSIZE` message to be sent to all panes and `CPaneFrameWnd` windows.  
  
```  
virtual void AdjustPaneFrames();
```  
  
### Remarks  
  
##  <a name="cdockingmanager__adjustrecttoclientarea"></a>  CDockingManager::AdjustRectToClientArea  
 Adjusts the alignment of a rectangle.  
  
```  
virtual BOOL AdjustRectToClientArea(
    CRect& rectResult,  
    DWORD dwAlignment);
```  
  
### Parameters  
 [in] `rectResult`  
 A reference to a `CRect` object  
  
 [in] `dwAlignment`  
 The alignment of the `CRect` object  
  
### Return Value  
 `TRUE` if the alignment of the `CRect` object was adjusted; `FALSE` otherwise.  
  
### Remarks  
 The `dwAlignment` parameter can have one of the following values:  
  
-   CBRS_ALIGN_TOP  
  
-   CBRS_ALIGN_BOTTOM  
  
-   CBRS_ALIGN_LEFT  
  
-   CBRS_ALIGN_RIGHT  
  
##  <a name="cdockingmanager__alignautohidepane"></a>  CDockingManager::AlignAutoHidePane  
 Resizes a docking pane in autohide mode so that it takes the full width or height of the frame’s client area surrounded by dock sites.  
  
```  
void AlignAutoHidePane(
    CPaneDivider* pDefaultSlider,  
    BOOL bIsVisible = TRUE);
```  
  
### Parameters  
 [in] `pDefaultSlider`  
 The docking slider pane.  
  
 [in] `bIsVisible`  
 `TRUE` if the docking pane is visible; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__autohidepane"></a>  CDockingManager::AutoHidePane  
 Creates an autohide toolbar.  
  
```  
CMFCAutoHideToolBar* AutoHidePane(
    CDockablePane* pBar,  
    CMFCAutoHideToolBar* pCurrAutoHideToolBar = NULL);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to the bar pane.  
  
 [in] `pCurrAutoHideToolBar`  
 A pointer to an auto hide toolbar.  
  
### Return Value  
 `NULL` if the auto hide toolbar was not created; otherwise a pointer to the new toolbar.  
  
##  <a name="cdockingmanager__bringbarstotop"></a>  CDockingManager::BringBarsToTop  
 Brings the docked bars that have the specified alignment to the top.  
  
```  
void BringBarsToTop(
    DWORD dwAlignment = 0,  
    BOOL bExcludeDockedBars = TRUE);
```  
  
### Parameters  
 [in] `dwAlignment`  
 The alignment of the dock bars that are brought to the top of other windows.  
  
 [in] `bExcludeDockedBars`  
 `TRUE` to exclude the docked bars from being on top; otherwise `FALSE`.  
  
##  <a name="cdockingmanager__buildpanesmenu"></a>  CDockingManager::BuildPanesMenu  
 Adds names of docking panes and toolbars to a menu.  
  
```  
void BuildPanesMenu(
    CMenu& menu,  
    BOOL bToolbarsOnly);
```  
  
### Parameters  
 [in] `menu`  
 A menu to add the names of docking panes and toolbars to.  
  
 [in] `bToolbarsOnly`  
 `TRUE` to add only toolbar names to the menu; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__calcexpecteddockedrect"></a>  CDockingManager::CalcExpectedDockedRect  
 Calculates the expected rectangle of a docked window.  
  
```  
void CalcExpectedDockedRect(
    CWnd* pWnd,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to the window to dock.  
  
 [in] `ptMouse`  
 The mouse location.  
  
 [out] `rectResult`  
 The calculated rectangle.  
  
 [in] `bDrawTab`  
 `TRUE` to draw a tab; otherwise `FALSE`.  
  
 [out] `ppTargetBar`  
 A pointer to a pointer to the target pane.  
  
### Remarks  
 This method calculates the rectangle that a window would occupy if a user dragged the window to the point specified by `ptMouse` and docked it there.  
  
##  <a name="cdockingmanager__create"></a>  CDockingManager::Create  
 Creates a docking manager.  
  
```  
BOOL Create(CFrameWnd* pParentWnd);
```  
  
### Parameters  
 [in] `pParentWnd`  
 A pointer to the parent frame of the docking manager. This value must not be `NULL`.  
  
### Return Value  
 `TRUE` always.  
  
##  <a name="cdockingmanager__determinepaneandstatus"></a>  CDockingManager::DeterminePaneAndStatus  
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
 [in] `pt`  
 The location of the pane to check.  
  
 [in] `nSensitivity`  
 The value to increase the window rectangle of each checked pane. A pane satisfies the search criteria if the given point is in this increased region.  
  
 [in] `dwEnabledAlignment`  
 The alignment of the docking pane.  
  
 [out] `ppTargetBar`  
 A pointer to a pointer to the target pane.  
  
 [in] `pBarToIgnore`  
 The pane that the method ignores.  
  
 [in] `pBarToDock`  
 The pane that is docked.  
  
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
  
##  <a name="cdockingmanager__disablerestoredockstate"></a>  CDockingManager::DisableRestoreDockState  
 Enables or disables loading of docking layout from the registry.  
  
```  
void DisableRestoreDockState(BOOL bDisable = TRUE);
```  
  
### Parameters  
 [in] `bDisable`  
 `TRUE` to disable loading of docking layout from the registry; otherwise, `FALSE`.  
  
### Remarks  
 Call this method when you must preserve the current layout of docking panes and toolbars when the application state is loading.  
  
##  <a name="cdockingmanager__dockpane"></a>  CDockingManager::DockPane  
 Docks a pane to another pane or to a frame window.  
  
```  
void DockPane(
    CBasePane* pBar,  
    UINT nDockBarID = 0,  
    LPCRECT lpRect = NULL);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to a bar pane to dock to.  
  
 [in] `nDockBarID`  
 The id of the bar to dock.  
  
 [in] `lpRect`  
 The destination rectangle.  
  
##  <a name="cdockingmanager__dockpaneleftof"></a>  CDockingManager::DockPaneLeftOf  
 Docks a pane to the left of another pane.  
  
```  
BOOL DockPaneLeftOf(
    CPane* pBarToDock,  
    CPane* pTargetBar);
```  
  
### Parameters  
 [in] `pBarToDock`  
 A pointer to the pane to be docked to the left of `pTargetBar`.  
  
 [in] `pTargetBar`  
 A pointer to the target pane.  
  
### Return Value  
 `TRUE` if the pane was docked successfully; otherwise, `FALSE`.  
  
##  <a name="cdockingmanager__enableautohidepanes"></a>  CDockingManager::EnableAutoHidePanes  
 Enables docking of the pane to the main frame, creates a dock pane, and adds it to the list of control bars.  
  
```  
BOOL EnableAutoHidePanes(DWORD dwStyle);
```  
  
### Parameters  
 [in] `dwStyle`  
 The docking alignment.  
  
### Return Value  
 `TRUE` if the dock pane was created successfully; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__enabledocking"></a>  CDockingManager::EnableDocking  
 Creates a dock pane and enables docking of the pane to the main frame.  
  
```  
BOOL EnableDocking(DWORD dwStyle);
```  
  
### Parameters  
 [in] `dwStyle`  
 The docking alignment.  
  
### Return Value  
 `TRUE` if the dock pane was created successfully; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__enabledocksitemenu"></a>  CDockingManager::EnableDockSiteMenu  
 Displays an additional button that opens a pop-up menu on the captions of all docking panes.  
  
```  
static void EnableDockSiteMenu(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the dock site menu; otherwise, `FALSE`.  
  
### Remarks  
 The dock site menu displays the following options for changing the docking state of the pane:  
  
- `Floating` - Floats a pane  
  
- `Docking` - Docks a pane at the main frame at the location where the pane was last docked  
  
- `AutoHide` - Switches the pane to autohide mode  
  
- `Hide` - Hides a pane  
  
 By default, this menu is not displayed.  
  
##  <a name="cdockingmanager__enablepanecontextmenu"></a>  CDockingManager::EnablePaneContextMenu  
 Tells the library to display a special context menu that has a list of application toolbars and docking panes when the user clicks the right mouse button and the library is processing the WM_CONTEXTMENU message.  
  
```  
void EnablePaneContextMenu(
    BOOL bEnable,  
    UINT uiCustomizeCmd,  
    const CString& strCustomizeText,  
    BOOL bToolbarsOnly = FALSE);
```  
  
### Parameters  
 [in] `bEnable`  
 If `TRUE`, the library turns on the support for automatic context menu; if `FALSE` the library turns off the support for automatic context menu.  
  
 [in] `uiCustomizeCmd`  
 A command id for the **Customize** item in the menu.  
  
 [in] `strCustomizeText`  
 The text of the **Customize** item.  
  
 [in] `bToolbarsOnly`  
 If `TRUE`, the menu displays only a list of application toolbars; if `FALSE`, the library adds application docking panes to this list.  
  
##  <a name="cdockingmanager__finddocksite"></a>  CDockingManager::FindDockSite  
 Retrieves the bar pane that is at the specified position and that has the specified alignment.  
  
```  
virtual CDockSite* FindDockSite(
    DWORD dwAlignment,  
    BOOL bOuter);
```  
  
### Parameters  
 [in] `dwAlignment`  
 The alignment of the bar pane.  
  
 [in] `bOuter`  
 If `TRUE`, retrieve the bar in the head position in the list of control bars. Otherwise, retrieve the bar in the tail position in the list of control bars.  
  
### Return Value  
 The docking pane that has the specified alignment; `NULL` otherwise.  
  
##  <a name="cdockingmanager__findpanebyid"></a>  CDockingManager::FindPaneByID  
 Finds a pane by the specified control ID.  
  
```  
virtual CBasePane* FindPaneByID(
    UINT uBarID,  
    BOOL bSearchMiniFrames = FALSE);
```  
  
### Parameters  
 [in] `uBarID`  
 Specifies the control ID of the pane to find.  
  
 [in] `bSearchMiniFrames`  
 `TRUE` to include all floating panes in the search. `FALSE` to include only the docked panes.  
  
### Return Value  
 The [CBasePane](../../mfc/reference/cbasepane-class.md) object that has the specified control ID, or `NULL` if the specified pane cannot be found.  
  
### Remarks  
  
##  <a name="cdockingmanager__finddocksitebypane"></a>  CDockingManager::FindDockSiteByPane  
 Returns the bar pane that has the id of the target bar pane.  
  
```  
virtual CDockSite* FindDockSiteByPane(CPane* pTargetBar);
```  
  
### Parameters  
 [in] `pTargetBar`  
 A pointer to the target bar pane.  
  
### Return Value  
 The bar pane that has the id of the target bar pane; `NULL` if no such bar pane exists.  
  
##  <a name="cdockingmanager__fixupvirtualrects"></a>  CDockingManager::FixupVirtualRects  
 Commits all current toolbar positions to virtual rectangles.  
  
```  
virtual void FixupVirtualRects();
```  
  
### Remarks  
 When the user starts to drag a toolbar, the application remembers its original position in the *virtual rectangle*. When the user moves a toolbar across its dock site, the toolbar may shift other toolbars. The original positions of the other toolbars are stored in the corresponding virtual rectangles.  
  
##  <a name="cdockingmanager__framefrompoint"></a>  CDockingManager::FrameFromPoint  
 Returns the frame that contains the given point.  
  
```  
virtual CPaneFrameWnd* FrameFromPoint(
    CPoint pt,  
    CPaneFrameWnd* pFrameToExclude,  
    BOOL bFloatMultiOnly) const;

 
```  
  
### Parameters  
 [in] `pt`  
 Specifies the point, in screen coordinates, to check.  
  
 [in] `pFrameToExclude`  
 A pointer to a frame to exclude.  
  
 [in] `bFloatMultiOnly`  
 `TRUE` to exclude frames that are not instances of `CMultiPaneFrameWnd`; `FALSE` otherwise.  
  
### Return Value  
 The frame that contains the given point; `NULL` otherwise.  
  
##  <a name="cdockingmanager__getclientareabounds"></a>  CDockingManager::GetClientAreaBounds  
 Gets the rectangle that contains the bounds of the client area.  
  
```  
CRect GetClientAreaBounds() const;

 
void GetClientAreaBounds(CRect& rcClient);
```  
  
### Parameters  
 [out] `rcClient`  
 A reference to the rectangle that contains the bounds of the client area.  
  
### Return Value  
 The rectangle that contains the bounds of the client area.  
  
##  <a name="cdockingmanager__getdockingmode"></a>  CDockingManager::GetDockingMode  
 Returns the current docking mode.  
  
```  
static AFX_DOCK_TYPE GetDockingMode();
```  
  
### Return Value  
 An enumerator value that represents the current docking mode. It can be one of the following values:  
  
- `DT_STANDARD`  
  
- `DT_IMMEDIATE`  
  
- `DT_SMART`  
  
### Remarks  
 To set the docking mode, call [CDockingManager::SetDockingMode](#cdockingmanager__setdockingmode).  
  
##  <a name="cdockingmanager__getdocksiteframewnd"></a>  CDockingManager::GetDockSiteFrameWnd  
 Gets a pointer to the parent window frame.  
  
```  
CFrameWnd* GetDockSiteFrameWnd() const;

 
```  
  
### Return Value  
 A pointer to the parent window frame.  
  
##  <a name="cdockingmanager__getenabledautohidealignment"></a>  CDockingManager::GetEnabledAutoHideAlignment  
 Returns the enabled alignment of the panes.  
  
```  
DWORD GetEnabledAutoHideAlignment() const;

 
```  
  
### Return Value  
 A bitwise combination of `CBRS_ALIGN_` flags, or 0 if autohide panes are not enabled. For more information, see [CFrameWnd::EnableDocking](../../mfc/reference/cframewnd-class.md#cframewnd__enabledocking).  
  
### Remarks  
 The method returns the enabled alignment for autohide control bars. To enable autohide bars, call [CFrameWndEx::EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#cframewndex__enableautohidepanes).  
  
##  <a name="cdockingmanager__getminiframes"></a>  CDockingManager::GetMiniFrames  
 Gets a list of miniframes.  
  
```  
const CObList& GetMiniFrames() const;

 
```  
  
### Return Value  
 A list of miniframes that contain the control bars that belong to the docking manager.  
  
##  <a name="cdockingmanager__getouteredgebounds"></a>  CDockingManager::GetOuterEdgeBounds  
 Gets a rectangle that contains the outer edges of the frame.  
  
```  
CRect GetOuterEdgeBounds() const;

 
```  
  
### Return Value  
 A rectangle that contains the outer edges of the frame.  
  
##  <a name="cdockingmanager__getpanelist"></a>  CDockingManager::GetPaneList  
 Returns a list of panes that belong to the docking manager. This includes all floating panes.  
  
```  
void GetPaneList(
    CObList& lstBars,  
    BOOL bIncludeAutohide = FALSE,  
    CRuntimeClass* pRTCFilter = NULL,  
    BOOL bIncludeTabs = FALSE);
```  
  
### Parameters  
 [in, out] `lstBars`  
 Contains all the panes of the current docking manager.  
  
 [in] `bIncludeAutohide`  
 `TRUE` to include the panes that are in autohide mode; otherwise, `FALSE`.  
  
 [in] `pRTCFilter`  
 If not `NULL`, the returned list contains panes only of the specified runtime class.  
  
 [in] `bIncludeTabs`  
 `TRUE` to include tabs; otherwise, `FALSE`.  
  
### Remarks  
 If there are any tabbed panes in the docking manager, the method returns pointers to [CBaseTabbedPane Class](../../mfc/reference/cbasetabbedpane-class.md) objects and you must enumerate the tabs explicitly.  
  
 Use `pRTCFilter` to obtain a particular class of panes. For example, you can obtain only toolbars by setting this value appropriately.  
  
##  <a name="cdockingmanager__getsmartdockingmanager"></a>  CDockingManager::GetSmartDockingManager  
 Retrieves a pointer to the smart docking manager.  
  
```  
CSmartDockingManager* GetSmartDockingManager();
```  
  
### Return Value  
 A pointer to the [smart docking manager](http://msdn.microsoft.com/en-us/f537a1a6-fb9e-41d7-952f-0f25d5ee7534).  
  
##  <a name="cdockingmanager__getsmartdockingmanagerpermanent"></a>  CDockingManager::GetSmartDockingManagerPermanent  
 Retrieves a pointer to the smart docking manager.  
  
```  
CSmartDockingManager* GetSmartDockingManagerPermanent() const;

 
```  
  
### Return Value  
 A pointer to the smart docking manager.  
  
##  <a name="cdockingmanager__getsmartdockingparams"></a>  CDockingManager::GetSmartDockingParams  
 Returns the smart docking parameters for the docking manager.  
  
```  
static CSmartDockingInfo& GetSmartDockingParams();
```  
  
### Return Value  
 The class that contains the smart docking parameters for the current docking manager. For more information, see [CSmartDockingInfo Class](../../mfc/reference/csmartdockinginfo-class.md).  
  
### Remarks  
  
##  <a name="cdockingmanager__hideautohidepanes"></a>  CDockingManager::HideAutoHidePanes  
 Hides a pane that is in autohide mode.  
  
```  
void HideAutoHidePanes(
    CDockablePane* pBarToExclude = NULL,  
    BOOL bImmediately = FALSE);
```  
  
### Parameters  
 [in] `pBarToExclude`  
 A pointer to a bar to exclude from hiding.  
  
 [in] `bImmediately`  
 `TRUE` to hide the pane immediately; `FALSE` to hide the pane with the autohide effect.  
  
##  <a name="cdockingmanager__insertdocksite"></a>  CDockingManager::InsertDockSite  
 Creates a dock pane and inserts it into the list of control bars.  
  
```  
BOOL InsertDockSite(
    const AFX_DOCKSITE_INFO& info,  
    DWORD dwAlignToInsertAfter,  
    CDockSite** ppDockBar = NULL);
```  
  
### Parameters  
 [in] `info`  
 A structure that contains the alignment information about the dock pane.  
  
 [in] `dwAlignToInsertAfter`  
 Alignment of the dock pane.  
  
 [out] `ppDockBar`  
 A pointer to a pointer to a dock pane.  
  
### Return Value  
 `TRUE` if the dock pane was created successfully; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__insertpane"></a>  CDockingManager::InsertPane  
 Inserts a control pane into the list of control bars.  
  
```  
BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter = TRUE);
```  
  
### Parameters  
 [in] `pControlBar`  
 A pointer to a control pane.  
  
 [in] `pTarget`  
 A pointer to a target pane.  
  
 [in] `bAfter`  
 `TRUE` to insert the pane after the position of the target pane; `FALSE` otherwise.  
  
### Return Value  
 `TRUE` if the control pane is successfully added to the list of control bars; `FALSE` otherwise.  
  
### Remarks  
 This method returns false if the control pane is already in the list of control bars or if the target pane does not exist in the list of control bars.  
  
##  <a name="cdockingmanager__isdocksitemenu"></a>  CDockingManager::IsDockSiteMenu  
 Specifies whether a pop-up menu is displayed on the captions of all panes.  
  
```  
static BOOL IsDockSiteMenu();
```  
  
### Return Value  
 `TRUE` if a dock site menu is displayed on the captions of all docking panes; otherwise `FALSE`.  
  
### Remarks  
 You can enable the dock site menu by calling [CDockingManager::EnableDockSiteMenu](#cdockingmanager__enabledocksitemenu).  
  
##  <a name="cdockingmanager__isinadjustlayout"></a>  CDockingManager::IsInAdjustLayout  
 Determines if the layouts of all panes are adjusted.  
  
```  
BOOL IsInAdjustLayout() const;

 
```  
  
### Return Value  
 `TRUE` if the layouts of all panes are adjusted; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__isolecontainermode"></a>  CDockingManager::IsOLEContainerMode  
 Specifies whether the docking manager is in OLE container mode.  
  
```  
BOOL IsOLEContainerMode() const;

 
```  
  
### Return Value  
 `TRUE` if the docking manager is in OLE container mode; otherwise, `FALSE`.  
  
### Remarks  
 In OLE container mode, all docking panes and application toolbars are hidden. The panes are also hidden in this mode if you have set [CDockingManager::m_bHideDockingBarsInContainerMode](#cdockingmanager__m_bhidedockingbarsincontainermode) to `TRUE`.  
  
##  <a name="cdockingmanager__ispointneardocksite"></a>  CDockingManager::IsPointNearDockSite  
 Determines whether a specified point is near the dock site.  
  
```  
BOOL IsPointNearDockSite(
    CPoint point,  
    DWORD& dwBarAlignment,  
    BOOL& bOuterEdge) const;

 
```  
  
### Parameters  
 [in] `point`  
 The specified point.  
  
 [out] `dwBarAlignment`  
 Specifies which edge the point is near. Possible values are `CBRS_ALIGN_LEFT`, `CBRS_ALIGN_RIGHT`, `CBRS_ALIGN_TOP`, and `CBRS_ALIGN_BOTTOM`.  
  
 [out] `bOuterEdge`  
 `TRUE` if the point is near the outer border of the dock site; `FALSE` otherwise.  
  
### Return Value  
 `TRUE` if the point is near the dock site; otherwise `FALSE`.  
  
##  <a name="cdockingmanager__isprintpreviewvalid"></a>  CDockingManager::IsPrintPreviewValid  
 Determines if the print preview mode is set.  
  
```  
BOOL IsPrintPreviewValid() const;

 
```  
  
### Return Value  
 `TRUE` if the print preview mode is set; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__loadstate"></a>  CDockingManager::LoadState  
 Loads the docking manager's state from the registry.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Profile name.  
  
 [in] `uiID`  
 The id of the docking manager.  
  
### Return Value  
 `TRUE` if the docking manager state was loaded successfully; otherwise `FALSE`.  
  
##  <a name="cdockingmanager__lockupdate"></a>  CDockingManager::LockUpdate  
 Locks the given window.  
  
```  
void LockUpdate(BOOL bLock);
```  
  
### Parameters  
 [in] `bLock`  
 `TRUE` if the window is locked; `FALSE` otherwise.  
  
### Remarks  
 When a window is locked, it cannot be moved and it cannot be redrawn.  
  
##  <a name="cdockingmanager__m_bhidedockingbarsincontainermode"></a>  CDockingManager::m_bHideDockingBarsInContainerMode  
 Specifies whether the docking manager hides panes in OLE container mode.  
  
```  
AFX_IMPORT_DATA static BOOL m_bHideDockingBarsInContainerMode;  
```  
  
### Remarks  
 Set this value to `FALSE` if you want to keep all panes docked to the main frame visible when the application is in OLE container mode. By default, this value is `TRUE`.  
  
##  <a name="cdockingmanager__m_dockmodeglobal"></a>  CDockingManager::m_dockModeGlobal  
 Specifies the global docking mode.  
  
```  
AFX_IMPORT_DATA static AFX_DOCK_TYPE m_dockModeGlobal;  
```  
  
### Remarks  
 By default, each docking pane uses this docking mode. For more information about the values that this field can be set to, see [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#cbasepane__getdockingmode).  
  
##  <a name="cdockingmanager__m_ndocksensitivity"></a>  CDockingManager::m_nDockSensitivity  
 Specifies the docking sensitivity.  
  
```  
AFX_IMPORT_DATA static int m_nDockSensitivity;  
```  
  
### Remarks  
 The docking sensitivity defines how close a floating pane can approach a docking pane, docking site, or another pane before the framework changes its state to docked.  
  
##  <a name="cdockingmanager__m_ntimeoutbeforedockingbardock"></a>  CDockingManager::m_nTimeOutBeforeDockingBarDock  
 Specifies the time, in milliseconds, before a docking pane is docked in immediate docking mode.  
  
```  
static UINT m_nTimeOutBeforeDockingBarDock;  
```  
  
### Remarks  
 Before a pane is docked, the framework waits the specified length of time. This prevents the pane from being accidentally docked to a location while the user is still dragging it.  
  
##  <a name="cdockingmanager__m_ntimeoutbeforetoolbardock"></a>  CDockingManager::m_nTimeOutBeforeToolBarDock  
 Specifies the time, in milliseconds, before a toolbar is docked to the main frame window.  
  
```  
static UINT m_nTimeOutBeforeToolBarDock;  
```  
  
### Remarks  
 Before a toolbar is docked, the framework waits the specified length of time. This prevents the toolbar from being accidentally docked to a location while the user is still dragging it.  
  
##  <a name="cdockingmanager__onactivateframe"></a>  CDockingManager::OnActivateFrame  
 Called by the framework when the frame window is made active or is deactivated.  
  
```  
virtual void OnActivateFrame(BOOL bActivate);
```  
  
### Parameters  
 [in] `bActivate`  
 If `TRUE`, the frame window is made active; if `FALSE`, the frame window is deactivated.  
  
##  <a name="cdockingmanager__onclosepopupmenu"></a>  CDockingManager::OnClosePopupMenu  
 Called by the framework when an active pop-up menu processes a WM_DESTROY message.  
  
```  
void OnClosePopupMenu();
```  
  
### Remarks  
 The framework sends a WM_DESTROY message when it is about to close the current main window. Override this method to handle notifications from `CMFCPopupMenu` objects that belong to the frame window when a `CMFCPopupMenu` object processes a `WM_DESTROY` message.  
  
##  <a name="cdockingmanager__onmoveminiframe"></a>  CDockingManager::OnMoveMiniFrame  
 Called by the framework to move a mini-frame window.  
  
```  
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```  
  
### Parameters  
 [in] `pFrame`  
 A pointer to a mini-frame window.  
  
### Return Value  
 `TRUE` if the method succeeds; otherwise `FALSE`.  
  
##  <a name="cdockingmanager__onpanecontextmenu"></a>  CDockingManager::OnPaneContextMenu  
 Called by the framework when it builds a menu that has a list of panes.  
  
```  
void OnPaneContextMenu(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 Specifies the location of the menu.  
  
##  <a name="cdockingmanager__panefrompoint"></a>  CDockingManager::PaneFromPoint  
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
 [in] `point`  
 Specifies the point, in screen coordinates, to check.  
  
 [in] `nSensitivity`  
 The value to inflate the window rectangle of each checked pane. A pane satisfies the search criteria if the given point is in this inflated region.  
  
 [in] `bExactBar`  
 `TRUE` to ignore the `nSensitivity` parameter; otherwise, `FALSE`.  
  
 [in] `pRTCBarType`  
 If not `NULL`, the method searches only the panes of the specified type.  
  
 [in] `bCheckVisibility`  
 `TRUE` to check only visible panes; otherwise, `FALSE`.  
  
 [out] `dwAlignment`  
 If a pane is found at the specified point, this parameter contains the side of the pane that was closest to the specified point. For more information, see the Remarks section.  
  
 [in] `pBarToIgnore`  
 If not `NULL`, the method ignores panes specified by this parameter.  
  
### Return Value  
 The [CBasePane](../../mfc/reference/cbasepane-class.md)-derived object that contains the given point, or `NULL` if no pane was found.  
  
### Remarks  
 When the function returns and a pane was found, `dwAlignment` contains the alignment of the specified point. For example, if the point was closest to the top of the pane, `dwAlignment` is set to `CBRS_ALIGN_TOP`.  
  
##  <a name="cdockingmanager__processpanecontextmenucommand"></a>  CDockingManager::ProcessPaneContextMenuCommand  
 Called by the framework to select or to clear a check box for the specified command and recalculate the layout of a shown pane.  
  
```  
BOOL ProcessPaneContextMenuCommand(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### Parameters  
 [in] `nID`  
 The id of a control bar in the menu.  
  
 [in] `nCode`  
 The command notification code.  
  
 [in] `pExtra`  
 A pointer to void that is casted to a pointer to `CCmdUI` if `nCode` is CN_UPDATE_COMMAND_UI.  
  
 [in] `pHandlerInfo`  
 A pointer to an info structure. This parameter is not used.  
  
### Return Value  
 `TRUE` if `pEXtra` is not NULL and `nCode` equals CN_UPDATE_COMMAND_UI, or if there is a control bar with the specified `nID`.  
  
##  <a name="cdockingmanager__recalclayout"></a>  CDockingManager::RecalcLayout  
 Recalculates the internal layout of the controls present in the list of controls.  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### Parameters  
 [in] `bNotify`  
 This parameter is not used.  
  
##  <a name="cdockingmanager__releaseemptypanecontainers"></a>  CDockingManager::ReleaseEmptyPaneContainers  
 Releases the empty pane containers.  
  
```  
void ReleaseEmptyPaneContainers();
```  
  
##  <a name="cdockingmanager__removehiddenmditabbedbar"></a>  CDockingManager::RemoveHiddenMDITabbedBar  
 Removes the specified hidden bar pane.  
  
```  
void RemoveHiddenMDITabbedBar(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to a bar pane to remove.  
  
##  <a name="cdockingmanager__removeminiframe"></a>  CDockingManager::RemoveMiniFrame  
 Removes a specified frame from the list of mini frames.  
  
```  
virtual BOOL RemoveMiniFrame(CPaneFrameWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to a frame to remove.  
  
### Return Value  
 `TRUE` if the specified frame is removed; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__removepanefromdockmanager"></a>  CDockingManager::RemovePaneFromDockManager  
 Unregisters a pane and removes it from the list in the docking manager.  
  
```  
void RemovePaneFromDockManager(
    CBasePane* pWnd,  
    BOOL bDestroy,  
    BOOL bAdjustLayout,  
    BOOL bAutoHide = FALSE,  
    CBasePane* pBarReplacement = NULL);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to a pane to be removed.  
  
 [in] `bDestroy`  
 If `TRUE`, the removed pane is destroyed.  
  
 [in] `bAdjustLayout`  
 If `TRUE`, adjust the docking layout immediately.  
  
 [in] `bAutoHide`  
 If `TRUE`, the pane is removed from the list of autohide bars. If `FALSE`, the pane is removed from the list of regular panes.  
  
 [in] `pBarReplacement`  
 A pointer to a pane that replaces the removed pane.  
  
##  <a name="cdockingmanager__replacepane"></a>  CDockingManager::ReplacePane  
 Replaces one pane with another.  
  
```  
BOOL ReplacePane(
    CDockablePane* pOriginalBar,  
    CDockablePane* pNewBar);
```  
  
### Parameters  
 [in] `pOriginalBar`  
 A pointer to the original pane.  
  
 [in] `pNewBar`  
 A pointer to the pane that replaces the original pane.  
  
### Return Value  
 `TRUE` if the pane is successfully replaced; `FALSE` otherwise.  
  
##  <a name="cdockingmanager__resortminiframesforzorder"></a>  CDockingManager::ResortMiniFramesForZOrder  
 Resorts the frames in the list of mini frames.  
  
```  
void ResortMiniFramesForZOrder();
```  
  
##  <a name="cdockingmanager__savestate"></a>  CDockingManager::SaveState  
 Saves the docking manager's state to the registry.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 A path to a registry key.  
  
 [in] `uiID`  
 The docking manager ID.  
  
### Return Value  
 `TRUE` if the state was saved successfully; otherwise `FALSE`.  
  
### Remarks  
 Saving the docking manager's state to the registry involves saving the states of the control bars, the states of the autohide bars, and the states of the mini frames present in the docking manager.  
  
##  <a name="cdockingmanager__sendmessagetominiframes"></a>  CDockingManager::SendMessageToMiniFrames  
 Sends the specified message to all mini frames.  
  
```  
BOOL SendMessageToMiniFrames(
    UINT uMessage,  
    WPARAM wParam = 0,  
    LPARAM lParam = 0);
```  
  
### Parameters  
 [in] `uMessage`  
 The message to be sent.  
  
 [in] `wParam`  
 Additional message dependent information.  
  
 [in] `lParam`  
 Additional message dependent information.  
  
### Return Value  
 `TRUE` always.  
  
##  <a name="cdockingmanager__serialize"></a>  CDockingManager::Serialize  
 Writes the docking manager to an archive.  
  
```  
void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
 A reference to an archive object.  
  
### Remarks  
 Writing the docking manager to an archive involves determining the number of docking control bars and sliders, and writing the control bars, the mini frames, the autohide bars, and the MDI tabbed bars to the archive.  
  
##  <a name="cdockingmanager__setautohidezorder"></a>  CDockingManager::SetAutohideZOrder  
 Sets the size, width, and height of the control bars and the specified pane.  
  
```  
void SetAutohideZOrder(CDockablePane* pAHDockingBar);
```  
  
### Parameters  
 [in] `pAHDockingBar`  
 A pointer to a dockable pane.  
  
##  <a name="cdockingmanager__setdockingmode"></a>  CDockingManager::SetDockingMode  
 Sets the docking mode.  
  
```  
static void SetDockingMode(
    AFX_DOCK_TYPE dockMode,  
    AFX_SMARTDOCK_THEME theme = AFX_SDT_DEFAULT);
```  
  
### Parameters  
 `dockMode`  
 Specifies the new docking mode. For more information, see the Remarks section.  
  
 `theme`  
 Specifies the theme to be used for smart docking markers. It can be  one of the following enumerated values: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.  
  
### Remarks  
 Call this static method to set the docking mode.  
  
 `dockMode` can be one of following values:  
  
- `DT_STANDARD` - Standard docking mode as implemented in Visual Studio .NET 2003. Panes are dragged without a dragging context.  
  
- `DT_IMMEDIATE` - Immediate docking mode as implemented in Microsoft Visio. Panes are dragged with a dragging context, but no markers are displayed.  
  
- `DT_SMART` - Smart docking mode as implemented in Visual Studio 2005. Panes are dragged with a dragging context and smart markers are displayed that show where the pane can be docked.  
  
##  <a name="cdockingmanager__setdockstate"></a>  CDockingManager::SetDockState  
 Sets the docking state of the control bars, the mini frames, and the autohide bars.  
  
```  
virtual void SetDockState();
```  
  
##  <a name="cdockingmanager__setprintpreviewmode"></a>  CDockingManager::SetPrintPreviewMode  
 Sets the print preview mode of the bars that are displayed in the print preview.  
  
```  
void SetPrintPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### Parameters  
 [in] `bPreview`  
 `TRUE` if print preview mode is set; `FALSE` otherwise.  
  
 [in] `pState`  
 A pointer to a preview state. This parameter is not used.  
  
##  <a name="cdockingmanager__setsmartdockingparams"></a>  CDockingManager::SetSmartDockingParams  
 Sets the parameters that define the behavior of smart docking.  
  
```  
static void SetSmartDockingParams(CSmartDockingInfo& params);
```  
  
### Parameters  
 [in, out] `params`  
 Defines the parameters for smart docking.  
  
### Remarks  
 Call this method if you want to customize the appearance, color, or shape of the smart docking markers.  
  
 To use the default look for smart docking markers, pass an uninitialized instance of [CSmartDockingInfo Class](../../mfc/reference/csmartdockinginfo-class.md) to `params`.  
  
##  <a name="cdockingmanager__showdelayshowminiframes"></a>  CDockingManager::ShowDelayShowMiniFrames  
 Shows or hides the windows of the mini frames.  
  
```  
void ShowDelayShowMiniFrames(BOOL bshow);
```  
  
### Parameters  
 [in] `bShow`  
 `TRUE` to make the window of the shown frame active; `FALSE to` hide the window of the frame.  
  
##  <a name="cdockingmanager__showpanes"></a>  CDockingManager::ShowPanes  
 Shows or hides the panes of the control and autohide bars.  
  
```  
virtual BOOL ShowPanes(BOOL bShow);
```  
  
### Parameters  
 [in] `bShow`  
 `TRUE` to show the panes; `FALSE to` hide the panes.  
  
### Return Value  
 Always `FALSE`.  
  
##  <a name="cdockingmanager__startsdocking"></a>  CDockingManager::StartSDocking  
 Starts the smart docking of the specified window according to the alignment of the smart docking manager.  
  
```  
void StartSDocking(CWnd* pDockingWnd);
```  
  
### Parameters  
 [in] `pDockingWnd`  
 A pointer to a window to dock.  
  
##  <a name="cdockingmanager__stopsdocking"></a>  CDockingManager::StopSDocking  
 Stops smart docking.  
  
```  
void StopSDocking();
```  
  
##  <a name="cdockingmanager__getsmartdockingtheme"></a>  CDockingManager::GetSmartDockingTheme  
 A static method that returns a theme used to display smart docking markers.  
  
```  
static AFX_SMARTDOCK_THEME __stdcall GetSmartDockingTheme();
```  
  
### Return Value  
 Returns one of the following enumerated values: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CFrameWndEx Class](../../mfc/reference/cframewndex-class.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)   
 [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md)
