---
title: "CFrameWndEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFrameWndEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFrameWndEx class"
ms.assetid: 5830aca8-4a21-4f31-91f1-dd5477ffcc8d
caps.latest.revision: 39
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
# CFrameWndEx Class
Implements the functionality of a Windows single document interface (SDI) overlapped or popup frame window, and provides members for managing the window. It extends the [CFrameWnd](../../mfc/reference/cframewnd-class.md) class.  
  
## Syntax  
  
```  
class CFrameWndEx : public CFrameWnd  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFrameWndEx::ActiveItemRecalcLayout](#cframewndex__activeitemrecalclayout)|Adjusts the layout of the OLE client item and the frame's client area.|  
|`CFrameWndEx::AddDockSite`|This method is not used.|  
|[CFrameWndEx::AddPane](#cframewndex__addpane)|Registers a control bar with the docking manager.|  
|[CFrameWndEx::AdjustDockingLayout](#cframewndex__adjustdockinglayout)|Recalculates the layout of all panes that are docked to the frame window.|  
|[CFrameWndEx::DelayUpdateFrameMenu](#cframewndex__delayupdateframemenu)|Sets the frame menu and then updates it when command processing is idle.|  
|[CFrameWndEx::DockPane](#cframewndex__dockpane)|Docks the specified pane to the frame window.|  
|[CFrameWndEx::DockPaneLeftOf](#cframewndex__dockpaneleftof)|Docks one pane to the left of another pane.|  
|[CFrameWndEx::EnableAutoHidePanes](#cframewndex__enableautohidepanes)|Enables the auto-hide mode for the panes when they are docked to the specified sides of the main frame window.|  
|[CFrameWndEx::EnableDocking](#cframewndex__enabledocking)|Enables the docking of the panes that belong to the frame window.|  
|[CFrameWndEx::EnableFullScreenMainMenu](#cframewndex__enablefullscreenmainmenu)|Shows or hides the main menu in a full screen mode.|  
|[CFrameWndEx::EnableFullScreenMode](#cframewndex__enablefullscreenmode)|Enables the full screen mode for the frame window.|  
|[CFrameWndEx::EnableLoadDockState](#cframewndex__enableloaddockstate)|Enables or disables the loading of the docking state.|  
|[CFrameWndEx::EnablePaneMenu](#cframewndex__enablepanemenu)|Enables or disables the automatic handling of the pane menu.|  
|[CFrameWndEx::GetActivePopup](#cframewndex__getactivepopup)|Returns a pointer to the currently displayed pop-up menu.|  
|[CFrameWndEx::GetDefaultResId](#cframewndex__getdefaultresid)|Returns the resource ID that you specified when the framework loaded the frame window.|  
|[CFrameWndEx::GetDockingManager](#cframewndex__getdockingmanager)|Retrieves the [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) object for the frame window.|  
|[CFrameWndEx::GetMenuBar](#cframewndex__getmenubar)|Returns a pointer to the menu bar object attached to the frame window.|  
|[CFrameWndEx::GetPane](#cframewndex__getpane)|Returns a pointer to the pane that has the specified ID.|  
|[CFrameWndEx::GetRibbonBar](#cframewndex__getribbonbar)|Retrieves the ribbon bar control for the frame.|  
|[CFrameWndEx::GetTearOffBars](#cframewndex__gettearoffbars)|Returns a list of pane objects that are in a tear-off state.|  
|[CFrameWndEx::GetToolbarButtonToolTipText](#cframewndex__gettoolbarbuttontooltiptext)|Called by the framework when the application displays the tooltip for a toolbar button.|  
|[CFrameWndEx::InsertPane](#cframewndex__insertpane)|Registers a pane with the docking manager.|  
|[CFrameWndEx::IsFullScreen](#cframewndex__isfullscreen)|Determines whether the frame window is in full screen mode.|  
|[CFrameWndEx::IsMenuBarAvailable](#cframewndex__ismenubaravailable)|Determines whether the pointer to the menu bar object is valid.|  
|[CFrameWndEx::IsPointNearDockSite](#cframewndex__ispointneardocksite)|Indicates whether the point is located in an alignment zone.|  
|[CFrameWndEx::IsPrintPreview](#cframewndex__isprintpreview)|Indicates whether the frame window is in print preview mode.|  
|[CFrameWndEx::LoadFrame](#cframewndex__loadframe)|This method is called after construction to create the frame window and load its resources.|  
|[CFrameWndEx::NegotiateBorderSpace](#cframewndex__negotiateborderspace)|Implements OLE client border negotiation.|  
|[CFrameWndEx::OnActivate](#cframewndex__onactivate)|The framework calls this method when user input is switched to or away from the frame.|  
|[CFrameWndEx::OnActivateApp](#cframewndex__onactivateapp)|Called by the framework when the application is either selected or deselected.|  
|[CFrameWndEx::OnChangeVisualManager](#cframewndex__onchangevisualmanager)|Called by the framework when a change to the frame requires a change to the visual manager.|  
|[CFrameWndEx::OnClose](#cframewndex__onclose)|The framework calls this method to close the frame.|  
|[CFrameWndEx::OnCloseDockingPane](#cframewndex__onclosedockingpane)|Called by the framework when the user clicks the **Close** button on a docking pane.|  
|[CFrameWndEx::OnCloseMiniFrame](#cframewndex__oncloseminiframe)|Called by the framework when the user clicks the **Close** button on a floating mini frame window.|  
|[CFrameWndEx::OnClosePopupMenu](#cframewndex__onclosepopupmenu)|Called by the framework when an active pop-up menu processes a WM_DESTROY message.|  
|[CFrameWndEx::OnCmdMsg](#cframewndex__oncmdmsg)|Dispatches command messages.|  
|[CFrameWndEx::OnContextHelp](#cframewndex__oncontexthelp)|Called by the framework to display context related help.|  
|[CFrameWndEx::OnCreate](#cframewndex__oncreate)|Called by the framework after the frame is created.|  
|[CFrameWndEx::OnDestroy](#cframewndex__ondestroy)|Called by the framework when the frame is destroyed.|  
|[CFrameWndEx::OnDrawMenuImage](#cframewndex__ondrawmenuimage)|Called by the framework when the application draws the image associated with a menu item.|  
|[CFrameWndEx::OnDrawMenuLogo](#cframewndex__ondrawmenulogo)|Called by the framework when a `CMFCPopupMenu` object processes a [WM_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213) message.|  
|[CFrameWndEx::OnDWMCompositionChanged](#cframewndex__ondwmcompositionchanged)|Called by the framework when Desktop Window Manager (DWM) composition has been enabled or disabled.|  
|[CFrameWndEx::OnExitSizeMove](#cframewndex__onexitsizemove)|Called by the framework when the frame stops moving or resizing.|  
|[CFrameWndEx::OnGetMinMaxInfo](#cframewndex__ongetminmaxinfo)|Called by the framework when the frame is resized to set window dimension limits.|  
|[CFrameWndEx::OnIdleUpdateCmdUI](#cframewndex__onidleupdatecmdui)|Called by the framework to update the frame display when command processing is idle.|  
|[CFrameWndEx::OnLButtonDown](#cframewndex__onlbuttondown)|The framework calls this method when the user presses the left mouse button.|  
|[CFrameWndEx::OnLButtonUp](#cframewndex__onlbuttonup)|The framework calls this method when the user releases the left mouse button.|  
|[CFrameWndEx::OnMenuButtonToolHitTest](#cframewndex__onmenubuttontoolhittest)|Called by the framework when a `CMFCToolBarButton` object processes a `WM_NCHITTEST` message.|  
|[CFrameWndEx::OnMenuChar](#cframewndex__onmenuchar)|Called by the framework when a menu is displayed and the user presses a key that does not correspond to a command.|  
|[CFrameWndEx::OnMouseMove](#cframewndex__onmousemove)|The framework calls this method when the pointer moves.|  
|[CFrameWndEx::OnMoveMiniFrame](#cframewndex__onmoveminiframe)|Called by the framework when a pane window moves.|  
|[CFrameWndEx::OnNcActivate](#cframewndex__onncactivate)|Called by the framework when the non-client area of the frame must be redrawn to indicate a change in the active state.|  
|[CFrameWndEx::OnNcCalcSize](#cframewndex__onnccalcsize)|Called by the framework when the size and position of the client area must be calculated.|  
|[CFrameWndEx::OnNcHitTest](#cframewndex__onnchittest)|Called by the framework when the pointer moves or when a mouse button is pressed or released.|  
|[CFrameWndEx::OnNcMouseMove](#cframewndex__onncmousemove)|Called by the framework when the pointer moves in a non-client area.|  
|[CFrameWndEx::OnNcPaint](#cframewndex__onncpaint)|Called by the framework when the non-client area must be painted.|  
|[CFrameWndEx::OnPaneCheck](#cframewndex__onpanecheck)|Called by the framework to control the visibility of a pane.|  
|[CFrameWndEx::OnPostPreviewFrame](#cframewndex__onpostpreviewframe)|Called by the framework when the user has changed the print preview mode.|  
|[CFrameWndEx::OnPowerBroadcast](#cframewndex__onpowerbroadcast)|Called by the framework when a power management event occurs.|  
|[CFrameWndEx::OnSetMenu](#cframewndex__onsetmenu)|Called by the framework to replace the frame window menu.|  
|[CFrameWndEx::OnSetPreviewMode](#cframewndex__onsetpreviewmode)|Called by the framework to set the print preview mode for the frame.|  
|[CFrameWndEx::OnSetText](#cframewndex__onsettext)|Called by the framework to set the text of a window.|  
|[CFrameWndEx::OnShowCustomizePane](#cframewndex__onshowcustomizepane)|Called by the framework when a quick customize pane is enabled.|  
|[CFrameWndEx::OnShowPanes](#cframewndex__onshowpanes)|Called by the framework to show or hide panes.|  
|[CFrameWndEx::OnShowPopupMenu](#cframewndex__onshowpopupmenu)|Called by the framework when a pop-up menu is enabled.|  
|[CFrameWndEx::OnSize](#cframewndex__onsize)|The framework calls this method after the frame's size changes.|  
|[CFrameWndEx::OnSizing](#cframewndex__onsizing)|The framework calls this method when the user resizes the frame.|  
|[CFrameWndEx::OnSysColorChange](#cframewndex__onsyscolorchange)|Called by the framework when the system colors change.|  
|[CFrameWndEx::OnTearOffMenu](#cframewndex__ontearoffmenu)|Called by the framework when a menu that has a tear-off bar is enabled.|  
|[CFrameWndEx::OnToolbarContextMenu](#cframewndex__ontoolbarcontextmenu)|Called by the framework to build a toolbar context menu.|  
|[CFrameWndEx::OnToolbarCreateNew](#cframewndex__ontoolbarcreatenew)|The framework calls this method to create a new toolbar.|  
|[CFrameWndEx::OnToolbarDelete](#cframewndex__ontoolbardelete)|Called by the framework when a toolbar is deleted.|  
|[CFrameWndEx::OnUpdateFrameMenu](#cframewndex__onupdateframemenu)|Called by the framework to set the frame menu.|  
|[CFrameWndEx::OnUpdateFrameTitle](#cframewndex__onupdateframetitle)|The framework calls this method to update the title bar of the frame window.|  
|[CFrameWndEx::OnUpdatePaneMenu](#cframewndex__onupdatepanemenu)|Called by the framework to update the pane menu.|  
|[CFrameWndEx::OnWindowPosChanged](#cframewndex__onwindowposchanged)|Called by the framework when the frame size, position, or z-order has changed because of a call to a window management method.|  
|[CFrameWndEx::PaneFromPoint](#cframewndex__panefrompoint)|Returns the docking pane that contains the specified point.|  
|[CFrameWndEx::PreTranslateMessage](#cframewndex__pretranslatemessage)|Handles specific window messages before they are dispatched.|  
|[CFrameWndEx::RecalcLayout](#cframewndex__recalclayout)|Adjusts the layout of the frame and its child windows.|  
|[CFrameWndEx::RemovePaneFromDockManager](#cframewndex__removepanefromdockmanager)|Unregisters a pane and removes it from the internal list in the docking manager.|  
|[CFrameWndEx::SetDockState](#cframewndex__setdockstate)|Restores the docking layout to the docking state stored in the registry.|  
|[CFrameWndEx::SetPrintPreviewFrame](#cframewndex__setprintpreviewframe)|Sets the print preview frame window.|  
|[CFrameWndEx::SetupToolbarMenu](#cframewndex__setuptoolbarmenu)|Inserts user-defined commands into a toolbar menu.|  
|[CFrameWndEx::ShowFullScreen](#cframewndex__showfullscreen)|Switches the main frame between the full screen and the regular modes.|  
|[CFrameWndEx::ShowPane](#cframewndex__showpane)|Shows or hides the specified pane.|  
|[CFrameWndEx::UpdateCaption](#cframewndex__updatecaption)|Called by the framework to update the window frame caption.|  
|[CFrameWndEx::WinHelp](#cframewndex__winhelp)|Invokes either the `WinHelp` application or context related help.|  
  
## Example  
 The following example demonstrates how to inherit a class from the `CFrameWndEx` class. The example illustrates the method signatures in the subclass, and how to override the `OnShowPopupMenu` method. This code snippet is part of the [Word Pad sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#3](../../mfc/reference/codesnippet/cpp/cframewndex-class_1.h)]  
[!code-cpp[NVC_MFC_WordPad#4](../../mfc/reference/codesnippet/cpp/cframewndex-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CFrameWndEx](../../mfc/reference/cframewndex-class.md)  
  
## Requirements  
 **Header:** afxframewndex.h  
  
##  <a name="cframewndex__activeitemrecalclayout"></a>  CFrameWndEx::ActiveItemRecalcLayout  
 Adjusts the layout of the OLE client item and the frame's client area.  
  
```  
void ActiveItemRecalcLayout();
```  
  
### Remarks  
  
##  <a name="cframewndex__addpane"></a>  CFrameWndEx::AddPane  
 Registers a control bar with the docking manager.  
  
```  
BOOL AddPane(
    CBasePane* pControlBar,  
    BOOL bTail=TRUE);
```  
  
### Parameters  
 [in] `pControlBar`  
 A control bar pane to register.  
  
 [in] `bTail`  
 `TRUE` if you want to add the control bar pane to the end of the list; `FALSE` otherwise.  
  
### Return Value  
 `TRUE` if the control bar was successfully registered; `FALSE` otherwise.  
  
##  <a name="cframewndex__adjustdockinglayout"></a>  CFrameWndEx::AdjustDockingLayout  
 Recalculates the layout of all panes that are docked to the frame window.  
  
```  
virtual void AdjustDockingLayout(HDWP hdwp=NULL);
```  
  
### Parameters  
 `hdwp`  
 A handle to a structure that contains the positions of multiple windows. .  
  
### Remarks  
 The hdwp structure is initialized by the [BeginDeferWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms632672) method.  
  
##  <a name="cframewndex__delayupdateframemenu"></a>  CFrameWndEx::DelayUpdateFrameMenu  
 Sets the frame menu and then updates it when command processing is idle.  
  
```  
virtual void DelayUpdateFrameMenu(HMENU hMenuAlt);
```  
  
### Parameters  
 [in] `hMenuAlt`  
 Handle to an alternative menu.  
  
### Remarks  
  
##  <a name="cframewndex__dockpane"></a>  CFrameWndEx::DockPane  
 Docks the specified pane to the frame window.  
  
```  
void DockPane(
    CBasePane* pBar,  
    UINT nDockBarID=0,  
    LPCRECT lpRect=NULL);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to the control bar to be docked.  
  
 [in] `nDockBarID`  
 The ID of the side of the frame window to dock to.  
  
 [in] `lpRect`  
 A pointer to a constant Rect structure that specifies the window's screen position and size.  
  
### Remarks  
 The `nDockBarID` parameter can have one of the following values:  
  
-   AFX_IDW_DOCKBAR_TOP  
  
-   AFX_IDW_DOCKBAR_BOTTOM  
  
-   AFX_IDW_DOCKBAR_LEFT  
  
-   AFX_IDW_DOCKBAR_RIGHT  
  
##  <a name="cframewndex__dockpaneleftof"></a>  CFrameWndEx::DockPaneLeftOf  
 Docks the specified pane to the left of another pane.  
  
```  
BOOL DockPaneLeftOf(
    CPane* pBar,  
    CPane* pLeftOf);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to the pane object to be docked.  
  
 [in] `pLeftOf`  
 A pointer to the pane to the left of which to dock the pane specified by `pBar`.  
  
### Return Value  
 `TRUE` if `pBar` is docked successfully. `FALSE` otherwise.  
  
### Remarks  
 The method takes the toolbar specified by the `pBar` parameter and docks it at the left side of the toolbar specified by `pLeftOf` parameter.  
  
##  <a name="cframewndex__enableautohidepanes"></a>  CFrameWndEx::EnableAutoHidePanes  
 Enables auto-hide mode for the pane when it is docked to the specified side of the main frame window.  
  
```  
BOOL EnableAutoHidePanes(DWORD dwDockStyle);
```  
  
### Parameters  
 [in] `dwDockStyle`  
 Specifies the side of the main frame window to which to dock the pane.  
  
### Return Value  
 `TRUE` if a bar pane is successfully docked to the frame window side that is specified by `dwDockStyle`, `FALSE` otherwise.  
  
### Remarks  
 `dwDockStyle` can have one of the following values:  
  
-   CBRS_ALIGN_TOP: allows the control bar to be docked to the top of the client area of a frame window.  
  
-   CBRS_ALIGN_BOTTOM: allows the control bar to be docked to the bottom of the client area of a frame window.  
  
-   CBRS_ALIGN_LEFT: allows the control bar to be docked to the left side of the client area of a frame window.  
  
-   CBRS_ALIGN_RIGHT: allows the control bar to be docked to the right side of the client area of a frame window.  
  
##  <a name="cframewndex__enabledocking"></a>  CFrameWndEx::EnableDocking  
 Enables the docking of the panes of the frame window.  
  
```  
BOOL EnableDocking(DWORD dwDockStyle);
```  
  
### Parameters  
 [in] `dwDockStyle`  
 Specifies the side of the main frame window where the pane bar docks.  
  
### Return Value  
 `TRUE` if a bar pane can be successfully docked at the specified side. `FALSE` otherwise.  
  
### Remarks  
 The `dwDockStyle` parameter can have one of the following values:  
  
-   CBRS_ALIGN_TOP  
  
-   CBRS_ALIGN_BOTTOM  
  
-   CBRS_ALIGN_LEFT  
  
-   CBRS_ALIGN_RIGHT  
  
##  <a name="cframewndex__enablefullscreenmainmenu"></a>  CFrameWndEx::EnableFullScreenMainMenu  
 Shows or hides the main menu in a full screen mode.  
  
```  
void EnableFullScreenMainMenu(BOOL bEnableMenu);
```  
  
### Parameters  
 [in] `bEnableMenu`  
 `TRUE` to show the main menu in a full screen mode, `FALSE` otherwise.  
  
##  <a name="cframewndex__enablefullscreenmode"></a>  CFrameWndEx::EnableFullScreenMode  
 Enables the full-screen mode for the frame window.  
  
```  
void EnableFullScreenMode(UINT uiFullScreenCmd);
```  
  
### Parameters  
 [in] `uiFullScreenCmd`  
 The ID of a command that enables and disables the full screen mode.  
  
### Remarks  
 In the full-screen mode, all docking control bars, toolbars and menu are hidden and the active view is resized to occupy the full-screen.  
  
 When you enable the full-screen mode, you must specify an ID of the command that enables or disables the full-screen mode. You can call `EnableFullScreenMode` from the main frame's `OnCreate` function. When a frame window is being switched to a full-screen mode, the framework creates a floating toolbar with one button that has the specified command ID.  
  
 If you want to keep the main menu on the screen, call [CFrameWndEx::EnableFullScreenMainMenu](#cframewndex__enablefullscreenmainmenu).  
  
##  <a name="cframewndex__enableloaddockstate"></a>  CFrameWndEx::EnableLoadDockState  
 Enables or disables the loading of the docking state.  
  
```  
void EnableLoadDockState(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the loading of the docking state, `FALSE` to disable the loading of the docking state.  
  
##  <a name="cframewndex__enablepanemenu"></a>  CFrameWndEx::EnablePaneMenu  
 Enables or disables the automatic handling of the pane menu.  
  
```  
void EnablePaneMenu(
    BOOL bEnable,  
    UINT uiCustomizeCmd,  
    const CString& strCustomizeLabel,  
    UINT uiViewToolbarsMenuEntryID,  
    BOOL bContextMenuShowsToolbarsOnly=FALSE,  
    BOOL bViewMenuShowsToolbarsOnly=FALSE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the automatic handling of the control bar pop-up menus; `FALSE` to disable the automatic handling of the control bar pop-up menus.  
  
 [in] `uiCustomizeCmd`  
 The command ID of the **Customize** menu item.  
  
 [in] `strCustomizeLabel`  
 The label to be displayed for the **Customize** menu item  
  
 [in] `uiViewToolbarsMenuEntryID`  
 The ID of a toolbar menu item that opens the pop-up menu in the control bar.  
  
 [in] `bContextMenuShowsToolbarsOnly`  
 If `TRUE`, the control bar context menu displays the list of toolbars only. If `FALSE`, the menu displays the list of the toolbars and the docking bars.  
  
 [in] `bViewMenuShowsToolbarsOnly`  
 If `TRUE`, the control bar menu displays the list of the toolbars only. If `FALSE`, the menu displays the list of the toolbars and the docking bars.  
  
##  <a name="cframewndex__getactivepopup"></a>  CFrameWndEx::GetActivePopup  
 Returns a pointer to the currently displayed pop-up menu.  
  
```  
CMFCPopupMenu* GetActivePopup() const;

 
```  
  
### Return Value  
 A pointer to the currently displayed pop-up menu; otherwise `NULL`.  
  
##  <a name="cframewndex__getdefaultresid"></a>  CFrameWndEx::GetDefaultResId  
 Returns the resource ID that you specified when the framework loaded the frame window.  
  
```  
UINT GetDefaultResId() const;

 
```  
  
### Return Value  
 The resource ID value that the user specified when the framework loaded the frame window. Zero if the frame window does not have a menu bar.  
  
##  <a name="cframewndex__getdockingmanager"></a>  CFrameWndEx::GetDockingManager  
 Retrieves the [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) object for the frame window.  
  
```  
CDockingManager* GetDockingManager();
```  
  
### Return Value  
 A pointer to the [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md).  
  
### Remarks  
 The frame window creates and uses a [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) object to manage child window docking.  
  
##  <a name="cframewndex__getmenubar"></a>  CFrameWndEx::GetMenuBar  
 Returns a pointer to the menu bar object attached to the frame window.  
  
```  
const CMFCMenuBar* GetMenuBar() const;

 
```  
  
### Return Value  
 A pointer to the menu bar object attached to the frame window.  
  
##  <a name="cframewndex__getpane"></a>  CFrameWndEx::GetPane  
 Returns a pointer to the pane that has the specified ID.  
  
```  
CBasePane* GetPane(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
 The control ID.  
  
### Return Value  
 A pointer to the pane that has the specified ID. `NULL` if no such pane exists.  
  
##  <a name="cframewndex__getribbonbar"></a>  CFrameWndEx::GetRibbonBar  
 Retrieves the ribbon bar control for the frame.  
  
```  
CMFCRibbonBar* GetRibbonBar();
```  
  
### Return Value  
 Pointer to the [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md) for the frame.  
  
### Remarks  
  
##  <a name="cframewndex__gettearoffbars"></a>  CFrameWndEx::GetTearOffBars  
 Returns a list of pane objects that are in a tear-off state.  
  
```  
const CObList& GetTearOffBars() const;

 
```  
  
### Return Value  
 A reference to `CObList` object that contains a collection of pointers to the pane objects that are in a tear-off state.  
  
##  <a name="cframewndex__gettoolbarbuttontooltiptext"></a>  CFrameWndEx::GetToolbarButtonToolTipText  
 Called by the framework when the application displays the tooltip for a toolbar button.  
  
```  
virtual BOOL GetToolbarButtonToolTipText(
    CMFCToolBarButton* pButton,  
    CString& strTTText);
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to a toolbar button.  
  
 [in] `strTTText`  
 The tooltip text to display for the button.  
  
### Return Value  
 `TRUE` if the tooltip has been displayed. `FALSE` otherwise.  
  
### Remarks  
 By default, this method does nothing. Override this method if you want to display the tooltip for the toolbar button.  
  
##  <a name="cframewndex__insertpane"></a>  CFrameWndEx::InsertPane  
 Inserts a pane into a list of control bars and registers it with the docking manager.  
  
```  
BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter=TRUE);
```  
  
### Parameters  
 `pControlBar`  
 A pointer to a control bar to be inserted into the list of control bars and registered with the docking manager.  
  
 `pTarget`  
 A pointer to a control bar before or after which to insert the pane.  
  
 `bAfter`  
 `TRUE` if you want to insert `pControlBar` after `pTarget`, `FALSE` otherwise.  
  
### Return Value  
 `TRUE` if the control bar was successfully inserted and registered, `FALSE` otherwise.  
  
### Remarks  
 You must register each control bar by using the [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) to take a part in the docking layout.  
  
##  <a name="cframewndex__isfullscreen"></a>  CFrameWndEx::IsFullScreen  
 Determines whether the frame window is in full screen mode.  
  
```  
BOOL IsFullScreen() const;

 
```  
  
### Return Value  
 `TRUE` if the frame window is in full screen mode; otherwise `FALSE`.  
  
### Remarks  
 You can set the full screen mode by calling the [CFrameWndEx::EnableFullScreenMode](#cframewndex__enablefullscreenmode) method.  
  
##  <a name="cframewndex__ismenubaravailable"></a>  CFrameWndEx::IsMenuBarAvailable  
 Determines whether the pointer to the menu bar object is valid.  
  
```  
BOOL IsMenuBarAvailable() const;

 
```  
  
### Return Value  
 `TRUE` if the frame window has a menu bar; otherwise `FALSE`.  
  
##  <a name="cframewndex__ispointneardocksite"></a>  CFrameWndEx::IsPointNearDockSite  
 Determines whether the point is located in an alignment zone.  
  
```  
BOOL IsPointNearDockSite(
    CPoint point,  
    DWORD& dwBarAlignment,  
    BOOL& bOuterEdge) const;

 
```  
  
### Parameters  
 [in] `point`  
 The position of the point.  
  
 [out] `dwBarAlignment`  
 Where the point is aligned. See the table in the Remarks section for possible values.  
  
 [out] `bOuterEdge`  
 `TRUE` if the point is located close to the frame border; `FALSE` if the point is located in a client area.  
  
### Return Value  
 `TRUE` if the point is located in an alignment zone; otherwise, `FALSE`.  
  
### Remarks  
 The following table lists the possible values for the `dwBarAlignment` parameter.  
  
 `CBRS_ALIGN_TOP`  
 Aligned to the top.  
  
 `CBRS_ALIGN_RIGHT`  
 Aligned to the right.  
  
 `CBRS_ALIGN_BOTTOM`  
 Aligned to the bottom.  
  
 `CBRS_ALIGN_LEFT`  
 Aligned to the left.  
  
##  <a name="cframewndex__isprintpreview"></a>  CFrameWndEx::IsPrintPreview  
 Determines whether the frame window is in print preview mode.  
  
```  
BOOL IsPrintPreview();
```  
  
### Return Value  
 `TRUE` if the frame window is in print preview mode; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cframewndex__loadframe"></a>  CFrameWndEx::LoadFrame  
 This method is called after construction to create the frame window and load its resources.  
  
```  
virtual BOOL LoadFrame(
    UINT nIDResource,  
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,  
    CWnd* pParentWnd = NULL,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 [in] `nIDResource`  
 The resource ID that is used to load all frame resources.  
  
 [in] `dwDefaultStyle`  
 The default frame window style.  
  
 [in] `pParentWnd`  
 Pointer to the parent window of the frame.  
  
 [in] `pContext`  
 Pointer to a [CCreateContext Structure](../../mfc/reference/ccreatecontext-structure.md) class that is used by the framework during application creation.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cframewndex__negotiateborderspace"></a>  CFrameWndEx::NegotiateBorderSpace  
 Implements OLE client border negotiation.  
  
```  
virtual BOOL NegotiateBorderSpace(
    UINT nBorderCmd,  
    LPRECT lpRectBorder);
```  
  
### Parameters  
 [in] `nBorderCmd`  
 The border negotiation command. See the Remarks section for possible values.  
  
 [in, out] `lpRectBorder`  
 Dimensions of the border.  
  
### Return Value  
 `TRUE` if the layout must be recalculated; otherwise, `FALSE`.  
  
### Remarks  
 The following table lists the possible values for the `nBorderCmd` parameter.  
  
 `borderGet`  
 Get available OLE client space.  
  
 `borderRequest`  
 Request OLE client space.  
  
 `borderSet`  
 Set OLE client space.  
  
##  <a name="cframewndex__onactivate"></a>  CFrameWndEx::OnActivate  
 The framework calls this method when user input is switched to or away from the frame.  
  
```  
afx_msg void OnActivate(
    UINT nState,  
    CWnd* pWndOther,  
    BOOL bMinimized);
```  
  
### Parameters  
 [in] `nState`  
 Whether the frame is active or inactive. See the table in the Remarks section for possible values.  
  
 [in] `pWndOther`  
 Pointer to another window that is switching user input with the current one.  
  
 [in] `bMinimized`  
 The minimized state of the frame. `TRUE` if the frame is minimized; otherwise, `FALSE`.  
  
### Remarks  
 The following table lists the possible values for the `nState` parameter.  
  
 `WA_ACTIVE`  
 The frame is selected by a method other than a mouse click.  
  
 `WA_CLICKACTIVE`  
 The frame is selected by a mouse click.  
  
 `WA_INACTIVE`  
 The frame is not selected.  
  
##  <a name="cframewndex__onactivateapp"></a>  CFrameWndEx::OnActivateApp  
 Called by the framework when the application is either selected or deselected.  
  
```  
afx_msg void OnActivateApp(
    BOOL bActive,  
    DWORD dwThreadID);
```  
  
### Parameters  
 [in] `bActive`  
 `TRUE` if the application is selected; `FALSE` if the application is not selected.  
  
 [in] `dwThreadID`  
 This parameter is not used.  
  
### Remarks  
  
##  <a name="cframewndex__onchangevisualmanager"></a>  CFrameWndEx::OnChangeVisualManager  
 Called by the framework when a change to the frame requires a change to the visual manager.  
  
```  
afx_msg LRESULT OnChangeVisualManager(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### Parameters  
 [in] `wParam`  
 This parameter is not used.  
  
 [in] `lParam`  
 This parameter is not used.  
  
### Return Value  
 Always returns 0.  
  
### Remarks  
  
##  <a name="cframewndex__onclose"></a>  CFrameWndEx::OnClose  
 The framework calls this method to close the frame.  
  
```  
afx_msg void OnClose();
```  
  
### Remarks  
 If the frame is in print preview mode, it sends a Windows message to close the print preview; otherwise, if the frame hosts an OLE client, the client is deactivated.  
  
##  <a name="cframewndex__onclosedockingpane"></a>  CFrameWndEx::OnCloseDockingPane  
 Called by the framework when the user clicks the **Close** button on a docking pane.  
  
```  
virtual BOOL OnCloseDockingPane(CDockablePane* pPane);
```  
  
### Return Value  
 `TRUE` if the docking bar can be closed. `FALSE` otherwise  
  
### Remarks  
 The default implement does nothing. Override this method if you want to handle the hiding of the docking bar.  
  
##  <a name="cframewndex__oncloseminiframe"></a>  CFrameWndEx::OnCloseMiniFrame  
 Called by the framework when the user clicks the **Close** button on a floating mini frame window.  
  
```  
virtual BOOL OnCloseMiniFrame(CPaneFrameWnd* pWnd);
```  
  
### Return Value  
 `TRUE` if a floating mini frame window can be closed. `FALSE` otherwise.  
  
### Remarks  
 The default implementation does nothing. Override this method if you want to process the hiding of a floating mini frame window.  
  
##  <a name="cframewndex__onclosepopupmenu"></a>  CFrameWndEx::OnClosePopupMenu  
 Called by the framework when an active pop-up menu processes a WM_DESTROY message.  
  
```  
virtual void OnClosePopupMenu(CMFCPopupMenu* pMenuPopup);
```  
  
### Parameters  
 `pMenuPopup`  
 A pointer to a pop-up menu.  
  
### Remarks  
 The framework sends a WM_DESTROY message when it is about to close the window. Override this method if you want to handle notifications from `CMFCPopupMenu` objects that belong to the frame window when a `CMFCPopupMenu` object is processing a `WM_DESTROY` message sent by the framework when the window is being closed.  
  
##  <a name="cframewndex__oncmdmsg"></a>  CFrameWndEx::OnCmdMsg  
 Dispatches command messages.  
  
```  
virtual BOOL OnCmdMsg(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### Parameters  
 [in] `nID`  
 The command ID.  
  
 [in] `nCode`  
 Command message category.  
  
 [in, out] `pExtra`  
 Pointer to a command object.  
  
 [in, out] `pHandlerInfo`  
 Pointer to a command handler structure.  
  
### Return Value  
 `TRUE` if the command message was handled; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cframewndex__oncontexthelp"></a>  CFrameWndEx::OnContextHelp  
 Called by the framework to display context-related help.  
  
```  
afx_msg void OnContextHelp();
```  
  
### Remarks  
  
##  <a name="cframewndex__oncreate"></a>  CFrameWndEx::OnCreate  
 Called by the framework after the frame is created.  
  
```  
afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
```  
  
### Parameters  
 [in] `lpCreateStruct`  
 A pointer to the [CREATESTRUCT Structure](../../mfc/reference/createstruct-structure.md) for the new frame.  
  
### Return Value  
 0 to continue with the frame creation; -1 to destroy the frame.  
  
### Remarks  
  
##  <a name="cframewndex__ondestroy"></a>  CFrameWndEx::OnDestroy  
 Called by the framework when the frame is destroyed.  
  
```  
afx_msg void OnDestroy();
```  
  
### Remarks  
 The accelerator table and all windows are destroyed.  
  
##  <a name="cframewndex__ondrawmenuimage"></a>  CFrameWndEx::OnDrawMenuImage  
 Called by the framework when the application draws the image associated with a menu item.  
  
```  
virtual BOOL OnDrawMenuImage(
    CDC* pDC,  
    const CMFCToolBarMenuButton* pMenuButton,  
    const CRect& rectImage);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pMenuButton`  
 A pointer to a menu button whose image is being rendered.  
  
 [in] `rectImage`  
 A pointer to a `Rect` structure that specifies the screen position and size of the image.  
  
### Return Value  
 `TRUE` if the framework successfully renders the image; `FALSE` otherwise.  
  
### Remarks  
 Override this method if you want to customize the image rendering for the menu items that belong to the menu bar owned by the `CFrameWndEx` derived object.  
  
##  <a name="cframewndex__ondrawmenulogo"></a>  CFrameWndEx::OnDrawMenuLogo  
 Called by the framework when a `CMFCPopupMenu` object processes a WM_PAINT message.  
  
```  
virtual void OnDrawMenuLogo(
    CDC* pDC,  
    CMFCPopupMenu* pMenu,  
    const CRect& rectLogo);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pMenu`  
 A pointer to the menu item.  
  
 [in] `rectLogo`  
 A reference to a constant `CRect` structure that specifies the screen position and size of the menu logo.  
  
### Remarks  
 Override this function if you want to display a logo on the pop-up menu that belongs to the menu bar owned by the `CFrameWndEx` derived object.  
  
##  <a name="cframewndex__ondwmcompositionchanged"></a>  CFrameWndEx::OnDWMCompositionChanged  
 Called by the framework when Desktop Window Manager (DWM) composition has been enabled or disabled.  
  
```  
afx_msg LRESULT OnDWMCompositionChanged(
    WPARAM wp,  
    LPARAM lp);
```  
  
### Parameters  
 [in] `wp`  
 This parameter is not used.  
  
 [in] `lp`  
 This parameter is not used.  
  
### Return Value  
 Always returns 0.  
  
### Remarks  
  
##  <a name="cframewndex__onexitsizemove"></a>  CFrameWndEx::OnExitSizeMove  
 Called by the framework when the frame stops moving or resizing.  
  
```  
LRESULT OnExitSizeMove(
    WPARAM wp,  
    LPARAM lp);
```  
  
### Parameters  
 [in] `wp`  
 This parameter is not used.  
  
 [in] `lp`  
 This parameter is not used.  
  
### Return Value  
 Always returns 0.  
  
### Remarks  
  
##  <a name="cframewndex__ongetminmaxinfo"></a>  CFrameWndEx::OnGetMinMaxInfo  
 Called by the framework when the frame is resized to set window dimension limits.  
  
```  
afx_msg void OnGetMinMaxInfo(MINMAXINFO FAR* lpMMI);
```  
  
### Parameters  
 [in] `lpMMI`  
 Pointer to a [MINMAXINFO](http://msdn.microsoft.com/library/windows/desktop/ms632605) structure.  
  
### Remarks  
  
##  <a name="cframewndex__onidleupdatecmdui"></a>  CFrameWndEx::OnIdleUpdateCmdUI  
 Called by the framework to update the frame display when command processing is idle.  
  
```  
afx_msg LRESULT OnIdleUpdateCmdUI(
    WPARAM wParam = 0,  
    LPARAM lParam = 0);
```  
  
### Parameters  
 [in] `wParam`  
 This parameter is not used.  
  
 [in] `lParam`  
 This parameter is not used.  
  
### Return Value  
 Always returns 0.  
  
### Remarks  
  
##  <a name="cframewndex__onlbuttondown"></a>  CFrameWndEx::OnLButtonDown  
 The framework calls this method when the user presses the left mouse button.  
  
```  
afx_msg void OnLButtonDown(
    UINT nFlags,  
    CPoint point);
```  
  
### Parameters  
 [in] `nFlags`  
 Indicates whether the user pressed modifier keys. For possible values see the parameter `wParam` in [WM_LBUTTONDOWN Notification](http://msdn.microsoft.com/library/windows/desktop/ms645607).  
  
 [in] `point`  
 Specifies the x and y coordinates of the pointer, relative to the upper-left corner of the window.  
  
### Remarks  
  
##  <a name="cframewndex__onlbuttonup"></a>  CFrameWndEx::OnLButtonUp  
 The framework calls this method when the user releases the left mouse button.  
  
```  
afx_msg void OnLButtonUp(
    UINT nFlags,  
    CPoint point);
```  
  
### Parameters  
 [in] `nFlags`  
 Indicates whether the user pressed modifier keys. For possible values see the parameter `wParam` in [WM_LBUTTONUP Notification](http://msdn.microsoft.com/library/windows/desktop/ms645608).  
  
 [in] `point`  
 Specifies the x and y coordinates of the pointer, relative to the upper-left corner of the window.  
  
### Remarks  
  
##  <a name="cframewndex__onmenubuttontoolhittest"></a>  CFrameWndEx::OnMenuButtonToolHitTest  
 Called by the framework when a `CMFCToolBarButton` object processes a `WM_NCHITTEST` message.  
  
```  
virtual BOOL OnMenuButtonToolHitTest(
    CMFCToolBarButton* pButton,  
    TOOLINFO* pTI);
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to the tool bar button.  
  
 [out] `pTI`  
 A pointer to a tool information structure.  
  
### Return Value  
 `TRUE` if the application fills the `pTI` parameter. `FALSE` otherwise.  
  
### Remarks  
 Override this method if you want to provide a tooltip information about a specific menu item.  
  
##  <a name="cframewndex__onmenuchar"></a>  CFrameWndEx::OnMenuChar  
 Called by the framework when a menu is displayed and the user presses a key that does not correspond to a command.  
  
```  
afx_msg LRESULT OnMenuChar(
    UINT nChar,  
    UINT nFlags,  
    CMenu* pMenu);
```  
  
### Parameters  
 [in] `nChar`  
 Character code of the pressed key.  
  
 [in] `nFlags`  
 Contains the `MF_POPUP` flag if the menu displayed is a submenu; contains the `MF_SYSMENU` flag if the menu displayed is a control menu.  
  
 [in] `pMenu`  
 Pointer to a menu.  
  
### Return Value  
 The high-order word must be one of the following values.  
  
 `0`  
 The framework should ignore the keystroke.  
  
 `1`  
 The framework should close the menu.  
  
 `2`  
 The framework should select one of the items displayed in the menu. The low-order word contains the ID of the command to select.  
  
### Remarks  
  
##  <a name="cframewndex__onmousemove"></a>  CFrameWndEx::OnMouseMove  
 The framework calls this method when the pointer moves.  
  
```  
afx_msg void OnMouseMove(
    UINT nFlags,  
    CPoint point);
```  
  
### Parameters  
 [in] `nFlags`  
 Indicates whether a user pressed modifier keys. For possible values see the parameter `wParam` in [WM_MOUSEMOVE Notification](http://msdn.microsoft.com/library/windows/desktop/ms645616).  
  
 [in] `point`  
 Specifies the x and y coordinates of the pointer relative to the upper-left corner of the window.  
  
### Remarks  
  
##  <a name="cframewndex__onmoveminiframe"></a>  CFrameWndEx::OnMoveMiniFrame  
 Called by the framework when a pane window moves.  
  
```  
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```  
  
### Parameters  
 [in] `pFrame`  
 Pointer to the [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md) pane window.  
  
### Return Value  
 `TRUE` if the pane window was not docked; `FALSE` if the pane window was docked.  
  
### Remarks  
  
##  <a name="cframewndex__onncactivate"></a>  CFrameWndEx::OnNcActivate  
 Called by the framework when the non-client area of the frame must be redrawn to indicate a change in the active state.  
  
```  
afx_msg BOOL OnNcActivate(BOOL bActive);
```  
  
### Parameters  
 [in] `bActive`  
 `TRUE` to draw the frame active; `FALSE` to draw the frame inactive.  
  
### Return Value  
 Nonzero to continue with default processing; 0 to prevent the non-client area from being deactivated.  
  
### Remarks  
  
##  <a name="cframewndex__onnccalcsize"></a>  CFrameWndEx::OnNcCalcSize  
 Called by the framework when the size and position of the client area must be calculated.  
  
```  
afx_msg void OnNcCalcSize(
    BOOL bCalcValidRects,  
    NCCALCSIZE_PARAMS FAR* lpncsp);
```  
  
### Parameters  
 [in] `bCalcValidRects`  
 `TRUE` when the application must specify a valid client area; otherwise, `FALSE`.  
  
 [in] `lpncsp`  
 Pointer to a `NCCALCSIZE_PARAMS` structure that contains frame dimension changes.  
  
### Remarks  
  
##  <a name="cframewndex__onnchittest"></a>  CFrameWndEx::OnNcHitTest  
 Called by the framework when the pointer moves or when a mouse button is pressed or released.  
  
```  
afx_msg LRESULT OnNcHitTest(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 The location of the pointer in screen coordinates.  
  
### Return Value  
 A pointer hit enumerated value. For a list of possible values see [WM_NCHITTEST Notification](http://msdn.microsoft.com/library/windows/desktop/ms645618).  
  
### Remarks  
  
##  <a name="cframewndex__onncmousemove"></a>  CFrameWndEx::OnNcMouseMove  
 Called by the framework when the pointer moves in a non-client area.  
  
```  
afx_msg void OnNcMouseMove(
    UINT nHitTest,  
    CPoint point);
```  
  
### Parameters  
 [in] `nHitTest`  
 A pointer hit enumerated value. For a list of possible values see [WM_NCHITTEST Notification](http://msdn.microsoft.com/library/windows/desktop/ms645618).  
  
 [in] `point`  
 The location of the pointer in screen coordinates.  
  
### Remarks  
  
##  <a name="cframewndex__onncpaint"></a>  CFrameWndEx::OnNcPaint  
 Called by the framework when the non-client area must be painted.  
  
```  
afx_msg void OnNcPaint();
```  
  
### Remarks  
  
##  <a name="cframewndex__onpanecheck"></a>  CFrameWndEx::OnPaneCheck  
 Called by the framework to control the visibility of a pane.  
  
```  
afx_msg BOOL OnPaneCheck(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
 Control ID of a pane.  
  
### Return Value  
 `TRUE` if the command was handled; `FALSE` to continue with command processing.  
  
### Remarks  
  
##  <a name="cframewndex__onpostpreviewframe"></a>  CFrameWndEx::OnPostPreviewFrame  
 Called by the framework when the user changes the print preview mode.  
  
```  
afx_msg LRESULT OnPostPreviewFrame(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### Parameters  
 [in] `wParam`  
 This parameter is not used.  
  
 [in] `lParam`  
 `TRUE` when the frame is in print preview mode; `FALSE` when print preview mode is off.  
  
### Return Value  
 Always returns 0.  
  
### Remarks  
  
##  <a name="cframewndex__onpowerbroadcast"></a>  CFrameWndEx::OnPowerBroadcast  
 Called by the framework when a power management event occurs.  
  
```  
afx_msg LRESULT OnPowerBroadcast(
    WPARAM wp,  
    LPARAM lp);
```  
  
### Parameters  
 [in] `wp`  
 The power management event. For a list of possible values see [WM_POWERBROADCAST Message](http://msdn.microsoft.com/library/windows/desktop/aa373247).  
  
 [in] `lp`  
 This parameter is not used.  
  
### Return Value  
 Result from calling the default window procedure.  
  
### Remarks  
  
##  <a name="cframewndex__onsetmenu"></a>  CFrameWndEx::OnSetMenu  
 Called by the framework to replace the frame window menu.  
  
```  
afx_msg LRESULT OnSetMenu(
    WPARAM wp,  
    LPARAM lp);

 
BOOL OnSetMenu(
    HMENU hmenu);
```  
  
### Parameters  
 [in] `wp`  
 Handle to the new frame window menu.  
  
 [in] `lp`  
 Handle to the new window menu.  
  
 [in] `hmenu`  
 Handle to the new frame window menu.  
  
### Return Value  
 `LRESULT` is the result from calling the default window procedure.  
  
 `BOOL` is `TRUE` if the event was handled; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cframewndex__onsetpreviewmode"></a>  CFrameWndEx::OnSetPreviewMode  
 Called by the framework to set the print preview mode for the frame.  
  
```  
virtual void OnSetPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### Parameters  
 [in] `bPreview`  
 `TRUE` to enable print preview; `FALSE` to disable print preview.  
  
 [in] `pState`  
 Pointer to a `CPrintPreviewState` frame state structure.  
  
### Remarks  
  
##  <a name="cframewndex__onsettext"></a>  CFrameWndEx::OnSetText  
 Called by the framework to set the text of a window.  
  
```  
afx_msg LRESULT OnSetText(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### Parameters  
 [in] `wParam`  
 This parameter is not used.  
  
 [in] `lParam`  
 Pointer to the text for the window.  
  
### Return Value  
 Return value from a call to [DefWindowProc](http://msdn.microsoft.com/library/windows/desktop/ms633572).  
  
### Remarks  
  
##  <a name="cframewndex__onshowcustomizepane"></a>  CFrameWndEx::OnShowCustomizePane  
 Called by the framework when it displays a `QuickCustomizePane`.  
  
```  
virtual BOOL OnShowCustomizePane(
    CMFCPopupMenu* pMenuPane,  
    UINT uiToolbarID);
```  
  
### Parameters  
 [in] `pMenuPane`  
 A pointer to the quick customize pane.  
  
 [in] `uiToolbarID`  
 The control ID of the toolbar to customize.  
  
### Return Value  
 This method always return `TRUE`.  
  
### Remarks  
 The quick customize menu is a pop-up menu that appears when you click the toolbar’s customize button  
  
##  <a name="cframewndex__onshowpanes"></a>  CFrameWndEx::OnShowPanes  
 Called by the framework to show or hide panes.  
  
```  
virtual BOOL OnShowPanes(BOOL bShow);
```  
  
### Parameters  
 [in] `bShow`  
 `TRUE` if the application shows the panes; `FALSE` otherwise.  
  
### Return Value  
 This method always return `FALSE`.  
  
### Remarks  
 The default implementation shows the panes if `bShow` is `TRUE` and the panes are hidden or when `bShow` is `FALSE` and the panes are visible.  
  
 The default implementation hides the panes if `bShow` is `TRUE` and the panes are visible or when `bShow` is `FALSE` and the panes are hidden.  
  
 Override this method in a derived class to execute custom code when the framework shows or hides panes.  
  
##  <a name="cframewndex__onshowpopupmenu"></a>  CFrameWndEx::OnShowPopupMenu  
 Called by the framework when it displays a pop-up menu.  
  
```  
virtual BOOL OnShowPopupMenu(CMFCPopupMenu* pMenu);
```  
  
### Parameters  
 [in] `pMenu`  
 A pointer to a pop-up menu.  
  
### Return Value  
 `TRUE` if the pop-up menu is visible; otherwise `FALSE`.  
  
### Remarks  
 Override this method in a derived class to execute custom code when the framework displays a pop-up menu. For example, override this method to change the background color of the commands in a pop-up menu.  
  
##  <a name="cframewndex__onsize"></a>  CFrameWndEx::OnSize  
 Called by the framework after the frame's size changes.  
  
```  
afx_msg void OnSize(
    UINT nType,  
    int cx,  
    int cy);
```  
  
### Parameters  
 [in] `nType`  
 The type of resizing. For possible values see the parameter `wParam` in [WM_SIZE Notification](http://msdn.microsoft.com/library/windows/desktop/ms632646).  
  
 [in] `cx`  
 New width of the frame in pixels.  
  
 [in] `cy`  
 New height of the frame in pixels.  
  
### Remarks  
  
##  <a name="cframewndex__onsizing"></a>  CFrameWndEx::OnSizing  
 Called by the framework when the user resizes the frame.  
  
```  
afx_msg void OnSizing(
    UINT fwSide,  
    LPRECT pRect);
```  
  
### Parameters  
 [in] `fwSide`  
 The edge of the frame that is moved. See the parameter `wParam` in [WM_SIZING Notification](http://msdn.microsoft.com/library/windows/desktop/ms632647).  
  
 [in, out] `pRect`  
 Pointer to a [CRect](../../atl-mfc-shared/reference/crect-class.md) or [RECT](../../mfc/reference/rect-structure1.md) structure that contains the frame's coordinates.  
  
### Remarks  
  
##  <a name="cframewndex__onsyscolorchange"></a>  CFrameWndEx::OnSysColorChange  
 Called by the framework when the system colors change.  
  
```  
void OnSysColorChange();
```  
  
### Remarks  
  
##  <a name="cframewndex__ontearoffmenu"></a>  CFrameWndEx::OnTearOffMenu  
 Called by the framework when the application displays a menu that has a tear-off bar.  
  
```  
virtual BOOL OnTearOffMenu(
    CMFCPopupMenu* pMenuPopup,  
    CPane* pBar);
```  
  
### Parameters  
 [in] `pMenuPopup`  
 A pointer to a pop-up menu.  
  
 [in] `pBar`  
 A pointer to a tear-off bar.  
  
### Return Value  
 `TRUE` if the pop-up menu with the tear-off bar is enabled; otherwise `FALSE`.  
  
### Remarks  
 Override this method in a derived class to execute custom code when the framework displays a control bar.  
  
 The default implementation does nothing and returns `TRUE`.  
  
##  <a name="cframewndex__ontoolbarcontextmenu"></a>  CFrameWndEx::OnToolbarContextMenu  
 Called by the framework to build a toolbar pop-up menu.  
  
```  
afx_msg LRESULT OnToolbarContextMenu(
    WPARAM wp,  
    LPARAM lp);
```  
  
### Parameters  
 [in] `wp`  
 This parameter is not used.  
  
 [in] `lp`  
 This parameter is not used.  
  
### Return Value  
 Always returns 1.  
  
### Remarks  
  
##  <a name="cframewndex__ontoolbarcreatenew"></a>  CFrameWndEx::OnToolbarCreateNew  
 The framework calls this method to create a new toolbar.  
  
```  
afx_msg LRESULT OnToolbarCreateNew(
    WPARAM wp,  
    LPARAM lp);
```  
  
### Parameters  
 [in] `wp`  
 This parameter is not used.  
  
 [in] `lp`  
 Pointer to the text for the title bar of the toolbar.  
  
### Return Value  
 Pointer to the new toolbar; or `NULL` if a toolbar was not created.  
  
### Remarks  
  
##  <a name="cframewndex__ontoolbardelete"></a>  CFrameWndEx::OnToolbarDelete  
 Called by the framework when a toolbar is deleted.  
  
```  
afx_msg LRESULT OnToolbarDelete(
    WPARAM, 
    LPARAM lp);
```  
  
### Parameters  
 [in]  
 This parameter is not used.  
  
 [in] `lp`  
 Pointer to a toolbar.  
  
### Return Value  
 `TRUE` if the toolbar was deleted; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cframewndex__onupdateframemenu"></a>  CFrameWndEx::OnUpdateFrameMenu  
 Called by the framework to set the frame menu.  
  
```  
virtual void OnUpdateFrameMenu(HMENU hMenuAlt);
```  
  
### Parameters  
 [in] `hMenuAlt`  
 Handle to the alternative menu.  
  
### Remarks  
  
##  <a name="cframewndex__onupdateframetitle"></a>  CFrameWndEx::OnUpdateFrameTitle  
 The framework calls this method to update the title bar of the frame window.  
  
```  
virtual void OnUpdateFrameTitle(BOOL bAddToTitle);
```  
  
### Parameters  
 [in] `bAddToTitle`  
 `TRUE` to add the active document title to the frame window title bar; otherwise `FALSE.`  
  
### Remarks  
  
##  <a name="cframewndex__onupdatepanemenu"></a>  CFrameWndEx::OnUpdatePaneMenu  
 Called by the framework to update the pane menu.  
  
```  
afx_msg void OnUpdatePaneMenu(CCmdUI* pCmdUI);
```  
  
### Parameters  
 [in] `pCmdUI`  
 Pointer to the pane user interface object.  
  
### Remarks  
  
##  <a name="cframewndex__onwindowposchanged"></a>  CFrameWndEx::OnWindowPosChanged  
 Called by the framework when the frame size, position, or z-order has changed because of a call to a window management method.  
  
```  
afx_msg void OnWindowPosChanged(WINDOWPOS FAR* lpwndpos);
```  
  
### Parameters  
 [in] `lpwndpos`  
 Pointer to a [WINDOWPOS](../../mfc/reference/windowpos-structure1.md) structure that contains the new size and position.  
  
### Remarks  
  
##  <a name="cframewndex__panefrompoint"></a>  CFrameWndEx::PaneFromPoint  
 Searches each pane for the given point.  
  
```  
CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    bool bExactBar,  
    CRuntimeClass* pRTCBarType) const;

 
CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    DWORD& dwAlignment,  
    CRuntimeClass* pRTCBarType) const;

 
```  
  
### Parameters  
 [in] `point`  
 The screen coordinates of the point to check.  
  
 [in] `nSensitivity`  
 Expand the bounding rectangle of each control bar by this amount when searching for point.  
  
 [in] `bExactBar`  
 `TRUE` to ignore the `nSensitivity` parameter; otherwise, `FALSE`.  
  
 [in] `pRTCBarType`  
 If not `NULL`, the method searches only the control bars of the specified type.  
  
 [out] `dwAlignment`  
 If successful, this parameter contains the side of the control bar that is closest to the specified point. Otherwise, this parameter is not initialized.  
  
### Return Value  
 A pointer to a control bar that contains the `point`; `NULL` if no control is found.  
  
### Remarks  
 This method searches all the control bars in your application for a `point`.  
  
 Use `nSensitivity` to increase the size of the search area. Use `pRTCBarType` to restrict the types of control bars that the method searches.  
  
##  <a name="cframewndex__pretranslatemessage"></a>  CFrameWndEx::PreTranslateMessage  
 Handles specific window messages before they are dispatched.  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### Parameters  
 [in] `pMsg`  
 A pointer to a [MSG](../../mfc/reference/msg-structure1.md) structure that contains the message to process.  
  
### Return Value  
 Non-zero if the message was handled and should not be dispatched; 0 if the message was not handled and should be dispatched.  
  
### Remarks  
  
##  <a name="cframewndex__recalclayout"></a>  CFrameWndEx::RecalcLayout  
 Adjusts the layout of the frame and its child windows.  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### Parameters  
 [in] `bNotify`  
 Specifies whether to notify the OLE client item about the layout change.  
  
### Remarks  
 This method is called when the size of the frame window has changed or when control bars are displayed or hidden.  
  
##  <a name="cframewndex__removepanefromdockmanager"></a>  CFrameWndEx::RemovePaneFromDockManager  
 Unregisters a pane and removes it from the docking manager.  
  
```  
void RemovePaneFromDockManager(
    CBasePane* pControlBar,  
    BOOL bDestroy,  
    BOOL bAdjustLayout,  
    BOOL bAutoHide,  
    CBasePane* pBarReplacement);
```  
  
### Parameters  
 [in] `pControlBar`  
 A pointer to the control bar pane to remove.  
  
 [in] `bDestroy`  
 `TRUE` to destroy the control bar after removing it; `FALSE` otherwise.  
  
 [in] `bAdjustLayout`  
 `TRUE` to adjust the docking layout; `FALSE` otherwise.  
  
 [in] `bAutoHide`  
 `TRUE` if the control bar is in auto-hide mode; `FALSE` otherwise.  
  
 [in] `pBarReplacement`  
 A pointer to a pane that replaces the removed pane.  
  
### Remarks  
 Use this method to remove a control bar from the docking layout of the frame window.  
  
 The [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) handles the layout of control bars. You must register each control bar with the docking manager by using the [CFrameWndEx::AddPane](#cframewndex__addpane) method or the [CFrameWndEx::InsertPane](#cframewndex__insertpane) method.  
  
##  <a name="cframewndex__setdockstate"></a>  CFrameWndEx::SetDockState  
 Restores the docking layout to the docking state stored in the registry.  
  
```  
void SetDockState(const CDockState& state);
```  
  
### Parameters  
 `state`  
 The docking state. This parameter is ignored.  
  
##  <a name="cframewndex__setprintpreviewframe"></a>  CFrameWndEx::SetPrintPreviewFrame  
 Sets the print preview frame window.  
  
```  
void SetPrintPreviewFrame(CFrameWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 Pointer to a print preview frame window.  
  
### Remarks  
  
##  <a name="cframewndex__setuptoolbarmenu"></a>  CFrameWndEx::SetupToolbarMenu  
 Inserts user-defined commands into a toolbar menu.  
  
```  
void SetupToolbarMenu(
    CMenu& menu,  
    const UINT uiViewUserToolbarCmdFirst,  
    const UINT uiViewUserToolbarCmdLast);
```  
  
### Parameters  
 [in] `menu`  
 A `CMenu` object to be modified.  
  
 [in] `uiViewUserToolbarCmdFirst`  
 The first user-defined command.  
  
 [in] `uiViewUserToolbarCmdLast`  
 The last user-defined command.  
  
### Remarks  
 The framework stores user-defined commands in a list. Use `uiViewUserToolbarCmdFirst` and `uiViewUserToolbarCmdList` to specify the indexes of the commands to insert.  
  
##  <a name="cframewndex__showfullscreen"></a>  CFrameWndEx::ShowFullScreen  
 Switches the main frame between full-screen mode and regular mode.  
  
```  
void ShowFullScreen();
```  
  
##  <a name="cframewndex__showpane"></a>  CFrameWndEx::ShowPane  
 Shows or hides the specified pane.  
  
```  
void ShowPane(
    CBasePane* pBar,  
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to the control bar to show or hide.  
  
 [in] `bShow`  
 If `TRUE`, the application shows the control bar. Otherwise, the application hides the control bar.  
  
 [in] `bDelay`  
 If `TRUE`, delay the adjustment of the docking layout until the framework calls [CFrameWndEx::AdjustDockingLayout](#cframewndex__adjustdockinglayout). Otherwise, recalculate the docking layout immediately.  
  
 [in] `bActivate`  
 If `TRUE`, make the control bar active. Otherwise, display the control bar in an inactive state.  
  
##  <a name="cframewndex__updatecaption"></a>  CFrameWndEx::UpdateCaption  
 Called by the framework to update the window frame caption.  
  
```  
void UpdateCaption();
```  
  
### Remarks  
  
##  <a name="cframewndex__winhelp"></a>  CFrameWndEx::WinHelp  
 Invokes either the WinHelp application or context related help.  
  
```  
virtual void WinHelp(
    DWORD dwData,  
    UINT nCmd = HELP_CONTEXT);
```  
  
### Parameters  
 `dwData`  
 Data that depends on the `nCmd` parameter. For a list of possible values see [WinHelp](http://msdn.microsoft.com/library/windows/desktop/bb762267).  
  
 `nCmd`  
 The help command. For a list of possible values see [WinHelp](http://msdn.microsoft.com/library/windows/desktop/bb762267).  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)
