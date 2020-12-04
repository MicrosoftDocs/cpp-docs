---
description: "Learn more about: CMFCTabCtrl Class"
title: "CMFCTabCtrl Class"
ms.date: "08/28/2019"
f1_keywords: ["CMFCTabCtrl", "AFXTABCTRL/CMFCTabCtrl", "AFXTABCTRL/CMFCTabCtrl::ActivateMDITab", "AFXTABCTRL/CMFCTabCtrl::AllowDestroyEmptyTabbedPane", "AFXTABCTRL/CMFCTabCtrl::AutoSizeWindow", "AFXTABCTRL/CMFCTabCtrl::CalcRectEdit", "AFXTABCTRL/CMFCTabCtrl::Create", "AFXTABCTRL/CMFCTabCtrl::EnableActiveTabCloseButton", "AFXTABCTRL/CMFCTabCtrl::EnableInPlaceEdit", "AFXTABCTRL/CMFCTabCtrl::EnableTabDocumentsMenu", "AFXTABCTRL/CMFCTabCtrl::EnsureVisible", "AFXTABCTRL/CMFCTabCtrl::GetDocumentIcon", "AFXTABCTRL/CMFCTabCtrl::GetFirstVisibleTabNum", "AFXTABCTRL/CMFCTabCtrl::GetResizeMode", "AFXTABCTRL/CMFCTabCtrl::GetScrollBar", "AFXTABCTRL/CMFCTabCtrl::GetTabArea", "AFXTABCTRL/CMFCTabCtrl::GetTabMaxWidth", "AFXTABCTRL/CMFCTabCtrl::GetTabsHeight", "AFXTABCTRL/CMFCTabCtrl::GetTabsRect", "AFXTABCTRL/CMFCTabCtrl::GetWndArea", "AFXTABCTRL/CMFCTabCtrl::HideActiveWindowHorzScrollBar", "AFXTABCTRL/CMFCTabCtrl::HideInactiveWindow", "AFXTABCTRL/CMFCTabCtrl::HideNoTabs", "AFXTABCTRL/CMFCTabCtrl::HideSingleTab", "AFXTABCTRL/CMFCTabCtrl::IsActiveInMDITabGroup", "AFXTABCTRL/CMFCTabCtrl::IsActiveTabBoldFont", "AFXTABCTRL/CMFCTabCtrl::IsActiveTabCloseButton", "AFXTABCTRL/CMFCTabCtrl::IsDrawFrame", "AFXTABCTRL/CMFCTabCtrl::IsFlatFrame", "AFXTABCTRL/CMFCTabCtrl::IsFlatTab", "AFXTABCTRL/CMFCTabCtrl::IsLeftRightRounded", "AFXTABCTRL/CMFCTabCtrl::IsMDITabGroup", "AFXTABCTRL/CMFCTabCtrl::IsOneNoteStyle", "AFXTABCTRL/CMFCTabCtrl::IsSharedScroll", "AFXTABCTRL/CMFCTabCtrl::IsTabDocumentsMenu", "AFXTABCTRL/CMFCTabCtrl::IsVS2005Style", "AFXTABCTRL/CMFCTabCtrl::ModifyTabStyle", "AFXTABCTRL/CMFCTabCtrl::OnDragEnter", "AFXTABCTRL/CMFCTabCtrl::OnDragOver", "AFXTABCTRL/CMFCTabCtrl::OnShowTabDocumentsMenu", "AFXTABCTRL/CMFCTabCtrl::SetActiveInMDITabGroup", "AFXTABCTRL/CMFCTabCtrl::SetActiveTab", "AFXTABCTRL/CMFCTabCtrl::SetActiveTabBoldFont", "AFXTABCTRL/CMFCTabCtrl::SetDrawFrame", "AFXTABCTRL/CMFCTabCtrl::SetFlatFrame", "AFXTABCTRL/CMFCTabCtrl::SetImageList", "AFXTABCTRL/CMFCTabCtrl::SetResizeMode", "AFXTABCTRL/CMFCTabCtrl::SetTabMaxWidth", "AFXTABCTRL/CMFCTabCtrl::StopResize", "AFXTABCTRL/CMFCTabCtrl::SynchronizeScrollBar", "AFXTABCTRL/CMFCTabCtrl::m_bEnableActivate"]
helpviewer_keywords: ["CMFCTabCtrl [MFC], ActivateMDITab", "CMFCTabCtrl [MFC], AllowDestroyEmptyTabbedPane", "CMFCTabCtrl [MFC], AutoSizeWindow", "CMFCTabCtrl [MFC], CalcRectEdit", "CMFCTabCtrl [MFC], Create", "CMFCTabCtrl [MFC], EnableActiveTabCloseButton", "CMFCTabCtrl [MFC], EnableInPlaceEdit", "CMFCTabCtrl [MFC], EnableTabDocumentsMenu", "CMFCTabCtrl [MFC], EnsureVisible", "CMFCTabCtrl [MFC], GetDocumentIcon", "CMFCTabCtrl [MFC], GetFirstVisibleTabNum", "CMFCTabCtrl [MFC], GetResizeMode", "CMFCTabCtrl [MFC], GetScrollBar", "CMFCTabCtrl [MFC], GetTabArea", "CMFCTabCtrl [MFC], GetTabMaxWidth", "CMFCTabCtrl [MFC], GetTabsHeight", "CMFCTabCtrl [MFC], GetTabsRect", "CMFCTabCtrl [MFC], GetWndArea", "CMFCTabCtrl [MFC], HideActiveWindowHorzScrollBar", "CMFCTabCtrl [MFC], HideInactiveWindow", "CMFCTabCtrl [MFC], HideNoTabs", "CMFCTabCtrl [MFC], HideSingleTab", "CMFCTabCtrl [MFC], IsActiveInMDITabGroup", "CMFCTabCtrl [MFC], IsActiveTabBoldFont", "CMFCTabCtrl [MFC], IsActiveTabCloseButton", "CMFCTabCtrl [MFC], IsDrawFrame", "CMFCTabCtrl [MFC], IsFlatFrame", "CMFCTabCtrl [MFC], IsFlatTab", "CMFCTabCtrl [MFC], IsLeftRightRounded", "CMFCTabCtrl [MFC], IsMDITabGroup", "CMFCTabCtrl [MFC], IsOneNoteStyle", "CMFCTabCtrl [MFC], IsSharedScroll", "CMFCTabCtrl [MFC], IsTabDocumentsMenu", "CMFCTabCtrl [MFC], IsVS2005Style", "CMFCTabCtrl [MFC], ModifyTabStyle", "CMFCTabCtrl [MFC], OnDragEnter", "CMFCTabCtrl [MFC], OnDragOver", "CMFCTabCtrl [MFC], OnShowTabDocumentsMenu", "CMFCTabCtrl [MFC], SetActiveInMDITabGroup", "CMFCTabCtrl [MFC], SetActiveTab", "CMFCTabCtrl [MFC], SetActiveTabBoldFont", "CMFCTabCtrl [MFC], SetDrawFrame", "CMFCTabCtrl [MFC], SetFlatFrame", "CMFCTabCtrl [MFC], SetImageList", "CMFCTabCtrl [MFC], SetResizeMode", "CMFCTabCtrl [MFC], SetTabMaxWidth", "CMFCTabCtrl [MFC], StopResize", "CMFCTabCtrl [MFC], SynchronizeScrollBar", "CMFCTabCtrl [MFC], m_bEnableActivate"]
ms.assetid: d441385d-2c72-4203-96fa-deae2273da35
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
|[CMFCTabCtrl::ActivateMDITab](#activatemditab)|Displays the specified tab of the current tab control and sets the focus on that tab.|
|[CMFCTabCtrl::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)||
|[CMFCTabCtrl::AutoSizeWindow](#autosizewindow)|Specifies whether the framework is to resize the client area of all tab control windows when a user interface element of the tab control changes.|
|[CMFCTabCtrl::CalcRectEdit](#calcrectedit)|Deflates the size of the specified tab area. (Overrides `CMFCBaseTabCtrl::CalcRectEdit`.)|
|[CMFCTabCtrl::Create](#create)|Creates the tab control and attaches it to the `CMFCTabCtrl` object.|
|`CMFCTabCtrl::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|[CMFCTabCtrl::EnableActiveTabCloseButton](#enableactivetabclosebutton)|Shows or hides a Close button ( **X**) on the active tab.|
|[CMFCTabCtrl::EnableInPlaceEdit](#enableinplaceedit)|Enables or disables editable tab labels. (Overrides [CMFCBaseTabCtrl::EnableInPlaceEdit](../../mfc/reference/cmfcbasetabctrl-class.md#enableinplaceedit).)|
|[CMFCTabCtrl::EnableTabDocumentsMenu](#enabletabdocumentsmenu)|Replaces two buttons that scroll the window tabs with a button that opens a menu of tabbed windows.|
|[CMFCTabCtrl::EnsureVisible](#ensurevisible)|Ensures that a tab is visible.|
|[CMFCTabCtrl::GetDocumentIcon](#getdocumenticon)|Retrieves the symbol that is associated with a tab in a popup menu of tabbed windows.|
|[CMFCTabCtrl::GetFirstVisibleTabNum](#getfirstvisibletabnum)|Retrieves the index of the first tab that is visible in the current tab control.|
|[CMFCTabCtrl::GetResizeMode](#getresizemode)|Retrieves a value that specifies how the current tab control can be resized.|
|[CMFCTabCtrl::GetScrollBar](#getscrollbar)|Retrieves a pointer to the scroll bar object that is associated with the tab control.|
|[CMFCTabCtrl::GetTabArea](#gettabarea)|Retrieves the bounding rectangle of the tab label area at the top or bottom of the tab control. (Overrides [CMFCBaseTabCtrl::GetTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#gettabarea).)|
|`CMFCTabCtrl::GetTabFromPoint`|Retrieves the tab that contains a specified point. (Overrides [CMFCBaseTabCtrl::GetTabFromPoint](../../mfc/reference/cmfcbasetabctrl-class.md#gettabfrompoint).)|
|[CMFCTabCtrl::GetTabMaxWidth](#gettabmaxwidth)|Retrieves the maximum width of a tab.|
|[CMFCTabCtrl::GetTabsHeight](#gettabsheight)|Retrieves the height of the tab area of the current tab control.|
|[CMFCTabCtrl::GetTabsRect](#gettabsrect)|Retrieves a rectangle that bounds the tab area of the current tab control. (Overrides [CMFCBaseTabCtrl::GetTabsRect](../../mfc/reference/cmfcbasetabctrl-class.md#gettabsrect).)|
|`CMFCTabCtrl::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCTabCtrl::GetWndArea](#getwndarea)|Retrieves the boundary of the client area of the current tab control.|
|[CMFCTabCtrl::HideActiveWindowHorzScrollBar](#hideactivewindowhorzscrollbar)|Hides the horizontal scroll bar, if any, of the active window.|
|[CMFCTabCtrl::HideInactiveWindow](#hideinactivewindow)|Specifies whether the framework is to display inactive tab control windows.|
|[CMFCTabCtrl::HideNoTabs](#hidenotabs)|Enables or disables drawing the tab area if there are no visible tabs.|
|[CMFCTabCtrl::HideSingleTab](#hidesingletab)|Enables or disables drawing a tab when there is a single tabbed window. (Overrides [CMFCBaseTabCtrl::HideSingleTab](../../mfc/reference/cmfcbasetabctrl-class.md#hidesingletab).)|
|[CMFCTabCtrl::IsActiveInMDITabGroup](#isactiveinmditabgroup)|Indicates whether the current tab of a tab control is the active tab in an multiple document interface tab group.|
|[CMFCTabCtrl::IsActiveTabBoldFont](#isactivetabboldfont)|Indicates whether the text of the active tab is displayed using a bold font.|
|[CMFCTabCtrl::IsActiveTabCloseButton](#isactivetabclosebutton)|Indicates whether the Close button ( **X**) is displayed on an active tab or the upper-right corner of the tab area.|
|[CMFCTabCtrl::IsDrawFrame](#isdrawframe)|Indicates whether the tabbed window draws a frame rectangle around embedded panes.|
|[CMFCTabCtrl::IsFlatFrame](#isflatframe)|Indicates whether the frame around the tab area is flat or 3D.|
|[CMFCTabCtrl::IsFlatTab](#isflattab)|Indicates whether the appearance of the tabs in the current tab control is flat or not.|
|[CMFCTabCtrl::IsLeftRightRounded](#isleftrightrounded)|Indicates whether the appearance of the left and right side of a tab in the current tab control is rounded.|
|[CMFCTabCtrl::IsMDITabGroup](#ismditabgroup)|Indicates whether the current tab control is contained in the client area of a multiple-document interface window.|
|[CMFCTabCtrl::IsOneNoteStyle](#isonenotestyle)|Indicates whether the current tab control is displayed in the style of Microsoft OneNote.|
|`CMFCTabCtrl::IsPtInTabArea`|Determines if a point is inside the tab area. (Overrides [CMFCBaseTabCtrl::IsPtInTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#isptintabarea).)|
|[CMFCTabCtrl::IsSharedScroll](#issharedscroll)|Indicates whether the current tab control has a scroll bar that can scroll its tabs as a group.|
|[CMFCTabCtrl::IsTabDocumentsMenu](#istabdocumentsmenu)|Indicates whether the tab control displays scroll buttons or a button that displays a menu of tabbed windows.|
|[CMFCTabCtrl::IsVS2005Style](#isvs2005style)|Indicates whether tabs are displayed in the style of Visual Studio .NET 2005.|
|[CMFCTabCtrl::ModifyTabStyle](#modifytabstyle)|Specifies the appearance of tabs in the current tab control.|
|`CMFCTabCtrl::MoveTab`|Moves a tab to another tab position. (Overrides [CMFCBaseTabCtrl::MoveTab](../../mfc/reference/cmfcbasetabctrl-class.md#movetab).)|
|[CMFCTabCtrl::OnDragEnter](#ondragenter)|Called by the framework when the cursor is first dragged into the tab control window.|
|[CMFCTabCtrl::OnDragOver](#ondragover)|Called by the framework during a drag operation when the mouse is moved over the drop target window. (Overrides [CMFCBaseTabCtrl::OnDragOver](../../mfc/reference/cmfcbasetabctrl-class.md#ondragover).)|
|[CMFCTabCtrl::OnShowTabDocumentsMenu](#onshowtabdocumentsmenu)|Displays a popup menu of tabbed windows, waits until the user selects a tab, and makes the selected tab the active tab.|
|`CMFCTabCtrl::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. (Overrides [CMFCBaseTabCtrl::PreTranslateMessage](../../mfc/reference/cmfcbasetabctrl-class.md#pretranslatemessage).)|
|`CMFCTabCtrl::RecalcLayout`|Recalculates the internal layout of the tab control. (Overrides [CMFCBaseTabCtrl::RecalcLayout](../../mfc/reference/cmfcbasetabctrl-class.md#recalclayout).)|
|[CMFCTabCtrl::SetActiveInMDITabGroup](#setactiveinmditabgroup)|Sets the current tab of a tab control as the active tab in an multiple document interface tab group.|
|[CMFCTabCtrl::SetActiveTab](#setactivetab)|Activates a tab. (Overrides [CMFCBaseTabCtrl::SetActiveTab](../../mfc/reference/cmfcbasetabctrl-class.md#setactivetab).)|
|[CMFCTabCtrl::SetActiveTabBoldFont](#setactivetabboldfont)|Enables or disables use of a bold font on active tabs.|
|[CMFCTabCtrl::SetDrawFrame](#setdrawframe)|Enables or disables drawing a frame rectangle around an embedded bar.|
|[CMFCTabCtrl::SetFlatFrame](#setflatframe)|Specifies whether to draw a flat or a 3D frame around the tab area.|
|[CMFCTabCtrl::SetImageList](#setimagelist)|Specifies an image list. (Overrides [CMFCBaseTabCtrl::SetImageList](../../mfc/reference/cmfcbasetabctrl-class.md#setimagelist).)|
|[CMFCTabCtrl::SetResizeMode](#setresizemode)|Specifies how the current tab control can be resized and then redisplays the control.|
|[CMFCTabCtrl::SetTabMaxWidth](#settabmaxwidth)|Specifies the maximum tab width in a tabbed window.|
|[CMFCTabCtrl::StopResize](#stopresize)|Terminates the current resize operation on the tab control.|
|`CMFCTabCtrl::SwapTabs`|Swaps a pair of tabs. (Overrides [CMFCBaseTabCtrl::SwapTabs](../../mfc/reference/cmfcbasetabctrl-class.md#swaptabs).)|
|[CMFCTabCtrl::SynchronizeScrollBar](#synchronizescrollbar)|Draws a horizontal scroll bar on a tab control that displays flat tabs.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCTabCtrl::m_bEnableActivate](#m_benableactivate)|Prevents the active view from losing focus when a new tab is inserted and enabled.|

## Remarks

The `CMFCTabCtrl` class supports:

- Tab control styles that include 3D, flat, and flat with a shared horizontal scroll bar.

- Tabs located at the top or the bottom of the window.

- Tabs that display text, images, or text and images.

- Tabs that change color when the tab is active.

- Border size changes for adjustable tabs.

- Detachable tabbed windows.

The `CMFCTabCtrl` class can be used with a dialog box, but is intended for applications that use docking control bars like Microsoft Excel and Visual Studio. For more information, see [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).

Follow these steps to add a resizable, docking tab control in your application:

1. Create an instance of [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md).

1. Call [CDockablePane::Create](../../mfc/reference/cdockablepane-class.md#create).

1. Use [CBaseTabbedPane::AddTab](../../mfc/reference/cbasetabbedpane-class.md#addtab) or [CMFCBaseTabCtrl::InsertTab](../../mfc/reference/cmfcbasetabctrl-class.md#inserttab) to add new tabs.

1. Call [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking) so that the current docking tab control can dock at the main frame window.

1. Call [CFrameWndEx::DockPane](../../mfc/reference/cframewndex-class.md#dockpane) to dock the tabbed window at the main frame.

For an example of how to create a tabbed window as a docking control bar, see [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md). To use `CMFCTabCtrl` as a non-docking control, create a `CMFCTabCtrl` object and then call [CMFCTabCtrl::Create](#create).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)

[CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md)

## Example

The following example demonstrates how to use various methods in the `CMFCTabCtrl` class to configure a `CMFCTabCtrl` object. The example explains how to add a tab, show the Close button on the active tab, enable editable tab labels, and display a pop-up menu of tabbed window labels. This example is part of the [State Collection sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_StateCollection#1](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_1.h)]
[!code-cpp[NVC_MFC_StateCollection#3](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_2.cpp)]

## Requirements

**Header:** afxtabctrl.h

## <a name="activatemditab"></a> CMFCTabCtrl::ActivateMDITab

Displays the specified tab of the current tab control and sets the focus on that tab.

```cpp
void ActivateMDITab(int nTab = -1);
```

### Parameters

*nTab*<br/>
[in] The zero-based index of a tab to display, or -1 to specify the currently active tab.

## <a name="allowdestroyemptytabbedpane"></a> CMFCTabCtrl::AllowDestroyEmptyTabbedPane

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual BOOL AllowDestroyEmptyTabbedPane() const;
```

### Return Value

Always TRUE.

### Remarks

## <a name="autosizewindow"></a> CMFCTabCtrl::AutoSizeWindow

Specifies whether the framework is to resize the client area of all tab control windows when a user interface element of the tab control changes.

```cpp
void AutoSizeWindow(BOOL bAutoSize = TRUE);
```

### Parameters

*bAutoSize*<br/>
[in] TRUE to automatically resize tab control windows; otherwise, FALSE. The default value is TRUE.

### Remarks

## <a name="create"></a> CMFCTabCtrl::Create

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

*style*<br/>
[in] The style of the tab control. For more information, see Remarks.

*rect*<br/>
[in] A rectangle that bounds the tab control.

*pParentWnd*<br/>
[in] A pointer to a parent window. Must not be NULL.

*nID*<br/>
[in] The ID of the tab control.

*location*<br/>
[in] The location of tabs. The default value is LOCATION_BOTTOM. For more information, see Remarks.

*bCloseBtn*<br/>
[in] TRUE to display a close button on the tab; otherwise, FALSE. The default value is FALSE.

### Return Value

TRUE if successful; otherwise, FALSE.

### Remarks

The following table describes the values you can specify for the *style* parameter.

|Style|Description|
|-----------|-----------------|
|STYLE_3D|Creates a tab control with a three-dimensional appearance.|
|STYLE_FLAT|Creates a tab control with flat tabs.|
|STYLE_FLAT_SHARED_HORZ_SCROLL|Creates a tab control with flat tabs and a scroll bar that can scroll the tabs if they are clipped by a parent window.|
|STYLE_3D_ONENOTE|Creates a tab control in the style of Microsoft OneNote.|
|STYLE_3D_VS2005|Creates a tab control in the style of Microsoft Visual Studio 2005.|
|STYLE_3D_ROUNDED|Creates a tab control with rounded tabs in the style of Microsoft Visual Studio 2005.|
|STYLE_3D_ROUNDED_SCROLL|Creates a tab control with rounded tabs and scroll buttons in the style of Microsoft Visual Studio 2005.|

The following table lists the values you can specify for the *location* parameter.

|Location|Description|
|--------------|-----------------|
|LOCATION_BOTTOM|Tabs are located at the bottom of the tab control.|
|LOCATION_TOP|Tabs are located at the top of the tab control.|

### Example

The following example demonstrates how to use the `Create` method in the `CMFCTabCtrl` class. This example is part of the [State Collection sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_StateCollection#1](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_1.h)]
[!code-cpp[NVC_MFC_StateCollection#2](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_3.cpp)]

## <a name="calcrectedit"></a> CMFCTabCtrl::CalcRectEdit

Deflates the size of the specified tab area.

```
virtual void CalcRectEdit(CRect& rectEdit);
```

### Parameters

*rectEdit*<br/>
[in] A rectangle that specifies the area of a tab.

### Remarks

This method is called when you change the label of a tab. This method deflates the left and right sides of the specified rectangle by one-half the current tab height, and deflates the top and bottom by one unit.

## <a name="enableactivetabclosebutton"></a> CMFCTabCtrl::EnableActiveTabCloseButton

Shows or hides a Close button ( **X**) on the active tab.

```cpp
void EnableActiveTabCloseButton(BOOL bEnable=TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to display the Close button on the active tab; FALSE to display the Close button on the upper-right corner of the tab area. The default value is TRUE.

## <a name="enableinplaceedit"></a> CMFCTabCtrl::EnableInPlaceEdit

Enables or disables editable tab labels.

```
virtual void EnableInPlaceEdit(BOOL bEnable);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable editable tab labels; FALSE to disable editable tab labels.

### Remarks

## <a name="enabletabdocumentsmenu"></a> CMFCTabCtrl::EnableTabDocumentsMenu

Toggles between a user interface that uses two buttons to scroll the window tabs and an interface that displays a pop-up menu of tabbed windows.

```cpp
void EnableTabDocumentsMenu(BOOL bEnable=TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to display a pop-up menu of tabbed window labels; FALSE to display forward and backward scroll buttons. The default value is TRUE.

### Remarks

When the user clicks a tab label, the framework displays the corresponding tabbed window. If the tab label is visible, the tabbed window is opened without changing its position. If the user selects a document from the pop-up menu and the corresponding tabbed window is off screen, the tabbed window becomes the first tab.

## <a name="ensurevisible"></a> CMFCTabCtrl::EnsureVisible

Ensures that a tab is visible.

```
virtual BOOL EnsureVisible(int iTab);
```

### Parameters

*iTab*<br/>
[in] The zero-based index of a tab.

### Return Value

TRUE if it is successful; FALSE if the *iTab* parameter index is invalid.

### Remarks

Use this method to guarantee that the specified tab is visible. The tab control will scroll if it is required.

## <a name="getdocumenticon"></a> CMFCTabCtrl::GetDocumentIcon

Retrieves the image that is associated with a tab in a pop-up menu of tabbed windows.

```
static HICON __stdcall GetDocumentIcon(UINT nCmdID);
```

### Parameters

*nCmdID*<br/>
[in] The command ID of a tab in a pop-up menu of tabbed windows.

### Return Value

The handle of a bitmap image.

## <a name="getfirstvisibletabnum"></a> CMFCTabCtrl::GetFirstVisibleTabNum

Retrieves the index of the first tab that is visible in the current tab control.

```
virtual int GetFirstVisibleTabNum() const;
```

### Return Value

The zero-based index of a tab in the tab control.

### Remarks

Use this method only when the tab control is displayed in the style of Microsoft OneNote. Use the [CMFCTabCtrl::IsOneNoteStyle](#isonenotestyle) method to determine the style.

## <a name="getresizemode"></a> CMFCTabCtrl::GetResizeMode

Retrieves a value that specifies how the current tab control can be resized.

```
ResizeMode GetResizeMode() const;
```

### Return Value

One of the `CMFCTabCtrl::ResizeMode` enumeration values that specifies how the tab control can be resized. For a list of possible values, see the Remarks section of the [CMFCTabCtrl::SetResizeMode](#setresizemode) method.

## <a name="getscrollbar"></a> CMFCTabCtrl::GetScrollBar

Retrieves a pointer to the scroll bar object that is associated with the tab control.

```
CScrollBar* GetScrollBar();
```

### Return Value

A pointer to a scrollbar object, or a NULL if the tab control was not created by using the STYLE_FLAT_SHARED_HORZ_SCROLL style.

### Remarks

Use this method to access the tab control's embedded scroll bar. A scroll bar object is created only when the tab control has the STYLE_FLAT_SHARED_HORZ_SCROLL style.

## <a name="gettabarea"></a> CMFCTabCtrl::GetTabArea

Retrieves the bounding rectangle of the tab label area at the top or bottom of the tab control.

```cpp
void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### Parameters

*rectTabAreaTop*<br/>
[out] When this method returns, this reference contains a rectangle that bounds the top tab label area. The rectangle is in client coordinates. This reference is empty if no tab label area exists at the top of the tab control.

*rectTabAreaBottom*<br/>
[out] When this method returns, this reference contains a rectangle that bounds the bottom tab label area. The rectangle is in client coordinates. This reference is empty if no tab label area exists at the bottom of the tab control.

### Remarks

Use this method to determine the size and position of the tab area in the tabbed window.

## <a name="gettabmaxwidth"></a> CMFCTabCtrl::GetTabMaxWidth

Retrieves the maximum width of a tab.

```
int GetTabMaxWidth() const;
```

### Return Value

Maximum width of a tab, in pixels. If the return value is 0, the tab width is unlimited.

### Remarks

Use the [CMFCTabCtrl::SetTabMaxWidth](#settabmaxwidth) method to set maximum tab width.

## <a name="gettabsheight"></a> CMFCTabCtrl::GetTabsHeight

Retrieves the height of the tab area of the current tab control.

```
virtual int GetTabsHeight() const;
```

### Return Value

The height of the tab area if any tab is visible, or zero if no tab is visible.

## <a name="gettabsrect"></a> CMFCTabCtrl::GetTabsRect

Retrieves a rectangle that bounds the tab area of the current tab control.

```
virtual void GetTabsRect(CRect& rect) const;
```

### Parameters

*rect*<br/>
[out] When this method returns, the *rect* parameter contains a rectangle that bounds the tab area.

## <a name="getwndarea"></a> CMFCTabCtrl::GetWndArea

Retrieves the boundary of the client area of the current tab control.

```cpp
void GetWndArea(CRect& rect) const;
```

### Parameters

*rect*<br/>
[in, out] When this method returns, this parameter contains a rectangle that bounds the current tab control.

### Remarks

## <a name="hideactivewindowhorzscrollbar"></a> CMFCTabCtrl::HideActiveWindowHorzScrollBar

Hides the horizontal scroll bar, if any, in the active window.

```cpp
void HideActiveWindowHorzScrollBar();
```

### Remarks

Use this method to prevent the tab control from blinking when the user switches between tab control pages.

## <a name="hideinactivewindow"></a> CMFCTabCtrl::HideInactiveWindow

Specifies whether the framework displays inactive tab control windows.

```cpp
void HideInactiveWindow(BOOL bHide = TRUE);
```

### Parameters

*bHide*<br/>
[in] TRUE not to display an inactive window; FALSE to display an inactive window. The default value is TRUE.

### Remarks

## <a name="hidenotabs"></a> CMFCTabCtrl::HideNoTabs

Enables or disables drawing of the tab area if there are no visible tabs.

```cpp
void HideNoTabs(BOOL bHide=TRUE);
```

### Parameters

*bHide*<br/>
[in] TRUE to enable drawing the tab area; FALSE to disable drawing. The default value is TRUE.

### Remarks

## <a name="hidesingletab"></a> CMFCTabCtrl::HideSingleTab

Enables or disables tab drawing if there is a single tabbed window.

```
virtual void HideSingleTab(BOOL bHide=TRUE);
```

### Parameters

*bHide*<br/>
[in] TRUE to not draw a tab for a single tabbed window; FALSE to draw a single tab. The default value is TRUE.

### Remarks

## <a name="isactiveinmditabgroup"></a> CMFCTabCtrl::IsActiveInMDITabGroup

Indicates whether the current tab of a tab control is the active tab in a multiple document interface tab group.

```
BOOL IsActiveInMDITabGroup() const;
```

### Return Value

TRUE if the current tab of a tab control is the active tab in an MDI tab group; otherwise, FALSE.

### Remarks

You can organize multiple document windows into either vertical or horizontal tab groups and easily shuffle documents from one tab group to another.

## <a name="isactivetabboldfont"></a> CMFCTabCtrl::IsActiveTabBoldFont

Indicates whether the text of the active tab is displayed using a bold font.

```
BOOL IsActiveTabBoldFont() const;
```

### Return Value

TRUE if the active tab is displayed using the bold font; otherwise, FALSE.

### Remarks

Use the [CMFCTabCtrl::SetActiveTabBoldFont](#setactivetabboldfont) method to change the active tab font.

## <a name="isactivetabclosebutton"></a> CMFCTabCtrl::IsActiveTabCloseButton

Indicates whether the Close button ( **X**) is displayed on an active tab or on the upper-right corner of the tab area.

```
virtual BOOL IsActiveTabCloseButton() const;
```

### Return Value

TRUE if the Close button is displayed on the active tab; FALSE if the Close button is displayed on the upper-right corner of the tab area.

### Remarks

## <a name="isdrawframe"></a> CMFCTabCtrl::IsDrawFrame

Indicates whether the tabbed window draws a frame rectangle around embedded panes.

```
BOOL IsDrawFrame() const;
```

### Return Value

TRUE if a frame rectangle is drawn; otherwise, FALSE.

### Remarks

Use the [CMFCTabCtrl::SetDrawFrame](#setdrawframe) method to enable or disable drawing a frame rectangle.

## <a name="isflatframe"></a> CMFCTabCtrl::IsFlatFrame

Indicates whether the frame around the tab area is flat or 3D.

```
BOOL IsFlatFrame() const;
```

### Return Value

TRUE if the frame around the tab area is flat; FALSE if the frame is three-dimensional.

### Remarks

Use the [CMFCTabCtrl::SetFlatFrame](#setflatframe) method to change how the frame is drawn.

## <a name="isflattab"></a> CMFCTabCtrl::IsFlatTab

Indicates whether the appearance of the tabs in the current tab control is flat or not.

```
virtual BOOL IsFlatTab() const;
```

### Return Value

TRUE if the appearance of the tabs in the current tab control is flat; otherwise, FALSE.

## <a name="isleftrightrounded"></a> CMFCTabCtrl::IsLeftRightRounded

Indicates whether the appearance of the left and right side of a tab in the current tab control is rounded.

```
virtual BOOL IsLeftRightRounded() const;
```

### Return Value

TRUE if the sides of each tab is rounded; otherwise, FALSE.

## <a name="ismditabgroup"></a> CMFCTabCtrl::IsMDITabGroup

Indicates whether the current tab control is contained in the client area of a multiple-document interface window.

```
virtual BOOL IsMDITabGroup() const;
```

### Return Value

TRUE if the current tab control is in an MDI client area window; otherwise, FALSE.

## <a name="isonenotestyle"></a> CMFCTabCtrl::IsOneNoteStyle

Indicates whether the current tab control is displayed in the style of Microsoft OneNote.

```
virtual BOOL IsOneNoteStyle() const;
```

### Return Value

TRUE if the tab control is displayed in the style of Microsoft OneNote; otherwise, FALSE.

## <a name="issharedscroll"></a> CMFCTabCtrl::IsSharedScroll

Indicates whether the current tab control has a scroll bar that can scroll its tabs as a group.

```
BOOL IsSharedScroll() const;
```

### Return Value

TRUE if the tab control has a shared scroll bar; otherwise, FALSE.

### Remarks

This method returns TRUE if the *style* parameter of the [CMFCTabCtrl::Create](#create) method is STYLE_FLAT_SHARED_HORZ_SCROLL.

## <a name="istabdocumentsmenu"></a> CMFCTabCtrl::IsTabDocumentsMenu

Indicates whether the tab control displays scroll buttons or a button that displays a menu of tabbed windows.

```
BOOL IsTabDocumentsMenu() const;
```

### Return Value

TRUE if tabbed windows are scrolled using a popup menu of tabbed window labels; FALSE if tabbed windows are scrolled using forward and backward scroll buttons.

### Remarks

Use the [CMFCTabCtrl::EnableTabDocumentsMenu](#enabletabdocumentsmenu) method to specify the method of scrolling tabbed windows.

## <a name="isvs2005style"></a> CMFCTabCtrl::IsVS2005Style

Indicates whether tabs are drawn using the style of Visual Studio 2005.

```
virtual BOOL IsVS2005Style() const;
```

### Return Value

TRUE if tabs are drawn using the style of Visual Studio 2005; otherwise, FALSE.

### Remarks

Use the *style* parameter of the [CMFCTabCtrl::Create](#create) method to specify how tabs are drawn.

## <a name="m_benableactivate"></a> CMFCTabCtrl::m_bEnableActivate

Prevents the active view from losing focus when a new tab is inserted and enabled.

```
static BOOL m_bEnableActivate;
```

### Remarks

The focus is usually taken by a new tabbed window when the tab is inserted and made active. Set the `CMFCTabCtrl::m_bEnableActivate` member variable to FALSE to retain the original focus. The default value is TRUE.

## <a name="modifytabstyle"></a> CMFCTabCtrl::ModifyTabStyle

Specifies the appearance of tabs in the current tab control.

```
BOOL ModifyTabStyle(Style style);
```

### Parameters

*style*<br/>
[in] One of the enumeration values that specifies the appearance of the tab control. For more information, see the table in Remarks.

### Return Value

Always TRUE.

### Remarks

The value of the *style* parameter can be one of the following `CMFCTabCtrl::Style` enumerations.

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

## <a name="ondragenter"></a> CMFCTabCtrl::OnDragEnter

Called by the framework during a drag-and-drop operation when the cursor first enters the window of the current tab control.

```
virtual DROPEFFECT OnDragEnter(
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### Parameters

*pDataObject*<br/>
[in] Points to a data object that contains data that the user drags.

*dwKeyState*<br/>
[in] Contains the state of the modifier keys. This parameter is a bitwise combination (OR) of the following values: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON, and MK_RBUTTON. For more information, see the **Message Parameters** section of [About Mouse Input](/windows/win32/inputdev/about-mouse-input).

*point*<br/>
[in] Contains the current location of the cursor in client coordinates.

### Return Value

Always DROPEFFECT_NONE, which means that the drop target cannot accept the data.

### Remarks

Use this method to support a drag-and-drop operation. Override this method to implement your own custom behavior.

By default, this method only calls `CMFCTabCtrl::OnDragOver`, which always returns DROPEFFECT_NONE.

## <a name="ondragover"></a> CMFCTabCtrl::OnDragOver

Called by the framework during a drag operation when the mouse is moved over the drop target window.

```
virtual DROPEFFECT OnDragOver(
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### Parameters

*pDataObject*<br/>
[in] Pointer to a [COleDataObject](../../mfc/reference/coledataobject-class.md) object that is being dragged over the drop target.

*dwKeyState*<br/>
[in] The state of the modifier keys, which is a bitwise combination (OR) of MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON, and MK_RBUTTON. For more information, see "Message Parameters" in [About Mouse Input](/windows/win32/inputdev/about-mouse-input).

*point*<br/>
[in] The current mouse position.

### Return Value

Always DROPEFFECT_NONE.

### Remarks

Override this method with your custom implementation. For more information, see the [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover) method.

## <a name="onshowtabdocumentsmenu"></a> CMFCTabCtrl::OnShowTabDocumentsMenu

Displays a pop-up menu of tabbed windows, waits until the user selects a tab, and makes the selected tab the active tab.

```
virtual void OnShowTabDocumentsMenu(CPoint point);
```

### Parameters

*point*<br/>
[in] The coordinates of where to display the pop-up menu.

### Remarks

## <a name="setactiveinmditabgroup"></a> CMFCTabCtrl::SetActiveInMDITabGroup

Sets the current tab of a tab control as the active tab in a multiple document interface tab group.

```cpp
void SetActiveInMDITabGroup(BOOL bActive);
```

### Parameters

*bActive*<br/>
[in] TRUE to make the current tab the active tab; FALSE to make the current tab inactive.

### Remarks

You can organize multiple document windows into either vertical or horizontal tab groups and easily shuffle documents from one tab group to another.

## <a name="setactivetab"></a> CMFCTabCtrl::SetActiveTab

Activates a tab.

```
virtual BOOL SetActiveTab(int iTab);
```

### Parameters

*iTab*<br/>
[in] Specifies the zero-based index of the tab to activate.

### Return Value

TRUE if the specified tab was made active; FALSE if the specified *iTab* parameter value is invalid.

### Remarks

This sends the `AFX_WM_CHANGE_ACTIVE_TAB` notification to the parent window and the parent's frame of the tab control.

The `SetActiveTab` method automatically calls the [CMFCTabCtrl::HideActiveWindowHorzScrollBar](#hideactivewindowhorzscrollbar) method to prevent the screen from blinking.

## <a name="setactivetabboldfont"></a> CMFCTabCtrl::SetActiveTabBoldFont

Enables or disables use of a bold font on active tabs.

```cpp
void SetActiveTabBoldFont(BOOL bIsBold=TRUE);
```

### Parameters

*bIsBold*<br/>
[in] TRUE to use a bold font to display the label of the active tab; FALSE to use the standard font to display the label. The default value is TRUE.

### Remarks

## <a name="setdrawframe"></a> CMFCTabCtrl::SetDrawFrame

Specifies whether a frame rectangle is drawn around an embedded bar.

```cpp
void SetDrawFrame(BOOL bDraw=TRUE);
```

### Parameters

*bDraw*<br/>
[in] TRUE to display a frame rectangle around an embedded bar; otherwise, FALSE. The default value is TRUE.

### Remarks

## <a name="setflatframe"></a> CMFCTabCtrl::SetFlatFrame

Specifies whether to draw a flat or a 3D frame around the tab area.

```cpp
void SetFlatFrame(
    BOOL bFlat=TRUE,
    BOOL bRepaint=TRUE);
```

### Parameters

*bFlat*<br/>
[in] TRUE to draw a flat (2D) frame around the tab area; FALSE to draw a three-dimensional (3D) frame. The default value is TRUE.

*bRepaint*<br/>
[in] TRUE to redraw the window immediately; otherwise, FALSE. The default value is TRUE.

### Remarks

## <a name="setimagelist"></a> CMFCTabCtrl::SetImageList

Specifies an image list.

```
virtual BOOL SetImageList(
    UINT uiID,
    int cx=15,
    COLORREF clrTransp=RGB(255, 0, 255));

virtual BOOL SetImageList(HIMAGELIST hImageList);
```

### Parameters

*uiID*<br/>
[in] The ID of a bitmap resource that contains the image list.

*cx*<br/>
[in] The width of each image, in pixels. The default value is 15.

*clrTransp*<br/>
[in] The transparent image color. The parts of the image that are this color will be transparent. The default value is the color magenta, RGB(255,0,255).

*hImageList*<br/>
[in] A handle to a preloaded image list.

### Return Value

TRUE if this method is successful. FALSE if the tab control is created by using a flat style or if the first method overload cannot load the bitmap that is specified by the *uiID* parameter.

### Remarks

Use this method to set an image list for the tab control. The images from the image list are displayed next to the tab label. This method recalculates the tab height so that the tab is sized to contain both the image and the text.

Use the [CMFCBaseTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) method that is inherited by the tab control to specify the index of the image to display.

## <a name="setresizemode"></a> CMFCTabCtrl::SetResizeMode

Specifies how the current tab control can be resized and then redisplays the control.

```cpp
void SetResizeMode(ResizeMode resizeMode);
```

### Parameters

*resizeMode*<br/>
[in] One of the `CMFCTabCtrl::ResizeMode` enumeration values that specifies how the tab control can be resized. For a list of possible values, see the table in Remarks.

### Remarks

The *resizeMode* parameter can be one of the following `ResizeMode` enumeration values.

|Name|Description|
|----------|-----------------|
|RESIZE_NO|The tab control cannot be resized.|
|RESIZE_VERT|The tab control can be resized vertically but not horizontally.|
|RESIZE_HORIZ|The tab control can be resized horizontally but not vertically.|

## <a name="settabmaxwidth"></a> CMFCTabCtrl::SetTabMaxWidth

Specifies the maximum tab width in a tabbed window.

```cpp
void SetTabMaxWidth(int nTabMaxWidth);
```

### Parameters

*nTabMaxWidth*<br/>
[in] The maximum tab width, in pixels.

### Remarks

Use this method to limit the width of each tab in a tabbed window. This method is useful if tabs have very long labels. The [CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md) class constructor initializes the maximum tab width to 0, which actually means that the width is not limited.

## <a name="stopresize"></a> CMFCTabCtrl::StopResize

Terminates the current resize operation on the tab control.

```cpp
void StopResize(BOOL bCancel);
```

### Parameters

*bCancel*<br/>
[in] TRUE to abandon the current resize operation; FALSE to complete the current resize operation. In either case, the framework stops drawing the resize rectangle.

## <a name="synchronizescrollbar"></a> CMFCTabCtrl::SynchronizeScrollBar

Draws a horizontal scroll bar on a tab control that displays flat tabs.

```
BOOL SynchronizeScrollBar(SCROLLINFO* pScrollInfo = NULL);
```

### Parameters

*pScrollInfo*<br/>
[out] Pointer to a [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) structure or NULL. When this method returns, and if this parameter is not NULL, the structure contains all the parameters of the scroll bar. The default value is NULL.

### Return Value

TRUE if this method succeeds; otherwise, FALSE.

### Remarks

This method affects only a tab control that displays flat tabs. The scroll bar influences all the tabs at the same time.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)<br/>
[CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md)
