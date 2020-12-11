---
description: "Learn more about: CMFCPopupMenuBar Class"
title: "CMFCPopupMenuBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCPopupMenuBar", "AFXPOPUPMENUBAR/CMFCPopupMenuBar", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::AdjustSizeImmediate", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::BuildOrigItems", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::CloseDelayedSubMenu", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::ExportToMenu", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::FindDestintationToolBar", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::GetCurrentMenuImageSize", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::GetDefaultMenuId", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::GetLastCommandIndex", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::GetOffset", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::ImportFromMenu", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::IsDropDownListMode", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::IsPaletteMode", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::IsRibbonPanel", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::IsRibbonPanelInRegularMode", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::LoadFromHash", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::RestoreDelayedSubMenu", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::SetButtonStyle", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::SetOffset", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::StartPopupMenuTimer", "AFXPOPUPMENUBAR/CMFCPopupMenuBar::m_bDisableSideBarInXPMode"]
helpviewer_keywords: ["CMFCPopupMenuBar [MFC], AdjustSizeImmediate", "CMFCPopupMenuBar [MFC], BuildOrigItems", "CMFCPopupMenuBar [MFC], CloseDelayedSubMenu", "CMFCPopupMenuBar [MFC], ExportToMenu", "CMFCPopupMenuBar [MFC], FindDestintationToolBar", "CMFCPopupMenuBar [MFC], GetCurrentMenuImageSize", "CMFCPopupMenuBar [MFC], GetDefaultMenuId", "CMFCPopupMenuBar [MFC], GetLastCommandIndex", "CMFCPopupMenuBar [MFC], GetOffset", "CMFCPopupMenuBar [MFC], ImportFromMenu", "CMFCPopupMenuBar [MFC], IsDropDownListMode", "CMFCPopupMenuBar [MFC], IsPaletteMode", "CMFCPopupMenuBar [MFC], IsRibbonPanel", "CMFCPopupMenuBar [MFC], IsRibbonPanelInRegularMode", "CMFCPopupMenuBar [MFC], LoadFromHash", "CMFCPopupMenuBar [MFC], RestoreDelayedSubMenu", "CMFCPopupMenuBar [MFC], SetButtonStyle", "CMFCPopupMenuBar [MFC], SetOffset", "CMFCPopupMenuBar [MFC], StartPopupMenuTimer", "CMFCPopupMenuBar [MFC], m_bDisableSideBarInXPMode"]
ms.assetid: 4c93c459-7f70-4240-8c63-280bb811e374
---
# CMFCPopupMenuBar Class

A menu bar embedded into a pop-up menu.

## Syntax

```
class CMFCPopupMenuBar : public CMFCToolBar
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCPopupMenuBar::AdjustSizeImmediate](#adjustsizeimmediate)|Immediately recalculates the layout of a pane. (Overrides [CPane::AdjustSizeImmediate](../../mfc/reference/cpane-class.md#adjustsizeimmediate).)|
|[CMFCPopupMenuBar::BuildOrigItems](#buildorigitems)|Loads popup menu items from a specified menu resource.|
|[CMFCPopupMenuBar::CloseDelayedSubMenu](#closedelayedsubmenu)|Closes a delayed popup menu button.|
|[CMFCPopupMenuBar::ExportToMenu](#exporttomenu)|Builds a menu from the popup-menu buttons.|
|[CMFCPopupMenuBar::FindDestintationToolBar](#finddestintationtoolbar)|Locates the toolbar where a specified point lies.|
|[CMFCPopupMenuBar::GetCurrentMenuImageSize](#getcurrentmenuimagesize)|Indicates the size of menu-button images.|
|[CMFCPopupMenuBar::GetDefaultMenuId](#getdefaultmenuid)|Returns the identifier of the default menu item.|
|[CMFCPopupMenuBar::GetLastCommandIndex](#getlastcommandindex)|Gets the index of the most recently invoked menu command.|
|[CMFCPopupMenuBar::GetOffset](#getoffset)|Gets the row offset of the popup menu bar.|
|[CMFCPopupMenuBar::ImportFromMenu](#importfrommenu)|Imports popup menu buttons from a specified menu.|
|[CMFCPopupMenuBar::IsDropDownListMode](#isdropdownlistmode)|Indicates whether the popup menu bar is in drop-down-list mode.|
|[CMFCPopupMenuBar::IsPaletteMode](#ispalettemode)|Indicates whether the popup menu bar is in palette mode.|
|[CMFCPopupMenuBar::IsRibbonPanel](#isribbonpanel)|Indicates whether this is a ribbon panel (FALSE by default).|
|[CMFCPopupMenuBar::IsRibbonPanelInRegularMode](#isribbonpanelinregularmode)|Indicates whether this is a ribbon panel in regular mode (FALSE by default).|
|[CMFCPopupMenuBar::LoadFromHash](#loadfromhash)|Loads an archived menu.|
|[CMFCPopupMenuBar::RestoreDelayedSubMenu](#restoredelayedsubmenu)|Restores a delayed menu button for closing the popup menu bar.|
|[CMFCPopupMenuBar::SetButtonStyle](#setbuttonstyle)|Sets the style of the toolbar button at the given index. (Overrides [CMFCToolBar::SetButtonStyle](../../mfc/reference/cmfctoolbar-class.md#setbuttonstyle).)|
|[CMFCPopupMenuBar::SetOffset](#setoffset)|Sets the row offset of the popup menu bar.|
|[CMFCPopupMenuBar::StartPopupMenuTimer](#startpopupmenutimer)|Starts the timer for a specified delayed popup menu button.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCPopupMenuBar::m_bDisableSideBarInXPMode](#m_bdisablesidebarinxpmode)|Specifies whether the gray sidebar will be displayed when the application has a Windows XP appearance.|

## Remarks

The `CMFCPopupMenuBar` is created at the same time as a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) and embedded inside it. The `CMFCPopupMenuBar` covers the entire client area of the `CMFCPopupMenu` object. It supports keyboard and mouse input. It also communicates that input to the `CMFCPopupMenu` and to the top-level frame window.

## Example

The following example demonstrates how to initialize a `CMFCPopupMenuBar` object from a `CMFCPopupMenu` object. This code snippet is part of the [Draw Client sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#7](../../mfc/reference/codesnippet/cpp/cmfcpopupmenubar-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)

## Requirements

**Header:** afxpopupmenubar.h

## <a name="adjustsizeimmediate"></a> CMFCPopupMenuBar::AdjustSizeImmediate

Immediately recalculates the layout of the popup menu bar pane. (Overrides [CPane::AdjustSizeImmediate](../../mfc/reference/cpane-class.md#adjustsizeimmediate).

```
virtual void AdjustSizeImmediate(BOOL bRecalcLayout);
```

### Parameters

*bRecalcLayout*<br/>
[in] TRUE to automatically recalculate the layout of the popup menu bar pane; otherwise, FALSE.

### Remarks

## <a name="buildorigitems"></a> CMFCPopupMenuBar::BuildOrigItems

Loads popup menu items from a specified menu resource.

```
BOOL BuildOrigItems(UINT uiMenuResID);
```

### Parameters

*uiMenuResID*<br/>
[in] Specifies the menu ID of the menu resource to load.

### Return Value

Returns TRUE if successful or FALSE if not.

### Remarks

## <a name="closedelayedsubmenu"></a> CMFCPopupMenuBar::CloseDelayedSubMenu

Closes a popup menu button that has been delayed.

```
virtual void CloseDelayedSubMenu();
```

### Remarks

## <a name="exporttomenu"></a> CMFCPopupMenuBar::ExportToMenu

Builds a menu from the popup menu buttons.

```
virtual HMENU ExportToMenu() const;
```

### Return Value

Returns a handle to the new menu.

### Remarks

## <a name="finddestintationtoolbar"></a> CMFCPopupMenuBar::FindDestintationToolBar

Locates the toolbar where a specified point lies.

```
CMFCToolBar* FindDestintationToolBar(CPoint point);
```

### Parameters

*point*<br/>
[in] A point on the screen.

### Return Value

Returns a handle to the toolbar where the point lies, if there is one, or NULL if not.

### Remarks

## <a name="getcurrentmenuimagesize"></a> CMFCPopupMenuBar::GetCurrentMenuImageSize

Indicates the size of menu-button images.

```
virtual CSize GetCurrentMenuImageSize() const;
```

### Return Value

Returns the size of menu-button images in the toolbar.

### Remarks

## <a name="getdefaultmenuid"></a> CMFCPopupMenuBar::GetDefaultMenuId

Returns the identifier of the default menu item.

```
UINT GetDefaultMenuId() const;
```

### Return Value

Returns the identifier of the default menu item in the popup menu bar.

### Remarks

## <a name="getlastcommandindex"></a> CMFCPopupMenuBar::GetLastCommandIndex

Gets the index of the most recently invoked menu command.

```
static int __stdcall GetLastCommandIndex();
```

### Return Value

Returns the index of the last menu command that has been invoked.

### Remarks

## <a name="getoffset"></a> CMFCPopupMenuBar::GetOffset

Gets the row offset of the popup menu bar.

```
int GetOffset() const;
```

### Return Value

Returns the row offset of the popup menu bar.

### Remarks

This value is set using [CMFCPopupMenuBar::SetOffset](#setoffset).

## <a name="importfrommenu"></a> CMFCPopupMenuBar::ImportFromMenu

Imports popup menu buttons from a specified menu.

```
virtual BOOL ImportFromMenu(
    HMENU hMenu,
    BOOL bShowAllCommands = FALSE);
```

### Parameters

*hMenu*<br/>
[in] The menu from which to import the popup menu buttons.

*bShowAllCommands*<br/>
[in] TRUE if all commands on the menu are to be imported, or FALSE if rarely used ones may be hidden.

### Return Value

Returns TRUE if the menu buttons were successfully imported from the menu, or FALSE if not.

### Remarks

## <a name="isdropdownlistmode"></a> CMFCPopupMenuBar::IsDropDownListMode

Indicates whether the popup menu bar is in drop-down-list mode.

```
BOOL IsDropDownListMode() const;
```

### Return Value

Returns TRUE if the popup menu bar is in drop-down-list mode, or FALSE if not.

### Remarks

## <a name="ispalettemode"></a> CMFCPopupMenuBar::IsPaletteMode

Indicates whether the popup menu bar is in palette mode.

```
BOOL IsPaletteMode() const;
```

### Return Value

Returns TRUE if palette mode is enabled, or FALSE if not.

### Remarks

When the menu bar is set to palette mode, menu items appear in multiple columns and a limited number of rows.

## <a name="isribbonpanel"></a> CMFCPopupMenuBar::IsRibbonPanel

Indicates whether this is a ribbon panel (FALSE by default).

```
virtual BOOL IsRibbonPanel() const;
```

### Return Value

Returns FALSE by default, indicating that this is not a ribbon panel.

### Remarks

## <a name="isribbonpanelinregularmode"></a> CMFCPopupMenuBar::IsRibbonPanelInRegularMode

Indicates whether this is a ribbon panel in regular mode (FALSE by default).

```
virtual BOOL IsRibbonPanelInRegularMode() const;
```

### Return Value

Returns FALSE by default, indicating that this is not a ribbon panel in regular mode.

### Remarks

## <a name="loadfromhash"></a> CMFCPopupMenuBar::LoadFromHash

Loads an archived menu.

```
BOOL LoadFromHash(HMENU hMenu);
```

### Parameters

*hMenu*<br/>
[in] A handle to the archived menu to load.

### Return Value

Returns TRUE if the menu is loaded successfully, or FALSE if not.

### Remarks

## <a name="m_bdisablesidebarinxpmode"></a> CMFCPopupMenuBar::m_bDisableSideBarInXPMode

A Boolean parameter that indicates whether your application has a gray sidebar when it has a Windows XP appearance.

```
BOOL m_bDisableSideBarInXPMode;
```

### Remarks

If this member variable is set to FALSE and your application has a Windows XP appearance, the framework draws a gray sidebar in your application.

The default value is FALSE.

## <a name="restoredelayedsubmenu"></a> CMFCPopupMenuBar::RestoreDelayedSubMenu

Restores a delayed menu button for closing the popup menu bar.

```
virtual void RestoreDelayedSubMenu();
```

### Remarks

## <a name="setbuttonstyle"></a> CMFCPopupMenuBar::SetButtonStyle

Sets the style of the toolbar button at the given index. (Overrides [CMFCToolBar::SetButtonStyle](../../mfc/reference/cmfctoolbar-class.md#setbuttonstyle).)

```
virtual void SetButtonStyle(
    int nIndex,
    UINT nStyle);
```

### Parameters

*nIndex*<br/>
[in] The zero-based index of the toolbar button whose style is to be set.

*nStyle*<br/>
[in] The style of the button. See [ToolBar Control Styles](../../mfc/reference/toolbar-control-styles.md) for the list of available toolbar button styles.

### Remarks

## <a name="setoffset"></a> CMFCPopupMenuBar::SetOffset

Sets the row offset of the popup menu bar.

```cpp
void SetOffset(int iOffset);
```

### Parameters

*iOffset*<br/>
[in] The number of rows that the popup menu bar should be offset.

### Remarks

## <a name="startpopupmenutimer"></a> CMFCPopupMenuBar::StartPopupMenuTimer

Starts the timer for a specified delayed popup menu button.

```cpp
void StartPopupMenuTimer(
    CMFCToolBarMenuButton* pMenuButton,
    int nDelayFactor = 1);
```

### Parameters

*pMenuButton*<br/>
[in] Pointer to the menu button for which to set the delay timer.

*nDelayFactor*<br/>
[in] A delay factor, equal to at least one, to multiply by the standard menu delay time (generally between a half second and five seconds).

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)<br/>
[CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)
