---
title: "CMFCTabCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCTabCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCTabCtrl::SwapTabs method"
  - "CMFCTabCtrl constructor"
  - "CMFCTabCtrl::MoveTab method"
  - "CMFCTabCtrl::GetTabFromPoint method"
  - "CMFCTabCtrl::PreTranslateMessage method"
  - "CMFCTabCtrl::RecalcLayout method"
  - "CMFCTabCtrl class"
  - "CMFCTabCtrl::IsPtInTabArea method"
ms.assetid: d441385d-2c72-4203-96fa-deae2273da35
caps.latest.revision: 33
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
# CMFCTabCtrl Class
The `CMFCTabCtrl` class provides functionality for a tab control. The tab control displays a dockable window with flat or three-dimensional tabs at its top or bottom. The tabs can display text and an image and can change color when active.  
  
## Syntax  
  
```  
class CMFCTabCtrl : public CMFCBaseTabCtrl  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCTabCtrl::CMFCTabCtrl`|Default constructor.|  
|`CMFCTabCtrl::~CMFCTabCtrl`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCTabCtrl::ActivateMDITab](#cmfctabctrl__activatemditab)|Displays the specified tab of the current tab control and sets the focus on that tab.|  
|[CMFCTabCtrl::AllowDestroyEmptyTabbedPane](#cmfctabctrl__allowdestroyemptytabbedpane)||  
|[CMFCTabCtrl::AutoSizeWindow](#cmfctabctrl__autosizewindow)|Specifies whether the framework is to resize the client area of all tab control windows when a user interface element of the tab control changes.|  
|[CMFCTabCtrl::CalcRectEdit](#cmfctabctrl__calcrectedit)|Deflates the size of the specified tab area. (Overrides `CMFCBaseTabCtrl::CalcRectEdit`.)|  
|[CMFCTabCtrl::Create](#cmfctabctrl__create)|Creates the tab control and attaches it to the `CMFCTabCtrl` object.|  
|`CMFCTabCtrl::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCTabCtrl::EnableActiveTabCloseButton](#cmfctabctrl__enableactivetabclosebutton)|Shows or hides a Close button ( **X**) on the active tab.|  
|[CMFCTabCtrl::EnableInPlaceEdit](#cmfctabctrl__enableinplaceedit)|Enables or disables editable tab labels. (Overrides [CMFCBaseTabCtrl::EnableInPlaceEdit](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__enableinplaceedit).)|  
|[CMFCTabCtrl::EnableTabDocumentsMenu](#cmfctabctrl__enabletabdocumentsmenu)|Replaces two buttons that scroll the window tabs with a button that opens a menu of tabbed windows.|  
|[CMFCTabCtrl::EnsureVisible](#cmfctabctrl__ensurevisible)|Ensures that a tab is visible.|  
|[CMFCTabCtrl::GetDocumentIcon](#cmfctabctrl__getdocumenticon)|Retrieves the symbol that is associated with a tab in a popup menu of tabbed windows.|  
|[CMFCTabCtrl::GetFirstVisibleTabNum](#cmfctabctrl__getfirstvisibletabnum)|Retrieves the index of the first tab that is visible in the current tab control.|  
|[CMFCTabCtrl::GetResizeMode](#cmfctabctrl__getresizemode)|Retrieves a value that specifies how the current tab control can be resized.|  
|[CMFCTabCtrl::GetScrollBar](#cmfctabctrl__getscrollbar)|Retrieves a pointer to the scroll bar object that is associated with the tab control.|  
|[CMFCTabCtrl::GetTabArea](#cmfctabctrl__gettabarea)|Retrieves the bounding rectangle of the tab label area at the top or bottom of the tab control. (Overrides [CMFCBaseTabCtrl::GetTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__gettabarea).)|  
|`CMFCTabCtrl::GetTabFromPoint`|Retrieves the tab that contains a specified point. (Overrides [CMFCBaseTabCtrl::GetTabFromPoint](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__gettabfrompoint).)|  
|[CMFCTabCtrl::GetTabMaxWidth](#cmfctabctrl__gettabmaxwidth)|Retrieves the maximum width of a tab.|  
|[CMFCTabCtrl::GetTabsHeight](#cmfctabctrl__gettabsheight)|Retrieves the height of the tab area of the current tab control.|  
|[CMFCTabCtrl::GetTabsRect](#cmfctabctrl__gettabsrect)|Retrieves a rectangle that bounds the tab area of the current tab control. (Overrides [CMFCBaseTabCtrl::GetTabsRect](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__gettabsrect).)|  
|`CMFCTabCtrl::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCTabCtrl::GetWndArea](#cmfctabctrl__getwndarea)|Retrieves the boundary of the client area of the current tab control.|  
|[CMFCTabCtrl::HideActiveWindowHorzScrollBar](#cmfctabctrl__hideactivewindowhorzscrollbar)|Hides the horizontal scroll bar, if any, of the active window.|  
|[CMFCTabCtrl::HideInactiveWindow](#cmfctabctrl__hideinactivewindow)|Specifies whether the framework is to display inactive tab control windows.|  
|[CMFCTabCtrl::HideNoTabs](#cmfctabctrl__hidenotabs)|Enables or disables drawing the tab area if there are no visible tabs.|  
|[CMFCTabCtrl::HideSingleTab](#cmfctabctrl__hidesingletab)|Enables or disables drawing a tab when there is a single tabbed window. (Overrides [CMFCBaseTabCtrl::HideSingleTab](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__hidesingletab).)|  
|[CMFCTabCtrl::IsActiveInMDITabGroup](#cmfctabctrl__isactiveinmditabgroup)|Indicates whether the current tab of a tab control is the active tab in an multiple document interface tab group.|  
|[CMFCTabCtrl::IsActiveTabBoldFont](#cmfctabctrl__isactivetabboldfont)|Indicates whether the text of the active tab is displayed using a bold font.|  
|[CMFCTabCtrl::IsActiveTabCloseButton](#cmfctabctrl__isactivetabclosebutton)|Indicates whether the Close button ( **X**) is displayed on an active tab or the upper-right corner of the tab area.|  
|[CMFCTabCtrl::IsDrawFrame](#cmfctabctrl__isdrawframe)|Indicates whether the tabbed window draws a frame rectangle around embedded panes.|  
|[CMFCTabCtrl::IsFlatFrame](#cmfctabctrl__isflatframe)|Indicates whether the frame around the tab area is flat or 3D.|  
|[CMFCTabCtrl::IsFlatTab](#cmfctabctrl__isflattab)|Indicates whether the appearance of the tabs in the current tab control is flat or not.|  
|[CMFCTabCtrl::IsLeftRightRounded](#cmfctabctrl__isleftrightrounded)|Indicates whether the appearance of the left and right side of a tab in the current tab control is rounded.|  
|[CMFCTabCtrl::IsMDITabGroup](#cmfctabctrl__ismditabgroup)|Indicates whether the current tab control is contained in the client area of a multiple-document interface window.|  
|[CMFCTabCtrl::IsOneNoteStyle](#cmfctabctrl__isonenotestyle)|Indicates whether the current tab control is displayed in the style of Microsoft OneNote.|  
|`CMFCTabCtrl::IsPtInTabArea`|Determines if a point is inside the tab area. (Overrides [CMFCBaseTabCtrl::IsPtInTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__isptintabarea).)|  
|[CMFCTabCtrl::IsSharedScroll](#cmfctabctrl__issharedscroll)|Indicates whether the current tab control has a scroll bar that can scroll its tabs as a group.|  
|[CMFCTabCtrl::IsTabDocumentsMenu](#cmfctabctrl__istabdocumentsmenu)|Indicates whether the tab control displays scroll buttons or a button that displays a menu of tabbed windows.|  
|[CMFCTabCtrl::IsVS2005Style](#cmfctabctrl__isvs2005style)|Indicates whether tabs are displayed in the style of Visual Studio .NET 2005.|  
|[CMFCTabCtrl::ModifyTabStyle](#cmfctabctrl__modifytabstyle)|Specifies the appearance of tabs in the current tab control.|  
|`CMFCTabCtrl::MoveTab`|Moves a tab to another tab position. (Overrides [CMFCBaseTabCtrl::MoveTab](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__movetab).)|  
|[CMFCTabCtrl::OnDragEnter](#cmfctabctrl__ondragenter)|Called by the framework when the cursor is first dragged into the tab control window.|  
|[CMFCTabCtrl::OnDragOver](#cmfctabctrl__ondragover)|Called by the framework during a drag operation when the mouse is moved over the drop target window. (Overrides [CMFCBaseTabCtrl::OnDragOver](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__ondragover).)|  
|[CMFCTabCtrl::OnShowTabDocumentsMenu](#cmfctabctrl__onshowtabdocumentsmenu)|Displays a popup menu of tabbed windows, waits until the user selects a tab, and makes the selected tab the active tab.|  
|`CMFCTabCtrl::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides [CMFCBaseTabCtrl::PreTranslateMessage](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__pretranslatemessage).)|  
|`CMFCTabCtrl::RecalcLayout`|Recalculates the internal layout of the tab control. (Overrides [CMFCBaseTabCtrl::RecalcLayout](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__recalclayout).)|  
|[CMFCTabCtrl::SetActiveInMDITabGroup](#cmfctabctrl__setactiveinmditabgroup)|Sets the current tab of a tab control as the active tab in an multiple document interface tab group.|  
|[CMFCTabCtrl::SetActiveTab](#cmfctabctrl__setactivetab)|Activates a tab. (Overrides [CMFCBaseTabCtrl::SetActiveTab](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__setactivetab).)|  
|[CMFCTabCtrl::SetActiveTabBoldFont](#cmfctabctrl__setactivetabboldfont)|Enables or disables use of a bold font on active tabs.|  
|[CMFCTabCtrl::SetDrawFrame](#cmfctabctrl__setdrawframe)|Enables or disables drawinga frame rectangle around an embedded bar.|  
|[CMFCTabCtrl::SetFlatFrame](#cmfctabctrl__setflatframe)|Specifies whether to draw a flat or a 3D frame around the tab area.|  
|[CMFCTabCtrl::SetImageList](#cmfctabctrl__setimagelist)|Specifies an image list. (Overrides [CMFCBaseTabCtrl::SetImageList](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__setimagelist).)|  
|[CMFCTabCtrl::SetResizeMode](#cmfctabctrl__setresizemode)|Specifies how the current tab control can be resized and then redisplays the control.|  
|[CMFCTabCtrl::SetTabMaxWidth](#cmfctabctrl__settabmaxwidth)|Specifies the maximum tab width in a tabbed window.|  
|[CMFCTabCtrl::StopResize](#cmfctabctrl__stopresize)|Terminates the current resize operation on the tab control.|  
|`CMFCTabCtrl::SwapTabs`|Swaps a pair of tabs. (Overrides [CMFCBaseTabCtrl::SwapTabs](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__swaptabs).)|  
|[CMFCTabCtrl::SynchronizeScrollBar](#cmfctabctrl__synchronizescrollbar)|Draws a horizontal scroll bar on a tab control that displays flat tabs.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCTabCtrl::m_bEnableActivate](#cmfctabctrl__m_benableactivate)|Prevents the active view from losing focus when a new tab is inserted and enabled.|  
  
## Remarks  
 The `CMFCTabCtrl` class supports:  
  
-   Tab control styles that include 3D, flat, and flat with a shared horizontal scroll bar.  
  
-   Tabs located at the top or the bottom of the window.  
  
-   Tabs that display text, images, or text and images.  
  
-   Tabs that change color when the tab is active.  
  
-   Border size changes for adjustable tabs.  
  
-   Detachable tabbed windows.  
  
 The `CMFCTabCtrl` class can be used with a dialog box, but is intended for applications that use docking control bars like [!INCLUDE[ofprexcel](../../mfc/reference/includes/ofprexcel_md.md)] and [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)]. For more information, see [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
 Follow these steps to add a resizable, docking tab control in your application:  
  
1.  Create an instance of [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md).  
  
2.  Call [CDockablePane::Create](../../mfc/reference/cdockablepane-class.md#cdockablepane__create).  
  
3.  Use [CBaseTabbedPane::AddTab](../../mfc/reference/cbasetabbedpane-class.md#cbasetabbedpane__addtab) or [CMFCBaseTabCtrl::InsertTab](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__inserttab) to add new tabs.  
  
4.  Call [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#cbasepane__enabledocking) so that the current docking tab control can dock at the main frame window.  
  
5.  Call [CFrameWndEx::DockPane](../../mfc/reference/cframewndex-class.md#cframewndex__dockpane) to dock the tabbed window at the main frame.  
  
 For an example of how to create a tabbed window as a docking control bar, see [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md). To use `CMFCTabCtrl` as a non-docking control, create a `CMFCTabCtrl` object and then call [CMFCTabCtrl::Create](#cmfctabctrl__create).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)  
  
 [CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md)  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCTabCtrl` class to configure a `CMFCTabCtrl` object. The example explains how to add a tab, show the Close button on the active tab, enable editable tab labels, and display a pop-up menu of tabbed window labels. This example is part of the [State Collection sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StateCollection#1](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_1.h)]  
[!code-cpp[NVC_MFC_StateCollection#3](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_2.cpp)]  
  
## Requirements  
 **Header:** afxtabctrl.h  
  
##  <a name="cmfctabctrl__activatemditab"></a>  CMFCTabCtrl::ActivateMDITab  
 Displays the specified tab of the current tab control and sets the focus on that tab.  
  
```  
void ActivateMDITab(int nTab = -1);
```  
  
### Parameters  
 [in] `nTab`  
 The zero-based index of a tab to display, or -1 to specify the currently active tab.  
  
##  <a name="cmfctabctrl__allowdestroyemptytabbedpane"></a>  CMFCTabCtrl::AllowDestroyEmptyTabbedPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL AllowDestroyEmptyTabbedPane() const;

 
```  
  
### Return Value  
 Always `TRUE`.  
  
### Remarks  
  
##  <a name="cmfctabctrl__autosizewindow"></a>  CMFCTabCtrl::AutoSizeWindow  
 Specifies whether the framework is to resize the client area of all tab control windows when a user interface element of the tab control changes.  
  
```  
void AutoSizeWindow(BOOL bAutoSize = TRUE);
```  
  
### Parameters  
 [in] `bAutoSize`  
 `TRUE` to automatically resize tab control windows; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfctabctrl__create"></a>  CMFCTabCtrl::Create  
 Creates the tab control and attaches it to the `CMFCTabCtrl` object.  
  
```  
BOOL Create(
    Style style,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    Location location=LOCATION_BOTTOM,  
    BOOL bCloseBtn=FALSE);
```  
  
### Parameters  
 [in] `style`  
 The style of the tab control. For more information, see Remarks.  
  
 [in] `rect`  
 A rectangle that bounds the tab control.  
  
 [in] `pParentWnd`  
 A pointer to a parent window. Must not be `NULL`.  
  
 [in] `nID`  
 The ID of the tab control.  
  
 [in] `location`  
 The location of tabs. The default value is `LOCATION_BOTTOM`. For more information, see Remarks.  
  
 [in] `bCloseBtn`  
 `TRUE` to display a close button on the tab; otherwise, `FALSE`. The default value is `FALSE`.  
  
### Return Value  
 `TRUE` if successful; otherwise, `FALSE`.  
  
### Remarks  
 The following table describes the values you can specify for the `style` parameter.  
  
|Style|Description|  
|-----------|-----------------|  
|STYLE_3D|Creates a tab control with a three-dimensional appearance.|  
|STYLE_FLAT|Creates a tab control with flat tabs.|  
|STYLE_FLAT_SHARED_HORZ_SCROLL|Creates a tab control with flat tabs and a scroll bar that can scroll the tabs if they are clipped by a parent window.|  
|STYLE_3D_ONENOTE|Creates a tab control in the style of Microsoft OneNote.|  
|STYLE_3D_VS2005|Creates a tab control in the style of Microsoft Visual Studio 2005.|  
|STYLE_3D_ROUNDED|Creates a tab control with rounded tabs in the style of Microsoft Visual Studio 2005.|  
|STYLE_3D_ROUNDED_SCROLL|Creates a tab control with rounded tabs and scroll buttons in the style of Microsoft Visual Studio 2005.|  
  
 The following table lists the values you can specify for the `location` parameter.  
  
|Location|Description|  
|--------------|-----------------|  
|LOCATION_BOTTOM|Tabs are located at the bottom of the tab control.|  
|LOCATION_TOP|Tabs are located at the top of the tab control.|  
  
### Example  
 The following example demonstrates how to use the `Create` method in the `CMFCTabCtrl` class. This example is part of the [State Collection sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StateCollection#1](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_1.h)]  
[!code-cpp[NVC_MFC_StateCollection#2](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_3.cpp)]  
  
##  <a name="cmfctabctrl__calcrectedit"></a>  CMFCTabCtrl::CalcRectEdit  
 Deflates the size of the specified tab area.  
  
```  
virtual void CalcRectEdit(CRect& rectEdit);
```  
  
### Parameters  
 [in] `rectEdit`  
 A rectangle that specifies the area of a tab.  
  
### Remarks  
 This method is called when you change the label of a tab. This method deflates the left and right sides of the specified rectangle by one-half the current tab height, and deflates the top and bottom by one unit.  
  
##  <a name="cmfctabctrl__enableactivetabclosebutton"></a>  CMFCTabCtrl::EnableActiveTabCloseButton  
 Shows or hides a Close button ( **X**) on the active tab.  
  
```  
void EnableActiveTabCloseButton(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to display the Close button on the active tab; `FALSE` to display the Close button on the upper-right corner of the tab area. The default value is `TRUE`.  
  
##  <a name="cmfctabctrl__enableinplaceedit"></a>  CMFCTabCtrl::EnableInPlaceEdit  
 Enables or disables editable tab labels.  
  
```  
virtual void EnableInPlaceEdit(BOOL bEnable);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable editable tab labels; `FALSE` to disable editable tab labels.  
  
### Remarks  
  
##  <a name="cmfctabctrl__enabletabdocumentsmenu"></a>  CMFCTabCtrl::EnableTabDocumentsMenu  
 Toggles between a user interface that uses two buttons to scroll the window tabs and an interface that displays a pop-up menu of tabbed windows.  
  
```  
void EnableTabDocumentsMenu(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to display a pop-up menu of tabbed window labels; `FALSE` to display forward and backward scroll buttons. The default value is `TRUE`.  
  
### Remarks  
 When the user clicks a tab label, the framework displays the corresponding tabbed window. If the tab label is visible, the tabbed window is opened without changing its position. If the user selects a document from the pop-up menu and the corresponding tabbed window is off screen, the tabbed window becomes the first tab.  
  
##  <a name="cmfctabctrl__ensurevisible"></a>  CMFCTabCtrl::EnsureVisible  
 Ensures that a tab is visible.  
  
```  
virtual BOOL EnsureVisible(int iTab);
```  
  
### Parameters  
 [in] `iTab`  
 The zero-based index of a tab.  
  
### Return Value  
 `TRUE` if it is successful; `FALSE` if the `iTab` parameter index is invalid.  
  
### Remarks  
 Use this method to guarantee that the specified tab is visible. The tab control will scroll if it is required.  
  
##  <a name="cmfctabctrl__getdocumenticon"></a>  CMFCTabCtrl::GetDocumentIcon  
 Retrieves the image that is associated with a tab in a pop-up menu of tabbed windows.  
  
```  
static HICON __stdcall GetDocumentIcon(UINT nCmdID);
```  
  
### Parameters  
 [in] `nCmdID`  
 The command ID of a tab in a pop-up menu of tabbed windows.  
  
### Return Value  
 The handle of a bitmap image.  
  
##  <a name="cmfctabctrl__getfirstvisibletabnum"></a>  CMFCTabCtrl::GetFirstVisibleTabNum  
 Retrieves the index of the first tab that is visible in the current tab control.  
  
```  
virtual int GetFirstVisibleTabNum() const;

 
```  
  
### Return Value  
 The zero-based index of a tab in the tab control.  
  
### Remarks  
 Use this method only when the tab control is displayed in the style of Microsoft OneNote. Use the [CMFCTabCtrl::IsOneNoteStyle](#cmfctabctrl__isonenotestyle) method to determine the style.  
  
##  <a name="cmfctabctrl__getresizemode"></a>  CMFCTabCtrl::GetResizeMode  
 Retrieves a value that specifies how the current tab control can be resized.  
  
```  
ResizeMode GetResizeMode() const;

 
```  
  
### Return Value  
 One of the `CMFCTabCtrl::ResizeMode` enumeration values that specifies how the tab control can be resized. For a list of possible values, see the Remarks section of the [CMFCTabCtrl::SetResizeMode](#cmfctabctrl__setresizemode) method.  
  
##  <a name="cmfctabctrl__getscrollbar"></a>  CMFCTabCtrl::GetScrollBar  
 Retrieves a pointer to the scroll bar object that is associated with the tab control.  
  
```  
CScrollBar* GetScrollBar();
```  
  
### Return Value  
 A pointer to a scrollbar object, or a `NULL` if the tab control was not created by using the `STYLE_FLAT_SHARED_HORZ_SCROLL` style.  
  
### Remarks  
 Use this method to access the tab control's embedded scroll bar. A scroll bar object is created only when the tab control has the `STYLE_FLAT_SHARED_HORZ_SCROLL` style.  
  
##  <a name="cmfctabctrl__gettabarea"></a>  CMFCTabCtrl::GetTabArea  
 Retrieves the bounding rectangle of the tab label area at the top or bottom of the tab control.  
  
```  
void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const;

 
```  
  
### Parameters  
 [out] `rectTabAreaTop`  
 When this method returns, this reference contains a rectangle that bounds the top tab label area. The rectangle is in client coordinates. This reference is empty if no tab label area exists at the top of the tab control.  
  
 [out] `rectTabAreaBottom`  
 When this method returns, this reference contains a rectangle that bounds the bottom tab label area. The rectangle is in client coordinates. This reference is empty if no tab label area exists at the bottom of the tab control.  
  
### Remarks  
 Use this method to determine the size and position of the tab area in the tabbed window.  
  
##  <a name="cmfctabctrl__gettabmaxwidth"></a>  CMFCTabCtrl::GetTabMaxWidth  
 Retrieves the maximum width of a tab.  
  
```  
int GetTabMaxWidth() const;

 
```  
  
### Return Value  
 Maximum width of a tab, in pixels. If the return value is 0, the tab width is unlimited.  
  
### Remarks  
 Use the [CMFCTabCtrl::SetTabMaxWidth](#cmfctabctrl__settabmaxwidth) method to set maximum tab width.  
  
##  <a name="cmfctabctrl__gettabsheight"></a>  CMFCTabCtrl::GetTabsHeight  
 Retrieves the height of the tab area of the current tab control.  
  
```  
virtual int GetTabsHeight() const;

 
```  
  
### Return Value  
 The height of the tab area if any tab is visible, or zero if no tab is visible.  
  
##  <a name="cmfctabctrl__gettabsrect"></a>  CMFCTabCtrl::GetTabsRect  
 Retrieves a rectangle that bounds the tab area of the current tab control.  
  
```  
virtual void GetTabsRect(CRect& rect) const;

 
```  
  
### Parameters  
 [out] `rect`  
 When this method returns, the `rect` parameter contains a rectangle that bounds the tab area.  
  
##  <a name="cmfctabctrl__getwndarea"></a>  CMFCTabCtrl::GetWndArea  
 Retrieves the boundary of the client area of the current tab control.  
  
```  
void GetWndArea(CRect& rect) const;

 
```  
  
### Parameters  
 [in, out] `rect`  
 When this method returns, this parameter contains a rectangle that bounds the current tab control.  
  
### Remarks  
  
##  <a name="cmfctabctrl__hideactivewindowhorzscrollbar"></a>  CMFCTabCtrl::HideActiveWindowHorzScrollBar  
 Hides the horizontal scroll bar, if any, in the active window.  
  
```  
void HideActiveWindowHorzScrollBar();
```  
  
### Remarks  
 Use this method to prevent the tab control from blinking when the user switches between tab control pages.  
  
##  <a name="cmfctabctrl__hideinactivewindow"></a>  CMFCTabCtrl::HideInactiveWindow  
 Specifies whether the framework displays inactive tab control windows.  
  
```  
void HideInactiveWindow(BOOL bHide = TRUE);
```  
  
### Parameters  
 [in] `bHide`  
 `TRUE` not to display an inactive window; `FALSE` to display an inactive window. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfctabctrl__hidenotabs"></a>  CMFCTabCtrl::HideNoTabs  
 Enables or disables drawing of the tab area if there are no visible tabs.  
  
```  
void HideNoTabs(BOOL bHide=TRUE);
```  
  
### Parameters  
 [in] `bHide`  
 `TRUE` to enable drawing the tab area; `FALSE` to disable drawing. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfctabctrl__hidesingletab"></a>  CMFCTabCtrl::HideSingleTab  
 Enables or disables tab drawing if there is a single tabbed window.  
  
```  
virtual void HideSingleTab(BOOL bHide=TRUE);
```  
  
### Parameters  
 [in] `bHide`  
 `TRUE` to not draw a tab for a single tabbed window; `FALSE` to draw a single tab. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfctabctrl__isactiveinmditabgroup"></a>  CMFCTabCtrl::IsActiveInMDITabGroup  
 Indicates whether the current tab of a tab control is the active tab in a multiple document interface tab group.  
  
```  
BOOL IsActiveInMDITabGroup() const;

 
```  
  
### Return Value  
 `TRUE` if the current tab of a tab control is the active tab in an MDI tab group; otherwise, `FALSE`.  
  
### Remarks  
 You can organize multiple document windows into either vertical or horizontal tab groups and easily shuffle documents from one tab group to another.  
  
##  <a name="cmfctabctrl__isactivetabboldfont"></a>  CMFCTabCtrl::IsActiveTabBoldFont  
 Indicates whether the text of the active tab is displayed using a bold font.  
  
```  
BOOL IsActiveTabBoldFont() const;

 
```  
  
### Return Value  
 `TRUE` if the active tab is displayed using the bold font; otherwise, `FALSE`.  
  
### Remarks  
 Use the [CMFCTabCtrl::SetActiveTabBoldFont](#cmfctabctrl__setactivetabboldfont) method to change the active tab font.  
  
##  <a name="cmfctabctrl__isactivetabclosebutton"></a>  CMFCTabCtrl::IsActiveTabCloseButton  
 Indicates whether the Close button ( **X**) is displayed on an active tab or on the upper-right corner of the tab area.  
  
```  
virtual BOOL IsActiveTabCloseButton() const;

 
```  
  
### Return Value  
 `TRUE` if the Close button is displayed on the active tab; `FALSE` if the Close button is displayed on the upper-right corner of the tab area.  
  
### Remarks  
  
##  <a name="cmfctabctrl__isdrawframe"></a>  CMFCTabCtrl::IsDrawFrame  
 Indicates whether the tabbed window draws a frame rectangle around embedded panes.  
  
```  
BOOL IsDrawFrame() const;

 
```  
  
### Return Value  
 `TRUE` if a frame rectangle is drawn; otherwise, `FALSE`.  
  
### Remarks  
 Use the [CMFCTabCtrl::SetDrawFrame](#cmfctabctrl__setdrawframe) method to enable or disable drawing a frame rectangle.  
  
##  <a name="cmfctabctrl__isflatframe"></a>  CMFCTabCtrl::IsFlatFrame  
 Indicates whether the frame around the tab area is flat or 3D.  
  
```  
BOOL IsFlatFrame() const;

 
```  
  
### Return Value  
 `TRUE` if the frame around the tab area is flat; `FALSE` if the frame is three-dimensional.  
  
### Remarks  
 Use the [CMFCTabCtrl::SetFlatFrame](#cmfctabctrl__setflatframe) method to change how the frame is drawn.  
  
##  <a name="cmfctabctrl__isflattab"></a>  CMFCTabCtrl::IsFlatTab  
 Indicates whether the appearance of the tabs in the current tab control is flat or not.  
  
```  
virtual BOOL IsFlatTab() const;

 
```  
  
### Return Value  
 `TRUE` if the appearance of the tabs in the current tab control is flat; otherwise, `FALSE`.  
  
##  <a name="cmfctabctrl__isleftrightrounded"></a>  CMFCTabCtrl::IsLeftRightRounded  
 Indicates whether the appearance of the left and right side of a tab in the current tab control is rounded.  
  
```  
virtual BOOL IsLeftRightRounded() const;

 
```  
  
### Return Value  
 `TRUE` if the sides of each tab is rounded; otherwise, `FALSE`.  
  
##  <a name="cmfctabctrl__ismditabgroup"></a>  CMFCTabCtrl::IsMDITabGroup  
 Indicates whether the current tab control is contained in the client area of a multiple-document interface window.  
  
```  
virtual BOOL IsMDITabGroup() const;

 
```  
  
### Return Value  
 `TRUE` if the current tab control is in an MDI client area window; otherwise, `FALSE`.  
  
##  <a name="cmfctabctrl__isonenotestyle"></a>  CMFCTabCtrl::IsOneNoteStyle  
 Indicates whether the current tab control is displayed in the style of Microsoft OneNote.  
  
```  
virtual BOOL IsOneNoteStyle() const;

 
```  
  
### Return Value  
 `TRUE` if the tab control is displayed in the style of Microsoft OneNote; otherwise, `FALSE`.  
  
##  <a name="cmfctabctrl__issharedscroll"></a>  CMFCTabCtrl::IsSharedScroll  
 Indicates whether the current tab control has a scroll bar that can scroll its tabs as a group.  
  
```  
BOOL IsSharedScroll() const;

 
```  
  
### Return Value  
 `TRUE` if the tab control has a shared scroll bar; otherwise, `FALSE`.  
  
### Remarks  
 This method returns `TRUE` if the `style` parameter of the [CMFCTabCtrl::Create](#cmfctabctrl__create) method is STYLE_FLAT_SHARED_HORZ_SCROLL.  
  
##  <a name="cmfctabctrl__istabdocumentsmenu"></a>  CMFCTabCtrl::IsTabDocumentsMenu  
 Indicates whether the tab control displays scroll buttons or a button that displays a menu of tabbed windows.  
  
```  
BOOL IsTabDocumentsMenu() const;

 
```  
  
### Return Value  
 `TRUE` if tabbed windows are scrolled using a popup menu of tabbed window labels; `FALSE` if tabbed windows are scrolled using forward and backward scroll buttons.  
  
### Remarks  
 Use the [CMFCTabCtrl::EnableTabDocumentsMenu](#cmfctabctrl__enabletabdocumentsmenu) method to specify the method of scrolling tabbed windows.  
  
##  <a name="cmfctabctrl__isvs2005style"></a>  CMFCTabCtrl::IsVS2005Style  
 Indicates whether tabs are drawn using the style of Visual Studio 2005.  
  
```  
virtual BOOL IsVS2005Style() const;

 
```  
  
### Return Value  
 `TRUE` if tabs are drawn using the style of Visual Studio 2005; otherwise, `FALSE`.  
  
### Remarks  
 Use the `style` parameter of the [CMFCTabCtrl::Create](#cmfctabctrl__create) method to specify how tabs are drawn.  
  
##  <a name="cmfctabctrl__m_benableactivate"></a>  CMFCTabCtrl::m_bEnableActivate  
 Prevents the active view from losing focus when a new tab is inserted and enabled.  
  
```  
static BOOL m_bEnableActivate;  
```  
  
### Remarks  
 The focus is usually taken by a new tabbed window when the tab is inserted and made active. Set the `CMFCTabCtrl::m_bEnableActivate` member variable to `FALSE` to retain the original focus. The default value is `TRUE`.  
  
##  <a name="cmfctabctrl__modifytabstyle"></a>  CMFCTabCtrl::ModifyTabStyle  
 Specifies the appearance of tabs in the current tab control.  
  
```  
BOOL ModifyTabStyle(Style style);
```  
  
### Parameters  
 [in] `style`  
 One of the enumeration values that specifies the appearance of the tab control. For more information, see the table in Remarks.  
  
### Return Value  
 Always `TRUE`.  
  
### Remarks  
 The value of the `style` parameter can be one of the following `CMFCTabCtrl::Style` enumerations.  
  
|Name|Description|  
|----------|-----------------|  
|STYLE_3D|Displays three-dimensional, rectangular tabs that have round corners.|  
|STYLE_3D_ONENOTE|Displays three-dimensional tabs that have one vertical side and one slanted side and that have rounded corners.|  
|STYLE_3D_ROUNDED|Displays three-dimensional tabs that have slanted sides and rounded corners.|  
|STYLE_3D_ROUNDED_SCROLL|Displays three-dimensional tabs that have slanted sides and rounded corners. If there are more tabs than can be displayed at the same time, the framework displays a drop-down arrow and a menu of tabs to make active.|  
|STYLE_3D_SCROLLED|Displays three-dimensional, rectangular tabs. If there are more tabs than can be displayed at the same time, the framework displays a drop-down arrow and a menu of tabs to make active.|  
|STYLE_3D_VS2005|Displays three-dimensional, rounded tabs that have one slanted side and one vertical side.|  
|STYLE_FLAT|Displays two-dimensional tabs that have slanted left and right sides.|  
|STYLE_FLAT_SHARED_HORZ_SCROLL|Displays two-dimensional tabs. If there are more tabs than can be displayed at the same time, the framework displays scroll arrows at the ends of the tab area.|  
  
##  <a name="cmfctabctrl__ondragenter"></a>  CMFCTabCtrl::OnDragEnter  
 Called by the framework during a drag-and-drop operation when the cursor first enters the window of the current tab control.  
  
```  
virtual DROPEFFECT OnDragEnter(
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### Parameters  
 [in] `pDataObject`  
 Points to a data object that contains data that the user drags.  
  
 [in] `dwKeyState`  
 Contains the state of the modifier keys. This parameter is a bitwise combination (OR) of the following values: `MK_CONTROL`, `MK_SHIFT`, `MK_ALT`, `MK_LBUTTON`, `MK_MBUTTON`, and `MK_RBUTTON`. For more information, see the **Message Parameters** section of [About Mouse Input](http://msdn.microsoft.com/library/windows/desktop/ms645601).  
  
 [in] `point`  
 Contains the current location of the cursor in client coordinates.  
  
### Return Value  
 Always `DROPEFFECT_NONE`, which means that the drop target cannot accept the data.  
  
### Remarks  
 Use this method to support a drag-and-drop operation. Override this method to implement your own custom behavior.  
  
 By default, this method only calls `CMFCTabCtrl::OnDragOver`, which always returns `DROPEFFECT_NONE`.  
  
##  <a name="cmfctabctrl__ondragover"></a>  CMFCTabCtrl::OnDragOver  
 Called by the framework during a drag operation when the mouse is moved over the drop target window.  
  
```  
virtual DROPEFFECT OnDragOver(
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### Parameters  
 [in] `pDataObject`  
 Pointer to a [COleDataObject](../../mfc/reference/coledataobject-class.md) object that is being dragged over the drop target.  
  
 [in] `dwKeyState`  
 The state of the modifier keys, which is a bitwise combination (OR) of `MK_CONTROL`, `MK_SHIFT`, `MK_ALT`, `MK_LBUTTON`, `MK_MBUTTON`, and `MK_RBUTTON`. For more information, see "Message Parameters" in [About Mouse Input](http://msdn.microsoft.com/library/windows/desktop/ms645601).  
  
 [in] `point`  
 The current mouse position.  
  
### Return Value  
 Always `DROPEFFECT_NONE`.  
  
### Remarks  
 Override this method with your custom implementation. For more information, see the [CView::OnDragOver](../../mfc/reference/cview-class.md#cview__ondragover) method.  
  
##  <a name="cmfctabctrl__onshowtabdocumentsmenu"></a>  CMFCTabCtrl::OnShowTabDocumentsMenu  
 Displays a pop-up menu of tabbed windows, waits until the user selects a tab, and makes the selected tab the active tab.  
  
```  
virtual void OnShowTabDocumentsMenu(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 The coordinates of where to display the pop-up menu.  
  
### Remarks  
  
##  <a name="cmfctabctrl__setactiveinmditabgroup"></a>  CMFCTabCtrl::SetActiveInMDITabGroup  
 Sets the current tab of a tab control as the active tab in a multiple document interface tab group.  
  
```  
void SetActiveInMDITabGroup(BOOL bActive);
```  
  
### Parameters  
 [in] `bActive`  
 `TRUE` to make the current tab the active tab; `FALSE` to make the current tab inactive.  
  
### Remarks  
 You can organize multiple document windows into either vertical or horizontal tab groups and easily shuffle documents from one tab group to another.  
  
##  <a name="cmfctabctrl__setactivetab"></a>  CMFCTabCtrl::SetActiveTab  
 Activates a tab.  
  
```  
virtual BOOL SetActiveTab(int iTab);
```  
  
### Parameters  
 [in] `iTab`  
 Specifies the zero-based index of the tab to activate.  
  
### Return Value  
 `TRUE` if the specified tab was made active; `FALSE` if the specified `iTab` parameter value is invalid.  
  
### Remarks  
 This method does not send the `AFX_WM_CHANGE_ACTIVE_TAB` notification to the parent window of the tab control.  
  
 The `SetActiveTab` method automatically calls the [CMFCTabCtrl::HideActiveWindowHorzScrollBar](#cmfctabctrl__hideactivewindowhorzscrollbar) method to prevent the screen from blinking.  
  
##  <a name="cmfctabctrl__setactivetabboldfont"></a>  CMFCTabCtrl::SetActiveTabBoldFont  
 Enables or disables use of a bold font on active tabs.  
  
```  
void SetActiveTabBoldFont(BOOL bIsBold=TRUE);
```  
  
### Parameters  
 [in] `bIsBold`  
 `TRUE` to use a bold font to display the label of the active tab; `FALSE` to use the standard font to display the label. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfctabctrl__setdrawframe"></a>  CMFCTabCtrl::SetDrawFrame  
 Specifies whether a frame rectangle is drawn around an embedded bar.  
  
```  
void SetDrawFrame(BOOL bDraw=TRUE);
```  
  
### Parameters  
 [in] `bDraw`  
 `TRUE` to display a frame rectangle around an embedded bar; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfctabctrl__setflatframe"></a>  CMFCTabCtrl::SetFlatFrame  
 Specifies whether to draw a flat or a 3D frame around the tab area.  
  
```  
void SetFlatFrame(
    BOOL bFlat=TRUE,  
    BOOL bRepaint=TRUE);
```  
  
### Parameters  
 [in] `bFlat`  
 `TRUE` to draw a flat (2D) frame around the tab area; `FALSE` to draw a three-dimensional (3D) frame. The default value is `TRUE`.  
  
 [in] `bRepaint`  
 `TRUE` to redraw the window immediately; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfctabctrl__setimagelist"></a>  CMFCTabCtrl::SetImageList  
 Specifies an image list.  
  
```  
virtual BOOL SetImageList(
    UINT uiID,  
    int cx=15,  
    COLORREF clrTransp=RGB(255,
    0,
    255));

 
virtual BOOL SetImageList(
    HIMAGELIST hImageList);
```  
  
### Parameters  
 [in] `uiID`  
 The ID of a bitmap resource that contains the image list.  
  
 [in] `cx`  
 The width of each image, in pixels. The default value is 15.  
  
 [in] `clrTransp`  
 The transparent image color. The parts of the image that are this color will be transparent. The default value is the color magenta, RGB(255,0,255).  
  
 [in] `hImageList`  
 A handle to a preloaded image list.  
  
### Return Value  
 `TRUE` if this method is successful. `FALSE` if the tab control is created by using a flat style or if the first method overload cannot load the bitmap that is specified by the `uiID` parameter.  
  
### Remarks  
 Use this method to set an image list for the tab control. The images from the image list are displayed next to the tab label. This method recalculates the tab height so that the tab is sized to contain both the image and the text.  
  
 Use the [CMFCBaseTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#cmfcbasetabctrl__addtab) method that is inherited by the tab control to specify the index of the image to display.  
  
##  <a name="cmfctabctrl__setresizemode"></a>  CMFCTabCtrl::SetResizeMode  
 Specifies how the current tab control can be resized and then redisplays the control.  
  
```  
void SetResizeMode(ResizeMode resizeMode);
```  
  
### Parameters  
 [in] `resizeMode`  
 One of the `CMFCTabCtrl::ResizeMode` enumeration values that specifies how the tab control can be resized. For a list of possible values, see the table in Remarks.  
  
### Remarks  
 The `resizeMode` parameter can be one of the following `ResizeMode` enumeration values.  
  
|Name|Description|  
|----------|-----------------|  
|RESIZE_NO|The tab control cannot be resized.|  
|RESIZE_VERT|The tab control can be resized vertically but not horizontally.|  
|RESIZE_HORIZ|The tab control can be resized horizontally but not vertically.|  
  
##  <a name="cmfctabctrl__settabmaxwidth"></a>  CMFCTabCtrl::SetTabMaxWidth  
 Specifies the maximum tab width in a tabbed window.  
  
```  
void SetTabMaxWidth(int nTabMaxWidth);
```  
  
### Parameters  
 [in] `nTabMaxWidth`  
 The maximum tab width, in pixels.  
  
### Remarks  
 Use this method to limit the width of each tab in a tabbed window. This method is useful if tabs have very long labels. The [CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md) class constructor initializes the maximum tab width to 0, which actually means that the width is not limited.  
  
##  <a name="cmfctabctrl__stopresize"></a>  CMFCTabCtrl::StopResize  
 Terminates the current resize operation on the tab control.  
  
```  
void StopResize(BOOL bCancel);
```  
  
### Parameters  
 [in] `bCancel`  
 `TRUE` to abandon the current resize operation; `FALSE` to complete the current resize operation. In either case, the framework stops drawing the resize rectangle.  
  
##  <a name="cmfctabctrl__synchronizescrollbar"></a>  CMFCTabCtrl::SynchronizeScrollBar  
 Draws a horizontal scroll bar on a tab control that displays flat tabs.  
  
```  
BOOL SynchronizeScrollBar(SCROLLINFO* pScrollInfo = NULL);
```  
  
### Parameters  
 [out] `pScrollInfo`  
 Pointer to a [SCROLLINFO](http://msdn.microsoft.com/library/windows/desktop/bb787537) structure or `NULL`. When this method returns, and if this parameter is not `NULL`, the structure contains all the parameters of the scroll bar. The default value is `NULL`.  
  
### Return Value  
 `TRUE` if this method succeeds; otherwise, `FALSE`.  
  
### Remarks  
 This method affects only a tab control that displays flat tabs. The scroll bar influences all the tabs at the same time.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)   
 [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md)
