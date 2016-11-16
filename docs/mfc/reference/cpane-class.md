---
title: "CPane Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPane"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPane class"
ms.assetid: 5c651a64-3c79-4d94-9676-45f6402a6bc5
caps.latest.revision: 30
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
# CPane Class
The `CPane` class is an enhancement of the [CControlBar Class](../../mfc/reference/ccontrolbar-class.md). If you are upgrading an existing MFC project, replace all occurrences of `CControlBar` with `CPane`.  
  
## Syntax  
  
```  
class CPane : public CBasePane  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CPane::~CPane`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPane::AdjustSizeImmediate](#cpane__adjustsizeimmediate)|Immediately recalculates the layout of a pane.|  
|[CPane::AllocElements](#cpane__allocelements)|Allocates storage for internal use.|  
|[CPane::AllowShowOnPaneMenu](#cpane__allowshowonpanemenu)|Specifies whether the pane is listed in the runtime-generated list of panes for the application.|  
|[CPane::CalcAvailableSize](#cpane__calcavailablesize)|Calculates the difference in size between a specified rectangle and the current window rectangle.|  
|[CPane::CalcInsideRect](#cpane__calcinsiderect)|Calculates the inside rectangle of a pane, taking into account the borders and grippers.|  
|[CPane::CalcRecentDockedRect](#cpane__calcrecentdockedrect)|Calculates the recently docked rectangle.|  
|[CPane::CalcSize](#cpane__calcsize)|Calculates the size of the pane.|  
|[CPane::CanBeDocked](#cpane__canbedocked)|Determines whether the pane can be docked at the specified base pane.|  
|[CPane::CanBeTabbedDocument](#cpane__canbetabbeddocument)|Determines whether the pane can be converted to a tabbed document.|  
|[CPane::ConvertToTabbedDocument](#cpane__converttotabbeddocument)|Converts a dockable pane to a tabbed document.|  
|[CPane::CopyState](#cpane__copystate)|Copies the state of a pane. (Overrides [CBasePane::CopyState](../../mfc/reference/cbasepane-class.md#cbasepane__copystate).)|  
|[CPane::Create](#cpane__create)|Creates a control bar and attaches it to the `CPane` object.|  
|[CPane::CreateDefaultMiniframe](#cpane__createdefaultminiframe)|Creates a mini-frame window for a floating pane.|  
|[CPane::CreateEx](#cpane__createex)|Creates a control bar and attaches it to the `CPane` object.|  
|`CPane::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CPane::DockByMouse](#cpane__dockbymouse)|Docks a pane by using the mouse docking method.|  
|[CPane::DockPane](#cpane__dockpane)|Docks the floating pane to a base pane.|  
|[CPane::DockPaneStandard](#cpane__dockpanestandard)|Docks a pane by using outline (standard) docking.|  
|[CPane::DockToFrameWindow](#cpane__docktoframewindow)|Docks a dockable pane to a frame. (Overrides `CBasePane::DockToFrameWindow`.)|  
|[CPane::DoesAllowSiblingBars](#cpane__doesallowsiblingbars)|Indicates whether you can dock another pane at the same row where the current pane is docked.|  
|[CPane::FloatPane](#cpane__floatpane)|Floats the pane.|  
|[CPane::GetAvailableExpandSize](#cpane__getavailableexpandsize)|Returns the amount, in pixels, that the pane can expand.|  
|[CPane::GetAvailableStretchSize](#cpane__getavailablestretchsize)|Returns the amount, in pixels, that the pane can shrink.|  
|[CPane::GetBorders](#cpane__getborders)|Returns the width of the borders of the pane.|  
|[CPane::GetClientHotSpot](#cpane__getclienthotspot)|Returns the *hot spot* for the pane.|  
|[CPane::GetDockSiteRow](#cpane__getdocksiterow)|Returns the dock row in which the pane is docked.|  
|[CPane::GetExclusiveRowMode](#cpane__getexclusiverowmode)|Determines whether the pane is in exclusive row mode.|  
|[CPane::GetHotSpot](#cpane__gethotspot)|Returns the hot spot that is stored in an underlying `CMFCDragFrameImpl` object.|  
|[CPane::GetMinSize](#cpane__getminsize)|Retrieves the minimum allowed size for the pane.|  
|[CPane::GetPaneName](#cpane__getpanename)|Retrieves the title for the pane.|  
|`CPane::GetResizeStep`|Used internally.|  
|`CPane::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CPane::GetVirtualRect](#cpane__getvirtualrect)|Retrieves the *virtual rectangle* of the pane.|  
|[CPane::IsChangeState](#cpane__ischangestate)|As the pane is being moved, this method analyzes the position of the pane relative to other panes, dock rows, and mini-frame windows, and returns the appropriate `AFX_CS_STATUS` value.|  
|[CPane::IsDragMode](#cpane__isdragmode)|Specifies whether the pane is being dragged.|  
|[CPane::IsInFloatingMultiPaneFrameWnd](#cpane__isinfloatingmultipaneframewnd)|Specifies whether the pane is in a multi-pane frame window. (Overrides `CBasePane::IsInFloatingMultiPaneFrameWnd`.)|  
|[CPane::IsLeftOf](#cpane__isleftof)|Determines whether the pane is left of (or above) the specified rectangle.|  
|[CPane::IsResizable](#cpane__isresizable)|Determines whether the pane can be resized. (Overrides [CBasePane::IsResizable](../../mfc/reference/cbasepane-class.md#cbasepane__isresizable).)|  
|[CPane::IsTabbed](#cpane__istabbed)|Determines whether the pane has been inserted in the tab control of a tabbed window. (Overrides [CBasePane::IsTabbed](../../mfc/reference/cbasepane-class.md#cbasepane__istabbed).)|  
|[CPane::LoadState](#cpane__loadstate)|Loads the state of the pane from the registry. (Overrides [CBasePane::LoadState](../../mfc/reference/cbasepane-class.md#cbasepane__loadstate).)|  
|[CPane::MoveByAlignment](#cpane__movebyalignment)|Moves the pane and the virtual rectangle by the specified amount.|  
|[CPane::MovePane](#cpane__movepane)|Moves the pane to the specified rectangle.|  
|[CPane::OnAfterChangeParent](#cpane__onafterchangeparent)|Called by the framework when the parent of a pane has changed.|  
|[CPane::OnBeforeChangeParent](#cpane__onbeforechangeparent)|Called by the framework when the parent of the pane is about to change.|  
|[CPane::OnPressCloseButton](#cpane__onpressclosebutton)|Called by the framework when the user chooses the Close button on the caption for the pane.|  
|`CPane::OnProcessDblClk`|Used internally.|  
|[CPane::OnShowControlBarMenu](#cpane__onshowcontrolbarmenu)|Called by the framework when a special pane menu is about to be displayed.|  
|[CPane::OnShowControlBarMenu](#cpane__onshowcontrolbarmenu)|Called by the framework when a special pane menu is about to be displayed.|  
|`CPane::PrepareToDock`|Used internally.|  
|[CPane::RecalcLayout](#cpane__recalclayout)|Recalculates layout information for the pane. (Overrides [CBasePane::RecalcLayout](../../mfc/reference/cbasepane-class.md#cbasepane__recalclayout).)|  
|[CPane::SaveState](#cpane__savestate)|Saves the state of the pane to the registry. (Overrides [CBasePane::SaveState](../../mfc/reference/cbasepane-class.md#cbasepane__savestate).)|  
|[CPane::SetActiveInGroup](#cpane__setactiveingroup)|Flags a pane as active.|  
|[CPane::SetBorders](#cpane__setborders)|Sets the border values of the pane.|  
|[CPane::SetClientHotSpot](#cpane__setclienthotspot)|Sets the hot spot for the pane.|  
|[CPane::SetDockState](#cpane__setdockstate)|Restores docking state information for the pane.|  
|[CPane::SetExclusiveRowMode](#cpane__setexclusiverowmode)|Enables or disables the exclusive row mode.|  
|[CPane::SetMiniFrameRTC](#cpane__setminiframertc)|Sets the runtime class information for the default mini-frame window.|  
|[CPane::SetMinSize](#cpane__setminsize)|Sets the minimum allowed size for the pane.|  
|[CPane::SetVirtualRect](#cpane__setvirtualrect)|Sets the *virtual rectangle* of the pane.|  
|[CPane::StretchPaneDeferWndPos](#cpane__stretchpanedeferwndpos)|Stretches the pane vertically or horizontally based on docking style.|  
|[CPane::ToggleAutoHide](#cpane__toggleautohide)|Toggles auto-hide mode.|  
|[CPane::UndockPane](#cpane__undockpane)|Removes the pane from the dock site, default slider, or mini-frame window where it is currently docked. (Overrides [CBasePane::UndockPane](../../mfc/reference/cbasepane-class.md#cbasepane__undockpane).)|  
|[CPane::UpdateVirtualRect](#cpane__updatevirtualrect)|Updates the virtual rectangle.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPane::OnAfterDock](#cpane__onafterdock)|Called by the framework when a pane has been docked.|  
|[CPane::OnAfterFloat](#cpane__onafterfloat)|Called by the framework when a pane has been floated.|  
|[CPane::OnBeforeDock](#cpane__onbeforedock)|Called by the framework when the pane is about to be docked.|  
|[CPane::OnBeforeFloat](#cpane__onbeforefloat)|Called by the framework when a pane is about to be floated.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CPane::m_bHandleMinSize](#cpane__m_bhandleminsize)|Enables consistent handling of the minimal size for panes.|  
|[CPane::m_recentDockInfo](#cpane__m_recentdockinfo)|Contains recent docking information.|  
  
## Remarks  
 Typically, `CPane` objects are not instantiated directly. If you require a pane that has docking functionality, derive your object from [CDockablePane](../../mfc/reference/cdockablepane-class.md). If you require toolbar functionality, derive your object from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md).  
  
 When you derive a class from `CPane`, it can be docked in a [CDockSite](../../mfc/reference/cdocksite-class.md) and it can be floated in a [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
## Requirements  
 **Header:** afxPane.h  
  
##  <a name="cpane__adjustsizeimmediate"></a>  CPane::AdjustSizeImmediate  
 Immediately recalculates the layout of a pane.  
  
```  
virtual void AdjustSizeImmediate(BOOL bRecalcLayout = TRUE);
```  
  
### Parameters  
 [in] `bRecalcLayout`  
 `TRUE` to automatically recalculate the layout of the pane; otherwise, `FALSE`.  
  
### Remarks  
 Call this method when you dynamically change the layout of a pane. For example, you may want to call this method when you hide or show toolbar buttons.  
  
##  <a name="cpane__allocelements"></a>  CPane::AllocElements  
 Allocates storage for internal use.  
  
```  
BOOL AllocElements(
    int nElements,  
    int cbElement);
```  
  
### Parameters  
 [in] `nElements`  
 The number of elements for which to allocate storage.  
  
 [in] `cbElement`  
 The size, in bytes, of an element.  
  
### Return Value  
 `FALSE` if memory allocation fails; otherwise, `TRUE`.  
  
##  <a name="cpane__allowshowonpanemenu"></a>  CPane::AllowShowOnPaneMenu  
 Specifies whether the pane is listed in the runtime-generated list of panes for the application.  
  
```  
virtual BOOL AllowShowOnPaneMenu() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is displayed in the list; otherwise, `FALSE`. The base implementation always returns `TRUE`.  
  
### Remarks  
 The AppWizard-generated application contains a menu option that lists panes that it contains. This method determines whether the pane is displayed in the list.  
  
##  <a name="cpane__calcavailablesize"></a>  CPane::CalcAvailableSize  
 Calculates the difference in size between a specified rectangle and the current window rectangle.  
  
```  
virtual CSize CalcAvailableSize(CRect rectRequired);
```  
  
### Parameters  
 [in] `rectRequired`  
 The required rectangle.  
  
### Return Value  
 The difference in width and height between `rectRequired` and the current window rectangle.  
  
##  <a name="cpane__calcinsiderect"></a>  CPane::CalcInsideRect  
 Calculates the inside rectangle of a pane, including the borders and grippers.  
  
```  
void CalcInsideRect(
    CRect& rect,  
    BOOL bHorz) const;

 
```  
  
### Parameters  
 [out] `rect`  
 Contains the size and offset of the client area of the pane.  
  
 [in] `bHorz`  
 `TRUE` if the pane is oriented horizontally; otherwise, `FALSE`.  
  
### Remarks  
 This method is called by the framework when it has to recalculate the layout for a pane. The `rect` parameter is filled with the size and offset of the client area of the pane. This includes its borders and grippers.  
  
##  <a name="cpane__calcrecentdockedrect"></a>  CPane::CalcRecentDockedRect  
 Calculates the recently docked rectangle.  
  
```  
void CalcRecentDockedRect();
```  
  
### Remarks  
 This method updates [CPane::m_recentDockInfo](#cpane__m_recentdockinfo).  
  
##  <a name="cpane__calcsize"></a>  CPane::CalcSize  
 Calculates the size of the pane.  
  
```  
virtual CSize CalcSize(BOOL bVertDock);
```  
  
### Parameters  
 [in] `bVertDock`  
 `TRUE` if the pane is being docked vertically, `FALSE` otherwise.  
  
### Return Value  
 The default implementation of this method returns a size of (0, 0).  
  
### Remarks  
 Derived classes should override this method.  
  
##  <a name="cpane__canbedocked"></a>  CPane::CanBeDocked  
 Determines if the pane can be docked at the specified base pane.  
  
```  
virtual BOOL CanBeDocked(CBasePane* pDockBar) const;

 
```  
  
### Parameters  
 [in] `pDockBar`  
 Specifies the pane where this pane is to be docked.  
  
### Return Value  
 `TRUE` if this pane can be docked at the specified docking pane; otherwise, `FALSE`.  
  
### Remarks  
 This method is usually called by the framework to determine whether a pane can be docked at the specified docking pane. To determine whether the pane can be docked, the method evaluates the pane's currently enabled docking alignment.  
  
 You enable docking to the various sides of the frame window by calling [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#cbasepane__enabledocking).  
  
##  <a name="cpane__canbetabbeddocument"></a>  CPane::CanBeTabbedDocument  
 Determines if the pane can be converted to a tabbed document.  
  
```  
virtual BOOL CanBeTabbedDocument() const;

 
```  
  
### Return Value  
 `TRUE` if the pane can be converted to a tabbed document; otherwise, `FALSE`.  
  
### Remarks  
 Override this method in a derived class and return `FALSE` if you want to prevent a pane from being converted to a tabbed document. A tabbed document will not be listed in the Window Position menu.  
  
##  <a name="cpane__converttotabbeddocument"></a>  CPane::ConvertToTabbedDocument  
 Converts a dockable pane to a tabbed document.  
  
```  
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```  
  
### Parameters  
 [in] `bActiveTabOnly`  
 Not used in `CPane::ConvertToTabbedDocument`.  
  
### Remarks  
 Only dockable panes can be converted to tabbed documents. For information, see [CDockablePane::ConvertToTabbedDocument](../../mfc/reference/cdockablepane-class.md#cdockablepane__converttotabbeddocument).  
  
##  <a name="cpane__copystate"></a>  CPane::CopyState  
 Copies the state of a pane.  
  
```  
virtual void CopyState(CPane* pOrgBar);
```  
  
### Parameters  
 [in] `pOrgBar`  
 A pointer to a pane.  
  
### Remarks  
 This method copies the state of `pOrgBar` to the current pane.  
  
##  <a name="cpane__create"></a>  CPane::Create  
 Creates a control bar and attaches it to the [CPane](../../mfc/reference/cpane-class.md) object.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszClassName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    DWORD dwControlBarStyle = AFX_DEFAULT_PANE_STYLE,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 [in] `lpszClassName`  
 Specifies the name of the Windows class.  
  
 [in] `dwStyle`  
 Specifies the window style attributes. For more information, see [Window Styles](../../mfc/reference/window-styles.md).  
  
 [in] `rect`  
 Specifies the initial size and position of the `pParentWnd` window, in client coordinates.  
  
 [in] [out] `pParentWnd`  
 Specifies the parent window of this pane.  
  
 [in] `nID`  
 Specifies the ID of the pane.  
  
 [in] `dwControlBarStyle`  
 Specifies the style for the pane. For more information, see [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#cbasepane__createex).  
  
 [in] [out] `pContext`  
 Specifies the create context of the pane.  
  
### Return Value  
 `TRUE` if the pane was created successfully; otherwise, `FALSE`.  
  
### Remarks  
 This method creates a Windows pane and attaches it to the `CPane` object.  
  
 If you have not explicitly initialized [CPane::m_recentDockInfo](#cpane__m_recentdockinfo) before you call `Create`, the parameter `rect` will be used as the rectangle when floating or docking the pane.  
  
##  <a name="cpane__createdefaultminiframe"></a>  CPane::CreateDefaultMiniframe  
 Creates a mini-frame window for a floating pane.  
  
```  
virtual CPaneFrameWnd* CreateDefaultMiniframe(CRect rectInitial);
```  
  
### Parameters  
 [in] `rectInitial`  
 Specifies the initial size and position, in screen coordinates, of the mini-frame window to create.  
  
### Return Value  
 The newly created mini-frame window.  
  
### Remarks  
 This method is called by the framework to create a mini-frame window when a pane is floated. The mini-frame window can be of type [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) or of type [CMultiPaneFrameWnd](../../mfc/reference/cmultipaneframewnd-class.md). A multi mini-frame window is created if the pane has the `AFX_CBRS_FLOAT_MULTI` style.  
  
 The runtime class information for the mini-frame window is stored in the `CPane::m_pMiniFrameRTC` member. You can use a derived class to set this member if you decide to create customized mini-frame windows.  
  
##  <a name="cpane__createex"></a>  CPane::CreateEx  
 Creates a control bar and attaches it to the [CPane](../../mfc/reference/cpane-class.md) object.  
  
```  
virtual BOOL CreateEx(
    DWORD dwStyleEx,  
    LPCTSTR lpszClassName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    DWORD dwControlBarStyle = AFX_DEFAULT_PANE_STYLE,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 [in] `dwStyleEx`  
 Specifies extended window style attributes. For more information, see [Extended Window Styles](../../mfc/reference/extended-window-styles.md).  
  
 [in] `lpszClassName`  
 Specifies the name of the Windows class.  
  
 [in] `dwStyle`  
 Specifies window style attributes. For more information, see [Window Styles](../../mfc/reference/window-styles.md).  
  
 [in] `rect`  
 Specifies the initial size and position of the `pParentWnd` window, in client coordinates.  
  
 [in] [out] `pParentWnd`  
 Specifies the parent window of this pane.  
  
 [in] `nID`  
 Specifies the ID of the pane.  
  
 [in] `dwControlBarStyle`  
 Specifies the style for the pane. For more information, see [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#cbasepane__createex).  
  
 [in] [out] `pContext`  
 Specifies the create context for the pane.  
  
### Return Value  
 `TRUE` if the pane was created successfully; otherwise, `FALSE`.  
  
### Remarks  
 This method creates a Windows pane and attaches it to the `CPane` object.  
  
 If you have not explicitly initialized [CPane::m_recentDockInfo](#cpane__m_recentdockinfo) before you call `CreateEx`, the parameter `rect` will be used as the rectangle when floating or docking the pane.  
  
##  <a name="cpane__dockbymouse"></a>  CPane::DockByMouse  
 Docks a pane by using the mouse.  
  
```  
virtual BOOL DockByMouse(CBasePane* pDockBar);
```  
  
### Parameters  
 [in] `pDockBar`  
 Specifies the base pane to which to dock this pane.  
  
### Return Value  
 `TRUE` if the pane was docked successfully; otherwise, `FALSE`.  
  
##  <a name="cpane__dockpane"></a>  CPane::DockPane  
 Docks the floating pane to a base pane.  
  
```  
virtual BOOL DockPane(
    CBasePane* pDockBar,  
    LPCRECT lpRect,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
 [in] [out] `pDockBar`  
 Specifies the base pane to dock this pane to.  
  
 [in] `lpRect`  
 Specifies the rectangle on the base pane where this pane is to be docked.  
  
 [in] `dockMethod`  
 Specifies the docking method to use. Available options are as follows:  
  
|Option|Description|  
|------------|-----------------|  
|`DM_UNKNOWN`|The framework uses this option when the docking method is unknown. The pane does not store its most recent floating position. You can also use this option to programmatically dock a pane when you do not have to store the recent floating position.|  
|`DM_MOUSE`|Used internally.|  
|`DM_DBL_CLICK`|This option is used when the gripper is double-clicked. The pane is repositioned at its most recent docking position. If the pane is undocked by double-clicking, the pane is repositioned at its most recent floating position.|  
|`DM_SHOW`|This option can be used to programmatically dock the pane. The pane stores its most recent floating position.|  
|`DM_RECT`|The pane is docked in the region that is specified by `lpRect`.|  
|`DM_STANDARD`|When you use this option, the framework draws the pane as an outline frame while it is being moved.|  
  
### Return Value  
 `TRUE` if the pane was docked successfully; otherwise, `FALSE`.  
  
### Remarks  
 This method docks the pane to the base pane that is specified by the `pDockBar` parameter. You must first enable docking by calling [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#cbasepane__enabledocking).  
  
##  <a name="cpane__dockpanestandard"></a>  CPane::DockPaneStandard  
 Docks a pane by using outline (standard) docking.  
  
```  
virtual CPane* DockPaneStandard(BOOL& bWasDocked);
```  
  
### Parameters  
 [in] `bWasDocked`  
 `TRUE` if the pane was successfully docked; otherwise, `FALSE`.  
  
### Return Value  
 This method always returns the `this` pointer.  
  
### Remarks  
 This method is used only for panes that are derived from the [CDockablePane Class](../../mfc/reference/cdockablepane-class.md). For more information, see [CDockablePane::DockPaneStandard](../../mfc/reference/cdockablepane-class.md#cdockablepane__dockpanestandard).  
  
##  <a name="cpane__docktoframewindow"></a>  CPane::DockToFrameWindow  
 Docks a dockable pane to a frame.  
  
```  
virtual BOOL DockToFrameWindow(
    DWORD dwAlignment,  
    LPCRECT lpRect = NULL,  
    DWORD dwDockFlags = DT_DOCK_LAST,  
    CBasePane* pRelativeBar = NULL,  
    int nRelativeIndex = -1,  
    BOOL bOuterEdge = FALSE);
```  
  
### Parameters  
 [in] `dwAlignment`  
 The side of the parent frame that you want to dock the pane to.  
  
 [in] `lpRect`  
 The specified size.  
  
 [in] `dwDockFlags`  
 Ignored.  
  
 [in] `pRelativeBar`  
 Ignored.  
  
 [in] `nRelativeIndex`  
 Ignored.  
  
 [in] `bOuterEdge`  
 If `TRUE` and there are other dockable panes at the side that are specified by `dwAlignment`, the pane is docked outside the other panes, closer to the edge of the parent frame. If `FALSE`, the pane is docked closer to the center of the client area.  
  
### Return Value  
 `FALSE` if a pane divider ( [CPaneDivider Class](../../mfc/reference/cpanedivider-class.md)) cannot be created; otherwise, `TRUE`.  
  
### Remarks  
  
##  <a name="cpane__doesallowsiblingbars"></a>  CPane::DoesAllowSiblingBars  
 Indicates whether you can dock another pane at the same row where the current pane is docked.  
  
```  
virtual BOOL DoesAllowSiblingBars() const;

 
```  
  
### Return Value  
 `TRUE` if this pane can dock to another pane on the same row as itself; otherwise, `FALSE`.  
  
### Remarks  
 You can enable or disable this behavior by calling [CPane::SetExclusiveRowMode](#cpane__setexclusiverowmode).  
  
 By default, toolbars have exclusive row mode disabled and the menu bar has exclusive row mode enabled.  
  
##  <a name="cpane__floatpane"></a>  CPane::FloatPane  
 Floats the pane.  
  
```  
virtual BOOL FloatPane(
    CRect rectFloat,  
    AFX_DOCK_METHOD dockMethod = DM_UNKNOWN,  
    bool bShow = true);
```  
  
### Parameters  
 [in] `rectFloat`  
 Specifies the location, in screen coordinates, to position the pane when it is floated.  
  
 [in] `dockMethod`  
 Specifies the docking method to use when the pane is floated. For a list of possible values, see [CPane::DockPane](#cpane__dockpane).  
  
 [in] `bShow`  
 `TRUE` to show the pane when floated; otherwise, `FALSE`.  
  
### Return Value  
 `TRUE` if the pane was floated successfully or if the pane cannot be floated because [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#cbasepane__canfloat) returns `FALSE`; otherwise, `FALSE`.  
  
### Remarks  
 Call this method to float the pane at the position that is specified by the `rectFloat` parameter. This method automatically creates a parent mini-frame window for the pane.  
  
##  <a name="cpane__getavailableexpandsize"></a>  CPane::GetAvailableExpandSize  
 Returns the amount, in pixels, that the pane can expand.  
  
```  
virtual int GetAvailableExpandSize() const;

 
```  
  
### Return Value  
 If the pane is docked horizontally, the return value is the available width; otherwise, the return value is the available height.  
  
### Remarks  
  
##  <a name="cpane__getavailablestretchsize"></a>  CPane::GetAvailableStretchSize  
 Returns the amount, in pixels, that the pane can shrink.  
  
```  
virtual int GetAvailableStretchSize() const;

 
```  
  
### Return Value  
 The amount, in pixels, that the pane can shrink. If the pane is docked horizontally, this amount is the available width; otherwise, it is the available height.  
  
### Remarks  
 The available stretch size is calculated by subtracting the minimum allowed size for the pane ( [CPane::GetMinSize](#cpane__getminsize)) from the current size ( [CWnd::GetWindowRect](../../mfc/reference/cwnd-class.md#cwnd__getwindowrect)).  
  
##  <a name="cpane__getborders"></a>  CPane::GetBorders  
 Returns the width of the borders of the pane.  
  
```  
CRect GetBorders() const;

 
```  
  
### Return Value  
 A [CRect](../../atl-mfc-shared/reference/crect-class.md) object that contains the current width, in pixels, of each side of the pane. For example, the value of the `left` member of the `CRect` object is the width of the left border.  
  
### Remarks  
 To set the size of the borders, call [CPane::SetBorders](#cpane__setborders).  
  
##  <a name="cpane__getclienthotspot"></a>  CPane::GetClientHotSpot  
 Returns the *hot spot* for the pane.  
  
```  
CPoint GetClientHotSpot() const;

 
```  
  
### Return Value  
  
### Remarks  
 The *hot spot* is the point on the pane that the user selects and holds to move the pane. A hot spot is used for smooth animation when the pane is moved from a docked position.  
  
##  <a name="cpane__getdocksiterow"></a>  CPane::GetDockSiteRow  
 Returns the dock row ( [CDockingPanesRow Class](../../mfc/reference/cdockingpanesrow-class.md)) in which the pane is docked.  
  
```  
CDockingPanesRow* GetDockSiteRow() const;

 
```  
  
### Return Value  
 A `CDockingPanesRow`* that points to the dock row in which the pane is docked, or `NULL` if the pane is not docked.  
  
##  <a name="cpane__getexclusiverowmode"></a>  CPane::GetExclusiveRowMode  
 Determines if the pane is in exclusive row mode.  
  
```  
virtual BOOL GetExclusiveRowMode() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is in exclusive row mode; otherwise, `FALSE`.  
  
### Remarks  
 For more information about exclusive row mode, see [CPane::SetExclusiveRowMode](#cpane__setexclusiverowmode).  
  
##  <a name="cpane__gethotspot"></a>  CPane::GetHotSpot  
 Returns the hot spot that is stored in an underlying `CMFCDragFrameImpl` object.  
  
```  
CPoint GetHotSpot() const;

 
```  
  
### Return Value  
  
### Remarks  
 The `CPane` class contains a `CMFCDragFrameImpl` object, `m_dragFrameImpl`, that is responsible for drawing the rectangle that appears when the user moves a pane in the standard docking mode. The hot spot is used to draw the rectangle relative to the current mouse position as the user moves the pane.  
  
##  <a name="cpane__getminsize"></a>  CPane::GetMinSize  
 Retrieves the minimum allowed size for the pane.  
  
```  
virtual void GetMinSize(CSize& size) const;

 
```  
  
### Parameters  
 [out] `size`  
 A `CSize` object that is filled with the minimum allowed size.  
  
### Remarks  
  
##  <a name="cpane__getpanename"></a>  CPane::GetPaneName  
 Retrieves the title for the pane.  
  
```  
virtual void GetPaneName(CString& strName) const;

 
```  
  
### Parameters  
 [out] `strName`  
 A `CString` object that is filled with the caption name.  
  
### Remarks  
 The pane title is displayed in the caption area when the pane is docked or floating. If the pane is part of a tabbed group, the title is displayed in the tab area. If the pane is in auto-hide mode, the title is displayed on a `CMFCAutoHideButton`.  
  
##  <a name="cpane__getvirtualrect"></a>  CPane::GetVirtualRect  
 Retrieves the *virtual rectangle* of the pane.  
  
```  
void GetVirtualRect(CRect& rectVirtual) const;

 
```  
  
### Parameters  
 [out] `rectVirtual`  
 A `CRect` object that is filled with the virtual rectangle.  
  
### Remarks  
 When a pane is moved, the framework stores the original position of the pane in a virtual rectangle. The framework can use the virtual rectangle to restore the original position of the pane.  
  
 Do not call methods that are related to virtual rectangles unless you are moving panes programmatically.  
  
##  <a name="cpane__ischangestate"></a>  CPane::IsChangeState  
 As the pane is being moved, this method analyzes its position relative to other panes, dock rows, and mini-frame windows, and returns the appropriate `AFX_CS_STATUS` value.  
  
```  
virtual AFX_CS_STATUS IsChangeState(
    int nOffset,  
    CBasePane** ppTargetBar) const;

 
```  
  
### Parameters  
 [in] `nOffset`  
 Specifies docking sensitivity. For example, a pane that is moved within `nOffset` pixels from a dock row will be docked.  
  
 [in] `ppTargetBar`  
 When the method returns, `ppTargetBar` contains either a pointer to the object to which the current pane should be docked, or `NULL` if no docking should occur.  
  
### Return Value  
 One of the following `AFX_CS_STATUS` values:  
  
|Value|Description|  
|-----------|-----------------|  
|`CS_NOTHING`|The pane is not near a dock site. The framework does not dock the pane.|  
|`CS_DOCK_IMMEDIATELY`|The pane is over a dock site, and the `DT_IMMEDIATE` style is enabled. The framework docks the pane immediately.|  
|`CS_DELAY_DOCK`|The pane is over a dock site that is either another docking pane or an edge of the main frame. The framework docks the pane when the user releases the move.|  
|`CS_DELAY_DOCK_TO_TAB`|The pane is over a dock site that causes the pane to be docked in a tabbed window. This occurs when the pane is either over the caption of another docking pane or over the tab area of a tabbed pane. The framework docks the pane when the user releases the move.|  
  
##  <a name="cpane__isdragmode"></a>  CPane::IsDragMode  
 Specifies whether the pane is being moved.  
  
```  
virtual BOOL IsDragMode() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is being moved; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cpane__isinfloatingmultipaneframewnd"></a>  CPane::IsInFloatingMultiPaneFrameWnd  
 Specifies whether the pane is in a multi-pane frame window ( [CMultiPaneFrameWnd Class](../../mfc/reference/cmultipaneframewnd-class.md)).  
  
```  
virtual BOOL IsInFloatingMultiPaneFrameWnd() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is in a multi-pane frame window; otherwise, `FALSE`.  
  
### Remarks  
 Only dockable panes can float in a multi-pane frame window. Therefore, `CPane::IsInFloatingMultiPaneFrameWnd` always returns `FALSE`.  
  
##  <a name="cpane__isleftof"></a>  CPane::IsLeftOf  
 Determines whether the pane is left of (or above) the specified rectangle.  
  
```  
bool IsLeftOf(
    CRect rect,  
    bool bWindowRect = true) const;

 
```  
  
### Parameters  
 [in] `rect`  
 A `CRect` object that is used for comparison.  
  
 [in] `bWindowRect`  
 If `TRUE`, `rect` is assumed to contain screen coordinates; if `FALSE`, `rect` is assumed to contain client coordinates.  
  
### Return Value  
  
### Remarks  
 If the pane is docked horizontally, this method checks whether its location is left of `rect`. Otherwise, this method checks whether the location is above `rect`.  
  
##  <a name="cpane__isresizable"></a>  CPane::IsResizable  
 Specifies whether the pane is resizable.  
  
```  
virtual BOOL IsResizable() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is resizable; otherwise, `FALSE`.  
  
### Remarks  
 Base `CPane` objects are not resizable.  
  
 The docking manager uses the resizable flag to determine pane layout. Non-resizable panes are always located at the outer edges of the parent frame.  
  
 Non-resizable panes cannot reside in docking containers.  
  
##  <a name="cpane__istabbed"></a>  CPane::IsTabbed  
 Determines whether the pane has been inserted into the tab control of a tabbed window.  
  
```  
virtual BOOL IsTabbed() const;

 
```  
  
### Return Value  
 `TRUE` if the pane is tabbed; otherwise, `FALSE`.  
  
### Remarks  
 The tabbed state is treated separately from the floating, docked, and auto-hide states.  
  
##  <a name="cpane__loadstate"></a>  CPane::LoadState  
 Loads the state of the pane from the registry.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Profile name.  
  
 [in] `nIndex`  
 Profile index.  
  
 [in] `uiID`  
 Pane ID.  
  
### Return Value  
 `TRUE` if the pane state was loaded successfully; otherwise, `FALSE`.  
  
### Remarks  
 The framework calls this method to load the pane state from the registry. Override it in a derived class to load additional information that is saved by [CPane::SaveState](#cpane__savestate).  
  
 When you override this method, also call the base method, and return `FALSE` if the base method returns `FALSE`.  
  
##  <a name="cpane__m_bhandleminsize"></a>  CPane::m_bHandleMinSize  
 Enables consistent handling of minimum pane sizes.  
  
```  
AFX_IMPORT_DATA static BOOL m_bHandleMinSize;  
```  
  
### Remarks  
 If one or more docking panes in your application override `GetMinSize`, or if your application calls `SetMinSize`, you may want to set this static member to `TRUE` in order to enable the framework to consistently handle how panes are sized.  
  
 If this value is set to `TRUE`, all panes whose size should be reduced below their minimum size are clipped, not stretched. Because the framework uses window regions for pane sizing purposes, do not change the size of the window region for docking panes if this value is set to `TRUE`.  
  
##  <a name="cpane__m_recentdockinfo"></a>  CPane::m_recentDockInfo  
 Contains recent docking information.  
  
```  
CRecentDockSiteInfo m_recentDockInfo;  
```  
  
### Remarks  
 The framework stores the latest docking state information for the pane in this member.  
  
##  <a name="cpane__movebyalignment"></a>  CPane::MoveByAlignment  
 Moves the pane and the virtual rectangle by the specified amount.  
  
```  
BOOL MoveByAlignment(
    DWORD dwAlignment,  
    int nOffset);
```  
  
### Parameters  
 [in] `dwAlignment`  
 Specifies pane alignment.  
  
 [in] `nOffset`  
 The amount, in pixels, by which to move the pane and the virtual rectangle.  
  
### Return Value  
  
### Remarks  
 `dwAlignment` can be any of the following values:  
  
|Value|Description|  
|-----------|-----------------|  
|`CBRS_ALIGN_TOP`|Enables the pane to be docked to the top of the client area of a frame window.|  
|`CBRS_ALIGN_BOTTOM`|Enables the pane to be docked to the bottom of the client area of a frame window.|  
|`CBRS_ALIGN_LEFT`|Enables the pane to be docked to the left side of the client area of a frame window.|  
|`CBRS_ALIGN_RIGHT`|Enables the pane to be docked to the right side of the client area of a frame window.|  
|`CBRS_ALIGN_ANY`|Enables the pane to be docked to any side of the client area of a frame window.|  
  
 If `dwAlignment` contains the `CBRS_ALIGN_LEFT` or `CBRS_ALIGN_RIGHT` flag, the pane and virtual rectangle are moved horizontally; otherwise, if `dwAlignment` contains the `CBRS_ALIGN_TOP` or `CBRS_ALIGN_BOTTOM` flag, the pane and virtual rectangle are moved vertically.  
  
##  <a name="cpane__movepane"></a>  CPane::MovePane  
 Moves the pane to the specified rectangle.  
  
```  
virtual CSize MovePane(
    CRect rectNew,  
    BOOL bForceMove,  
    HDWP& hdwp);
```  
  
### Parameters  
 [in] `rectNew`  
 Specifies the new rectangle for the pane.  
  
 [in] `bForceMove`  
 If `TRUE`, this method ignores the minimum allowed pane size ( [CPane::GetMinSize](#cpane__getminsize)); otherwise, the pane is adjusted, if necessary, to ensure that it is at least the minimum allowed size.  
  
 [in] `hdwp`  
 Not used.  
  
### Return Value  
 A `CSize` object that contains the differences in width and height between the new and old rectangles (old rectangle – `rectNew`).  
  
### Remarks  
 This method is used only for dockable panes.  
  
##  <a name="cpane__onafterchangeparent"></a>  CPane::OnAfterChangeParent  
 Called by the framework when the parent of a pane has changed.  
  
```  
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```  
  
### Parameters  
 [in] [out] `pWndOldParent`  
 The pane's previous parent window.  
  
### Remarks  
 This method is called by the framework when the parent of a pane has changed because of a docking or floating operation.  
  
##  <a name="cpane__onafterdock"></a>  CPane::OnAfterDock  
 Called by the framework when a pane has been docked.  
  
```  
virtual void OnAfterDock(
    CBasePane* pBar,  
    LPCRECT lpRect,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
 [in] `pBar`  
 This parameter is not used.  
  
 [in] `lpRect`  
 This parameter is not used.  
  
 [in] `dockMethod`  
 This parameter is not used.  
  
##  <a name="cpane__onafterfloat"></a>  CPane::OnAfterFloat  
 Called by the framework after a pane floats.  
  
```  
virtual void OnAfterFloat();
```  
  
### Remarks  
 You can override this method in a derived class if you want to perform any processing after a pane floats.  
  
##  <a name="cpane__onbeforechangeparent"></a>  CPane::OnBeforeChangeParent  
 Called by the framework when the parent of the pane is about to change.  
  
```  
virtual void OnBeforeChangeParent(
    CWnd* pWndNewParent,  
    BOOL bDelay = FALSE);
```  
  
### Parameters  
 [in] [out] `pWndNewParent`  
 Specifies the new parent window.  
  
 [in] `bDelay`  
 `TRUE` to delay the global docking layout adjustment; otherwise, `FALSE`.  
  
### Remarks  
 This method is called by the framework when the parent of the pane is about to change because the pane is being docked or floated.  
  
 By default, the pane is unregistered with the docking pane by calling `CDockSite::RemovePane`.  
  
##  <a name="cpane__onbeforedock"></a>  CPane::OnBeforeDock  
 Called by the framework when the pane is about to dock.  
  
```  
virtual BOOL OnBeforeDock(
    CBasePane** ppDockBar,  
    LPCRECT lpRect,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
 [in] [out] `ppDockBar`  
 Specifies the pane that this pane is docking to.  
  
 [in] `lpRect`  
 Specifies the docking rectangle.  
  
 [in] `dockMethod`  
 Specifies the docking method.  
  
### Return Value  
 `TRUE` if the pane can be docked. If the function returns `FALSE`, the docking operation will be aborted.  
  
### Remarks  
 This method is called by the framework when a pane is about to be docked. You can override this method in a derived class if you want to perform any processing before a pane is finally docked.  
  
##  <a name="cpane__onbeforefloat"></a>  CPane::OnBeforeFloat  
 Called by the framework when a pane is about to float.  
  
```  
virtual BOOL OnBeforeFloat(
    CRect& rectFloat,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
 [in] `rectFloat`  
 Specifies the position and size of the pane when it is in a floating state.  
  
 [in] `dockMethod`  
 Specifies the docking method of the pane.  
  
### Return Value  
 `TRUE` if the pane can be floated; otherwise, `FALSE`.  
  
### Remarks  
 This method is called by the framework when a pane is about to float. You can override this method in a derived class if you want to perform any processing before the pane finally floats.  
  
##  <a name="cpane__onpressclosebutton"></a>  CPane::OnPressCloseButton  
 Called by the framework when the user presses the close button on the caption for the pane.  
  
```  
virtual void OnPressCloseButton();
```  
  
### Remarks  
 This method is called by the framework when a user presses the **Close** button on the pane's caption. To receive notifications about the **Close** event, you can override this method in a derived class.  
  
##  <a name="cpane__onshowcontrolbarmenu"></a>  CPane::OnShowControlBarMenu  
 Called by the framework when a special pane menu is about to be displayed.  
  
```  
virtual BOOL OnShowControlBarMenu(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 Specifies the menu location.  
  
### Return Value  
 `TRUE` if the menu can be displayed; otherwise, `FALSE`.  
  
### Remarks  
 The menu contains several items that enable you to specify the pane's behavior, namely: **Floating**, **Docking**, **AutoHide**, and **Hide**. You can enable this menu for all panes by calling [CDockingManager::EnableDockSiteMenu](../../mfc/reference/cdockingmanager-class.md#cdockingmanager__enabledocksitemenu).  
  
##  <a name="cpane__recalclayout"></a>  CPane::RecalcLayout  
 Recalculates layout information for the pane.  
  
```  
virtual void RecalcLayout();
```  
  
### Remarks  
 If the pane is docked, this method updates the virtual rectangle for the pane by setting its size to the current size of the pane.  
  
 If the pane is floating, this method notifies the parent mini-frame to adjust the size of the pane to the size of the mini-frame. The framework ensures that the mini-frame is at least the minimum allowed size for the pane ( [CPane::GetMinSize](#cpane__getminsize)) and resizes the mini-frame if necessary.  
  
##  <a name="cpane__savestate"></a>  CPane::SaveState  
 Saves the state of the pane to the registry.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Profile name.  
  
 [in] `nIndex`  
 Profile index.  
  
 [in] `uiID`  
 Pane ID.  
  
### Return Value  
 `TRUE` if the state was saved successfully; otherwise, `FALSE`.  
  
### Remarks  
 The framework calls this method when it saves the state of the pane to the registry. Override `SaveState` in a derived class to store additional information.  
  
 When you override this method, also call the base method, and return `FALSE` if the base method returns `FALSE`.  
  
##  <a name="cpane__setactiveingroup"></a>  CPane::SetActiveInGroup  
 Flags a pane as active.  
  
```  
virtual void SetActiveInGroup(BOOL bActive);
```  
  
### Parameters  
 [in] `bActive`  
 A `BOOL` that specifies whether the pane is flagged as active.  
  
### Remarks  
 When a dockable pane is shown or an auto-hide button is chosen, the corresponding auto-hide pane is marked as active.  
  
 The appearance of an auto-hide button that is associated with the pane is based on two factors. If the pane is active, and the `static``BOOL``CMFCAutoHideButton::m_bOverlappingTabs` is `TRUE`, the framework displays the auto-hide button as an icon and a label. For an inactive pane, the framework displays only the auto-hide icon.  
  
 If `CMFCAutoHideButton::m_bOverlappingTabs` is `FALSE`, or if the pane is not located in a group, the framework displays the associated auto-hide button as an icon and a label.  
  
##  <a name="cpane__setborders"></a>  CPane::SetBorders  
 Sets the border values of the pane.  
  
```  
void SetBorders(
    int cxLeft = 0,  
    int cyTop = 0,  
    int cxRight = 0,  
    int cyBottom = 0);

 
void SetBorders(
    LPCRECT lpRect);
```  
  
### Parameters  
 [in] `cxLeft`  
 Specifies the width, in pixels, of the left border of the pane.  
  
 [in] `cyTop`  
 Specifies the width, in pixels, of the top border of the pane.  
  
 [in] `cxRight`  
 Specifies the width, in pixels, of the right border of the pane.  
  
 [in] `cyBottom`  
 Specifies the width, in pixels, of the bottom border of the pane.  
  
 [in] `lpRect`  
 A [CRect](../../atl-mfc-shared/reference/crect-class.md) object that contains the width, in pixels, of each border of the pane.  
  
### Remarks  
 Call this function to set the sizes of the pane's borders.  
  
##  <a name="cpane__setclienthotspot"></a>  CPane::SetClientHotSpot  
 Sets the *hot spot* for the pane.  
  
```  
void SetClientHotSpot(const CPoint& ptNew);
```  
  
### Parameters  
 [in] `ptNew`  
 A `CPoint` object that specifies the new hot spot.  
  
### Remarks  
 The *hot spot* is the point on the pane that the user selects and holds to move the pane. A hot spot is used for smooth animation when the pane is dragged from a docked position.  
  
##  <a name="cpane__setdockstate"></a>  CPane::SetDockState  
 Restores docking state information for the pane.  
  
```  
virtual void SetDockState(CDockingManager* pDockManager);
```  
  
### Parameters  
 [in] `pDockManager`  
 Pointer to the docking manager for the main frame window.  
  
### Remarks  
 This method is called by the framework to restore recent docking state information for the pane. A pane stores recent docking state information in [CPane::m_recentDockInfo](#cpane__m_recentdockinfo). For more information, see the [CRecentDockSiteInfo Class](../../mfc/reference/crecentdocksiteinfo-class.md).  
  
 You can also call this method to set the docking state when you load pane information from an external source.  
  
##  <a name="cpane__setexclusiverowmode"></a>  CPane::SetExclusiveRowMode  
 Enables or disables the exclusive row mode.  
  
```  
virtual void SetExclusiveRowMode(BOOL bExclusive = TRUE);
```  
  
### Parameters  
 [in] `bExclusive`  
 `TRUE` to enable exclusive row mode; otherwise, `FALSE`.  
  
### Remarks  
 Call this method to enable or disable exclusive row mode. When a pane is in exclusive row mode, it cannot share the same row with any other toolbars.  
  
 By default, all toolbars have exclusive row mode disabled and the menu bar has exclusive row mode enabled.  
  
##  <a name="cpane__setminsize"></a>  CPane::SetMinSize  
 Sets the minimum allowed size for the pane.  
  
```  
void SetMinSize(const CSize& size);
```  
  
### Parameters  
 [in] `size`  
 A `CSize` object that contains the minimum allowed size for the pane.  
  
### Remarks  
  
##  <a name="cpane__setvirtualrect"></a>  CPane::SetVirtualRect  
 Sets the *virtual rectangle* of the pane.  
  
```  
void SetVirtualRect(
    const CRect& rect,  
    BOOL bMapToParent = TRUE);
```  
  
### Parameters  
 [in] `rect`  
 A `CRect` object that specifies the virtual rectangle to be set.  
  
 [in] `bMapToParent`  
 Specify `TRUE` if `rect` contains points relative to the parent window.  
  
### Remarks  
 A *virtual rectangle* stores the original position of a pane when it is moved. The framework can use the virtual rectangle to restore the original position.  
  
 Do not call methods that are related to virtual rectangles unless you are moving panes programmatically.  
  
##  <a name="cpane__setminiframertc"></a>  CPane::SetMiniFrameRTC  
 Sets the runtime class information for the default mini-frame window.  
  
```  
void SetMiniFrameRTC(CRuntimeClass* pClass);
```  
  
### Parameters  
 [in] [out] `pClass`  
 Specifies the runtime class information for the mini-frame window.  
  
### Remarks  
 When a pane is floated, it is put on a [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) (mini-frame) window. You can provide a custom `CPaneFrameWnd`-derived class that will be used when [CPane::CreateDefaultMiniframe](#cpane__createdefaultminiframe) is called.  
  
##  <a name="cpane__stretchpanedeferwndpos"></a>  CPane::StretchPaneDeferWndPos  
 Stretches the pane vertically or horizontally based on docking style.  
  
```  
virtual int StretchPaneDeferWndPos(
    int nStretchSize,  
    HDWP& hdwp);
```  
  
### Parameters  
 [in] `nStretchSize`  
 The amount, in pixels, to stretch the pane. Use a negative value to shrink the pane.  
  
 [in] `hdwp`  
 Not used.  
  
### Return Value  
 The actual amount, in pixels, that the pane was stretched.  
  
### Remarks  
 If necessary, this method modifies `nStretchSize` to ensure that the pane does not exceed size limits. These limits are obtained by calling [CPane::GetAvailableStretchSize](#cpane__getavailablestretchsize) and [CPane::GetAvailableExpandSize](#cpane__getavailableexpandsize).  
  
##  <a name="cpane__toggleautohide"></a>  CPane::ToggleAutoHide  
 Toggles auto-hide mode.  
  
```  
virtual void ToggleAutoHide();
```  
  
### Remarks  
 Call this method to toggle auto-hide mode. A pane must be docked to a main frame window in order to be switch to auto-hide mode.  
  
##  <a name="cpane__undockpane"></a>  CPane::UndockPane  
 Removes the pane from the dock site, default slider, or mini-frame window where it is currently docked.  
  
```  
virtual void UndockPane(BOOL bDelay = FALSE);
```  
  
### Parameters  
 [in] `bDelay`  
 If `FALSE`, the framework calls [CBasePane::AdjustDockingLayout](../../mfc/reference/cbasepane-class.md#cbasepane__adjustdockinglayout) to adjust the docking layout.  
  
### Remarks  
 Use this method to programmatically undock a pane.  
  
##  <a name="cpane__updatevirtualrect"></a>  CPane::UpdateVirtualRect  
 Updates the virtual rectangle.  
  
```  
void UpdateVirtualRect();

 
void UpdateVirtualRect(CPoint ptOffset);

 
void UpdateVirtualRect(CSize sizeNew);
```  
  
### Parameters  
 [in] `ptOffset`  
 A `CPoint` object that specifies an offset by which to shift the pane.  
  
 [in] `sizeNew`  
 A `CSize` object that specifies a new size for the  pane.  
  
### Remarks  
 The first overload sets the virtual rectangle by using the current position and size of the pane.  
  
 The second overload shifts the virtual rectangle by the amount that is specified by `ptOffset`.  
  
 The third overload sets the virtual rectangle by using the current position of the pane and the size that is specified by `sizeNew`.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CBasePane Class](../../mfc/reference/cbasepane-class.md)
