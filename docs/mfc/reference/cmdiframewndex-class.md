---
title: "CMDIFrameWndEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMDIFrameWndEx.AddDockSite"
  - "CMDIFrameWndEx"
  - "CMDIFrameWndEx::AddDockSite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMDIFrameWndEx class"
ms.assetid: dbcafcb3-9a7a-4f11-9dfe-ba57565c81d0
caps.latest.revision: 42
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# CMDIFrameWndEx Class
Extends the functionality of [CMDIFrameWnd](../../mfc/reference/cframewnd-class.md), a Windows Multiple Document Interface (MDI) frame window.  
  
## Syntax  
  
```  
class CMDIFrameWndEx : public CMDIFrameWnd  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMDIFrameWndEx::ActiveItemRecalcLayout](#cmdiframewndex__activeitemrecalclayout)|Recalculates the layout of the active item.|  
|`CMDIFrameWndEx::AddDockSite`|This method is not used.|  
|[CMDIFrameWndEx::AddPane](#cmdiframewndex__addpane)|Registers a pane with the docking manager.|  
|[CMDIFrameWndEx::AdjustClientArea](#cmdiframewndex__adjustclientarea)|Reduces the client area to allow for a border.|  
|[CMDIFrameWndEx::AdjustDockingLayout](#cmdiframewndex__adjustdockinglayout)|Recalculates the layout of all docked panes.|  
|[CMDIFrameWndEx::AreMDITabs](#cmdiframewndex__aremditabs)|Determines whether the MDI Tabs feature or the MDI Tabbed Groups feature is enabled.|  
|[CMDIFrameWndEx::CanCovertControlBarToMDIChild](#cmdiframewndex__cancovertcontrolbartomdichild)|Called by the framework to determine whether the frame window can convert docking panes to tabbed documents.|  
|[CMDIFrameWndEx::ControlBarToTabbedDocument](#cmdiframewndex__controlbartotabbeddocument)|Converts the specified docking pane to a tabbed document.|  
|[CMDIFrameWndEx::CreateDocumentWindow](#cmdiframewndex__createdocumentwindow)|Creates a child document window.|  
|[CMDIFrameWndEx::CreateNewWindow](#cmdiframewndex__createnewwindow)|Called by the framework to create a new window.|  
|`CMDIFrameWndEx::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMDIFrameWndEx::DockPane](#cmdiframewndex__dockpane)|Docks the specified pane to the frame window.|  
|[CMDIFrameWndEx::DockPaneLeftOf](#cmdiframewndex__dockpaneleftof)|Docks one pane to the left of another pane.|  
|[CMDIFrameWndEx::EnableAutoHidePanes](#cmdiframewndex__enableautohidepanes)|Enables auto-hide mode for panes when they are docked at specified sides of the main frame window.|  
|[CMDIFrameWndEx::EnableDocking](#cmdiframewndex__enabledocking)|Enables docking of the panes that belong to the MDI frame window.|  
|[CMDIFrameWndEx::EnableFullScreenMainMenu](#cmdiframewndex__enablefullscreenmainmenu)|Shows or hides the main menu in full-screen mode.|  
|[CMDIFrameWndEx::EnableFullScreenMode](#cmdiframewndex__enablefullscreenmode)|Enables full-screen mode for the frame window.|  
|[CMDIFrameWndEx::EnableLoadDockState](#cmdiframewndex__enableloaddockstate)|Enables or disables the loading of the docking state.|  
|[CMDIFrameWndEx::EnableMDITabbedGroups](#cmdiframewndex__enablemditabbedgroups)|Enables or disables the MDI Tabbed Groups feature.|  
|[CMDIFrameWndEx::EnableMDITabs](#cmdiframewndex__enablemditabs)|Enables or disables the MDI Tabs feature. When enabled, the frame window displays a tab for each MDI child window.|  
|[CMDIFrameWndEx::EnableMDITabsLastActiveActivation](#cmdiframewndex__enablemditabslastactiveactivation)|Specifies whether the last active tab should be activated when the user closes the current tab.|  
|[CMDIFrameWndEx::EnablePaneMenu](#cmdiframewndex__enablepanemenu)|Enables or disables automatic creation and management of the pop-up pane menu, which displays a list of application panes.  .|  
|[CMDIFrameWndEx::EnableWindowsDialog](#cmdiframewndex__enablewindowsdialog)|Inserts a menu item whose command ID calls a [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) dialog box.|  
|[CMDIFrameWndEx::GetActivePopup](#cmdiframewndex__getactivepopup)|Returns a pointer to the currently displayed popup menu.|  
|[CMDIFrameWndEx::GetPane](#cmdiframewndex__getpane)|Returns a pointer to the pane that has the specified control ID.|  
|[CMDIFrameWndEx::GetDefaultResId](#cmdiframewndex__getdefaultresid)|Returns the ID of shared resources of the MDI frame window.|  
|[CMDIFrameWndEx::GetMDITabGroups](#cmdiframewndex__getmditabgroups)|Returns a list of MDI tabbed windows.|  
|[CMDIFrameWndEx::GetMDITabs](#cmdiframewndex__getmditabs)|Returns a reference to the underlined tabbed window.|  
|[CMDIFrameWndEx::GetMDITabsContextMenuAllowedItems](#cmdiframewndex__getmditabscontextmenualloweditems)|Returns a combination of flags that determines what context menu items are valid when the MDI Tabbed Groups feature is enabled.|  
|[CMDIFrameWndEx::GetMenuBar](#cmdiframewndex__getmenubar)|Returns a pointer to a menu bar object attached to the frame window.|  
|[CMDIFrameWndEx::GetRibbonBar](#cmdiframewndex__getribbonbar)|Retrieves the ribbon bar control for the frame.|  
|[CMDIFrameWndEx::GetTearOffBars](#cmdiframewndex__gettearoffbars)|Returns a list of [CPane](../../mfc/reference/cpane-class.md)-derived objects that are in a tear-off state.|  
|`CMDIFrameWndEx::GetThisClass`|Called by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMDIFrameWndEx::GetToolbarButtonToolTipText](#cmdiframewndex__gettoolbarbuttontooltiptext)|Called by the framework when the application displays the tooltip for a toolbar button.|  
|[CMDIFrameWndEx::InsertPane](#cmdiframewndex__insertpane)|Registers the specified pane with the docking manager.|  
|[CMDIFrameWndEx::IsFullScreen](#cmdiframewndex__isfullscreen)|Determines whether the frame window is in full-screen mode.|  
|[CMDIFrameWndEx::IsMDITabbedGroup](#cmdiframewndex__ismditabbedgroup)|Determines whether the MDI Tabbed Groups feature is enabled.|  
|[CMDIFrameWndEx::IsMemberOfMDITabGroup](#cmdiframewndex__ismemberofmditabgroup)|Determines whether the specified tabbed window is in the list of windows that are in MDI Tabbed Groups.|  
|[CMDIFrameWndEx::IsMenuBarAvailable](#cmdiframewndex__ismenubaravailable)|Determines whether the frame window has a menu bar.|  
|[CMDIFrameWndEx::IsPointNearDockSite](#cmdiframewndex__ispointneardocksite)|Determines whether a specified point is near the dock site.|  
|[CMDIFrameWndEx::IsPrintPreview](#cmdiframewndex__isprintpreview)|Determines whether the frame window is in print-preview mode.|  
|[CMDIFrameWndEx::LoadFrame](#cmdiframewndex__loadframe)|Creates a frame window from resource information. (Overrides `CMDIFrameWnd::LoadFrame`.)|  
|[CMDIFrameWndEx::LoadMDIState](#cmdiframewndex__loadmdistate)|Loads the specified layout of MDI Tabbed Groups and the list of previously opened documents.|  
|[CMDIFrameWndEx::MDITabMoveToNextGroup](#cmdiframewndex__mditabmovetonextgroup)|Moves the active tab from the currently active tabbed window to the next or previous tabbed group.|  
|[CMDIFrameWndEx::MDITabNewGroup](#cmdiframewndex__mditabnewgroup)|Creates a new tabbed group that has a single window.|  
|[CMDIFrameWndEx::NegotiateBorderSpace](#cmdiframewndex__negotiateborderspace)|Negotiates border space in a frame window during OLE in-place activation.|  
|[CMDIFrameWndEx::OnCloseDockingPane](#cmdiframewndex__onclosedockingpane)|Called by the framework when the user clicks the **Close** button on a dockable pane.|  
|[CMDIFrameWndEx::OnCloseMiniFrame](#cmdiframewndex__oncloseminiframe)|Called by the framework when the user clicks the **Close** button on a floating mini frame window.|  
|[CMDIFrameWndEx::OnClosePopupMenu](#cmdiframewndex__onclosepopupmenu)|Called by the framework when an active pop-up menu processes a `WM_DESTROY` message.|  
|[CMDIFrameWndEx::OnCmdMsg](#cmdiframewndex__oncmdmsg)|Called by the framework to route and dispatch command messages and to update command user-interface objects.|  
|[CMDIFrameWndEx::OnDrawMenuImage](#cmdiframewndex__ondrawmenuimage)|Called by the framework when the image associated with a menu item is drawn.|  
|[CMDIFrameWndEx::OnDrawMenuLogo](#cmdiframewndex__ondrawmenulogo)|Called by the framework when a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)processes a `WM_PAINT` message.|  
|[CMDIFrameWndEx::OnEraseMDIClientBackground](#cmdiframewndex__onerasemdiclientbackground)|Called by the framework when the MDI frame window processes a `WM_ERASEBKGND` message.|  
|[CMDIFrameWndEx::OnMenuButtonToolHitTest](#cmdiframewndex__onmenubuttontoolhittest)|Called by the framework when a [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)object processes a `WM_NCHITTEST` message.|  
|[CMDIFrameWndEx::OnMoveMiniFrame](#cmdiframewndex__onmoveminiframe)|Called by the framework to move a mini-frame window.|  
|[CMDIFrameWndEx::OnSetPreviewMode](#cmdiframewndex__onsetpreviewmode)|Sets the application's main frame window print-preview mode. (Overrides [CFrameWnd::OnSetPreviewMode](../../mfc/reference/cframewnd-class.md#cframewnd__onsetpreviewmode).)|  
|[CMDIFrameWndEx::OnShowCustomizePane](#cmdiframewndex__onshowcustomizepane)|Called by the framework when a Quick Customize pane is activated.|  
|[CMDIFrameWndEx::OnShowMDITabContextMenu](#cmdiframewndex__onshowmditabcontextmenu)|Called by the framework when a context menu should be displayed on one of the tabs. (Valid for MDI Tabbed Groups only.)|  
|[CMDIFrameWndEx::OnShowPanes](#cmdiframewndex__onshowpanes)|Called by the framework to show or hide panes.|  
|[CMDIFrameWndEx::OnShowPopupMenu](#cmdiframewndex__onshowpopupmenu)|Called by the framework when a pop-up menu is activated.|  
|[CMDIFrameWndEx::OnSizeMDIClient](#cmdiframewndex__onsizemdiclient)|Called by the framework when the size of the client MDI window is changing.|  
|[CMDIFrameWndEx::OnTearOffMenu](#cmdiframewndex__ontearoffmenu)|Called by the framework when a menu that has a tear-off bar is activated.|  
|[CMDIFrameWndEx::OnUpdateFrameMenu](#cmdiframewndex__onupdateframemenu)|Called by the framework to update the frame menu. (Overrides `CMDIFrameWnd::OnUpdateFrameMenu`.)|  
|[CMDIFrameWndEx::PaneFromPoint](#cmdiframewndex__panefrompoint)|Returns the docking pane that contains the specified point.|  
|`CMDIFrameWndEx::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions.  (Overrides `CMDIFrameWnd::PreTranslateMessage`.)|  
|[CMDIFrameWndEx::RecalcLayout](#cmdiframewndex__recalclayout)|Called by the framework to recalculate the layout of the frame window. (Overrides [CFrameWnd::RecalcLayout](../../mfc/reference/cframewnd-class.md#cframewnd__recalclayout).)|  
|[CMDIFrameWndEx::RemovePaneFromDockManager](#cmdiframewndex__removepanefromdockmanager)|Unregisters a pane and removes it from the docking manager.|  
|[CMDIFrameWndEx::SaveMDIState](#cmdiframewndex__savemdistate)|Saves the current layout of MDI Tabbed Groups and the list of previously opened documents.|  
|[CMDIFrameWndEx::SetPrintPreviewFrame](#cmdiframewndex__setprintpreviewframe)|Sets the print preview frame window.|  
|[CMDIFrameWndEx::SetupToolbarMenu](#cmdiframewndex__setuptoolbarmenu)|Modifies a toolbar object by searching for dummy items and replacing them with the specified user-defined items.|  
|[CMDIFrameWndEx::ShowFullScreen](#cmdiframewndex__showfullscreen)|Switches the main frame from regular mode to full-screen mode.|  
|[CMDIFrameWndEx::ShowPane](#cmdiframewndex__showpane)|Shows or hides the specified pane.|  
|[CMDIFrameWndEx::ShowWindowsDialog](#cmdiframewndex__showwindowsdialog)|Creates a [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) box and opens it.|  
|[CMDIFrameWndEx::TabbedDocumentToControlBar](#cmdiframewndex__tabbeddocumenttocontrolbar)|Converts the specified tabbed document to a docking pane.|  
|[CMDIFrameWndEx::UpdateCaption](#cmdiframewndex__updatecaption)|Called by the framework to update the window frame caption.|  
|[CMDIFrameWndEx::UpdateMDITabbedBarsIcons](#cmdiframewndex__updatemditabbedbarsicons)|Sets the icon for each MDI tabbed pane.|  
|[CMDIFrameWndEx::WinHelp](#cmdiframewndex__winhelp)|Called by the framework to initiate the WinHelp application or context help. (Overrides [CWnd::WinHelp](../../mfc/reference/cwnd-class.md#cwnd__winhelp).)|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMDIFrameWndEx::m_bCanCovertControlBarToMDIChild](#cmdiframewndex__m_bcancovertcontrolbartomdichild)|Determines whether docking panes can be converted to MDI child windows.|  
|[CMDIFrameWndEx::m_bDisableSetRedraw](#cmdiframewndex__m_bdisablesetredraw)|Enables or disables redraw optimization for MDI child windows.|  
  
## Remarks  
 To take advantage of extended customization features in your MDI application, derive the MDI frame window class of the application from `CMDIFrameWndEx` instead of `CMDIFrameWnd`.  
  
## Example  
 The following example derives a class from `CMDIFrameWndEx`. This code snippet comes from the [DrawClient Sample: MFC Ribbon-Based OLE Object Drawing Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#1](../../mfc/reference/codesnippet/cpp/cmdiframewndex-class_1.h)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md)  
  
 [CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)  
  
## Requirements  
 **Header:** afxMDIFrameWndEx.h  
  
##  <a name="cmdiframewndex__activeitemrecalclayout"></a>  CMDIFrameWndEx::ActiveItemRecalcLayout  
 Recalculates the layout of the active item.  
  
```  
void ActiveItemRecalcLayout();
```  
  
##  <a name="cmdiframewndex__addpane"></a>  CMDIFrameWndEx::AddPane  
 Registers a pane with the docking manager.  
  
```  
BOOL AddPane(
    CBasePane* pControlBar,  
    BOOL bTail=TRUE);
```  
  
### Parameters  
 [in] `pControlBar`  
 Pointer to the pane to register.  
  
 [in] `bTail`  
 Specifies whether to add this pane to the end of the list.  
  
### Return Value  
 Returns a non-zero value if the pane is registered successfully. Returns 0 if the pane is already registered with the docking manager.  
  
### Remarks  
 Each pane must be registered with the [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) before it can take a part in the docking layout. Use this method to notify the docking manager that you want to dock a specific pane. Once that pane is registered, the docking manager aligns it based on its alignment setting and position in the list of panes maintained by the docking manager.  
  
##  <a name="cmdiframewndex__adjustclientarea"></a>  CMDIFrameWndEx::AdjustClientArea  
 Reduces the client area to allow for a border.  
  
```  
virtual void AdjustClientArea();
```  
  
##  <a name="cmdiframewndex__adjustdockinglayout"></a>  CMDIFrameWndEx::AdjustDockingLayout  
 Recalculates the layout of all docked panes.  
  
```  
virtual void AdjustDockingLayout(HDWP hdwp=NULL);
```  
  
### Parameters  
 [in] `hdwp`  
 Identifies the multiple-window-position structure. You can obtain this value by calling `BeginDeferWindowPos`.  
  
### Remarks  
 Call this member function to recalculate the layout of all panes docked to the frame window.  
  
##  <a name="cmdiframewndex__aremditabs"></a>  CMDIFrameWndEx::AreMDITabs  
 Determines whether the MDI tabs feature or the MDI tabbed groups feature is enabled.  
  
```  
BOOL AreMDITabs(int* pnMDITabsType=NULL) const;

 
```  
  
### Parameters  
 [out] `pnMDITabsType`  
 A pointer to an integer variable that indicates which features are enabled:  
  
-   0: All features are disabled.  
  
-   1: MDI tabs is enabled.  
  
-   2: MDI tabbed groups is enabled.  
  
### Return Value  
 `Returns TRUE` if MDI tabs or MDI tabbed groups is enabled.  
  
 `Returns FALSE` if none of the above features is enabled.  
  
### Remarks  
 Use this function to determine whether MDI tabs or MDI tabbed groups is enabled for the frame window. Use [CMDIFrameWndEx::EnableMDITabs](#cmdiframewndex__enablemditabs) to enable or disable the MDI tabs feature.  
  
 Use [CMDIFrameWndEx::EnableMDITabbedGroups](#cmdiframewndex__enablemditabbedgroups) to enable or disable the MDI tabbed groups feature.  
  
##  <a name="cmdiframewndex__cancovertcontrolbartomdichild"></a>  CMDIFrameWndEx::CanCovertControlBarToMDIChild  
 Called by the framework to determine whether the frame window can convert docking panes to tabbed documents  
  
```  
virtual BOOL CanCovertControlBarToMDIChild();
```  
  
### Return Value  
 Returns `TRUE` if the frame window can convert docking panes to tabbed documents; otherwise returns `FALSE`.  
  
### Remarks  
 Override this method in a derived class and return `TRUE` to enable the conversion of docking panes to tabbed documents. Alternatively, you can set [CMDIFrameWndEx::m_bCanCovertControlBarToMDIChild](#cmdiframewndex__m_bcancovertcontrolbartomdichild) to `TRUE`.  
  
##  <a name="cmdiframewndex__controlbartotabbeddocument"></a>  CMDIFrameWndEx::ControlBarToTabbedDocument  
 Converts the specified docking pane to a tabbed document.  
  
```  
virtual CMDIChildWndEx* ControlBarToTabbedDocument(CDockablePane* pBar);
```  
  
### Parameters  
 `pBar`  
 A pointer to the docking pane to convert.  
  
### Return Value  
 Returns a pointer to the new MDI child window that contains the docking pane.  
  
### Remarks  
 This method converts a docking pane to a tabbed document. When you call this method, the framework creates a [CMDIChildWndEx Class](../../mfc/reference/cmdichildwndex-class.md) object, removes the docking pane from the docking manager, and adds the docking pane to the new MDI child window. The MDI child window resizes the docking pane to cover the entire client area  
  
##  <a name="cmdiframewndex__createdocumentwindow"></a>  CMDIFrameWndEx::CreateDocumentWindow  
 Creates a child document window.  
  
```  
virtual CMDIChildWndEx* CreateDocumentWindow(
    LPCTSTR lpcszDocName,  
    CObject* pObj);
```  
  
### Parameters  
 [in] `lpcszDocName`  
 A text string that contains a document identifier. Typically, it is the full path of a document file.  
  
 [in] `pObj`  
 A pointer to a user-defined object. For example, a developer can create an application-specific data structure describing the document and telling how the document should be initialized at startup.  
  
### Return Value  
 A pointer to `CMDIChildWndEx`.  
  
### Remarks  
 The framework calls this method when it loads the list of documents previously saved in the registry.  
  
 Override this method in order to create documents when they are being loaded from the registry.  
  
### Example  
 The following example shows how `CreateDocumentWindow` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 In this example, `g_strStartViewName` could be the name of a "virtual document" (for example, "Start Page") that is not actually loaded from a disk file. Therefore we need special processing to handle that case.  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#13](../../mfc/codesnippet/cpp/cmdiframewndex-class_2.cpp)]  
  
##  <a name="cmdiframewndex__createnewwindow"></a>  CMDIFrameWndEx::CreateNewWindow  
 Called by the framework to create a new window.  
  
```  
virtual CMDIChildWndEx* CreateNewWindow(
    LPCTSTR lpcszDocName,  
    CObject* pObj);
```  
  
### Parameters  
 [in] `lpcszDocName`  
 The document name.  
  
 [in] `pObj`  
 Reserved for future use.  
  
### Return Value  
 A pointer to the new window.  
  
##  <a name="cmdiframewndex__dockpane"></a>  CMDIFrameWndEx::DockPane  
 Docks the specified pane to the frame window.  
  
```  
void DockPane(
    CBasePane* pBar,  
    UINT nDockBarID=0,  
    LPCRECT lpRect=NULL);
```  
  
### Parameters  
 [in] `pBar`  
 Pointer to the pane to dock.  
  
 [in] `nDockBarID`  
 Specifies which sides of the frame window to dock to.  
  
 [in] `lpRect`  
 Not used.  
  
### Remarks  
 This method docks the specified the pane to one of the sides of the frame window that was specified when [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#cbasepane__enabledocking) and [CMDIFrameWndEx::EnableDocking](#cmdiframewndex__enabledocking) were called.  
  
### Example  
 The following example demonstrates the use of the `DockPane` method. This code snippet comes from the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#4](../../mfc/codesnippet/cpp/cmdiframewndex-class_3.cpp)]  
  
##  <a name="cmdiframewndex__dockpaneleftof"></a>  CMDIFrameWndEx::DockPaneLeftOf  
 Docks one pane to the left of another pane.  
  
```  
BOOL DockPaneLeftOf(
    CPane* pBar,  
    CPane* pLeftOf);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to the docking pane.  
  
 [in] `pLeftOf`  
 A pointer to the pane that serves as the dock site. .  
  
### Return Value  
 Returns `TRUE` if the operation is successful. Otherwise returns `FALSE`.  
  
### Remarks  
 Call this method to dock several pane objects in a predefined order. This method docks the pane specified by `pBar` to the left of the pane specified by `pLeftOf`.  
  
### Example  
 The following example shows how the `DockPaneLeftOf` method is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#5](../../mfc/codesnippet/cpp/cmdiframewndex-class_4.cpp)]  
  
##  <a name="cmdiframewndex__enableautohidepanes"></a>  CMDIFrameWndEx::EnableAutoHidePanes  
 Enables auto-hide mode for panes when they are docked at the specified sides of the main frame window.  
  
```  
BOOL EnableAutoHidePanes(DWORD dwDockStyle);
```  
  
### Parameters  
 [in] `dwDockStyle`  
 Specifies the sides of the main frame window that will be enabled. Use one or more of the following flags.  
  
- `CBRS_ALIGN_LEFT`  
  
- `CBRS_ALIGN_RIGHT`  
  
- `CBRS_ALIGN_TOP`  
  
- `CBRS_ALIGN_BOTTOM`  
  
### Return Value  
 Call this function to enable auto-hide mode for panes when they are docked at the specified sides of the main frame window.  
  
### Example  
 The following example shows how the `EnableAutoHidePanes` method is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#6](../../mfc/codesnippet/cpp/cmdiframewndex-class_5.cpp)]  
  
### Remarks  
  
##  <a name="cmdiframewndex__enabledocking"></a>  CMDIFrameWndEx::EnableDocking  
 Enables docking of the panes that belong to the MDI frame window.  
  
```  
BOOL EnableDocking(DWORD dwDockStyle);
```  
  
### Parameters  
 [in] `dwDockStyle`  
 Specifies the docking style that you want to apply.  
  
### Return Value  
  
### Remarks  
 Call this function to enable docking of panes that belong to the `CMDIFrameWndEx` object.  
  
### Example  
 The following example shows how the `EnableDocking` method is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#7](../../mfc/codesnippet/cpp/cmdiframewndex-class_6.cpp)]  
  
##  <a name="cmdiframewndex__enablefullscreenmainmenu"></a>  CMDIFrameWndEx::EnableFullScreenMainMenu  
 Shows or hides the main menu in full-screen mode.  
  
```  
void EnableFullScreenMainMenu(BOOL bEnableMenu);
```  
  
### Parameters  
 [in] `bEnableMenu`  
 `TRUE` to show the main menu in full-screen mode, or `FALSE` to hide it.  
  
### Remarks  
  
##  <a name="cmdiframewndex__enablefullscreenmode"></a>  CMDIFrameWndEx::EnableFullScreenMode  
 Enables full-screen mode for the frame window.  
  
```  
void EnableFullScreenMode(UINT uiFullScreenCmd);
```  
  
### Parameters  
 [in] `uiFullScreenCmd`  
 The ID of a command that enables or disables full-screen mode.  
  
### Remarks  
 In full-screen mode, all docking control bars, toolbars and menus are hidden and the active view is resized to occupy the full-screen.When you enable full-screen mode, you must specify an ID of the command that enables or disables it. You can call `EnableFullScreenMode` from the main frame's `OnCreate` function. When a frame window is being switched to full-screen mode, the framework creates a floating toolbar with one button that has the specified command ID.If you want to keep the main menu on the screen, call [CMDIFrameWndEx::EnableFullScreenMainMenu](#cmdiframewndex__enablefullscreenmainmenu).  
  
##  <a name="cmdiframewndex__enableloaddockstate"></a>  CMDIFrameWndEx::EnableLoadDockState  
 Enables or disables the loading of the docking state.  
  
```  
void EnableLoadDockState(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the loading of the docking state, `FALSE` to disable the loading of the docking state.  
  
### Remarks  
  
##  <a name="cmdiframewndex__enablemditabbedgroups"></a>  CMDIFrameWndEx::EnableMDITabbedGroups  
 Enables or disables the MDI tabbed groups feature for the frame window.  
  
```  
void EnableMDITabbedGroups(
    BOOL bEnable,  
    const CMDITabInfo& params);
```  
  
### Parameters  
 [in] `bEnable`  
 If `TRUE`, the MDI tabbed groups feature is enabled; if `FALSE`, the MDI tabbed groups feature is disabled.  
  
 [in] `params`  
 Specifies parameters that the framework applies to child windows that are created in the MDI client area.  
  
### Remarks  
 Use this method to enable or disable the MDI tabbed groups feature. This feature enables MDI applications to display child windows as tabbed windows that are aligned vertically or horizontally within the MDI client area. Groups of tabbed windows are separated by splitters. The user can resize tabbed groups by using a splitter.  
  
-   The user can:  
  
-   Drag individual tabs between groups.  
  
-   Drag individual tabs to the edge of the window to create new groups.  
  
-   Move tabs or create new groups by using a shortcut menu.  
  
-   Your application can save the current layout of tabbed windows and the list of currently opened documents.  
  
 If you call this method with `bEnable` set to `FALSE`, `params` is ignored.  
  
 Even if MDI tabbed groups is already enabled, you can call this method again to modify the settings for child windows. Call the method with `bEnable` set to `TRUE` and modify the members of the `CMDITabInfo` object that are specified by the `params` parameter.  
  
 For more information about how to use MDI tabbed groups, see [MDI Tabbed Groups](../../mfc/mdi-tabbed-groups.md).  
  
### Example  
 The following example shows how `EnableMDITabbedGroups` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#8](../../mfc/codesnippet/cpp/cmdiframewndex-class_7.cpp)]  
  
##  <a name="cmdiframewndex__enablemditabs"></a>  CMDIFrameWndEx::EnableMDITabs  
 Enables or disables the MDI Tabs feature for the MDI frame window. When enabled, the frame window displays a tab for each MDI child window.  
  
```  
void EnableMDITabs(
    BOOL bEnable=TRUE,  
    BOOL bIcons=TRUE,  
    CMFCTabCtrl::Location tabLocation=CMFCTabCtrl::LOCATION_BOTTOM,  
    BOOL bTabCloseButton=FALSE,  
    CMFCTabCtrl::Style style=CMFCTabCtrl::STYLE_3D_SCROLLED,  
    BOOL bTabCustomTooltips=FALSE,  
    BOOL bActiveTabCloseButton=FALSE);
```  
  
### Parameters  
 `bEnable`  
 Specifies whether tabs are enabled.  
  
 `bIcons`  
 Specifies whether icons should be displayed on the tabs.  
  
 `tabLocation`  
 Specifies the location of the tab labels.  
  
 `bTabCloseButton`  
 Specifies whether to display tab close buttons.  
  
 `style`  
 Specifies the style of tabs. Use `STYLE_3D_SCROLLED` for regular tabs or `STYLE_3D_ONENOTE` for Microsoft OneNote tabs.  
  
 `bTabCustomTooltips`  
 Specifies whether custom tooltips are enabled.  
  
 `bActiveTabCloseButton`  
 If `TRUE`, a **Close** button will be displayed on the active tab instead of on the right corner of the tab area.  
  
### Remarks  
 Call this method to enable or disable the MDI tabs feature for the MDI frame window. When enabled, all child windows are displayed as tabs.  
  
 The tab labels can be located at the top or bottom of the frame, depending on the setting of the parameter `tabLocation`. You may specify either `CMFCTabCtrl::LOCATION_BOTTOM` (the default setting) or `CMFCTabCtrl::LOCATION_TOP`.  
  
 If `bTabCustomTooltips` is `TRUE`, an `AFX_WM_ON_GET_TAB_TOOLTIP` message will be sent to the main frame window. Your code can handle this message and provide the framework with custom tooltips for MDI tabs.  
  
### Example  
 The following example shows how `EnableMDITabs` is used in the [MDITabsDemo Sample: MFC Tabbed MDI Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MDITabsDemo#3](../../mfc/reference/codesnippet/cpp/cmdiframewndex-class_8.cpp)]  
  
##  <a name="cmdiframewndex__enablemditabslastactiveactivation"></a>  CMDIFrameWndEx::EnableMDITabsLastActiveActivation  
 Specifies whether the last active tab should be opened when the user closes the current tab.  
  
```  
void EnableMDITabsLastActiveActivation(BOOL bLastActiveTab=TRUE);
```  
  
### Parameters  
 [in] `bLastActiveTab`  
 If `TRUE`, enable activation of the last active tab. If `FALSE`, disable activation of the last active tab.  
  
### Remarks  
 There are two ways to open a tab when the active tab is closed:  
  
-   Activate the next tab.  
  
-   Activate the previously active tab.  
  
 The default implementation uses the first way.  
  
 Use `EnableMDITabsLastActiveActivation` to enable the second way of tab activation. It emulates the way Windows opens MDI child windows.  
  
##  <a name="cmdiframewndex__enablepanemenu"></a>  CMDIFrameWndEx::EnablePaneMenu  
 Enables or disables automatic creation and management of the pop-up pane menu, which displays a list of application panes.  
  
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
 If `TRUE`, automatic handling of the pane menu is enabled; if `FALSE`, automatic handling is disabled.  
  
 [in] `uiCustomizeCmd`  
 Command ID of the **Customize** menu item. This menu item is usually added to the end of the list of panes.  
  
 [in] `strCustomizeLabel`  
 The text to be displayed for the **Customize** menu item (for localization).  
  
 [in] `uiViewToolbarsMenuEntryID`  
 Specifies the ID of a toolbar menu item that opens the pane menu. Usually this is the **Toolbars** submenu of the **View** menu.  
  
 [in] `bContextMenuShowsToolbarsOnly`  
 If `TRUE`, the pane menu displays only a list of toolbars. If `FALSE`, the menu displays a list of toolbars and docking bars.  
  
 [in] `bViewMenuShowsToolbarsOnly`  
 If `TRUE`, the pane menu displays only a list of toolbars. If `FALSE`, the menu displays a list of toolbars and docking bars.  
  
### Remarks  
 The pop-up pane menu displays the list of the application's panes and lets the user show or hide individual panes.  
  
### Example  
 The following example shows how `EnablePaneMenu` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#9](../../mfc/codesnippet/cpp/cmdiframewndex-class_9.cpp)]  
  
##  <a name="cmdiframewndex__enablewindowsdialog"></a>  CMDIFrameWndEx::EnableWindowsDialog  
 Inserts a menu item whose command ID calls a [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) dialog box.  
  
```  
void EnableWindowsDialog(
    UINT uiMenuId,  
    LPCTSTR lpszMenuText,  
    BOOL bShowAllways=FALSE,  
    BOOL bShowHelpButton=FALSE);

 
void EnableWindowsDialog(
    UINT uiMenuId,  
    UINT uiMenuTextResId,  
    BOOL bShowAllways=FALSE,  
    BOOL bShowHelpButton=FALSE);
```  
  
### Parameters  
 [in] `uiMenuId`  
 Specifies the resource ID of a menu.  
  
 [in] `lpszMenuText`  
 Specifies the item's text.  
  
 [in] `bShowHelpButton`  
 Specifies whether to display a **Help** button on the windows management dialog box.  
  
 [in] `uiMenuTextResId`  
 The string resource identifier that contains the item's text string.  
  
### Remarks  
 Use this method to insert a menu item whose command calls a MDI child window management dialog box ( [CMFCWindowsManagerDialog Class](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)). The new item is inserted into the menu specified by `uiMenuId`. Call `EnableWindowsDialog` when you process the `WM_CREATE` message.  
  
### Example  
 The following example shows how `EnableWindowsDialog` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#10](../../mfc/codesnippet/cpp/cmdiframewndex-class_10.cpp)]  
  
##  <a name="cmdiframewndex__getactivepopup"></a>  CMDIFrameWndEx::GetActivePopup  
 Returns a pointer to the currently displayed popup menu.  
  
```  
CMFCPopupMenu* GetActivePopup() const;

 
```  
  
### Return Value  
 A pointer to the active popup menu; `NULL` if no popup menu is active.  
  
### Remarks  
 Use this function to obtain a pointer to the [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object that is currently displayed.  
  
##  <a name="cmdiframewndex__getdefaultresid"></a>  CMDIFrameWndEx::GetDefaultResId  
 Returns the ID of shared resources of the MDI frame window.  
  
```  
UINT GetDefaultResId() const;

 
```  
  
### Return Value  
 A resource ID value. 0 if the frame window has no menu bar.  
  
### Remarks  
 This method returns the resource ID that was specified when the MDI frame window was loaded by [CFrameWnd::LoadFrame](../../mfc/reference/cframewnd-class.md#cframewnd__loadframe).  
  
##  <a name="cmdiframewndex__getmditabgroups"></a>  CMDIFrameWndEx::GetMDITabGroups  
 Returns a list of MDI tabbed windows.  
  
```  
const CObList& GetMDITabGroups() const;

 
```  
  
### Return Value  
 A reference to a [CObList Class](../../mfc/reference/coblist-class.md) object that contains a list of tabbed windows. Do not store or modify the list.  
  
### Remarks  
 Use this method to access the list of tabbed windows. It can be helpful if you want to change or query some parameters of individual tabbed windows.  
  
##  <a name="cmdiframewndex__getmditabs"></a>  CMDIFrameWndEx::GetMDITabs  
 Returns a reference to the underlined tabbed window.  
  
```  
CMFCTabCtrl& GetMDITabs();
```  
  
### Return Value  
 A reference to the underlined tabbed window.  
  
##  <a name="cmdiframewndex__getmditabscontextmenualloweditems"></a>  CMDIFrameWndEx::GetMDITabsContextMenuAllowedItems  
 Returns a combination of flags that determines what operations are valid when the MDI Tabbed Groups feature is enabled.  
  
```  
DWORD GetMDITabsContextMenuAllowedItems();
```  
  
### Return Value  
 A bitwise-OR combination of the following flags:  
  
- `BCGP_MDI_CREATE_VERT_GROUP` - can create a vertical tab group.  
  
- `BCGP_MDI_CREATE_HORZ_GROUP` - can create a horizontal tab group.  
  
- `BCGP_MDI_CAN_MOVE_PREV` - can move a tab to the previous tab group.  
  
- `BCGP_MDI_CAN_MOVE_NEXT` - can move a tab to the next tab group.  
  
### Remarks  
 When the MDI Tabbed Groups feature is enabled, you must know what operations are allowed on the tabs of a particular window. This method analyzes the current layout of tabbed windows and returns a combination of flags that can be used to build, for example, a shortcut menu.  
  
 You can create a new vertical tab group when all tabbed windows are aligned vertically, or when there is only one tabbed window.  
  
 You can create a new horizontal tab group when all tabbed windows are aligned horizontally, or when there is only one tabbed window.  
  
 You can move a tab to the previous group only if there is more than one tab in a tabbed window.  
  
 You can move a tab to the next group only if there is more than one tab in a tabbed window.  
  
##  <a name="cmdiframewndex__getmenubar"></a>  CMDIFrameWndEx::GetMenuBar  
 Returns a pointer to a menu bar object attached to the frame window.  
  
```  
const CMFCMenuBar* GetMenuBar() const;

 
```  
  
### Return Value  
 A pointer to a menu bar object.  
  
##  <a name="cmdiframewndex__getpane"></a>  CMDIFrameWndEx::GetPane  
 Returns a pointer to the pane that has the specified control ID.  
  
```  
CBasePane* GetPane(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
 The control ID.  
  
### Return Value  
 A pointer to the pane that has the specified control ID, if it exists. Otherwise, `NULL`.  
  
##  <a name="cmdiframewndex__getribbonbar"></a>  CMDIFrameWndEx::GetRibbonBar  
 Retrieves the ribbon bar control for the frame.  
  
```  
CMFCRibbonBar* GetRibbonBar();
```  
  
### Return Value  
 Pointer to the [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md) for the frame.  
  
### Remarks  
  
##  <a name="cmdiframewndex__gettearoffbars"></a>  CMDIFrameWndEx::GetTearOffBars  
 Returns a list of tear-off menus.  
  
```  
const CObList& GetTearOffBars() const;

 
```  
  
### Return Value  
 A reference to a [CObList Class](../../mfc/reference/coblist-class.md) object that contains a collection of pointers to `CPane`-derived objects that are in a tear-off state.  
  
### Remarks  
 `CMDIFrameWndEx` maintains a collection of tear-off menus. Use this method to retrieve a reference to this list.  
  
##  <a name="cmdiframewndex__gettoolbarbuttontooltiptext"></a>  CMDIFrameWndEx::GetToolbarButtonToolTipText  
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
  
##  <a name="cmdiframewndex__insertpane"></a>  CMDIFrameWndEx::InsertPane  
 Registers the specified pane with the docking manager.  
  
```  
BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter=TRUE);
```  
  
### Parameters  
 [in] `pControlBar`  
 A pointer to the pane to be inserted.  
  
 [in] `pTarget`  
 A pointer to the pane before or after which to insert the pane.  
  
 [in] `bAfter`  
 If `TRUE`, `pControlBar` is inserted after `pTarget`. If `FALSE`, `pControlBar` is inserted before `pTarget`.  
  
### Return Value  
 `TRUE` if the method successfully registers the pane, `FALSE` if the pane was already registered with the docking manager.  
  
### Remarks  
 Use this method to tell the docking manager about a pane specified by `pControlBar`. The docking manager will align this pane according to the pane's alignment and position in the docking manager's internal list.  
  
##  <a name="cmdiframewndex__isfullscreen"></a>  CMDIFrameWndEx::IsFullScreen  
 Determines whether the frame window is in full-screen mode.  
  
```  
BOOL IsFullScreen() const;

 
```  
  
### Return Value  
 `TRUE` if the frame window is in full screen mode; otherwise `FALSE`.  
  
### Remarks  
 You can set the full screen mode by calling the [CMDIFrameWndEx::EnableFullScreenMode](#cmdiframewndex__enablefullscreenmode) method.  
  
##  <a name="cmdiframewndex__ismditabbedgroup"></a>  CMDIFrameWndEx::IsMDITabbedGroup  
 Specifies whether the MDI Tabbed Groups feature is enabled.  
  
```  
BOOL IsMDITabbedGroup() const;

 
```  
  
### Return Value  
 `TRUE` if the MDI Tabbed Groups feature is enabled; otherwise `FALSE`.  
  
### Remarks  
 To determine whether regular MDI tabs or the MDI Tabbed Groups feature is enabled, use [CMDIFrameWndEx::AreMDITabs](#cmdiframewndex__aremditabs).  
  
##  <a name="cmdiframewndex__ismemberofmditabgroup"></a>  CMDIFrameWndEx::IsMemberOfMDITabGroup  
 Determines whether the specified tabbed window is in the list of windows that are in MDI Tabbed Groups.  
  
```  
BOOL IsMemberOfMDITabGroup(CWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 A pointer to tabbed window.  
  
### Return Value  
 `TRUE` if the specified tabbed window is in the list of tabbed windows that form MDI Tabbed Groups. Otherwise `FALSE`.  
  
##  <a name="cmdiframewndex__ismenubaravailable"></a>  CMDIFrameWndEx::IsMenuBarAvailable  
 Determines whether the frame window has a menu bar.  
  
```  
BOOL IsMenuBarAvailable() const;

 
```  
  
### Return Value  
 `TRUE` if the pointer to the menu bar object is not `NULL`; otherwise `FALSE`.  
  
##  <a name="cmdiframewndex__ispointneardocksite"></a>  CMDIFrameWndEx::IsPointNearDockSite  
 Determines whether a specified point is near the dock site.  
  
```  
BOOL IsPointNearDockSite(
    CPoint point,  
    DWORD& dwBarAlignment,  
    BOOL& bOuterEdge) const;

 
```  
  
### Parameters  
 [in] `point`  
 The specified point in screen coordinates.  
  
 [in] `dwBarAlignment`  
 Specifies which edge the point is near. Possible values are `CBRS_ALIGN_LEFT`, `CBRS_ALIGN_RIGHT`, `CBRS_ALIGN_TOP`, and `CBRS_ALIGN_BOTTOM`  
  
 [in] `bOuterEdge`  
 `TRUE` if the point is near the outer border of the dock site; `FALSE` otherwise.  
  
### Return Value  
 `TRUE` if the point is near the dock site; otherwise `FALSE`.  
  
### Remarks  
 The point is near the dock site when it is within the sensitivity set in the docking manager. The default sensitivity is 15 pixels.  
  
##  <a name="cmdiframewndex__isprintpreview"></a>  CMDIFrameWndEx::IsPrintPreview  
 Determines whether the frame window is in print-preview mode.  
  
```  
BOOL IsPrintPreview();
```  
  
### Return Value  
 `TRUE` if the frame window is in print-preview mode; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmdiframewndex__loadframe"></a>  CMDIFrameWndEx::LoadFrame  
 Creates a frame window from resource information.  
  
```  
virtual BOOL LoadFrame(
    UINT nIDResource,  
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,  
    CWnd* pParentWnd = NULL,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 [in] `nIDResource`  
 The ID of a shared resource associated with the frame window.  
  
 [in] `dwDefaultStyle`  
 The style of the frame window.  
  
 [in] `pParentWnd`  
 A pointer to the frame's parent.  
  
 [in] `pContext`  
 A pointer to a [CCreateContext Structure](../../mfc/reference/ccreatecontext-structure.md). This parameter can be `NULL`.  
  
### Return Value  
 `TRUE` if the method succeeds, otherwise `FALSE`.  
  
##  <a name="cmdiframewndex__loadmdistate"></a>  CMDIFrameWndEx::LoadMDIState  
 Loads the specified layout of MDI Tabbed Groups and the list of previously opened documents.  
  
```  
virtual BOOL LoadMDIState(LPCTSTR lpszProfileName);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Specifies the profile name.  
  
### Return Value  
 `TRUE` if the load succeeded; `FALSE` if the load failed or there is no data to load.  
  
### Remarks  
 To load or save the state of MDI tabs and groups and the list of opened documents, do the following:  
  
-   Call [CMDIFrameWndEx::SaveMDIState](#cmdiframewndex__savemdistate) when the main frame is being closed  
  
-   Call [CMDIFrameWndEx::LoadMDIState](#cmdiframewndex__loadmdistate) when the main frame is being created. The recommended place for this call is before the main frame is displayed for the first time. Add `CWinAppEx::EnableLoadWindowPlacement` `(FALSE);` before `pMainFrame->LoadFrame (IDR_MAINFRAME);.` Add `CBCGPWorkspace::ReloadWindowPlacement` `(pMainFrame);` after the call to `LoadMDIState` to display the main frame at the position that was stored in the registry.  
  
-   Override `GetDocumentName` in the `CMDIChildWndEx`- derived class if your application displays documents that are not stored as files. The returned string will be saved in the registry as the document identifier. The base implementation of [CMDIChildWndEx::GetDocumentName](../../mfc/reference/cmdichildwndex-class.md#cmdichildwndex__getdocumentname) returns a value obtained from [CDocument::GetPathName](../../mfc/reference/cdocument-class.md#cdocument__getpathname).  
  
-   Override [CMDIFrameWndEx::CreateDocumentWindow](#cmdiframewndex__createdocumentwindow) to correctly create documents when they are being loaded from the registry. The first parameter is the string that `GetDocumentName` returned.  
  
### Example  
 The following example shows how `LoadMDIState` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#11](../../mfc/codesnippet/cpp/cmdiframewndex-class_11.cpp)]  
  
##  <a name="cmdiframewndex__mditabmovetonextgroup"></a>  CMDIFrameWndEx::MDITabMoveToNextGroup  
 Moves the active tab from the currently active tabbed window to the next or previous tabbed group.  
  
```  
void MDITabMoveToNextGroup(BOOL bNext=TRUE);
```  
  
### Parameters  
 [in] `bNext`  
 If `TRUE`, move the tab to the next tabbed group. If `FALSE`, move it to the previous tabbed group.  
  
##  <a name="cmdiframewndex__mditabnewgroup"></a>  CMDIFrameWndEx::MDITabNewGroup  
 Creates a new tabbed group that has a single window.  
  
```  
void MDITabNewGroup(BOOL bVert=TRUE);
```  
  
### Parameters  
 [in] `bVert`  
 Specifies the new group alignment. If `TRUE`, the new group is aligned vertically. If `FALSE`, the new group is aligned horizontally.  
  
### Remarks  
 Use this function to create a new tabbed window (new tabbed group) and add the first tab to it.  
  
### Example  
 The following example shows how `MDITabNewGroup` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#12](../../mfc/codesnippet/cpp/cmdiframewndex-class_12.cpp)]  
  
##  <a name="cmdiframewndex__m_bcancovertcontrolbartomdichild"></a>  CMDIFrameWndEx::m_bCanCovertControlBarToMDIChild  
 Specifies whether docking panes can be converted to MDI child windows.  
  
```  
BOOL m_bCanCovertControlBarToMDIChild;  
```  
  
### Remarks  
 Indicates whether docking control bars can be converted to MDI child windows. If this flag is `TRUE`, the framework handles the conversion automatically when the user selects the **Tabbed Document** command. The flag is protected and you must explicitly enable this option either by setting `m_bCanCovertControlBarToMDIChild` in a constructor of a `CMDIFrameWndEx`-derived class, or by overriding `CanConvertControlBarToMDIChild`.  
  
 The default value is `FALSE`.  
  
### Example  
 The following example shows how `m_bCanCovertControlBarToMDIChild` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#13](../../mfc/codesnippet/cpp/cmdiframewndex-class_2.cpp)]  
  
##  <a name="cmdiframewndex__m_bdisablesetredraw"></a>  CMDIFrameWndEx::m_bDisableSetRedraw  
 Enables or disables redraw optimization for MDI child windows.  
  
```  
AFX_IMPORT_DATA static BOOL m_bDisableSetRedraw;  
```  
  
### Remarks  
 The default value is `TRUE`.  
  
 Set this flag to `FALSE` if you want to optimize redrawing of MDI children. In this case the framework will call `SetRedraw (FALSE)` for the main frame when the application is changing the active tab.  
  
 This flag can cause unwanted effects (such as background applications that become visible). Therefore we recommend that you change the default only if you experience noticeable flickering during MDI tab activation.  
  
##  <a name="cmdiframewndex__negotiateborderspace"></a>  CMDIFrameWndEx::NegotiateBorderSpace  
 Negotiates border space in a frame window during OLE in-place activation.  
  
```  
virtual BOOL NegotiateBorderSpace(
    UINT nBorderCmd,  
    LPRECT lpRectBorder);
```  
  
### Parameters  
 [in] `nBorderCmd`  
 Contains one of the following values from the enum `CFrameWnd::BorderCmd`:  
  
- `borderGet` = 1  
  
- `borderRequest` = 2  
  
- `borderSet` = 3  
  
 [in, out] `lpRectBorder`  
 Pointer to a [RECT Structure](../../mfc/reference/rect-structure1.md) or a [CRect Class](../../atl-mfc-shared/reference/crect-class.md) object that specifies the coordinates of the border.  
  
### Return Value  
 Nonzero if the method was successful; otherwise 0.  
  
### Remarks  
 This method is an implementation of OLE border space negotiation.  
  
##  <a name="cmdiframewndex__onclosedockingpane"></a>  CMDIFrameWndEx::OnCloseDockingPane  
 Called by the framework when the user clicks the **Close** button on a dockable pane.  
  
```  
virtual BOOL OnCloseDockingPane(CDockablePane* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 Pointer to the pane being closed.  
  
### Return Value  
 `TRUE` if the docking pane can be closed. Otherwise, `FALSE`.  
  
### Remarks  
 Override this method to handle hiding of docking panes. Return `FALSE` if you want to prevent a docking pane from being hidden.  
  
 The default implementation does nothing and returns `TRUE`.  
  
##  <a name="cmdiframewndex__oncloseminiframe"></a>  CMDIFrameWndEx::OnCloseMiniFrame  
 Called by the framework when the user clicks the **Close** button on a floating mini-frame window.  
  
```  
virtual BOOL OnCloseMiniFrame(CPaneFrameWnd*);
```  
  
### Parameters  
 [in] `pWnd`  
 Pointer to the mini-frame window being closed.  
  
### Return Value  
 `TRUE` if the floating mini-frame window can be closed. Otherwise, `FALSE`.  
  
### Remarks  
 Override this method to handle hiding of floating mini-frame windows. Return `FALSE` if you want to prevent a floating mini-frame window from being hidden.  
  
 The default implementation does nothing and returns `TRUE`.  
  
##  <a name="cmdiframewndex__onclosepopupmenu"></a>  CMDIFrameWndEx::OnClosePopupMenu  
 Called by the framework when an active pop-up menu processes a `WM_DESTROY` message.  
  
```  
virtual void OnClosePopupMenu(CMFCPopupMenu* pMenuPopup);
```  
  
### Parameters  
 [in] `pMenuPopup`  
 Pointer to a pop-up menu.  
  
### Remarks  
 Override this method if you want to process notifications from [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) objects that belong to the MDI frame window when those objects process `WM_DESTROY` messages.  
  
##  <a name="cmdiframewndex__oncmdmsg"></a>  CMDIFrameWndEx::OnCmdMsg  
 Called by the framework to route and dispatch command messages and to update command user-interface objects.  
  
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
 Identifies the command notification code. See [CCmdTarget::OnCmdMsg](../../mfc/reference/ccmdtarget-class.md#ccmdtarget__oncmdmsg) for more information about values for `nCode`.  
  
 [in] `pExtra`  
 Used according to the value of `nCode`. See [CCmdTarget::OnCmdMsg](../../mfc/reference/ccmdtarget-class.md#ccmdtarget__oncmdmsg) for more information about `pExtra`.  
  
 [in, out] `pHandlerInfo`  
 Typically, this parameter should be `NULL`.If not `NULL`, `OnCmdMsg` fills in the `pTarget` and `pmf` members of the `pHandlerInfo` structure instead of dispatching the command.  
  
### Return Value  
 Nonzero if the message is handled; otherwise 0.  
  
##  <a name="cmdiframewndex__ondrawmenuimage"></a>  CMDIFrameWndEx::OnDrawMenuImage  
 Called by the framework when the image associated with a menu item is drawn.  
  
```  
virtual BOOL OnDrawMenuImage(
    CDC* pDC,  
    const CMFCToolBarMenuButton* pMenuButton,  
    const CRect& rectImage);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `pMenuButton`  
 Pointer to the menu button.  
  
 [in] `rectImage`  
 Bounding rectangle of the image.  
  
### Return Value  
 `TRUE` if the method draws the image. The default implementation returns `FALSE`.  
  
### Remarks  
 Override this method  if you want to customize image rendering for the menu items that belong to the menu bar owned by the `CMDIFrameWndEx`-derived object. The default implementation does nothing.  
  
##  <a name="cmdiframewndex__ondrawmenulogo"></a>  CMDIFrameWndEx::OnDrawMenuLogo  
 Called by the framework when a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)processes a `WM_PAINT` message.  
  
```  
virtual void OnDrawMenuLogo(
    CDC*, 
    CMFCPopupMenu*, 
    const CRect&);
```  
  
### Remarks  
 Override this function to display a logo on the pop-up menu that belongs to the menu bar owned by the `CMDIFrameWndEx`-derived object. The default implementation does nothing.  
  
##  <a name="cmdiframewndex__onerasemdiclientbackground"></a>  CMDIFrameWndEx::OnEraseMDIClientBackground  
 Called by the framework when the MDI frame window processes a `WM_ERASEBKGND` message.  
  
```  
virtual BOOL OnEraseMDIClientBackground(CDC*);
```  
  
### Return Value  
 `TRUE` if the application processes the message and erases the background.  
  
### Remarks  
 Override this member function if you want to process the `WM_ERASEBKGND` message in a `CMDIFrameWndEx`-derived class.  
  
##  <a name="cmdiframewndex__onmenubuttontoolhittest"></a>  CMDIFrameWndEx::OnMenuButtonToolHitTest  
 Called by the framework when a [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)object processes a `WM_NCHITTEST` message.  
  
```  
virtual BOOL OnMenuButtonToolHitTest(
    CMFCToolBarButton* pButton,  
    TOOLINFO* pTI);
```  
  
### Parameters  
 [in] `pButton`  
 The toolbar button.  
  
 [out] `pTI`  
 Pointer to a [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) structure.  
  
### Return Value  
 `TRUE` if the application fills the `pTI` parameter. The default implementation returns `FALSE`.  
  
### Remarks  
 Override this method if you want to provide information about specific menu items to a tooltip. The default implementation does nothing.  
  
##  <a name="cmdiframewndex__onmoveminiframe"></a>  CMDIFrameWndEx::OnMoveMiniFrame  
 Called by the framework to move a mini-frame window.  
  
```  
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```  
  
### Parameters  
 [in] `pFrame`  
 A pointer to a mini-frame window.  
  
### Return Value  
 `TRUE` if the method succeeds, otherwise `FALSE`.  
  
##  <a name="cmdiframewndex__onsetpreviewmode"></a>  CMDIFrameWndEx::OnSetPreviewMode  
 Sets the application's main frame window print-preview mode.  
  
```  
virtual void OnSetPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### Parameters  
 [in] `bPreview`  
 If `TRUE`, sets print-preview mode. If `FALSE`, cancels preview mode.  
  
 [in] `pState`  
 A pointer to a `CPrintPreviewState` structure.  
  
### Remarks  
 This method overrides [CFrameWnd::OnSetPreviewMode](../../mfc/reference/cframewnd-class.md#cframewnd__onsetpreviewmode).  
  
##  <a name="cmdiframewndex__onshowcustomizepane"></a>  CMDIFrameWndEx::OnShowCustomizePane  
 Called by the framework when a Quick Customize pane is activated.  
  
```  
virtual BOOL OnShowCustomizePane(
    CMFCPopupMenu* pMenuPane,  
    UINT uiToolbarID);
```  
  
### Parameters  
 [in] `pMenuPane`  
 A pointer to the Quick Customize pane.  
  
 [in] `uiToolbarID`  
 Control ID of the toolbar to customize.  
  
### Return Value  
 This method always returns `TRUE`.  
  
### Remarks  
 The Quick Customize pane is a menu that opens when the user clicks **Customize** on a toolbar.  
  
 Override this method in a derived class to make changes in the Quick Customize pane.  
  
##  <a name="cmdiframewndex__onshowmditabcontextmenu"></a>  CMDIFrameWndEx::OnShowMDITabContextMenu  
 Called by the framework before a shortcut menu is displayed on one of the tabs. Valid for MDI Tabbed Groups only.  
  
```  
virtual BOOL OnShowMDITabContextMenu(
    CPoint point,  
    DWORD dwAllowedItems,  
    BOOL bTabDrop);
```  
  
### Parameters  
 [in] `point`  
 The location of the menu in screen coordinates.  
  
 [in] `dwAllowedItems`  
 A bitwise-OR combination of flags that indicates what actions are allowed for the current tab:  
  
- `BCGP_MDI_CREATE_VERT_GROUP` - can create a vertical tab group.  
  
- `BCGP_MDI_CREATE_HORZ_GROUP` - can create a horizontal tab group.  
  
- `BCGP_MDI_CAN_MOVE_PREV` - can move a tab to the previous tab group.  
  
- `BCGP_MDI_CAN_MOVE_NEXT` - can move a tab to the next tab group.  
  
- `BCGP_MDI_CAN_BE_DOCKED` - switch a tabbed document to docked state (relevant for tabbed documents only).  
  
 [in] `bTabDrop`  
 `TRUE` to display the menu as a result of dragging the tab onto another tabbed group. `FALSE` to display the menu as a shortcut menu on the currently active tab.  
  
### Return Value  
 Override this method in a [CBCGPMDIFrameWnd](../../mfc/reference/cmdiframewndex-class.md)-derived class.  
  
### Remarks  
 If you do not process `OnShowMDITabContextMenu`, the shortcut menu will not be displayed. This function is generated by the **MFC Application Wizard** when you enable the MDI Tabbed Groups feature.  
  
### Example  
 The following example shows how `OnShowMDITabContextMenu` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#14](../../mfc/codesnippet/cpp/cmdiframewndex-class_13.cpp)]  
  
##  <a name="cmdiframewndex__onshowpanes"></a>  CMDIFrameWndEx::OnShowPanes  
 Called by the framework to show or hide panes.  
  
```  
virtual BOOL OnShowPanes(BOOL bShow);
```  
  
### Parameters  
 [in] `bShow`  
 `TRUE` to show panes, `FALSE` to hide panes.  
  
### Return Value  
 `TRUE` if the state of the panes changes as a result of calling this method, `FALSE` if the panes are already in the state specified by `bShow`. For example, if the panes are hidden and `bShow` is `FALSE`, the return value is `FALSE`.  
  
### Remarks  
 The default implementation removes the toolbar from the top-level frame window.  
  
 If [CDockingManager::m_bHideDockingBarsInContainerMode](../../mfc/reference/cdockingmanager-class.md#cdockingmanager__m_bhidedockingbarsincontainermode) is `TRUE` (the default), all docking panes will be hidden.  
  
##  <a name="cmdiframewndex__onshowpopupmenu"></a>  CMDIFrameWndEx::OnShowPopupMenu  
 Called by the framework when it opens a pop-up menu.  
  
```  
virtual BOOL OnShowPopupMenu(CMFCPopupMenu*);
```  
  
### Return Value  
 `TRUE` if the pop-up menu is to be displayed. Otherwise, `FALSE`. The default implementation returns `TRUE`.  
  
### Remarks  
 Override this method if you want to implement special processing upon pop-up menu activation. For example, if you want to change regular menu items to color menu buttons, set up tear-off bars, and so on.  
  
 The default implementation does nothing.  
  
##  <a name="cmdiframewndex__onsizemdiclient"></a>  CMDIFrameWndEx::OnSizeMDIClient  
 Called by the framework when the size of the client MDI window is changing.  
  
```  
virtual void OnSizeMDIClient(
    const CRect& rectOld,  
    const CRect& rectNew);
```  
  
### Parameters  
 [in] `rectOld`  
 The current size of the MDI client window.  
  
 [in] `rectNew`  
 The new size of the MDI client window.  
  
### Remarks  
  
##  <a name="cmdiframewndex__ontearoffmenu"></a>  CMDIFrameWndEx::OnTearOffMenu  
 Called by the framework when a menu that has a tear-off bar is activated.  
  
```  
virtual BOOL OnTearOffMenu(
    CMFCPopupMenu* pMenuPopup,  
    CPane* pBar);
```  
  
### Parameters  
 [in] `pMenuPopup`  
 A pointer to the pop-up menu.  
  
 [in] `pBar`  
 A pointer to the tear-off bar.  
  
### Return Value  
 `TRUE` to allow the pop-up menu with the tear-off bar to be made activate; otherwise `FALSE`. The default is `TRUE`.  
  
### Remarks  
 Override this function when you want to implement a special setup for the tear-off bar. The default implementation does nothing.  
  
##  <a name="cmdiframewndex__onupdateframemenu"></a>  CMDIFrameWndEx::OnUpdateFrameMenu  
 Called by the framework to update the frame menu.  
  
```  
virtual void OnUpdateFrameMenu(HMENU hMenuAlt);
```  
  
### Parameters  
 [in] `hMenuAlt`  
 A handle to a menu.  
  
##  <a name="cmdiframewndex__panefrompoint"></a>  CMDIFrameWndEx::PaneFromPoint  
 Returns the docking pane that contains the specified point.  
  
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
 The point (in screen coordinates).  
  
 [in] `nSensitivity`  
 The window rectangle of each checked pane is enlarged in all directions by this value.  
  
 [in] `bExactBar`  
 If `TRUE`, the `nSensitivity` parameter is ignored.  
  
 [in] `pRTCBarType`  
 If non- `NULL`, the method iterates over only the panes of the specified type.  
  
 [out] `dwAlignment`  
 If a pane is found, this parameter will specify which side of the pane is closest to the specified point.  
  
### Return Value  
 A pointer to a docking pane, or `NULL` if no control contains the point specified by `point`.  
  
### Remarks  
 The call is redirected to the [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md). See [CDockingManager::ControlBarFromPoint](../../mfc/reference/cdockingmanager-class.md#cdockingmanager__panefrompoint) for more information.  
  
##  <a name="cmdiframewndex__recalclayout"></a>  CMDIFrameWndEx::RecalcLayout  
 Called by the framework to recalculate the layout of the frame window.  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### Parameters  
 [in] `bNotify`  
 Determines whether the active in-place item for the frame window receives notification of the layout change. If `TRUE`, the item is notified; otherwise `FALSE`.  
  
### Remarks  
 This method overrides [CFrameWnd::RecalcLayout](../../mfc/reference/cframewnd-class.md#cframewnd__recalclayout).  
  
##  <a name="cmdiframewndex__removepanefromdockmanager"></a>  CMDIFrameWndEx::RemovePaneFromDockManager  
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
 A pointer to a pane to be removed.  
  
 [in] `bDestroy`  
 `TRUE` to destroy the removed pane. `FALSE` to not destroy it.  
  
 [in] `bAdjustLayout`  
 `TRUE` to adjust the docking layout immediately. If `FALSE`, the adjustment will occur only when a redraw event occurs for other reasons (the user resizes the window, drags the main frame, etc.).  
  
 [in] `bAutoHide`  
 `TRUE` to remove the pane from the list of autohide panes. `FALSE` to remove the pane from the list of regular panes.  
  
 [in] `pBarReplacement`  
 A pointer to a pane that replaces the removed pane.  
  
### Remarks  
 You must register each pane with the docking manager to take part in the docking layout. Use [CMDIFrameWndEx::AddPane](#cmdiframewndex__addpane) or [CMDIFrameWndEx::InsertPane](#cmdiframewndex__insertpane) to register panes.  
  
 Use this method when a pane is no longer a part of the docking layout of the frame window.  
  
##  <a name="cmdiframewndex__savemdistate"></a>  CMDIFrameWndEx::SaveMDIState  
 Saves the current layout of MDI Tabbed Groups and the list of previously opened documents.  
  
```  
virtual BOOL SaveMDIState(LPCTSTR lpszProfileName);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Specifies the profile name.  
  
### Return Value  
 `TRUE` if the save succeeded; `FALSE` if the save failed.  
  
### Remarks  
 To load or save the state of MDI tabs and groups and the list of opened documents, do the following:  
  
-   Call `SaveMDIState` when the main frame is being closed  
  
-   Call [CMDIFrameWndEx::LoadMDIState](#cmdiframewndex__loadmdistate) when the main frame is being created. The recommended location for this call is before the main frame is displayed for the first time.  
  
-   Call `CWinAppEx::EnableLoadWindowPlacement(FALSE);` before `pMainFrame->LoadFrame (IDR_MAINFRAME);`  
  
-   Call `CWinAppEx::ReloadWindowPlacement``(pMainFrame)` after `LoadMDIState` to display the main frame at the position that was stored in the registry.  
  
-   Override `GetDocumentName` in the `CMDIChildWndEx`- derived class if your application displays documents that are not stored as files. The returned string will be saved in the registry as a document identifier. For more information, see [CMDIChildWndEx::GetDocumentName](../../mfc/reference/cmdichildwndex-class.md#cmdichildwndex__getdocumentname).  
  
-   Override [CMDIFrameWndEx::CreateDocumentWindow](#cmdiframewndex__createdocumentwindow) to correctly create documents when they are loaded from the registry. The parameter to `CreateDocumentWindow` is the string that `GetDocumentName` returned earlier.  
  
### Example  
 The following example shows how `SaveMDIState` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#15](../../mfc/codesnippet/cpp/cmdiframewndex-class_14.cpp)]  
  
##  <a name="cmdiframewndex__setprintpreviewframe"></a>  CMDIFrameWndEx::SetPrintPreviewFrame  
 Sets the print preview frame window.  
  
```  
void SetPrintPreviewFrame(CFrameWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 Pointer to a print preview frame window.  
  
### Remarks  
  
##  <a name="cmdiframewndex__setuptoolbarmenu"></a>  CMDIFrameWndEx::SetupToolbarMenu  
 Modifies a toolbar object by replacing dummy items with user-defined items.  
  
```  
void SetupToolbarMenu(
    CMenu& menu,  
    const UINT uiViewUserToolbarCmdFirst,  
    const UINT uiViewUserToolbarCmdLast);
```  
  
### Parameters  
 [in] `menu`  
 A reference to a [CMenu Class](../../mfc/reference/cmenu-class.md) object to be modified.  
  
 [in] `uiViewUserToolbarCmdFirst`  
 Specifies the first user-defined command.  
  
 [in] `uiViewUserToolbarCmdLast`  
 Specifies the last user-defined command.  
  
##  <a name="cmdiframewndex__showfullscreen"></a>  CMDIFrameWndEx::ShowFullScreen  
 Switches the main frame from regular mode to full-screen mode.  
  
```  
void ShowFullScreen();
```  
  
### Remarks  
  
##  <a name="cmdiframewndex__showpane"></a>  CMDIFrameWndEx::ShowPane  
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
 Pointer to the pane to be shown or hidden.  
  
 [in] `bShow`  
 `TRUE` to show the pane. `FALSE` to hide the pane.  
  
 [in] `bDelay`  
 `TRUE` to delay the recalculation of the docking layout. `FALSE` to recalculate the docking layout immediately.  
  
 [in] `bActivate`  
 `TRUE` to show the pane should as active. `FALSE` to show the pane as inactive.  
  
### Remarks  
 Call this method to show or hide the pane. Do not use `ShowWindow` for docking panes.  
  
### Example  
 The following example shows how `ShowPane` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#16](../../mfc/codesnippet/cpp/cmdiframewndex-class_15.cpp)]  
  
##  <a name="cmdiframewndex__showwindowsdialog"></a>  CMDIFrameWndEx::ShowWindowsDialog  
 Creates a [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) box and opens it.  
  
```  
void ShowWindowsDialog();
```  
  
### Example  
 The following example shows how `ShowWindowsDialog` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#18](../../mfc/codesnippet/cpp/cmdiframewndex-class_16.cpp)]  
  
##  <a name="cmdiframewndex__tabbeddocumenttocontrolbar"></a>  CMDIFrameWndEx::TabbedDocumentToControlBar  
 Converts the specified tabbed document to a docking pane.  
  
```  
virtual BOOL TabbedDocumentToControlBar(CMDIChildWndEx* pMDIChildWnd);
```  
  
### Parameters  
 `pMDIChildWnd`  
 A pointer to MDI child window that contains a docking pane.  
  
### Return Value  
 `TRUE` if the method was successful, `FALSE` on failure.  
  
### Remarks  
 Use this method to convert a tabbed document to a docking pane. The tabbed document must have been created by using [CMDIFrameWndEx::ControlBarToTabbedDocument](#cmdiframewndex__controlbartotabbeddocument).  
  
### Example  
 The following example shows how `TabbedDocumentToControlBar` is used in the [VisualStudioDemo Sample: MFC Visual Studio Application](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#19](../../mfc/codesnippet/cpp/cmdiframewndex-class_17.cpp)]  
  
##  <a name="cmdiframewndex__updatecaption"></a>  CMDIFrameWndEx::UpdateCaption  
 Called by the framework to update the window frame caption.  
  
```  
void UpdateCaption();
```  
  
### Remarks  
  
##  <a name="cmdiframewndex__updatemditabbedbarsicons"></a>  CMDIFrameWndEx::UpdateMDITabbedBarsIcons  
 Sets the icon for each MDI tabbed pane.  
  
```  
void UpdateMDITabbedBarsIcons();
```  
  
##  <a name="cmdiframewndex__winhelp"></a>  CMDIFrameWndEx::WinHelp  
 Called by the framework to initiate the WinHelp application or context help.  
  
```  
virtual void WinHelp(
    DWORD dwData,  
    UINT nCmd = HELP_CONTEXT);
```  
  
### Parameters  
 [in] `dwData`  
 Specifies data as required for the type of help specified by `nCmd`.  
  
 [in] `nCmd`  
 Specifies the type of help requested. For a list of possible values and how they affect the `dwData` parameter, see the [WinHelp Function](http://msdn.microsoft.com/library/windows/desktop/bb762267) in the Windows SDK.  
  
### Remarks  
 This method overrides [CWnd::WinHelp](../../mfc/reference/cwnd-class.md#cwnd__winhelp).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMDIFrameWnd](../../mfc/reference/cframewnd-class.md)   
 [CMDIChildWndEx Class](../../mfc/reference/cmdichildwndex-class.md)
