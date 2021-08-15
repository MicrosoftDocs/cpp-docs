---
description: "Learn more about: CMFCOutlookBarTabCtrl Class"
title: "CMFCOutlookBarTabCtrl Class"
ms.date: "10/18/2018"
f1_keywords: ["CMFCOutlookBarTabCtrl", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::AddControl", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::CanShowFewerPageButtons", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::CanShowMorePageButtons", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::Create", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::EnableAnimation", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::EnableInPlaceEdit", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::EnableScrollButtons", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::GetBorderSize", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::GetVisiblePageButtons", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::IsAnimation", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::IsMode2003", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::OnShowFewerPageButtons", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::OnShowMorePageButtons", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::OnShowOptions", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetActiveTab", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetBorderSize", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetPageButtonTextAlign", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetToolbarImageList", "AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetVisiblePageButtons"]
helpviewer_keywords: ["CMFCOutlookBarTabCtrl [MFC], AddControl", "CMFCOutlookBarTabCtrl [MFC], CanShowFewerPageButtons", "CMFCOutlookBarTabCtrl [MFC], CanShowMorePageButtons", "CMFCOutlookBarTabCtrl [MFC], Create", "CMFCOutlookBarTabCtrl [MFC], EnableAnimation", "CMFCOutlookBarTabCtrl [MFC], EnableInPlaceEdit", "CMFCOutlookBarTabCtrl [MFC], EnableScrollButtons", "CMFCOutlookBarTabCtrl [MFC], GetBorderSize", "CMFCOutlookBarTabCtrl [MFC], GetVisiblePageButtons", "CMFCOutlookBarTabCtrl [MFC], IsAnimation", "CMFCOutlookBarTabCtrl [MFC], IsMode2003", "CMFCOutlookBarTabCtrl [MFC], OnShowFewerPageButtons", "CMFCOutlookBarTabCtrl [MFC], OnShowMorePageButtons", "CMFCOutlookBarTabCtrl [MFC], OnShowOptions", "CMFCOutlookBarTabCtrl [MFC], SetActiveTab", "CMFCOutlookBarTabCtrl [MFC], SetBorderSize", "CMFCOutlookBarTabCtrl [MFC], SetPageButtonTextAlign", "CMFCOutlookBarTabCtrl [MFC], SetToolbarImageList", "CMFCOutlookBarTabCtrl [MFC], SetVisiblePageButtons"]
ms.assetid: b1f2b3f7-cc59-49a3-99d8-7ff9b37c044b
---
# CMFCOutlookBarTabCtrl Class

A tab control that has the visual appearance of the **Navigation Pane** in Microsoft Outlook.
For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCOutlookBarTabCtrl : public CMFCBaseTabCtrl
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCOutlookBarTabCtrl::CMFCOutlookBarTabCtrl`|Default constructor.|
|`CMFCOutlookBarTabCtrl::~CMFCOutlookBarTabCtrl`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCOutlookBarTabCtrl::AddControl](#addcontrol)|Adds a Windows control as a new tab in the Outlook bar.|
|`CMFCOutlookBarTabCtrl::CalcRectEdit`|Called by the framework to determine the dimensions of the edit box that appears when a user renames a tab. (Overrides `CMFCBaseTabCtrl::CalcRectEdit`.)|
|[CMFCOutlookBarTabCtrl::CanShowFewerPageButtons](#canshowfewerpagebuttons)|Called by the framework during resizing operations to determine if fewer Outlook bar tab page buttons can be displayed than are currently visible.|
|[CMFCOutlookBarTabCtrl::CanShowMorePageButtons](#canshowmorepagebuttons)|Called by the framework during resizing operations to determine if more Outlook bar tab page buttons can be displayed than are currently visible.|
|[CMFCOutlookBarTabCtrl::Create](#create)|Creates the Outlook bar tab control.|
|`CMFCOutlookBarTabCtrl::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|[CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation)|Specifies whether the animation that occurs during the switch between active tabs is enabled.|
|[CMFCOutlookBarTabCtrl::EnableInPlaceEdit](#enableinplaceedit)|Specifies whether a user can modify the text labels on the tab buttons of the Outlook bar. (Overrides [CMFCBaseTabCtrl::EnableInPlaceEdit](../../mfc/reference/cmfcbasetabctrl-class.md#enableinplaceedit).)|
|[CMFCOutlookBarTabCtrl::EnableScrollButtons](#enablescrollbuttons)|Called by the framework to enable buttons that allow the user to scroll through buttons on the Outlook bar pane.|
|`CMFCOutlookBarTabCtrl::FindTargetWnd`|Identifies the pane that contains a specified point. (Overrides [CMFCBaseTabCtrl::FindTargetWnd](../../mfc/reference/cmfcbasetabctrl-class.md#findtargetwnd).)|
|[CMFCOutlookBarTabCtrl::GetBorderSize](#getbordersize)|Returns the border size of the Outlook tab control.|
|`CMFCOutlookBarTabCtrl::GetTabArea`|Retrieves the size and position of the tab area of the tab control. (Overrides [CMFCBaseTabCtrl::GetTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#gettabarea).)|
|`CMFCOutlookBarTabCtrl::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCOutlookBarTabCtrl::GetVisiblePageButtons](#getvisiblepagebuttons)||
|[CMFCOutlookBarTabCtrl::IsAnimation](#isanimation)|Determines whether the animation that occurs during the switch between active tabs is enabled.|
|[CMFCOutlookBarTabCtrl::IsMode2003](#ismode2003)|Determines if the Outlook bar tab control is in a mode that emulates Microsoft Outlook 2003.|
|`CMFCOutlookBarTabCtrl::IsPtInTabArea`|Determines if a point is inside the tab area. (Overrides [CMFCBaseTabCtrl::IsPtInTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#isptintabarea).)|
|`CMFCOutlookBarTabCtrl::IsTabDetachable`|Determines whether a tab is detachable. (Overrides [CMFCBaseTabCtrl::IsTabDetachable](../../mfc/reference/cmfcbasetabctrl-class.md#istabdetachable).)|
|`CMFCOutlookBarTabCtrl::OnChangeTabs`|Called by the framework when a tab is inserted or removed. (Overrides `CMFCBaseTabCtrl::OnChangeTabs`.)|
|[CMFCOutlookBarTabCtrl::OnShowFewerPageButtons](#onshowfewerpagebuttons)|Called by the framework to decrease the number of tab page buttons that are visible.|
|[CMFCOutlookBarTabCtrl::OnShowMorePageButtons](#onshowmorepagebuttons)|Called by the framework to increase the number of tab page buttons that are visible.|
|[CMFCOutlookBarTabCtrl::OnShowOptions](#onshowoptions)|Displays the **Navigation Pane Options** dialog.|
|`CMFCOutlookBarTabCtrl::RecalcLayout`|Recalculates the internal layout of the tab control. (Overrides [CMFCBaseTabCtrl::RecalcLayout](../../mfc/reference/cmfcbasetabctrl-class.md#recalclayout).)|
|[CMFCOutlookBarTabCtrl::SetActiveTab](#setactivetab)|Sets the active tab. (Overrides [CMFCBaseTabCtrl::SetActiveTab](../../mfc/reference/cmfcbasetabctrl-class.md#setactivetab).)|
|[CMFCOutlookBarTabCtrl::SetBorderSize](#setbordersize)|Sets the border size of the Outlook tab control.|
|[CMFCOutlookBarTabCtrl::SetPageButtonTextAlign](#setpagebuttontextalign)|Sets the alignment of the text labels on the tab buttons of the Outlook bar.|
|[CMFCOutlookBarTabCtrl::SetToolbarImageList](#settoolbarimagelist)|Sets the bitmap that contains the icons that are displayed on the bottom of the Outlook bar in Outlook 2003 mode (see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)).|
|[CMFCOutlookBarTabCtrl::SetVisiblePageButtons](#setvisiblepagebuttons)||

## Remarks

To create an Outlook bar that has docking support, use a `CMFCOutlookBar` object to host the Outlook bar tab control. For more information, see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).

## Example

The following example demonstrates how to initialize a `CMFCOutlookBarTabCtrl` object and use various methods in the `CMFCOutlookBarTabCtrl` class. The example shows how to enable the in-place editing of the text label on the tab page buttons of the Outlook bar, enable the animation, enable scroll handles that enable the user to scroll through buttons on the Outlook bar pane, set the border size of the Outlook tab control, and set the alignment of the text labels on the tab buttons of the Outlook bar. This code snippet is part of the [Outlook Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookDemo#1](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_1.cpp)]
[!code-cpp[NVC_MFC_OutlookDemo#2](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)

[CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)

## Requirements

**Header:** afxoutlookbartabctrl.h

## <a name="addcontrol"></a> CMFCOutlookBarTabCtrl::AddControl

Adds a Windows control as a new tab in the Outlook bar.

```cpp
void AddControl(
    CWnd* pWndCtrl,
    LPCTSTR lpszName,
    int nImageID=-1,
    BOOL bDetachable=TRUE,
    DWORD dwControlBarStyle=AFX_CBRS_FLOAT |  AFX_CBRS_CLOSE | AFX_CBRS_RESIZE |  CBRS_AFX_AUTOHIDE);
```

### Parameters

*pWndCtrl*<br/>
[in] A pointer to a control to add.

*lpszName*<br/>
[in] Specifies the name of tab.

*bDetachable*<br/>
[in] If TRUE, the page will be created as detachable.

*nImageID*<br/>
[in] Image index in the internal image list for the image to be displayed in the new tab.

*dwControlBarStyle*<br/>
[in] Specifies the AFX_ CBRS_* style for wrapped docking panes.

### Remarks

Use this function to add a control as a new page of an outlook bar.

This function internally calls on [CMFCBaseTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab).

If you set *bDetachable* to TRUE, `AddControl` internally creates a `CDockablePaneAdapter` object and wraps the added control. It automatically sets the runtime class of the tabbed window to the runtime class of `CMFCOutlookBar` and the runtime class of the floating frame to `CMultiPaneFrameWnd`.

### Example

The following example demonstrates how to use the `AddControl` method in the `CMFCOutlookBarTabCtrl` class. This code snippet is part of the [Outlook Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookDemo#3](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_3.cpp)]

## <a name="canshowfewerpagebuttons"></a> CMFCOutlookBarTabCtrl::CanShowFewerPageButtons

Called by the framework during resizing operations to determine whether fewer Outlook bar tab page buttons can be displayed than are currently visible.

```
virtual BOOL CanShowFewerPageButtons() const;
```

### Return Value

TRUE if there is more than one button; otherwise FALSE.

### Remarks

The Outlook bar tab control dynamically adds or removes tabs from the display depending on how much room is available. This method is used by the framework to assist in that process.

## <a name="canshowmorepagebuttons"></a> CMFCOutlookBarTabCtrl::CanShowMorePageButtons

Called by the framework during resizing operations to determine whether more Outlook bar tab page buttons can be displayed than are currently visible.

```
virtual BOOL CanShowMorePageButtons() const;
```

### Return Value

TRUE if there are buttons that are not currently visible; otherwise FALSE.

### Remarks

The Outlook bar tab control dynamically adds or removes tabs from the display, depending on how much room is available. This method is used by the framework to assist in that process.

## <a name="create"></a> CMFCOutlookBarTabCtrl::Create

Creates the Outlook bar tab control.

```
virtual BOOL Create(
    const CRect& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*rect*<br/>
[in] Specifies the initial size and position, in pixels.

*pParentWnd*<br/>
[in] Points to the parent window. Must not be NULL.

*nID*<br/>
[in] The control ID.

### Return Value

Nonzero if the control has been created successfully; otherwise 0.

### Remarks

Usually, outlook bar tab controls are created when [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md) controls the WM_CREATE message of the process.

## <a name="enableanimation"></a> CMFCOutlookBarTabCtrl::EnableAnimation

Specifies whether the animation that occurs during the switch between active tabs is enabled.

```
static void EnableAnimation(BOOL bEnable=TRUE);
```

### Parameters

*bEnable*<br/>
[in] Specifies whether the animation should be enabled or disabled.

### Remarks

Call this function to enable and disable animation. When the user opens a tab page, the page's caption slides up or down if animation is enabled. If animation is disabled, the page becomes active immediately.

By the default, the animation is enabled.

## <a name="enableinplaceedit"></a> CMFCOutlookBarTabCtrl::EnableInPlaceEdit

Specifies whether a user can modify the text labels on the tab page buttons of the Outlook bar.

```
virtual void EnableInPlaceEdit(BOOL bEnable);
```

### Parameters

*bEnable*<br/>
If TRUE, enable the in-place editing of the text label. If FALSE, disable the in-place editing.

### Remarks

Call this function to enable or disable in-place editing of text  labels on tab page buttons. By default the in-place editing is disabled.

## <a name="enablescrollbuttons"></a> CMFCOutlookBarTabCtrl::EnableScrollButtons

Called by the framework to enable scroll handles that allow the user to scroll through buttons on the Outlook bar pane.

```cpp
void EnableScrollButtons(
    BOOL bEnable = TRUE,
    BOOL bIsUp = TRUE,
    BOOL bIsDown = TRUE);
```

### Parameters

*bEnable*<br/>
[in] Determines whether the scroll buttons are displayed.

*bIsUp*<br/>
[in] Determines whether the top scrollbar is displayed.

*bIsDown*<br/>
[in] Determines whether the bottom scrollbar is displayed.

### Remarks

Enables the display of the scroll buttons. This method is called by the framework when the active tab changes to restore the scroll buttons.

## <a name="getbordersize"></a> CMFCOutlookBarTabCtrl::GetBorderSize

Returns the border size of the Outlook tab control.

```
int GetBorderSize() const;
```

### Return Value

The border size, in pixels.

## <a name="getvisiblepagebuttons"></a> CMFCOutlookBarTabCtrl::GetVisiblePageButtons

```
int GetVisiblePageButtons() const;
```

### Return Value

### Remarks

## <a name="isanimation"></a> CMFCOutlookBarTabCtrl::IsAnimation

Specifies whether the animation that occurs during the switch between active tabs is enabled.

```
static BOOL IsAnimation();
```

### Return Value

Nonzero if the animation is enabled; otherwise 0.

### Remarks

Call the [CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation) function to enable or disable animation.

## <a name="ismode2003"></a> CMFCOutlookBarTabCtrl::IsMode2003

Determines whether the Outlook bar tab control is in a mode that emulates Microsoft Outlook 2003.

```
BOOL IsMode2003() const;
```

### Return Value

TRUE if the Outlook bar tab control is in Outlook 2003 mode; otherwise FALSE;

### Remarks

This value is set by [CMFCOutlookBar::SetMode2003](../../mfc/reference/cmfcoutlookbar-class.md#setmode2003).

## <a name="onshowfewerpagebuttons"></a> CMFCOutlookBarTabCtrl::OnShowFewerPageButtons

Called by the framework to decrease the number of tab page buttons that are visible.

```
virtual void OnShowFewerPageButtons();
```

### Remarks

This method adjusts the number of visible page tab buttons when the control is resized.

## <a name="onshowmorepagebuttons"></a> CMFCOutlookBarTabCtrl::OnShowMorePageButtons

Called by the framework to increase the number of tab page buttons that are visible.

```
virtual void OnShowMorePageButtons();
```

### Remarks

This method adjust the number of tab page buttons that are visible when the control is resized.

## <a name="onshowoptions"></a> CMFCOutlookBarTabCtrl::OnShowOptions

Displays the **Navigation Pane Options** dialog box.

```
virtual void OnShowOptions();
```

### Remarks

The **Navigation Pane Options** dialog box allows the user to select which tab page buttons are to be displayed, and the order in which they are displayed.

This method is called by the framework when the user selects the **Navigation Pane Options** menu item from the control's customization menu.

## <a name="setactivetab"></a> CMFCOutlookBarTabCtrl::SetActiveTab

Sets the active tab. The active tab is the one that is open, with its contents visible.

```
virtual BOOL SetActiveTab(int iTab);
```

### Parameters

*iTab*<br/>
[in] The zero-based index of a tab to be opened.

### Return Value

Nonzero if the specified tab has been opened successfully; otherwise 0.

### Remarks

The visual effect of setting the active tab depends on whether you have enabled animation. For more information, see [CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation).

## <a name="setbordersize"></a> CMFCOutlookBarTabCtrl::SetBorderSize

Sets the border size of the Outlook tab control.

```cpp
void SetBorderSize(int nBorderSize);
```

### Parameters

*nBorderSize*<br/>
[in] Specifies the new border size in pixels.

### Remarks

Sets the new border size and recalculates the outlook window layout.

## <a name="setpagebuttontextalign"></a> CMFCOutlookBarTabCtrl::SetPageButtonTextAlign

Sets the alignment of the text labels on the tab buttons of the Outlook bar.

```cpp
void SetPageButtonTextAlign(
    UINT uiAlign,
    BOOL bRedraw=TRUE);
```

### Parameters

*uiAlign*<br/>
[in] Specifies the text alignment.

*bRedraw*<br/>
[in] If TRUE, the outlook window will be redrawn.

### Remarks

Use this function to change text alignment for page buttons.

*uiAlign* can be one of the following values:

|Constant|Meaning|
|--------------|-------------|
|TA_LEFT|Left alignment|
|TA_CENTER|Center alignment|
|TA_RIGHT|Right alignment|

The default value is TA_CENTER.

## <a name="settoolbarimagelist"></a> CMFCOutlookBarTabCtrl::SetToolbarImageList

Sets the bitmap that contains the icons that are displayed on the bottom of the Outlook bar in Outlook 2003 mode.

```
BOOL SetToolbarImageList(
    UINT uiID,
    int cx,
    COLORREF clrTransp=RGB(255, 0, 255));
```

### Parameters

*uiID*<br/>
[in] Specifies the resource ID of the image to load.

*cx*<br/>
[in] Specifies the width of an image in the image list, in pixels.

*clrTransp*<br/>
[in] An RGB value that specifies the transparent color.

### Return Value

Returns TRUE if successful; otherwise returns FALSE.

### Remarks

Use this function to attach an image list whose images will be displayed on toolbar buttons in Microsoft Office 2003 mode. Image indexes should correspond to page indexes.

This method should not be called if not in Microsoft Office 2003 mode. For more information, see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).

## <a name="setvisiblepagebuttons"></a> CMFCOutlookBarTabCtrl::SetVisiblePageButtons

```cpp
void SetVisiblePageButtons(int nVisiblePageButtons);
```

### Parameters

[in] *nVisiblePageButtons*<br/>

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md)<br/>
[CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)<br/>
[CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md)
