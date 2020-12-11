---
description: "Learn more about: CMFCDropDownToolBar Class"
title: "CMFCDropDownToolBar Class"
ms.date: "11/19/2018"
f1_keywords: ["CMFCDropDownToolBar", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::AllowShowOnPaneMenu", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::LoadBitmap", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::LoadToolBar", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnLButtonUp", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnMouseMove", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnSendCommand", "AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnUpdateCmdUI"]
helpviewer_keywords: ["CMFCDropDownToolBar [MFC], AllowShowOnPaneMenu", "CMFCDropDownToolBar [MFC], LoadBitmap", "CMFCDropDownToolBar [MFC], LoadToolBar", "CMFCDropDownToolBar [MFC], OnLButtonUp", "CMFCDropDownToolBar [MFC], OnMouseMove", "CMFCDropDownToolBar [MFC], OnSendCommand", "CMFCDropDownToolBar [MFC], OnUpdateCmdUI"]
ms.assetid: 78818ec5-83ce-42fa-a0d4-2d9d5ecc8770
---
# CMFCDropDownToolBar Class

A toolbar that appears when the user presses and holds a top-level toolbar button.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCDropDownToolBar : public CMFCToolBar
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCDropDownToolBar::AllowShowOnPaneMenu](#allowshowonpanemenu)|(Overrides `CPane::AllowShowOnPaneMenu`.)|
|[CMFCDropDownToolBar::LoadBitmap](#loadbitmap)|(Overrides [CMFCToolBar::LoadBitmap](../../mfc/reference/cmfctoolbar-class.md#loadbitmap).)|
|[CMFCDropDownToolBar::LoadToolBar](#loadtoolbar)|(Overrides [CMFCToolBar::LoadToolBar](../../mfc/reference/cmfctoolbar-class.md#loadtoolbar).)|
|[CMFCDropDownToolBar::OnLButtonUp](#onlbuttonup)||
|[CMFCDropDownToolBar::OnMouseMove](#onmousemove)||
|[CMFCDropDownToolBar::OnSendCommand](#onsendcommand)|(Overrides `CMFCToolBar::OnSendCommand`.)|
|[CMFCDropDownToolBar::OnUpdateCmdUI](#onupdatecmdui)|(Overrides [CMFCToolBar::OnUpdateCmdUI](cmfctoolbar-class.md).|

### Remarks

A `CMFCDropDownToolBar` object combines the visual appearance of a toolbar with the behavior of a popup menu. When a user presses and holds a drop-down toolbar button (see [CMFCDropDownToolbarButton Class](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)), a drop-down toolbar appears, and the user can select a button from the drop-down toolbar by scrolling to it and releasing the mouse button. After the user selects a button in the drop-down toolbar, that button is displayed as the current button on the top-level toolbar.

A drop-down toolbar cannot be customized or docked, and it does not have a tear-off state.

The following illustration shows a `CMFCDropDownToolBar` object:

![Example of CMFCDropDownToolbar](../../mfc/reference/media/cmfcdropdown.png "Example of CMFCDropDownToolbar")

You create a `CMFCDropDownToolBar` object the same way you create an ordinary toolbar (see [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)).

To insert the drop-down toolbar into a parent toolbar:

1. Reserve a dummy resource ID for the button in the parent toolbar resource.

2. Create a `CMFCDropDownToolBarButton` object that contains the drop-down toolbar (for more information, see [CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md#cmfcdropdowntoolbarbutton)).

3. Replace the dummy button with the `CMFCDropDownToolBarButton` object by using [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

For more information about toolbar buttons, see [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md). For an example of a drop-down toolbar, see the sample project VisualStudioDemo.

## Example

The following example demonstrates how to use the `Create` method in the `CMFCDropDownToolBar` class. This code snippet is part of the [Visual Studio Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#29](../../mfc/codesnippet/cpp/cmfcdropdowntoolbar-class_1.h)]
[!code-cpp[NVC_MFC_VisualStudioDemo#30](../../mfc/codesnippet/cpp/cmfcdropdowntoolbar-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)

## Requirements

**Header:** afxdropdowntoolbar.h

## <a name="allowshowonpanemenu"></a> CMFCDropDownToolBar::AllowShowOnPaneMenu

```
virtual BOOL AllowShowOnPaneMenu() const;
```

### Return Value

### Remarks

## <a name="loadbitmap"></a> CMFCDropDownToolBar::LoadBitmap

Loads toolbar images from application resources.

```
virtual BOOL LoadBitmap(
    UINT uiResID,
    UINT uiColdResID=0,
    UINT uiMenuResID=0,
    BOOL bLocked=FALSE,
    UINT uiDisabledResID=0,
    UINT uiMenuDisabledResID=0);
```

### Parameters

*uiResID*<br/>
[in] The resource ID of the bitmap that refers to the hot toolbar images.

*uiColdResID*<br/>
[in] The resource ID of the bitmap that refers to the cold toolbar images.

*uiMenuResID*<br/>
[in] The resource ID of the bitmap that refers to the regular menu images.

*bLocked*<br/>
[in] TRUE to lock the toolbar; otherwise FALSE.

*uiDisabledResID*<br/>
[in] The resource ID of the bitmap that refers to the disabled toolbar images.

*uiMenuDisabledResID*<br/>
[in] The resource ID of the bitmap that refers to the disabled menu images.

### Return Value

Nonzero if the method succeeds; otherwise 0.

### Remarks

The [CMFCToolBar::LoadToolBarEx](../../mfc/reference/cmfctoolbar-class.md#loadtoolbarex) method calls this method to load the images that are associated with the toolbar. Override this method to perform custom loading of image resources.

Call the `LoadBitmapEx` method to load additional images after you create the toolbar.

## <a name="loadtoolbar"></a> CMFCDropDownToolBar::LoadToolBar

```
virtual BOOL LoadToolBar(
    UINT uiResID,
    UINT uiColdResID = 0,
    UINT uiMenuResID = 0,
    BOOL = FALSE,
    UINT uiDisabledResID = 0,
    UINT uiMenuDisabledResID = 0,
    UINT uiHotResID = 0);
```

### Parameters

[in] *uiResID*<br/>

[in] *uiColdResID*<br/>

[in] *uiMenuResID*<br/>

[in] *BOOL*<br/>

[in] *uiDisabledResID*<br/>

[in] *uiMenuDisabledResID*<br/>

[in] *uiHotResID*<br/>

### Return Value

### Remarks

## <a name="onlbuttonup"></a> CMFCDropDownToolBar::OnLButtonUp

```
afx_msg void OnLButtonUp(
    UINT nFlags,
    CPoint point);
```

### Parameters

[in] *nFlags*<br/>

[in] *point*<br/>

### Remarks

## <a name="onmousemove"></a> CMFCDropDownToolBar::OnMouseMove

```
afx_msg void OnMouseMove(
    UINT nFlags,
    CPoint point);
```

### Parameters

[in] *nFlags*<br/>

[in] *point*<br/>

### Remarks

## <a name="onsendcommand"></a> CMFCDropDownToolBar::OnSendCommand

```
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```

### Parameters

[in] *pButton*<br/>

### Return Value

### Remarks

## <a name="onupdatecmdui"></a> CMFCDropDownToolBar::OnUpdateCmdUI

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler);
```

### Parameters

[in] *pTarget*<br/>

[in] *bDisableIfNoHndler*<br/>

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)<br/>
[CMFCToolBar::Create](../../mfc/reference/cmfctoolbar-class.md#create)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[CMFCDropDownToolbarButton Class](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)<br/>
[Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)
