---
description: "Learn more about: CMFCRibbonMiniToolBar Class"
title: "CMFCRibbonMiniToolBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonMiniToolBar", "AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar", "AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::IsContextMenuMode", "AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::IsRibbonMiniToolBar", "AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::SetCommands", "AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::Show", "AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::ShowWithContextMenu"]
helpviewer_keywords: ["CMFCRibbonMiniToolBar [MFC], IsContextMenuMode", "CMFCRibbonMiniToolBar [MFC], IsRibbonMiniToolBar", "CMFCRibbonMiniToolBar [MFC], SetCommands", "CMFCRibbonMiniToolBar [MFC], Show", "CMFCRibbonMiniToolBar [MFC], ShowWithContextMenu"]
ms.assetid: 7017e963-aeaf-4fe9-b540-e15a7ed41e94
---
# CMFCRibbonMiniToolBar Class

Implements a contextual popup toolbar.

## Syntax

```
class CMFCRibbonMiniToolBar : public CMFCRibbonPanelMenu
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCRibbonMiniToolBar::CMFCRibbonMiniToolBar`|Default constructor.|
|`CMFCRibbonMiniToolBar::~CMFCRibbonMiniToolBar`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCRibbonMiniToolBar::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCRibbonMiniToolBar::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCRibbonMiniToolBar::IsContextMenuMode](#iscontextmenumode)||
|[CMFCRibbonMiniToolBar::IsRibbonMiniToolBar](#isribbonminitoolbar)|(Overrides `CMFCPopupMenu::IsRibbonMiniToolBar`.)|
|[CMFCRibbonMiniToolBar::SetCommands](#setcommands)|Sets the list of commands to be displayed on the toolbar.|
|[CMFCRibbonMiniToolBar::Show](#show)|Displays the mini toolbar at the specified screen coordinates.|
|[CMFCRibbonMiniToolBar::ShowWithContextMenu](#showwithcontextmenu)|Displays the mini toolbar together with a context menu.|

## Remarks

The mini toolbar is typically displayed after the user selects an object in a document. For example, after the user selects a block of text in a word processing program, the application displays a mini toolbar that contains text formatting commands.

The mini toolbar becomes transparent when the mouse pointer is out of the bounds of the mini toolbar.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

[CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)

[CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)

`CMFCRibbonPanelMenu`

[CMFCRibbonMiniToolBar](../../mfc/reference/cmfcribbonminitoolbar-class.md)

## Requirements

**Header:** afxRibbonMiniToolBar.h

## <a name="setcommands"></a> CMFCRibbonMiniToolBar::SetCommands

Sets the list of commands to be displayed on the toolbar.

```cpp
void SetCommands(
    CMFCRibbonBar* pRibbonBar,
    const CList<UINT,UINT>& lstCommands);
```

### Parameters

*pRibbonBar*<br/>
[in] The ribbon bar that the mini toolbar searches for the buttons to display.

*lstCommands*<br/>
[in] The list of commands to be displayed on the mini toolbar. All ribbon categories are searched to find the associated buttons.

### Remarks

Use this function to set the list of commands to be displayed in the mini toolbar.

### Example

The following example demonstrates how to use the `SetCommands` method of the `CMFCRibbonMiniToolBar` class. This code snippet is part of the [MS Office 2007 Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#9](../../mfc/reference/codesnippet/cpp/cmfcribbonminitoolbar-class_1.cpp)]

## <a name="show"></a> CMFCRibbonMiniToolBar::Show

Displays the mini toolbar at the specified screen coordinates.

```
BOOL Show(
    int x,
    int y);
```

### Parameters

*x*<br/>
[in] Specifies the horizontal position of the mini toolbar in screen coordinates.

*y*<br/>
[in] Specifies the vertical position of the mini toolbar in screen coordinates.

### Return Value

TRUE if the mini toolbar was displayed successfully; otherwise, FALSE.

## <a name="showwithcontextmenu"></a> CMFCRibbonMiniToolBar::ShowWithContextMenu

Displays the mini toolbar together with a context menu.

```
BOOL ShowWithContextMenu(
    int x,
    int y,
    UINT uiMenuResID,
    CWnd* pWndOwner);
```

### Parameters

*x*<br/>
[in] Specifies the horizontal position of the context menu in screen coordinates.

*y*<br/>
[in] Specifies the vertical position of the context menu in screen coordinates.

*uiMenuResID*<br/>
[in] Specifies the resource ID of the context menu to display.

*pWndOwner*<br/>
[in] Identifies the window which receives messages from the context menu.

### Return Value

TRUE if the context menu was displayed successfully; otherwise, FALSE.

### Remarks

Use this function to display a mini toolbar that has a context menu. The context menu is positioned 15 pixels below the mini toolbar.

## <a name="iscontextmenumode"></a> CMFCRibbonMiniToolBar::IsContextMenuMode

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
BOOL IsContextMenuMode() const;
```

### Return Value

### Remarks

## <a name="isribbonminitoolbar"></a> CMFCRibbonMiniToolBar::IsRibbonMiniToolBar

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual BOOL IsRibbonMiniToolBar() const;
```

### Return Value

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
