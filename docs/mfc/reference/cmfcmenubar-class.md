---
description: "Learn more about: CMFCMenuBar Class"
title: "CMFCMenuBar Class"
ms.date: "10/18/2018"
f1_keywords: ["CMFCMenuBar", "AFXMENUBAR/CMFCMenuBar", "AFXMENUBAR/CMFCMenuBar::AdjustLocations", "AFXMENUBAR/CMFCMenuBar::AllowChangeTextLabels", "AFXMENUBAR/CMFCMenuBar::AllowShowOnPaneMenu", "AFXMENUBAR/CMFCMenuBar::CalcFixedLayout", "AFXMENUBAR/CMFCMenuBar::CalcLayout", "AFXMENUBAR/CMFCMenuBar::CalcMaxButtonHeight", "AFXMENUBAR/CMFCMenuBar::CanBeClosed", "AFXMENUBAR/CMFCMenuBar::CanBeRestored", "AFXMENUBAR/CMFCMenuBar::Create", "AFXMENUBAR/CMFCMenuBar::CreateEx", "AFXMENUBAR/CMFCMenuBar::CreateFromMenu", "AFXMENUBAR/CMFCMenuBar::EnableHelpCombobox", "AFXMENUBAR/CMFCMenuBar::EnableMenuShadows", "AFXMENUBAR/CMFCMenuBar::GetAvailableExpandSize", "AFXMENUBAR/CMFCMenuBar::GetColumnWidth", "AFXMENUBAR/CMFCMenuBar::GetDefaultMenu", "AFXMENUBAR/CMFCMenuBar::GetDefaultMenuResId", "AFXMENUBAR/CMFCMenuBar::GetFloatPopupDirection", "AFXMENUBAR/CMFCMenuBar::GetForceDownArrows", "AFXMENUBAR/CMFCMenuBar::GetHelpCombobox", "AFXMENUBAR/CMFCMenuBar::GetHMenu", "AFXMENUBAR/CMFCMenuBar::GetMenuFont", "AFXMENUBAR/CMFCMenuBar::GetMenuItem", "AFXMENUBAR/CMFCMenuBar::GetRowHeight", "AFXMENUBAR/CMFCMenuBar::GetSystemButton", "AFXMENUBAR/CMFCMenuBar::GetSystemButtonsCount", "AFXMENUBAR/CMFCMenuBar::GetSystemMenu", "AFXMENUBAR/CMFCMenuBar::HighlightDisabledItems", "AFXMENUBAR/CMFCMenuBar::IsButtonExtraSizeAvailable", "AFXMENUBAR/CMFCMenuBar::IsHighlightDisabledItems", "AFXMENUBAR/CMFCMenuBar::IsMenuShadows", "AFXMENUBAR/CMFCMenuBar::IsRecentlyUsedMenus", "AFXMENUBAR/CMFCMenuBar::IsShowAllCommands", "AFXMENUBAR/CMFCMenuBar::IsShowAllCommandsDelay", "AFXMENUBAR/CMFCMenuBar::LoadState", "AFXMENUBAR/CMFCMenuBar::OnChangeHot", "AFXMENUBAR/CMFCMenuBar::OnDefaultMenuLoaded", "AFXMENUBAR/CMFCMenuBar::OnSendCommand", "AFXMENUBAR/CMFCMenuBar::OnSetDefaultButtonText", "AFXMENUBAR/CMFCMenuBar::OnToolHitTest", "AFXMENUBAR/CMFCMenuBar::PreTranslateMessage", "AFXMENUBAR/CMFCMenuBar::RestoreOriginalstate", "AFXMENUBAR/CMFCMenuBar::SaveState", "AFXMENUBAR/CMFCMenuBar::SetDefaultMenuResId", "AFXMENUBAR/CMFCMenuBar::SetForceDownArrows", "AFXMENUBAR/CMFCMenuBar::SetMaximizeMode", "AFXMENUBAR/CMFCMenuBar::SetMenuButtonRTC", "AFXMENUBAR/CMFCMenuBar::SetMenuFont", "AFXMENUBAR/CMFCMenuBar::SetRecentlyUsedMenus", "AFXMENUBAR/CMFCMenuBar::SetShowAllCommands"]
helpviewer_keywords: ["CMFCMenuBar [MFC], AdjustLocations", "CMFCMenuBar [MFC], AllowChangeTextLabels", "CMFCMenuBar [MFC], AllowShowOnPaneMenu", "CMFCMenuBar [MFC], CalcFixedLayout", "CMFCMenuBar [MFC], CalcLayout", "CMFCMenuBar [MFC], CalcMaxButtonHeight", "CMFCMenuBar [MFC], CanBeClosed", "CMFCMenuBar [MFC], CanBeRestored", "CMFCMenuBar [MFC], Create", "CMFCMenuBar [MFC], CreateEx", "CMFCMenuBar [MFC], CreateFromMenu", "CMFCMenuBar [MFC], EnableHelpCombobox", "CMFCMenuBar [MFC], EnableMenuShadows", "CMFCMenuBar [MFC], GetAvailableExpandSize", "CMFCMenuBar [MFC], GetColumnWidth", "CMFCMenuBar [MFC], GetDefaultMenu", "CMFCMenuBar [MFC], GetDefaultMenuResId", "CMFCMenuBar [MFC], GetFloatPopupDirection", "CMFCMenuBar [MFC], GetForceDownArrows", "CMFCMenuBar [MFC], GetHelpCombobox", "CMFCMenuBar [MFC], GetHMenu", "CMFCMenuBar [MFC], GetMenuFont", "CMFCMenuBar [MFC], GetMenuItem", "CMFCMenuBar [MFC], GetRowHeight", "CMFCMenuBar [MFC], GetSystemButton", "CMFCMenuBar [MFC], GetSystemButtonsCount", "CMFCMenuBar [MFC], GetSystemMenu", "CMFCMenuBar [MFC], HighlightDisabledItems", "CMFCMenuBar [MFC], IsButtonExtraSizeAvailable", "CMFCMenuBar [MFC], IsHighlightDisabledItems", "CMFCMenuBar [MFC], IsMenuShadows", "CMFCMenuBar [MFC], IsRecentlyUsedMenus", "CMFCMenuBar [MFC], IsShowAllCommands", "CMFCMenuBar [MFC], IsShowAllCommandsDelay", "CMFCMenuBar [MFC], LoadState", "CMFCMenuBar [MFC], OnChangeHot", "CMFCMenuBar [MFC], OnDefaultMenuLoaded", "CMFCMenuBar [MFC], OnSendCommand", "CMFCMenuBar [MFC], OnSetDefaultButtonText", "CMFCMenuBar [MFC], OnToolHitTest", "CMFCMenuBar [MFC], PreTranslateMessage", "CMFCMenuBar [MFC], RestoreOriginalstate", "CMFCMenuBar [MFC], SaveState", "CMFCMenuBar [MFC], SetDefaultMenuResId", "CMFCMenuBar [MFC], SetForceDownArrows", "CMFCMenuBar [MFC], SetMaximizeMode", "CMFCMenuBar [MFC], SetMenuButtonRTC", "CMFCMenuBar [MFC], SetMenuFont", "CMFCMenuBar [MFC], SetRecentlyUsedMenus", "CMFCMenuBar [MFC], SetShowAllCommands"]
ms.assetid: 8a3ce4c7-b012-4dc0-b4f8-53c10b4b86b8
---
# CMFCMenuBar Class

A menu bar that implements docking.
For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCMenuBar : public CMFCToolbar
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCMenuBar::AdjustLocations](#adjustlocations)|(Overrides `CMFCToolBar::AdjustLocations`.)|
|[CMFCMenuBar::AllowChangeTextLabels](#allowchangetextlabels)|Specifies whether text labels can be shown under images on the toolbar buttons. (Overrides [CMFCToolBar::AllowChangeTextLabels](../../mfc/reference/cmfctoolbar-class.md#allowchangetextlabels).)|
|[CMFCMenuBar::AllowShowOnPaneMenu](#allowshowonpanemenu)|(Overrides `CPane::AllowShowOnPaneMenu`.)|
|[CMFCMenuBar::CalcFixedLayout](#calcfixedlayout)|Calculates the horizontal size of the toolbar. (Overrides [CMFCToolBar::CalcFixedLayout](../../mfc/reference/cmfctoolbar-class.md#calcfixedlayout).)|
|[CMFCMenuBar::CalcLayout](#calclayout)|(Overrides `CMFCToolBar::CalcLayout`.)|
|[CMFCMenuBar::CalcMaxButtonHeight](#calcmaxbuttonheight)|Calculates the maximum height of buttons in the toolbar. (Overrides [CMFCToolBar::CalcMaxButtonHeight](../../mfc/reference/cmfctoolbar-class.md#calcmaxbuttonheight).)|
|[CMFCMenuBar::CanBeClosed](#canbeclosed)|Specifies whether a user can close the toolbar. (Overrides [CMFCToolBar::CanBeClosed](../../mfc/reference/cmfctoolbar-class.md#canbeclosed).)|
|[CMFCMenuBar::CanBeRestored](#canberestored)|Determines whether the system can restore a toolbar to its original state after customization. (Overrides [CMFCToolBar::CanBeRestored](../../mfc/reference/cmfctoolbar-class.md#canberestored).)|
|[CMFCMenuBar::Create](#create)|Creates a menu control and attaches it to a `CMFCMenuBar` object.|
|[CMFCMenuBar::CreateEx](#createex)|Creates a `CMFCMenuBar` object with additional style options.|
|[CMFCMenuBar::CreateFromMenu](#createfrommenu)|Initializes a `CMFCMenuBar` object. Accepts a HMENU parameter that acts as a template for a populated `CMFCMenuBar`.|
|[CMFCMenuBar::EnableHelpCombobox](#enablehelpcombobox)|Enables a **Help** combo box that is located on the right side of the menu bar.|
|[CMFCMenuBar::EnableMenuShadows](#enablemenushadows)|Specifies whether to display shadows for pop-up menus.|
|[CMFCMenuBar::GetAvailableExpandSize](#getavailableexpandsize)|(Overrides [CPane::GetAvailableExpandSize](../../mfc/reference/cpane-class.md#getavailableexpandsize).)|
|[CMFCMenuBar::GetColumnWidth](#getcolumnwidth)|Returns the width of the toolbar buttons. (Overrides [CMFCToolBar::GetColumnWidth](../../mfc/reference/cmfctoolbar-class.md#getcolumnwidth).)|
|[CMFCMenuBar::GetDefaultMenu](#getdefaultmenu)|Returns a handle to the original menu in the resource file.|
|[CMFCMenuBar::GetDefaultMenuResId](#getdefaultmenuresid)|Returns the resource identifier for the original menu in the resource file.|
|[CMFCMenuBar::GetFloatPopupDirection](#getfloatpopupdirection)||
|[CMFCMenuBar::GetForceDownArrows](#getforcedownarrows)||
|[CMFCMenuBar::GetHelpCombobox](#gethelpcombobox)|Returns a pointer to the **Help** combo box.|
|[CMFCMenuBar::GetHMenu](#gethmenu)|Returns the handle to the menu that is attached to the `CMFCMenuBar` object.|
|[CMFCMenuBar::GetMenuFont](#getmenufont)|Returns the current global font for menu objects.|
|[CMFCMenuBar::GetMenuItem](#getmenuitem)|Returns the toolbar button associated with the provided item index.|
|[CMFCMenuBar::GetRowHeight](#getrowheight)|Returns the height of toolbar buttons. (Overrides [CMFCToolBar::GetRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).)|
|[CMFCMenuBar::GetSystemButton](#getsystembutton)||
|[CMFCMenuBar::GetSystemButtonsCount](#getsystembuttonscount)||
|[CMFCMenuBar::GetSystemMenu](#getsystemmenu)||
|[CMFCMenuBar::HighlightDisabledItems](#highlightdisableditems)|Indicates whether disabled menu items are highlighted.|
|[CMFCMenuBar::IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determines whether the toolbar can display buttons that have extended borders. (Overrides [CMFCToolBar::IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).)|
|[CMFCMenuBar::IsHighlightDisabledItems](#ishighlightdisableditems)|Indicates whether disabled items are highlighted.|
|[CMFCMenuBar::IsMenuShadows](#ismenushadows)|Indicates whether shadows are drawn for pop-up menus.|
|[CMFCMenuBar::IsRecentlyUsedMenus](#isrecentlyusedmenus)|Indicates whether recently used menu commands are displayed on the menu bar.|
|[CMFCMenuBar::IsShowAllCommands](#isshowallcommands)|Indicates whether pop-up menus display all commands.|
|[CMFCMenuBar::IsShowAllCommandsDelay](#isshowallcommandsdelay)|Indicates whether menus display all the commands after a short delay.|
|[CMFCMenuBar::LoadState](#loadstate)|Loads the state of the `CMFCMenuBar` object from the registry.|
|[CMFCMenuBar::OnChangeHot](#onchangehot)|Called by the framework when a user selects a button on the toolbar. (Overrides [CMFCToolBar::OnChangeHot](../../mfc/reference/cmfctoolbar-class.md#onchangehot).)|
|[CMFCMenuBar::OnDefaultMenuLoaded](#ondefaultmenuloaded)|Called by the framework when a frame window loads the default menu from the resource file.|
|[CMFCMenuBar::OnSendCommand](#onsendcommand)|(Overrides `CMFCToolBar::OnSendCommand`.)|
|[CMFCMenuBar::OnSetDefaultButtonText](#onsetdefaultbuttontext)|Called by the framework when a menu is in customization mode and the user changes a menu item's text.|
|[CMFCMenuBar::OnToolHitTest](#ontoolhittest)|(Overrides `CMFCToolBar::OnToolHitTest`.)|
|[CMFCMenuBar::PreTranslateMessage](#pretranslatemessage)|(Overrides `CMFCToolBar::PreTranslateMessage`.)|
|[CMFCMenuBar::RestoreOriginalstate](#restoreoriginalstate)|Called by the framework when a menu is in customization mode and the user selects **Reset** for a menu bar.|
|[CMFCMenuBar::SaveState](#savestate)|Saves the state of the `CMFCMenuBar` object to the registry.|
|[CMFCMenuBar::SetDefaultMenuResId](#setdefaultmenuresid)|Sets the original menu in the resource file.|
|[CMFCMenuBar::SetForceDownArrows](#setforcedownarrows)||
|[CMFCMenuBar::SetMaximizeMode](#setmaximizemode)|Called by the framework when an MDI child window changes its display mode. If the MDI child window is newly maximized or is no longer maximized, this method updates the menu bar.|
|[CMFCMenuBar::SetMenuButtonRTC](#setmenubuttonrtc)|Sets the runtime class information that is generated when the user dynamically creates menu buttons.|
|[CMFCMenuBar::SetMenuFont](#setmenufont)|Sets the font for all menus in the application.|
|[CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus)|Specifies whether a menu bar displays recently used menu commands.|
|[CMFCMenuBar::SetShowAllCommands](#setshowallcommands)|Specifies whether the menu bar shows all commands.|

## Remarks

The `CMFCMenuBar` class is a menu bar that implements docking functionality. It resembles a toolbar, although it cannot be closed - it is always displayed.

`CMFCMenuBar` supports the option of displaying recently used menu item objects. If this option is enabled, the `CMFCMenuBar` displays only a subset of the available commands on first viewing. Thereafter, recently used commands are displayed together with the original subset of commands. In addition, the user can always expand the menu to view all available commands. Thus, each available command is configured to display constantly, or to display only if it has been recently selected.

To use a `CMFCMenuBar` object, embed it in the main window frame object. When processing the `WM_CREATE` message, call `CMFCMenuBar::Create` or `CMFCMenuBar::CreateEx`. Regardless of which create function you use, pass in a pointer to the main frame window. Then enable docking by calling [CFrameWndEx::EnableDocking](../../mfc/reference/cframewndex-class.md#enabledocking). Dock this menu by calling [CFrameWndEx::DockPane](../../mfc/reference/cframewndex-class.md#dockpane).

## Example

The following example demonstrates how to use various methods in the `CMFCMenuBar` class. The example shows how to set the style of the pane, enable the customize button, enable a Help box, enable shadows for pop-up menus, and update the menu bar. This code snippet is part of the [IE Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#1](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_1.h)]
[!code-cpp[NVC_MFC_IEDemo#3](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

`CMFCMenuBar`

## Requirements

**Header:** afxmenubar.h

## <a name="adjustlocations"></a> CMFCMenuBar::AdjustLocations

Adjusts the positions of the menu items on the menu bar.

```
virtual void AdjustLocations();
```

### Remarks

## <a name="allowchangetextlabels"></a> CMFCMenuBar::AllowChangeTextLabels

Determines whether text labels are allowed under images in the menu bar.

```
virtual BOOL AllowChangeTextLabels() const;
```

### Return Value

Returns TRUE if the user can choose to show text labels under images.

### Remarks

## <a name="allowshowonpanemenu"></a> CMFCMenuBar::AllowShowOnPaneMenu

```
virtual BOOL AllowShowOnPaneMenu() const;
```

### Return Value

### Remarks

## <a name="calcfixedlayout"></a> CMFCMenuBar::CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### Parameters

[in] *bStretch*<br/>

[in] *bHorz*<br/>

### Return Value

### Remarks

## <a name="calclayout"></a> CMFCMenuBar::CalcLayout

```
virtual CSize CalcLayout(
    DWORD dwMode,
    int nLength = -1);
```

### Parameters

[in] *dwMode*<br/>

[in] *nLength*<br/>

### Return Value

### Remarks

## <a name="calcmaxbuttonheight"></a> CMFCMenuBar::CalcMaxButtonHeight

```
virtual int CalcMaxButtonHeight();
```

### Return Value

### Remarks

## <a name="canbeclosed"></a> CMFCMenuBar::CanBeClosed

```
virtual BOOL CanBeClosed() const;
```

### Return Value

### Remarks

## <a name="canberestored"></a> CMFCMenuBar::CanBeRestored

```
virtual BOOL CanBeRestored() const;
```

### Return Value

### Remarks

## <a name="create"></a> CMFCMenuBar::Create

Creates a menu control and attaches it to a [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) object.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = AFX_DEFAULT_TOOLBAR_STYLE,
    UINT nID = AFX_IDW_MENUBAR);
```

### Parameters

*pParentWnd*<br/>
[in] Pointer to the parent window for the new `CMFCMenuBar` object.

*dwStyle*<br/>
[in] The style of the new menu bar.

*nID*<br/>
[in] The ID for the child window of the menu bar.

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

After you construct a `CMFCMenuBar` object, you must call `Create`. This method creates the `CMFCMenuBar` control and attaches it to the `CMFCMenuBar` object.

For more information about toolbar styles, see [CBasePane::SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).

## <a name="createex"></a> CMFCMenuBar::CreateEx

Creates a [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) object with specified extended styles.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = TBSTYLE_FLAT,
    DWORD dwStyle = AFX_DEFAULT_TOOLBAR_STYLE,
    CRect rcBorders = CRect(1,
    1,
    1,
    1),
    UINT nID =AFX_IDW_MENUBAR);
```

### Parameters

*pParentWnd*<br/>
[in] Pointer to the parent window of the new `CMFCMenuBar` object.

*dwCtrlStyle*<br/>
[in] Additional styles for the new menu bar.

*dwStyle*<br/>
[in] The main style of the new menu bar.

*rcBorders*<br/>
[in] A `CRect` parameter that specifies the sizes for the borders of the `CMFCMenuBar` object.

*nID*<br/>
[in] The ID for the child window of the menu bar.

### Return Value

Nonzero if the method is successful; otherwise 0.

### Remarks

You should use this function instead of [CMFCMenuBar::Create](#create) when you want to specify styles in addition to the toolbar style. Some frequently used additional styles are TBSTYLE_TRANSPARENT and CBRS_TOP.

For lists of additional styles, see [Toolbar Control and Button Styles](/windows/win32/Controls/toolbar-control-and-button-styles), [common control styles](/windows/win32/Controls/common-control-styles), and [common window styles](/windows/win32/winmsg/window-styles).

### Example

The following example demonstrates how to use the `CreateEx` method of the `CMFCMenuBar` class. This code snippet is part of the [IE Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#1](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_1.h)]
[!code-cpp[NVC_MFC_IEDemo#2](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_3.cpp)]

## <a name="createfrommenu"></a> CMFCMenuBar::CreateFromMenu

Initializes a [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) object. This method models the `CMFCMenuBar` object after a HMENU parameter.

```
virtual void CreateFromMenu(
    HMENU hMenu,
    BOOL bDefaultMenu = FALSE,
    BOOL bForceUpdate = FALSE);
```

### Parameters

*hMenu*<br/>
[in] A handle to a menu resource. `CreateFromMenu` uses this resource as a template for the `CMFCMenuBar`.

*bDefaultMenu*<br/>
[in] A Boolean that indicates whether the new menu is the default menu.

*bForceUpdate*<br/>
[in] A Boolean that indicates whether this method forces a menu update.

### Remarks

Use this method if you want a menu control to have the same menu items as a menu resource. You call this method after you call either [CMFCMenuBar::Create](#create) or [CMFCMenuBar::CreateEx](#createex).

## <a name="enablehelpcombobox"></a> CMFCMenuBar::EnableHelpCombobox

Enables a **Help** combo box that is located on the right side of the menu bar.

```cpp
void EnableHelpCombobox(
    UINT uiID,
    LPCTSTR lpszPrompt = NULL,
    int nComboBoxWidth = 150);
```

### Parameters

*uiID*<br/>
[in] The command ID for the button of the **Help** combo box.

*lpszPrompt*<br/>
[in] A string that contains the text that the framework displays in the combo box if it is empty and not active. For example, "Enter the text here".

*nComboBoxWidth*<br/>
[in] The width of the button for the combo box in pixels.

### Remarks

The **Help** combo box resembles the **Help** combo box in the menu bar of Microsoft Word.

When you call this method with *uiID* set to 0, this method hides the combo box. Otherwise, this method displays the combo box automatically on the right side of your menu bar. After you call this method, call [CMFCMenuBar::GetHelpCombobox](#gethelpcombobox) to obtain a pointer to the inserted [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) object.

## <a name="enablemenushadows"></a> CMFCMenuBar::EnableMenuShadows

Enables shadows for pop-up menus.

```
static void EnableMenuShadows(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
[in] A Boolean parameter that indicates whether shadows should be enabled for pop-up menus.

### Remarks

The algorithm that this method uses is complex and may decrease the performance of your application on slower systems.

## <a name="getavailableexpandsize"></a> CMFCMenuBar::GetAvailableExpandSize

```
virtual int GetAvailableExpandSize() const;
```

### Return Value

### Remarks

## <a name="getcolumnwidth"></a> CMFCMenuBar::GetColumnWidth

```
virtual int GetColumnWidth() const;
```

### Return Value

### Remarks

## <a name="getdefaultmenu"></a> CMFCMenuBar::GetDefaultMenu

Retrieves a handle to the original menu. The framework loads the original menu from the resource file.

```
HMENU GetDefaultMenu() const;
```

### Return Value

A handle to a menu resource.

### Remarks

If your application customizes a menu, you can use this method to retrieve a handle to the original menu.

## <a name="getdefaultmenuresid"></a> CMFCMenuBar::GetDefaultMenuResId

Retrieves the resource identifier for the default menu.

```
UINT GetDefaultMenuResId() const;
```

### Return Value

A menu resource identifier.

### Remarks

The framework loads the default menu for the `CMFCMenuBar` object from the resource file.

## <a name="getfloatpopupdirection"></a> CMFCMenuBar::GetFloatPopupDirection

```
int GetFloatPopupDirection(CMFCToolBarMenuButton* pButton);
```

### Parameters

[in] *pButton*<br/>

### Return Value

### Remarks

## <a name="getforcedownarrows"></a> CMFCMenuBar::GetForceDownArrows

```
BOOL GetForceDownArrows();
```

### Return Value

### Remarks

## <a name="gethelpcombobox"></a> CMFCMenuBar::GetHelpCombobox

Returns a pointer to the **Help** combo box.

```
CMFCToolBarComboBoxButton* GetHelpCombobox();
```

### Return Value

A pointer to the **Help** combo box. NULL if the **Help** combo box is hidden or not enabled.

### Remarks

The **Help** combo box is located on the right side of the menu bar. Call the method [CMFCMenuBar::EnableHelpCombobox](#enablehelpcombobox) to enable this combo box.

## <a name="gethmenu"></a> CMFCMenuBar::GetHMenu

Retrieves the handle to the menu attached to the [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) object.

```
HMENU GetHMenu() const;
```

## <a name="getmenufont"></a> CMFCMenuBar::GetMenuFont

Retrieves the current menu font.

```
static const CFont& GetMenuFont(BOOL bHorz = TRUE);
```

### Parameters

*bHorz*<br/>
[in] A Boolean parameter that specifies whether to return the horizontal or vertical font. TRUE indicates the horizontal font.

### Return Value

A pointer to a [CFont](../../mfc/reference/cfont-class.md) parameter that contains the current menu bar font.

### Remarks

The returned font is a global parameter for the application. Two global fonts are maintained for all `CMFCMenuBar` objects. These separate fonts are used for horizontal and vertical menu bars.

## <a name="getmenuitem"></a> CMFCMenuBar::GetMenuItem

Retrieves a [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) object on a menu bar based on the item index.

```
CMFCToolBarButton* GetMenuItem(int iItem) const;
```

### Parameters

*iItem*<br/>
[in] The index of the menu item to return.

### Return Value

A pointer to the `CMFCToolBarButton` object that matches the index specified by *iItem*. NULL if the index is invalid.

## <a name="getrowheight"></a> CMFCMenuBar::GetRowHeight

```
virtual int GetRowHeight() const;
```

### Return Value

### Remarks

## <a name="getsystembutton"></a> CMFCMenuBar::GetSystemButton

```
CMFCToolBarMenuButtonsButton* GetSystemButton(
    UINT uiBtn,
    BOOL bByCommand = TRUE) const;
```

### Parameters

[in] *uiBtn*<br/>

[in] *bByCommand*<br/>

### Return Value

### Remarks

## <a name="getsystembuttonscount"></a> CMFCMenuBar::GetSystemButtonsCount

```
int GetSystemButtonsCount() const;
```

### Return Value

### Remarks

## <a name="getsystemmenu"></a> CMFCMenuBar::GetSystemMenu

```
CMFCToolBarSystemMenuButton* GetSystemMenu() const;
```

### Return Value

### Remarks

## <a name="highlightdisableditems"></a> CMFCMenuBar::HighlightDisabledItems

Controls whether the framework highlights disabled menu items.

```
static void HighlightDisabledItems(BOOL bHighlight = TRUE);
```

### Parameters

*bHighlight*<br/>
[in] A Boolean parameter that indicates whether the framework highlights unavailable menu items.

### Remarks

By default, the framework does not highlight unavailable menu items when the user positions the mouse pointer over them.

## <a name="isbuttonextrasizeavailable"></a> CMFCMenuBar::IsButtonExtraSizeAvailable

```
virtual BOOL IsButtonExtraSizeAvailable() const;
```

### Return Value

### Remarks

## <a name="ishighlightdisableditems"></a> CMFCMenuBar::IsHighlightDisabledItems

Indicates whether the framework highlights unavailable menu items.

```
static BOOL IsHighlightDisabledItems();
```

### Return Value

TRUE if unavailable menu items are highlighted; otherwise FALSE.

### Remarks

By default, the framework does not highlight unavailable menu items when the user positions the mouse pointer over them. Use the [CMFCMenuBar::HighlightDisabledItems](#highlightdisableditems) method to enable this feature.

## <a name="ismenushadows"></a> CMFCMenuBar::IsMenuShadows

Indicates whether the framework draws shadows for pop-up menus.

```
static BOOL IsMenuShadows();
```

### Return Value

TRUE if the framework draws menu shadows; otherwise FALSE.

### Remarks

Use the [CMFCMenuBar::EnableMenuShadows](#enablemenushadows) method to enable or disable this feature.

## <a name="isrecentlyusedmenus"></a> CMFCMenuBar::IsRecentlyUsedMenus

Indicates whether recently used menu commands are displayed on the menu bar.

```
static BOOL IsRecentlyUsedMenus();
```

### Return Value

Nonzero if the `CMFCMenuBar` object shows recently used menu commands; otherwise 0.

### Remarks

Use the function [CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus) to control whether the menu bar shows recently used menu commands.

## <a name="isshowallcommands"></a> CMFCMenuBar::IsShowAllCommands

Indicates whether menus display all commands.

```
static BOOL IsShowAllCommands();
```

### Return Value

Nonzero if the `CMFCMenuBar` displays all commands; otherwise 0.

### Remarks

A `CMFCMenuBar` object can be configured to either show all commands or show only a subset of commands. For more information about this feature, see [CMFCMenuBar Class](../../mfc/reference/cmfcmenubar-class.md).

`IsShowAllCommands` will tell you how this feature is configured for the `CMFCMenuBar` object. To control which menu commands are shown, use the methods [CMFCMenuBar::SetShowAllCommands](#setshowallcommands) and [CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus).

## <a name="isshowallcommandsdelay"></a> CMFCMenuBar::IsShowAllCommandsDelay

Indicates whether the [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) object displays all the commands after a short delay.

```
static BOOL IsShowAllCommandsDelay();
```

### Return Value

Nonzero if the menu bar displays full menus after a short delay; otherwise 0.

### Remarks

When you configure a menu bar to display recently used items, the menu bar displays the full menu in one of two ways:

- Display the full menu after a programmed delay from when the user hovers the cursor over the arrow at the bottom of the menu.

- Display the full menu after the user clicks the arrow at the bottom of the menu.

By default, all `CMFCMenuBar` objects use the option to display the full menu after a short delay. This option cannot be changed programmatically in the `CMFCMenuBar` class. However, a user can change the behavior during toolbar customization by using the **Customize** dialog box..

## <a name="loadstate"></a> CMFCMenuBar::LoadState

Loads the state of the menu bar from the Windows registry.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT)-1);
```

### Parameters

*lpszProfileName*<br/>
[in] A string that contains the path of a Windows registry key.

*nIndex*<br/>
[in] The control ID for the menu bar.

*uiID*<br/>
[in] A reserved value.

### Return Value

TRUE if the method was successful; otherwise FALSE.

### Remarks

Use the [CMFCMenuBar::SaveState](#savestate) method to save the state of the menu bar to the registry. The saved information includes the menu items, the dock state, and the position of the menu bar.

In most cases your application does not call `LoadState`. The framework calls this method when it initializes the workspace.

## <a name="onchangehot"></a> CMFCMenuBar::OnChangeHot

```
virtual void OnChangeHot(int iHot);
```

### Parameters

[in] *iHot*<br/>

### Remarks

## <a name="ondefaultmenuloaded"></a> CMFCMenuBar::OnDefaultMenuLoaded

The framework calls this method when it loads the menu resource from the resource file.

```
virtual void OnDefaultMenuLoaded(HMENU hMenu);
```

### Parameters

*hMenu*<br/>
[in] The handle for the menu attached to the `CMFCMenuBar` object.

### Remarks

The default implementation of this function does nothing. Override this function to execute custom code after the framework loads a menu resource from the resource file.

## <a name="onsendcommand"></a> CMFCMenuBar::OnSendCommand

```
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```

### Parameters

[in] *pButton*<br/>

### Return Value

### Remarks

## <a name="onsetdefaultbuttontext"></a> CMFCMenuBar::OnSetDefaultButtonText

The framework calls this method when the user changes the text of an item on the menu bar.

```
virtual BOOL OnSetDefaultButtonText(CMFCToolBarButton* pButton);
```

### Parameters

*pButton*<br/>
[in] A pointer to the [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) object that the user wants to customize.

### Return Value

TRUE if the framework applies the user changes to the menu bar; otherwise FALSE.

### Remarks

The default implementation for this method changes the text of the button to the text that the user provides.

## <a name="ontoolhittest"></a> CMFCMenuBar::OnToolHitTest

```
virtual INT_PTR OnToolHitTest(
    CPoint point,
    TOOLINFO* pTI) const;
```

### Parameters

[in] *point*<br/>

[in] *pTI*<br/>

### Return Value

### Remarks

## <a name="pretranslatemessage"></a> CMFCMenuBar::PreTranslateMessage

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### Parameters

[in] *pMsg*<br/>

### Return Value

### Remarks

## <a name="restoreoriginalstate"></a> CMFCMenuBar::RestoreOriginalstate

Called by the framework when the user selects **Reset** from the **Customize** dialog box.

```
virtual BOOL RestoreOriginalstate();
```

### Return Value

Nonzero if the method is successful; otherwise 0.

### Remarks

This method is called when the user selects **Reset** from the customization menu. You can also manually call this method to programmatically reset the state of the menu bar. This method loads the original state from the resource file.

Override this method if you want to do any processing when the user selects the **Reset** option.

## <a name="savestate"></a> CMFCMenuBar::SaveState

Saves the state of the [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) object to the Windows registry.

```
virtual BOOL SaveState (
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT)-1);
```

### Parameters

*lpszProfileName*<br/>
[in] A string that contains the path of a Windows registry key.

*nIndex*<br/>
[in] The control ID for the menu bar.

*uiID*<br/>
[in] A reserved value.

### Return Value

TRUE if successful; otherwise FALSE;

### Remarks

Usually, your application does not call `SaveState`. The framework calls this method when the workspace is serialized. For more information, see [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate).

The saved information includes the menu items, the dock state, and the position of the menu bar.

## <a name="setdefaultmenuresid"></a> CMFCMenuBar::SetDefaultMenuResId

Sets the default menu for a [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) object based on the resource ID.

```cpp
void SetDefaultMenuResId(UINT uiResId);
```

### Parameters

*uiResId*<br/>
[in] The resource ID for the new default menu.

### Remarks

The [CMFCMenuBar::RestoreOriginalstate](#restoreoriginalstate) method restores the default menu from the resource file.

Use the [CMFCMenuBar::GetDefaultMenuResId](#getdefaultmenuresid) method to retrieve the default menu without restoring it.

## <a name="setforcedownarrows"></a> CMFCMenuBar::SetForceDownArrows

```cpp
void SetForceDownArrows(BOOL bValue);
```

### Parameters

[in] *bValue*<br/>

### Remarks

## <a name="setmaximizemode"></a> CMFCMenuBar::SetMaximizeMode

The framework calls this method when a MDI changes its display mode and the menu bar must be updated.

```cpp
void SetMaximizeMode(
    BOOL bMax,
    CWnd* pWnd = NULL,
    BOOL bRecalcLayout = TRUE);
```

### Parameters

*bMax*<br/>
[in] A Boolean that specifies the mode. See the Remarks section for more information.

*pWnd*<br/>
[in] A pointer to the MDI child window that is changing.

*bRecalcLayout*<br/>
[in] A Boolean that specifies whether the layout of the menu bar should be recalculated immediately.

### Remarks

When an MDI child window is maximized, a menu bar attached to the MDI main frame window displays the system menu and the **Minimize**, **Maximize** and **Close** buttons. If *bMax* is TRUE and *pWnd* is not NULL, the MDI child window is maximized and the menu bar must incorporate the extra controls. Otherwise, the menu bar returns to its regular state.

## <a name="setmenubuttonrtc"></a> CMFCMenuBar::SetMenuButtonRTC

Sets the runtime class information that the framework uses when the user creates menu buttons.

```cpp
void SetMenuButtonRTC(CRuntimeClass* pMenuButtonRTC);
```

### Parameters

*pMenuButtonRTC*<br/>
[in] The [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) information for a class derived from the [CMFCMenuButton Class](../../mfc/reference/cmfcmenubutton-class.md).

### Remarks

When a user adds new buttons to the menu bar, the framework creates the buttons dynamically. By default, it creates `CMFCMenuButton` objects. Override this method to change the type of button objects that the framework creates.

## <a name="setmenufont"></a> CMFCMenuBar::SetMenuFont

Sets the font for all menu bars in your application.

```
static BOOL SetMenuFont(
    LPLOGFONT lpLogFont,
    BOOL bHorz = TRUE);
```

### Parameters

*lpLogFont*<br/>
[in] A pointer to a [LOGFONT](/windows/win32/api/dimm/ns-dimm-logfonta) structure that defines the font to set.

*bHorz*<br/>
[in] TRUE if you want the *lpLogFont* parameter to be used for the vertical font, FALSE if you want it to be used for horizontal font.

### Return Value

TRUE if the method was successful; otherwise FALSE.

### Remarks

Two fonts are used for all `CMFCMenuBar` objects. These separate fonts are used for horizontal and vertical menu bars.

The font settings are global variables and affect all `CMFCMenuBar` objects.

## <a name="setrecentlyusedmenus"></a> CMFCMenuBar::SetRecentlyUsedMenus

Controls whether a menu bar displays recently used menu commands.

```
static void SetRecentlyUsedMenus (BOOL bOn = TRUE);
```

### Parameters

*bOn*<br/>
[in] A Boolean that controls whether recently used menu commands are displayed.

## <a name="setshowallcommands"></a> CMFCMenuBar::SetShowAllCommands

Controls whether a menu shows all the available commands.

```
static void SetShowAllCommands(BOOL bShowAllCommands = TRUE);
```

### Parameters

*bShowAllCommands*<br/>
[in] A Boolean parameter that specifies whether the pop-up menu shows all the menu commands.

### Remarks

If a menu does not display all the menu commands, it hides the commands that are rarely used. For more information about displaying menu commands, see [CMFCMenuBar Class](../../mfc/reference/cmfcmenubar-class.md).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)
