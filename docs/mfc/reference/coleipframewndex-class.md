---
title: "COleIPFrameWndEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleIPFrameWndEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleIPFrameWndEx class"
ms.assetid: ebff1560-a1eb-4854-af00-95d4a192bd55
caps.latest.revision: 34
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
# COleIPFrameWndEx Class
The `COleIPFrameWndEx` class implements an OLE container that supports MFC. You must derive the in-place frame window class for your application from the `COleIPFrameWndEx` class, instead of deriving it from the [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md)class.  
  
## Syntax  
  
```  
class COleIPFrameWndEx : public COleIPFrameWnd  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleIPFrameWndEx::AddDockSite](#coleipframewndex__adddocksite)||  
|[COleIPFrameWndEx::AddPane](#coleipframewndex__addpane)||  
|[COleIPFrameWndEx::AdjustDockingLayout](#coleipframewndex__adjustdockinglayout)||  
|[COleIPFrameWndEx::DockPane](#coleipframewndex__dockpane)||  
|[COleIPFrameWndEx::DockPaneLeftOf](#coleipframewndex__dockpaneleftof)|Docks one pane to the left of another pane.|  
|[COleIPFrameWndEx::EnableAutoHidePanes](#coleipframewndex__enableautohidepanes)||  
|[COleIPFrameWndEx::EnableDocking](#coleipframewndex__enabledocking)||  
|[COleIPFrameWndEx::EnablePaneMenu](#coleipframewndex__enablepanemenu)||  
|[COleIPFrameWndEx::GetActivePopup](#coleipframewndex__getactivepopup)|Returns a pointer to the currently displayed popup menu.|  
|[COleIPFrameWndEx::GetContainerFrameWindow](#coleipframewndex__getcontainerframewindow)||  
|[COleIPFrameWndEx::GetDefaultResId](#coleipframewndex__getdefaultresid)|Returns the resource ID of the frame window that you specified when the window was loaded.|  
|[COleIPFrameWndEx::GetDockFrame](#coleipframewndex__getdockframe)||  
|[COleIPFrameWndEx::GetDockingManager](#coleipframewndex__getdockingmanager)||  
|[COleIPFrameWndEx::GetMainFrame](#coleipframewndex__getmainframe)||  
|[COleIPFrameWndEx::GetMenuBar](#coleipframewndex__getmenubar)|Returns a pointer to the menu bar object attached to the frame window.|  
|[COleIPFrameWndEx::GetPane](#coleipframewndex__getpane)||  
|[COleIPFrameWndEx::GetTearOffBars](#coleipframewndex__gettearoffbars)|Returns a list of pane objects that are in a tear-off state.|  
|[COleIPFrameWndEx::GetToolbarButtonToolTipText](#coleipframewndex__gettoolbarbuttontooltiptext)|Called by the framework before the tooltip for a button is displayed.|  
|[COleIPFrameWndEx::InsertPane](#coleipframewndex__insertpane)||  
|[COleIPFrameWndEx::IsMenuBarAvailable](#coleipframewndex__ismenubaravailable)|Determines whether the pointer to the menu bar object is not `NULL`.|  
|[COleIPFrameWndEx::IsPointNearDockSite](#coleipframewndex__ispointneardocksite)||  
|[COleIPFrameWndEx::LoadFrame](#coleipframewndex__loadframe)|(Overrides `COleIPFrameWnd::LoadFrame`.)|  
|[COleIPFrameWndEx::OnCloseDockingPane](#coleipframewndex__onclosedockingpane)||  
|[COleIPFrameWndEx::OnCloseMiniFrame](#coleipframewndex__oncloseminiframe)||  
|[COleIPFrameWndEx::OnClosePopupMenu](#coleipframewndex__onclosepopupmenu)|Called by the framework when an active pop-up menu processes a WM_DESTROY message.|  
|[COleIPFrameWndEx::OnCmdMsg](#coleipframewndex__oncmdmsg)|(Overrides `CFrameWnd::OnCmdMsg`.)|  
|[COleIPFrameWndEx::OnDrawMenuImage](#coleipframewndex__ondrawmenuimage)|Called by the framework when the image associated with a menu item is drawn.|  
|[COleIPFrameWndEx::OnDrawMenuLogo](#coleipframewndex__ondrawmenulogo)|Called by the framework when a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)object processes a WM_PAINT message.|  
|[COleIPFrameWndEx::OnMenuButtonToolHitTest](#coleipframewndex__onmenubuttontoolhittest)|Called by the framework when a [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)object processes WM_NCHITTEST message.|  
|[COleIPFrameWndEx::OnMoveMiniFrame](#coleipframewndex__onmoveminiframe)||  
|[COleIPFrameWndEx::OnSetPreviewMode](#coleipframewndex__onsetpreviewmode)|Call this member function to set the application's main frame window into and out of print-preview mode. (Overrides [CFrameWnd::OnSetPreviewMode](../../mfc/reference/cframewnd-class.md#cframewnd__onsetpreviewmode).)|  
|[COleIPFrameWndEx::OnShowCustomizePane](#coleipframewndex__onshowcustomizepane)||  
|[COleIPFrameWndEx::OnShowPanes](#coleipframewndex__onshowpanes)||  
|[COleIPFrameWndEx::OnShowPopupMenu](#coleipframewndex__onshowpopupmenu)|Called by the framework when a pop-up menu is activated.|  
|[COleIPFrameWndEx::OnTearOffMenu](#coleipframewndex__ontearoffmenu)|Called by the framework when a menu that has a tear-off bar is activated.|  
|[COleIPFrameWndEx::PaneFromPoint](#coleipframewndex__panefrompoint)||  
|[COleIPFrameWndEx::PreTranslateMessage](#coleipframewndex__pretranslatemessage)|(Overrides `COleIPFrameWnd::PreTranslateMessage`.)|  
|[COleIPFrameWndEx::RecalcLayout](#coleipframewndex__recalclayout)|(Overrides `COleIPFrameWnd::RecalcLayout`.)|  
|[COleIPFrameWndEx::RemovePaneFromDockManager](#coleipframewndex__removepanefromdockmanager)||  
|[COleIPFrameWndEx::SetDockState](#coleipframewndex__setdockstate)|Applies the specified docking state to the panes that belong to the frame window.|  
|[COleIPFrameWndEx::SetupToolbarMenu](#coleipframewndex__setuptoolbarmenu)|Modifies a toolbar object by searching for dummy items and replacing them with the specified user-defined items.|  
|[COleIPFrameWndEx::ShowPane](#coleipframewndex__showpane)||  
|[COleIPFrameWndEx::WinHelpA](#coleipframewndex__winhelpa)|Called by the framework to initiate the WinHelp application or context help.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleIPFrameWndEx::InitUserToobars](#coleipframewndex__initusertoobars)|Tells the framework to initialize a range of control IDs that are assigned to user-defined toolbars.|  
  
## Example  
 The following example demonstrates how to subclass an instance of the `COleIPFrameWndEx` class and over ride its methods. The example shows how to over ride the `OnDestory` method, the `RepositionFrame` method, the `RecalcLayout` method, and the `CalcWindowRect` method. This code snippet is part of the [Word Pad sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#1](../../mfc/reference/codesnippet/cpp/coleipframewndex-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md)  
  
 [COleIPFrameWndEx](../../mfc/reference/coleipframewndex-class.md)  
  
## Requirements  
 **Header:** afxoleipframewndex.h  
  
##  <a name="coleipframewndex__adddocksite"></a>  COleIPFrameWndEx::AddDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AddDockSite();
```  
  
### Remarks  
  
##  <a name="coleipframewndex__addpane"></a>  COleIPFrameWndEx::AddPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL AddPane(
    CBasePane* pControlBar,  
    BOOL bTail = TRUE);
```  
  
### Parameters  
 [in] `pControlBar`  
 [in] `bTail`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__adjustdockinglayout"></a>  COleIPFrameWndEx::AdjustDockingLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```  
  
### Parameters  
 [in] `hdwp`  
  
### Remarks  
  
##  <a name="coleipframewndex__dockpane"></a>  COleIPFrameWndEx::DockPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void DockPane(
    CBasePane* pBar,  
    UINT nDockBarID = 0,  
    LPCRECT lpRect = NULL);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `nDockBarID`  
 [in] `lpRect`  
  
### Remarks  
  
##  <a name="coleipframewndex__dockpaneleftof"></a>  COleIPFrameWndEx::DockPaneLeftOf  
 Docks one pane to the left of another pane.  
  
```  
BOOL DockPaneLeftOf(
    CPane* pBar,  
    CPane* pLeftOf);
```  
  
### Parameters  
 [in] `pBar`  
 A pointer to the pane to dock.  
  
 [in] `pLeftOf`  
 A pointer to the pane that serves as origin.  
  
### Return Value  
 Returns `TRUE` if the operation is successful. Otherwise returns `FALSE`.  
  
### Remarks  
 Call this method to dock several pane objects in a predefined order. This method docks the pane specified by `pBar` to the left of the pane specified by `pLeftOf`.  
  
##  <a name="coleipframewndex__enableautohidepanes"></a>  COleIPFrameWndEx::EnableAutoHidePanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL EnableAutoHidePanes(DWORD dwDockStyle);
```  
  
### Parameters  
 [in] `dwDockStyle`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__enabledocking"></a>  COleIPFrameWndEx::EnableDocking  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL EnableDocking(DWORD dwDockStyle);
```  
  
### Parameters  
 [in] `dwDockStyle`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__enablepanemenu"></a>  COleIPFrameWndEx::EnablePaneMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnablePaneMenu(
    BOOL bEnable,  
    UINT uiCustomizeCmd,  
    const CString& strCustomizeLabel,  
    UINT uiViewToolbarsMenuEntryID,  
    BOOL bContextMenuShowsToolbarsOnly = FALSE,  
    BOOL bViewMenuShowsToolbarsOnly = FALSE);
```  
  
### Parameters  
 [in] `bEnable`  
 [in] `uiCustomizeCmd`  
 [in] `strCustomizeLabel`  
 [in] `uiViewToolbarsMenuEntryID`  
 [in] `bContextMenuShowsToolbarsOnly`  
 [in] `bViewMenuShowsToolbarsOnly`  
  
### Remarks  
  
##  <a name="coleipframewndex__getactivepopup"></a>  COleIPFrameWndEx::GetActivePopup  
 Returns a pointer to the currently displayed pop-up menu.  
  
```  
CMFCPopupMenu* GetActivePopup() const;

 
```  
  
### Return Value  
 A pointer to the active pop-up menu; otherwise `NULL`.  
  
### Remarks  
 Use this method to obtain a pointer to the [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object that is currently displayed.  
  
##  <a name="coleipframewndex__getcontainerframewindow"></a>  COleIPFrameWndEx::GetContainerFrameWindow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
COleCntrFrameWndEx* GetContainerFrameWindow();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__getdefaultresid"></a>  COleIPFrameWndEx::GetDefaultResId  
 Returns the menu resource ID that was specified when the frame window loaded the menu.  
  
```  
UINT GetDefaultResId() const;

 
```  
  
### Return Value  
 Returns the resource ID of the menu, or 0 if the frame window has no menu bar.  
  
### Remarks  
 Call this function to retrieve the resource ID that was specified when the frame window loaded the menu resource by calling `COleIPFrameWndEx::LoadFrame`.  
  
##  <a name="coleipframewndex__getdockframe"></a>  COleIPFrameWndEx::GetDockFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CFrameWnd* GetDockFrame();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__getdockingmanager"></a>  COleIPFrameWndEx::GetDockingManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockingManager* GetDockingManager();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__getmainframe"></a>  COleIPFrameWndEx::GetMainFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CFrameWnd* GetMainFrame();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__getmenubar"></a>  COleIPFrameWndEx::GetMenuBar  
 Returns a pointer to the menu bar object attached to the frame window.  
  
```  
const CMFCMenuBar* GetMenuBar() const;

 
```  
  
### Return Value  
 A pointer to the menu bar object.  
  
### Remarks  
 Use this function to retrieve a pointer to the menu bar object that belongs to the `COleIPFrameWndEx` object.  
  
##  <a name="coleipframewndex__getpane"></a>  COleIPFrameWndEx::GetPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CBasePane* GetPane(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__gettearoffbars"></a>  COleIPFrameWndEx::GetTearOffBars  
 Returns a list of pane objects that are in a tear-off state.  
  
```  
const CObList& GetTearOffBars() const;

 
```  
  
### Return Value  
 A reference to a `CObList` object that contains a collection of pointers to the [CBasePane Class](../../mfc/reference/cbasepane-class.md)-derived objects.  
  
### Remarks  
 The `COleIPFrameWndEx` object maintains the collection of tear-off menus as a list of [CBasePane Class](../../mfc/reference/cbasepane-class.md)-derived objects. Use this method to retrieve a reference to this list.  
  
##  <a name="coleipframewndex__gettoolbarbuttontooltiptext"></a>  COleIPFrameWndEx::GetToolbarButtonToolTipText  
 Called by the framework before the tooltip for a button is displayed.  
  
```  
virtual BOOL GetToolbarButtonToolTipText(
    CMFCToolBarButton* pButton,  
    CString& strTTText);
```  
  
### Parameters  
 [in] `pButton`  
 Pointer to the button.  
  
 [in] `strTTText`  
 Pointer to the tooltip text.  
  
### Return Value  
 The default implementation returns 0.  
  
### Remarks  
 Override this function to customize the display of tooltips on toolbar buttons.  
  
##  <a name="coleipframewndex__initusertoobars"></a>  COleIPFrameWndEx::InitUserToobars  
 Specifies a range of control IDs that the framework assigns to the user-defined toolbars.  
  
```  
void InitUserToolbars(
    LPCTSTR lpszRegEntry,   
    UINT uiUserToolbarFirst,   
    UINT uiUserToolbarLast)  
```  
  
### Parameters  
 [in] `lpszRegEntry`  
 The registry entry where the library stores user toolbar settings.  
  
 [in] `uiUserToolbarFirst`  
 Control ID assigned to the first user-defined toolbar.  
  
 [in] `uiUserToolbarLast`  
 Control ID assigned to the last user-defined toolbar.  
  
### Remarks  
 Use this function to initialize a range of control IDs for assignment to toolbars that users define dynamically. The parameters `uiUserToolbarFirst` and `uiUserToolbarLast` define a range of allowed toolbar control IDs. To disable the creation of user-defined toolbars, set `uiUserToolbarFirst` or `uiUserToolbarLast` to -1.  
  
##  <a name="coleipframewndex__insertpane"></a>  COleIPFrameWndEx::InsertPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter = TRUE);
```  
  
### Parameters  
 [in] `pControlBar`  
 [in] `pTarget`  
 [in] `bAfter`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__ismenubaravailable"></a>  COleIPFrameWndEx::IsMenuBarAvailable  
 Determines whether the pointer to the menu bar object is not `NULL`  
  
```  
BOOL IsMenuBarAvailable() const;

 
```  
  
### Return Value  
 Returns a non-zero value if the frame window has a menu bar; otherwise returns 0.  
  
### Remarks  
 Call this method to determine whether the frame window maintains a non- `NULL` pointer to its menu bar object.  
  
##  <a name="coleipframewndex__ispointneardocksite"></a>  COleIPFrameWndEx::IsPointNearDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsPointNearDockSite(
    CPoint point,  
    DWORD& dwBarAlignment,  
    BOOL& bOuterEdge) const;

 
```  
  
### Parameters  
 [in] `point`  
 [in] `dwBarAlignment`  
 [in] `bOuterEdge`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__loadframe"></a>  COleIPFrameWndEx::LoadFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL LoadFrame(
    UINT nIDResource,  
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,  
    CWnd* pParentWnd = NULL,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 [in] `nIDResource`  
 [in] `dwDefaultStyle`  
 [in] `pParentWnd`  
 [in] `pContext`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__onclosedockingpane"></a>  COleIPFrameWndEx::OnCloseDockingPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnCloseDockingPane(CDockablePane*);
```  
  
### Parameters  
 [in] `CDockablePane*`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__oncloseminiframe"></a>  COleIPFrameWndEx::OnCloseMiniFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnCloseMiniFrame(CPaneFrameWnd*);
```  
  
### Parameters  
 [in] `CPaneFrameWnd*`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__onclosepopupmenu"></a>  COleIPFrameWndEx::OnClosePopupMenu  
 Called by the framework when an active pop-up menu processes a `WM_DESTROY` message.  
  
```  
virtual void OnClosePopupMenu(CMFCPopupMenu* pMenuPopup);
```  
  
### Parameters  
 [in] `pMenuPopup`  
 A pointer to the pop-up menu object.  
  
### Remarks  
 Override this method to receive notifications from `CMFCPopupMenu` objects when they process `WM_DESTROY` messages.  
  
##  <a name="coleipframewndex__oncmdmsg"></a>  COleIPFrameWndEx::OnCmdMsg  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnCmdMsg(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### Parameters  
 [in] `nID`  
 [in] `nCode`  
 [in] `pExtra`  
 [in] `pHandlerInfo`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__ondrawmenuimage"></a>  COleIPFrameWndEx::OnDrawMenuImage  
 Called by the framework when the image that is associated with a menu item is drawn.  
  
```  
virtual BOOL OnDrawMenuImage(
    CDC* pDC,  
    const CMFCToolBarMenuButton* pMenuButton,  
    const CRect& rectImage);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the device context.  
  
 [in] `pMenuButton`  
 Pointer to the menu button.  
  
 [in] `rectImage`  
 The image associated with the menu item.  
  
### Return Value  
 The default implementation does nothing and returns 0.  
  
### Remarks  
 Override this method if you want to customize image drawing for the menu items that belong to the menu bar owned by the `COleIPFrameWndEx`-derived object.  
  
##  <a name="coleipframewndex__ondrawmenulogo"></a>  COleIPFrameWndEx::OnDrawMenuLogo  
 Called by the framework when a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)object processes a `WM_PAINT` message.  
  
```  
virtual void OnDrawMenuLogo(
    CDC* pDC,  
    CMFCPopupMenu* pMenu,  
    const CRect& rectLogo);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the device context.  
  
 [in] `pMenu`  
 Pointer to the pop-up menu object.  
  
 [in] `rectLogo`  
 Pointer to the logo to display.  
  
### Remarks  
 Override this method to display a logo on the pop-up menu associated with the menu bar owned by the `COleIPFrameWndEx`-derived object. The default implementation does nothing.  
  
##  <a name="coleipframewndex__onmenubuttontoolhittest"></a>  COleIPFrameWndEx::OnMenuButtonToolHitTest  
 Called by the framework when a [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)object processes a `WM_NCHITTEST` message.  
  
```  
virtual BOOL OnMenuButtonToolHitTest(
    CMFCToolBarButton* pButton,  
    TOOLINFO* pTI);
```  
  
### Parameters  
 [in] pButton  
 Pointer to a menu button.  
  
 [out] pTI  
 Pointer to a `TOOLINFO` structure.  
  
### Return Value  
 The default implementation does nothing and returns 0. Your implementation should return a non-zero value if it fills the `pTI` parameter.  
  
### Remarks  
 Override this method to provide ToolTip information about a specific menu item.  
  
##  <a name="coleipframewndex__onmoveminiframe"></a>  COleIPFrameWndEx::OnMoveMiniFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```  
  
### Parameters  
 [in] `pFrame`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__onsetpreviewmode"></a>  COleIPFrameWndEx::OnSetPreviewMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnSetPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### Parameters  
 [in] `bPreview`  
 [in] `pState`  
  
### Remarks  
  
##  <a name="coleipframewndex__onshowcustomizepane"></a>  COleIPFrameWndEx::OnShowCustomizePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowCustomizePane(
    CMFCPopupMenu* pMenuPane,  
    UINT uiToolbarID);
```  
  
### Parameters  
 [in] `pMenuPane`  
 [in] `uiToolbarID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__onshowpanes"></a>  COleIPFrameWndEx::OnShowPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowPanes(BOOL bShow);
```  
  
### Parameters  
 [in] `bShow`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__onshowpopupmenu"></a>  COleIPFrameWndEx::OnShowPopupMenu  
 Called by the framework when a pop-up menu is displayed.  
  
```  
virtual BOOL OnShowPopupMenu(CMFCPopupMenu* pMenuPopup);
```  
  
### Parameters  
 `[in] pMenuPopup`  
 Pointer to the pop-up menu to be displayed.  
  
### Return Value  
 The default implementation does nothing and returns a non-zero value. Your implementation should return `FALSE` if the pop-up menu cannot be displayed.  
  
### Remarks  
 Override this method to customize the display of a pop-up menu. For example, you could change the menu buttons to color menu buttons or initialize tear-off bars.  
  
##  <a name="coleipframewndex__ontearoffmenu"></a>  COleIPFrameWndEx::OnTearOffMenu  
 Called by the framework when the user selects a menu that has a tear-off bar.  
  
```  
virtual BOOL OnTearOffMenu(
    CMFCPopupMenu* pMenuPopup,  
    CPane* pBar);
```  
  
### Parameters  
 [in] `pMenuPopup`  
 A pointer to the pop-up menu that the user selected.  
  
 [in] `pBar`  
 A pointer to the pane that hosts the menu.  
  
### Return Value  
 `TRUE` if you want the framework to activate the pop-up menu; otherwise `FALSE`. The default value is `TRUE`.  
  
### Remarks  
 Override this function if you want to customize the setup of the tear-off bar.  
  
##  <a name="coleipframewndex__panefrompoint"></a>  COleIPFrameWndEx::PaneFromPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
 [in] `nSensitivity`  
 [in] `bExactBar`  
 [in] `pRTCBarType`  
 [in] `dwAlignment`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__pretranslatemessage"></a>  COleIPFrameWndEx::PreTranslateMessage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### Parameters  
 [in] `pMsg`  
  
### Return Value  
  
### Remarks  
  
##  <a name="coleipframewndex__recalclayout"></a>  COleIPFrameWndEx::RecalcLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### Parameters  
 [in] `bNotify`  
  
### Remarks  
  
##  <a name="coleipframewndex__removepanefromdockmanager"></a>  COleIPFrameWndEx::RemovePaneFromDockManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
 [in] `bDestroy`  
 [in] `bAdjustLayout`  
 [in] `bAutoHide`  
 [in] `pBarReplacement`  
  
### Remarks  
  
##  <a name="coleipframewndex__setdockstate"></a>  COleIPFrameWndEx::SetDockState  
 Applies the specified docking state to panes that belong to the frame window.  
  
```  
void SetDockState(const CDockState& state);
```  
  
### Parameters  
 [in] `state`  
 Specifies the docking state.  
  
### Remarks  
 Use this function to specify a new docking state for panes that belong to the `COleIPFrameWndEx` object.  
  
##  <a name="coleipframewndex__setuptoolbarmenu"></a>  COleIPFrameWndEx::SetupToolbarMenu  
 Modifies a toolbar object by searching for dummy items and replacing them with the specified user-defined items.  
  
```  
void SetupToolbarMenu(
    CMenu& menu,  
    const UINT uiViewUserToolbarCmdFirst,  
    const UINT uiViewUserToolbarCmdLast);
```  
  
### Parameters  
 [in] `menu`  
 A reference to a [CMenu](../../mfc/reference/cmenu-class.md) object to be modified.  
  
 [in] `uiViewUserToolbarCmdFirst`  
 Specifies the first user-defined command.  
  
 [in] `uiViewUserToolbarCmdLast`  
 Specifies the last user-defined command.  
  
### Remarks  
  
##  <a name="coleipframewndex__showpane"></a>  COleIPFrameWndEx::ShowPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ShowPane(
    CBasePane* pBar,  
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `bShow`  
 [in] `bDelay`  
 [in] `bActivate`  
  
### Remarks  
  
##  <a name="coleipframewndex__winhelpa"></a>  COleIPFrameWndEx::WinHelpA  
 Called by the framework to initiate the WinHelp application or context help.  
  
```  
virtual void WinHelp(
    DWORD dwData,  
    UINT nCmd = HELP_CONTEXT);
```  
  
### Parameters  
 [in] dwData  
 Specifies data as required for the type of help specified by `nCmd`.  
  
 [in] `nCmd`  
 Specifies the type of help requested. For a list of possible values and how they affect the `dwData` parameter, see the [WinHelp Function](http://msdn.microsoft.com/library/windows/desktop/bb762267) in the Windows SDK.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CFrameWndEx Class](../../mfc/reference/cframewndex-class.md)   
 [CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md)
