---
description: "Learn more about: CMenu Class"
title: "CMenu Class"
ms.date: "11/04/2016"
f1_keywords: ["CMenu", "AFXWIN/CMenu", "AFXWIN/CMenu::CMenu", "AFXWIN/CMenu::AppendMenu", "AFXWIN/CMenu::Attach", "AFXWIN/CMenu::CheckMenuItem", "AFXWIN/CMenu::CheckMenuRadioItem", "AFXWIN/CMenu::CreateMenu", "AFXWIN/CMenu::CreatePopupMenu", "AFXWIN/CMenu::DeleteMenu", "AFXWIN/CMenu::DeleteTempMap", "AFXWIN/CMenu::DestroyMenu", "AFXWIN/CMenu::Detach", "AFXWIN/CMenu::DrawItem", "AFXWIN/CMenu::EnableMenuItem", "AFXWIN/CMenu::FromHandle", "AFXWIN/CMenu::GetDefaultItem", "AFXWIN/CMenu::GetMenuContextHelpId", "AFXWIN/CMenu::GetMenuInfo", "AFXWIN/CMenu::GetMenuItemCount", "AFXWIN/CMenu::GetMenuItemID", "AFXWIN/CMenu::GetMenuItemInfo", "AFXWIN/CMenu::GetMenuState", "AFXWIN/CMenu::GetMenuString", "AFXWIN/CMenu::GetSafeHmenu", "AFXWIN/CMenu::GetSubMenu", "AFXWIN/CMenu::InsertMenu", "AFXWIN/CMenu::InsertMenuItem", "AFXWIN/CMenu::LoadMenu", "AFXWIN/CMenu::LoadMenuIndirect", "AFXWIN/CMenu::MeasureItem", "AFXWIN/CMenu::ModifyMenu", "AFXWIN/CMenu::RemoveMenu", "AFXWIN/CMenu::SetDefaultItem", "AFXWIN/CMenu::SetMenuContextHelpId", "AFXWIN/CMenu::SetMenuInfo", "AFXWIN/CMenu::SetMenuItemBitmaps", "AFXWIN/CMenu::SetMenuItemInfo", "AFXWIN/CMenu::TrackPopupMenu", "AFXWIN/CMenu::TrackPopupMenuEx", "AFXWIN/CMenu::m_hMenu"]
helpviewer_keywords: ["CMenu [MFC], CMenu", "CMenu [MFC], AppendMenu", "CMenu [MFC], Attach", "CMenu [MFC], CheckMenuItem", "CMenu [MFC], CheckMenuRadioItem", "CMenu [MFC], CreateMenu", "CMenu [MFC], CreatePopupMenu", "CMenu [MFC], DeleteMenu", "CMenu [MFC], DeleteTempMap", "CMenu [MFC], DestroyMenu", "CMenu [MFC], Detach", "CMenu [MFC], DrawItem", "CMenu [MFC], EnableMenuItem", "CMenu [MFC], FromHandle", "CMenu [MFC], GetDefaultItem", "CMenu [MFC], GetMenuContextHelpId", "CMenu [MFC], GetMenuInfo", "CMenu [MFC], GetMenuItemCount", "CMenu [MFC], GetMenuItemID", "CMenu [MFC], GetMenuItemInfo", "CMenu [MFC], GetMenuState", "CMenu [MFC], GetMenuString", "CMenu [MFC], GetSafeHmenu", "CMenu [MFC], GetSubMenu", "CMenu [MFC], InsertMenu", "CMenu [MFC], InsertMenuItem", "CMenu [MFC], LoadMenu", "CMenu [MFC], LoadMenuIndirect", "CMenu [MFC], MeasureItem", "CMenu [MFC], ModifyMenu", "CMenu [MFC], RemoveMenu", "CMenu [MFC], SetDefaultItem", "CMenu [MFC], SetMenuContextHelpId", "CMenu [MFC], SetMenuInfo", "CMenu [MFC], SetMenuItemBitmaps", "CMenu [MFC], SetMenuItemInfo", "CMenu [MFC], TrackPopupMenu", "CMenu [MFC], TrackPopupMenuEx", "CMenu [MFC], m_hMenu"]
ms.assetid: 40cacfdc-d45c-4ec7-bf28-991c72812499
---
# CMenu Class

An encapsulation of the Windows `HMENU`.

## Syntax

```
class CMenu : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMenu::CMenu](#cmenu)|Constructs a `CMenu` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMenu::AppendMenu](#appendmenu)|Appends a new item to the end of this menu.|
|[CMenu::Attach](#attach)|Attaches a Windows menu handle to a `CMenu` object.|
|[CMenu::CheckMenuItem](#checkmenuitem)|Places a check mark next to or removes a check mark from a menu item in the pop-up menu.|
|[CMenu::CheckMenuRadioItem](#checkmenuradioitem)|Places a radio button next to a menu item and removes the radio button from all of the other menu items in the group.|
|[CMenu::CreateMenu](#createmenu)|Creates an empty menu and attaches it to a `CMenu` object.|
|[CMenu::CreatePopupMenu](#createpopupmenu)|Creates an empty pop-up menu and attaches it to a `CMenu` object.|
|[CMenu::DeleteMenu](#deletemenu)|Deletes a specified item from the menu. If the menu item has an associated pop-up menu, destroys the handle to the pop-up menu and frees the memory used by it.|
|[CMenu::DeleteTempMap](#deletetempmap)|Deletes any temporary `CMenu` objects created by the `FromHandle` member function.|
|[CMenu::DestroyMenu](#destroymenu)|Destroys the menu attached to a `CMenu` object and frees any memory that the menu occupied.|
|[CMenu::Detach](#detach)|Detaches a Windows menu handle from a `CMenu` object and returns the handle.|
|[CMenu::DrawItem](#drawitem)|Called by the framework when a visual aspect of an owner-drawn menu changes.|
|[CMenu::EnableMenuItem](#enablemenuitem)|Enables, disables, or dims (grays) a menu item.|
|[CMenu::FromHandle](#fromhandle)|Returns a pointer to a `CMenu` object given a Windows menu handle.|
|[CMenu::GetDefaultItem](#getdefaultitem)|Determines the default menu item on the specified menu.|
|[CMenu::GetMenuContextHelpId](#getmenucontexthelpid)|Retrieves the help context ID associated with the menu.|
|[CMenu::GetMenuInfo](#getmenuinfo)|Retrieves information on a specific menu.|
|[CMenu::GetMenuItemCount](#getmenuitemcount)|Determines the number of items in a pop-up or top-level menu.|
|[CMenu::GetMenuItemID](#getmenuitemid)|Obtains the menu-item identifier for a menu item located at the specified position.|
|[CMenu::GetMenuItemInfo](#getmenuiteminfo)|Retrieves information about a menu item.|
|[CMenu::GetMenuState](#getmenustate)|Returns the status of the specified menu item or the number of items in a pop-up menu.|
|[CMenu::GetMenuString](#getmenustring)|Retrieves the label of the specified menu item.|
|[CMenu::GetSafeHmenu](#getsafehmenu)|Returns the `m_hMenu` wrapped by this `CMenu` object.|
|[CMenu::GetSubMenu](#getsubmenu)|Retrieves a pointer to a pop-up menu.|
|[CMenu::InsertMenu](#insertmenu)|Inserts a new menu item at the specified position, moving other items down the menu.|
|[CMenu::InsertMenuItem](#insertmenuitem)|Inserts a new menu item at the specified position in a menu.|
|[CMenu::LoadMenu](#loadmenu)|Loads a menu resource from the executable file and attaches it to a `CMenu` object.|
|[CMenu::LoadMenuIndirect](#loadmenuindirect)|Loads a menu from a menu template in memory and attaches it to a `CMenu` object.|
|[CMenu::MeasureItem](#measureitem)|Called by the framework to determine menu dimensions when an owner-drawn menu is created.|
|[CMenu::ModifyMenu](#modifymenu)|Changes an existing menu item at the specified position.|
|[CMenu::RemoveMenu](#removemenu)|Deletes a menu item with an associated pop-up menu from the specified menu.|
|[CMenu::SetDefaultItem](#setdefaultitem)|Sets the default menu item for the specified menu.|
|[CMenu::SetMenuContextHelpId](#setmenucontexthelpid)|Sets the help context ID to be associated with the menu.|
|[CMenu::SetMenuInfo](#setmenuinfo)|Sets information on a specific menu.|
|[CMenu::SetMenuItemBitmaps](#setmenuitembitmaps)|Associates the specified check-mark bitmaps with a menu item.|
|[CMenu::SetMenuItemInfo](#setmenuiteminfo)|Changes information about a menu item.|
|[CMenu::TrackPopupMenu](#trackpopupmenu)|Displays a floating pop-up menu at the specified location and tracks the selection of items on the pop-up menu.|
|[CMenu::TrackPopupMenuEx](#trackpopupmenuex)|Displays a floating pop-up menu at the specified location and tracks the selection of items on the pop-up menu.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CMenu::operator HMENU](#operator_hmenu)|Retrieves the handle of the menu object.|
|[CMenu::operator !=](#operator_neq)|Determines if two menu objects are not equal.|
|[CMenu::operator ==](#operator_eq_eq)|Determines if two menu objects are equal.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CMenu::m_hMenu](#m_hmenu)|Specifies the handle to the Windows menu attached to the `CMenu` object.|

## Remarks

It provides member functions for creating, tracking, updating, and destroying a menu.

Create a `CMenu` object on the stack frame as a local, then call `CMenu`'s member functions to manipulate the new menu as needed. Next, call [CWnd::SetMenu](../../mfc/reference/cwnd-class.md#setmenu) to set the menu to a window, followed immediately by a call to the `CMenu` object's [Detach](#detach) member function. The `CWnd::SetMenu` member function sets the window's menu to the new menu, causes the window to be redrawn to reflect the menu change, and also passes ownership of the menu to the window. The call to `Detach` detaches the HMENU from the `CMenu` object, so that when the local `CMenu` variable passes out of scope, the `CMenu` object destructor does not attempt to destroy a menu it no longer owns. The menu itself is automatically destroyed when the window is destroyed.

You can use the [LoadMenuIndirect](#loadmenuindirect) member function to create a menu from a template in memory, but a menu created from a resource by a call to [LoadMenu](#loadmenu) is more easily maintained, and the menu resource itself can be created and modified by the menu editor.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMenu`

## Requirements

**Header:** afxwin.h

## <a name="appendmenu"></a> CMenu::AppendMenu

Appends a new item to the end of a menu.

```
BOOL AppendMenu(
    UINT nFlags,
    UINT_PTR nIDNewItem = 0,
    LPCTSTR lpszNewItem = NULL);

BOOL AppendMenu(
    UINT nFlags,
    UINT_PTR nIDNewItem,
    const CBitmap* pBmp);
```

### Parameters

*nFlags*<br/>
Specifies information about the state of the new menu item when it is added to the menu. It consists of one or more of the values listed in the Remarks section.

*nIDNewItem*<br/>
Specifies either the command ID of the new menu item or, if *nFlags* is set to MF_POPUP, the menu handle ( `HMENU`) of a pop-up menu. The *nIDNewItem* parameter is ignored (not needed) if *nFlags* is set to MF_SEPARATOR.

*lpszNewItem*<br/>
Specifies the content of the new menu item. The *nFlags* parameter is used to interpret *lpszNewItem* in the following way:

|nFlags|Interpretation of lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contains an application-supplied 32-bit value that the application can use to maintain additional data associated with the menu item. This 32-bit value is available to the application when it processes WM_MEASUREITEM and WM_DRAWITEM messages. The value is stored in the `itemData` member of the structure supplied with those messages.|
|MF_STRING|Contains a pointer to a null-terminated string. This is the default interpretation.|
|MF_SEPARATOR|The *lpszNewItem* parameter is ignored (not needed).|

*pBmp*<br/>
Points to a `CBitmap` object that will be used as the menu item.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

The application can specify the state of the menu item by setting values in *nFlags*. When *nIDNewItem* specifies a pop-up menu, it becomes part of the menu to which it is appended. If that menu is destroyed, the appended menu will also be destroyed. An appended menu should be detached from a `CMenu` object to avoid conflict. Note that MF_STRING and MF_OWNERDRAW are not valid for the bitmap version of `AppendMenu`.

The following list describes the flags that may be set in *nFlags*:

- MF_CHECKED Acts as a toggle with MF_UNCHECKED to place the default check mark next to the item. When the application supplies check-mark bitmaps (see the [SetMenuItemBitmaps](#setmenuitembitmaps) member function), the "check mark on" bitmap is displayed.

- MF_UNCHECKED Acts as a toggle with MF_CHECKED to remove a check mark next to the item. When the application supplies check-mark bitmaps (see the `SetMenuItemBitmaps` member function), the "check mark off" bitmap is displayed.

- MF_DISABLED Disables the menu item so that it cannot be selected but does not dim it.

- MF_ENABLED Enables the menu item so that it can be selected and restores it from its dimmed state.

- MF_GRAYED Disables the menu item so that it cannot be selected and dims it.

- MF_MENUBARBREAK Places the item on a new line in static menus or in a new column in pop-up menus. The new pop-up menu column will be separated from the old column by a vertical dividing line.

- MF_MENUBREAK Places the item on a new line in static menus or in a new column in pop-up menus. No dividing line is placed between the columns.

- MF_OWNERDRAW Specifies that the item is an owner-draw item. When the menu is displayed for the first time, the window that owns the menu receives a WM_MEASUREITEM message, which retrieves the height and width of the menu item. The WM_DRAWITEM message is the one sent whenever the owner must update the visual appearance of the menu item. This option is not valid for a top-level menu item.

- MF_POPUP Specifies that the menu item has a pop-up menu associated with it. The ID parameter specifies a handle to a pop-up menu that is to be associated with the item. This is used for adding either a top-level pop-up menu or a hierarchical pop-up menu to a pop-up menu item.

- MF_SEPARATOR Draws a horizontal dividing line. Can only be used in a pop-up menu. This line cannot be dimmed, disabled, or highlighted. Other parameters are ignored.

- MF_STRING Specifies that the menu item is a character string.

Each of the following groups lists flags that are mutually exclusive and cannot be used together:

- MF_DISABLED, MF_ENABLED, and MF_GRAYED

- MF_STRING, MF_OWNERDRAW, MF_SEPARATOR, and the bitmap version

- MF_MENUBARBREAK and MF_MENUBREAK

- MF_CHECKED and MF_UNCHECKED

Whenever a menu that resides in a window is changed (whether or not the window is displayed), the application should call [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).

### Example

  See the example for [CMenu::CreateMenu](#createmenu).

## <a name="attach"></a> CMenu::Attach

Attaches an existing Windows menu to a `CMenu` object.

```
BOOL Attach(HMENU hMenu);
```

### Parameters

*hMenu*<br/>
Specifies a handle to a Windows menu.

### Return Value

Nonzero if the operation was successful; otherwise 0.

### Remarks

This function should not be called if a menu is already attached to the `CMenu` object. The menu handle is stored in the `m_hMenu` data member.

If the menu you want to manipulate is already associated with a window, you can use the [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu) function to get a handle to the menu.

### Example

[!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]

## <a name="checkmenuitem"></a> CMenu::CheckMenuItem

Adds check marks to or removes check marks from menu items in the pop-up menu.

```
UINT CheckMenuItem(
    UINT nIDCheckItem,
    UINT nCheck);
```

### Parameters

*nIDCheckItem*<br/>
Specifies the menu item to be checked, as determined by *nCheck*.

*nCheck*<br/>
Specifies how to check the menu item and how to determine the item's position in the menu. The *nCheck* parameter can be a combination of MF_CHECKED or MF_UNCHECKED with MF_BYPOSITION or MF_BYCOMMAND flags. These flags can be combined by using the bitwise OR operator. They have the following meanings:

- MF_BYCOMMAND Specifies that the parameter gives the command ID of the existing menu item. This is the default.

- MF_BYPOSITION Specifies that the parameter gives the position of the existing menu item. The first item is at position 0.

- MF_CHECKED Acts as a toggle with MF_UNCHECKED to place the default check mark next to the item.

- MF_UNCHECKED Acts as a toggle with MF_CHECKED to remove a check mark next to the item.

### Return Value

The previous state of the item: MF_CHECKED or MF_UNCHECKED, or 0xFFFFFFFF if the menu item did not exist.

### Remarks

The *nIDCheckItem* parameter specifies the item to be modified.

The *nIDCheckItem* parameter may identify a pop-up menu item as well as a menu item. No special steps are required to check a pop-up menu item. Top-level menu items cannot be checked. A pop-up menu item must be checked by position since it does not have a menu-item identifier associated with it.

### Example

  See the example for [CMenu::GetMenuState](#getmenustate).

## <a name="checkmenuradioitem"></a> CMenu::CheckMenuRadioItem

Checks a specified menu item and makes it a radio item.

```
BOOL CheckMenuRadioItem(
    UINT nIDFirst,
    UINT nIDLast,
    UINT nIDItem,
    UINT nFlags);
```

### Parameters

*nIDFirst*<br/>
Specifies (as an ID or offset, depending on the value of *nFlags*) the first menu item in the radio button group.

*nIDLast*<br/>
Specifies (as an ID or offset, depending on the value of *nFlags*) the last menu item in the radio button group.

*nIDItem*<br/>
Specifies (as an ID or offset, depending on the value of *nFlags*) the item in the group which will be checked with a radio button.

*nFlags*<br/>
Specifies interpretation of *nIDFirst*, *nIDLast*, and *nIDItem* in the following way:

|nFlags|Interpretation|
|------------|--------------------|
|MF_BYCOMMAND|Specifies that the parameter gives the command ID of the existing menu item. This is the default if neither MF_BYCOMMAND nor MF_BYPOSITION is set.|
|MF_BYPOSITION|Specifies that the parameter gives the position of the existing menu item. The first item is at position 0.|

### Return Value

Nonzero if successful; otherwise 0

### Remarks

At the same time, the function unchecks all other menu items in the associated group and clears the radio-item type flag for those items. The checked item is displayed using a radio button (or bullet) bitmap instead of a check mark bitmap.

### Example

  See the example for [ON_COMMAND_RANGE](message-map-macros-mfc.md#on_command_range).

## <a name="cmenu"></a> CMenu::CMenu

Creates an empty menu and attaches it to a `CMenu` object.

```
CMenu();
```

### Remarks

The menu is not created until you call one of the create or load member functions of `CMenu:`

- [CreateMenu](#createmenu)

- [CreatePopupMenu](#createpopupmenu)

- [LoadMenu](#loadmenu)

- [LoadMenuIndirect](#loadmenuindirect)

- [Attach](#attach)

## <a name="createmenu"></a> CMenu::CreateMenu

Creates a menu and attaches it to the `CMenu` object.

```
BOOL CreateMenu();
```

### Return Value

Nonzero if the menu was created successfully; otherwise 0.

### Remarks

The menu is initially empty. Menu items can be added by using the `AppendMenu` or `InsertMenu` member function.

If the menu is assigned to a window, it is automatically destroyed when the window is destroyed.

Before exiting, an application must free system resources associated with a menu if the menu is not assigned to a window. An application frees a menu by calling the [DestroyMenu](#destroymenu) member function.

### Example

[!code-cpp[NVC_MFCWindowing#22](../../mfc/reference/codesnippet/cpp/cmenu-class_2.cpp)]

## <a name="createpopupmenu"></a> CMenu::CreatePopupMenu

Creates a pop-up menu and attaches it to the `CMenu` object.

```
BOOL CreatePopupMenu();
```

### Return Value

Nonzero if the pop-up menu was successfully created; otherwise 0.

### Remarks

The menu is initially empty. Menu items can be added by using the `AppendMenu` or `InsertMenu` member function. The application can add the pop-up menu to an existing menu or pop-up menu. The `TrackPopupMenu` member function may be used to display this menu as a floating pop-up menu and to track selections on the pop-up menu.

If the menu is assigned to a window, it is automatically destroyed when the window is destroyed. If the menu is added to an existing menu, it is automatically destroyed when that menu is destroyed.

Before exiting, an application must free system resources associated with a pop-up menu if the menu is not assigned to a window. An application frees a menu by calling the [DestroyMenu](#destroymenu) member function.

### Example

  See the example for [CMenu::CreateMenu](#createmenu).

## <a name="deletemenu"></a> CMenu::DeleteMenu

Deletes an item from the menu.

```
BOOL DeleteMenu(
    UINT nPosition,
    UINT nFlags);
```

### Parameters

*nPosition*<br/>
Specifies the menu item that is to be deleted, as determined by *nFlags*.

*nFlags*<br/>
Is used to interpret *nPosition* in the following way:

|nFlags|Interpretation of nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifies that the parameter gives the command ID of the existing menu item. This is the default if neither MF_BYCOMMAND nor MF_BYPOSITION is set.|
|MF_BYPOSITION|Specifies that the parameter gives the position of the existing menu item. The first item is at position 0.|

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

If the menu item has an associated pop-up menu, `DeleteMenu` destroys the handle to the pop-up menu and frees the memory used by the pop-up menu.

Whenever a menu that resides in a window is changed (whether or not the window is displayed), the application must call [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).

### Example

  See the example for [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).

## <a name="deletetempmap"></a> CMenu::DeleteTempMap

Called automatically by the `CWinApp` idle-time handler, deletes any temporary `CMenu` objects created by the [FromHandle](#fromhandle) member function.

```
static void PASCAL DeleteTempMap();
```

### Remarks

`DeleteTempMap` detaches the Windows menu object attached to a temporary `CMenu` object before deleting the `CMenu` object.

### Example

[!code-cpp[NVC_MFCWindowing#23](../../mfc/reference/codesnippet/cpp/cmenu-class_3.cpp)]

## <a name="destroymenu"></a> CMenu::DestroyMenu

Destroys the menu and any Windows resources that were used.

```
BOOL DestroyMenu();
```

### Return Value

Nonzero if the menu is destroyed; otherwise 0.

### Remarks

The menu is detached from the `CMenu` object before it is destroyed. The Windows `DestroyMenu` function is automatically called in the `CMenu` destructor.

### Example

  See the example for [CMenu::CreateMenu](#createmenu).

## <a name="detach"></a> CMenu::Detach

Detaches a Windows menu from a `CMenu` object and returns the handle.

```
HMENU Detach();
```

### Return Value

The handle, of type HMENU, to a Windows menu, if successful; otherwise NULL.

### Remarks

The `m_hMenu` data member is set to NULL.

### Example

[!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]

## <a name="drawitem"></a> CMenu::DrawItem

Called by the framework when a visual aspect of an owner-drawn menu changes.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*lpDrawItemStruct*<br/>
A pointer to a [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure that contains information about the type of drawing required.

### Remarks

The `itemAction` member of the `DRAWITEMSTRUCT` structure defines the drawing action that is to be performed. Override this member function to implement drawing for an owner-draw `CMenu` object. The application should restore all graphics device interface (GDI) objects selected for the display context supplied in *lpDrawItemStruct* before the termination of this member function.

See [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) for a description of the `DRAWITEMSTRUCT` structure.

### Example

The following code is from the MFC [CTRLTEST](../../overview/visual-cpp-samples.md) sample:

[!code-cpp[NVC_MFCWindowing#24](../../mfc/reference/codesnippet/cpp/cmenu-class_4.cpp)]

## <a name="enablemenuitem"></a> CMenu::EnableMenuItem

Enables, disables, or dims a menu item.

```
UINT EnableMenuItem(
    UINT nIDEnableItem,
    UINT nEnable);
```

### Parameters

*nIDEnableItem*<br/>
Specifies the menu item to be enabled, as determined by *nEnable*. This parameter can specify pop-up menu items as well as standard menu items.

*nEnable*<br/>
Specifies the action to take. It can be a combination of MF_DISABLED, MF_ENABLED, or MF_GRAYED, with MF_BYCOMMAND or MF_BYPOSITION. These values can be combined by using the bitwise OR operator. These values have the following meanings:

- MF_BYCOMMAND Specifies that the parameter gives the command ID of the existing menu item. This is the default.

- MF_BYPOSITION Specifies that the parameter gives the position of the existing menu item. The first item is at position 0.

- MF_DISABLED Disables the menu item so that it cannot be selected but does not dim it.

- MF_ENABLED Enables the menu item so that it can be selected and restores it from its dimmed state.

- MF_GRAYED Disables the menu item so that it cannot be selected and dims it.

### Return Value

Previous state ( MF_DISABLED, MF_ENABLED, or MF_GRAYED) or -1 if not valid.

### Remarks

The [CreateMenu](#createmenu), [InsertMenu](#insertmenu), [ModifyMenu](#modifymenu), and [LoadMenuIndirect](#loadmenuindirect) member functions can also set the state (enabled, disabled, or dimmed) of a menu item.

Using the MF_BYPOSITION value requires an application to use the correct `CMenu`. If the `CMenu` of the menu bar is used, a top-level menu item (an item in the menu bar) is affected. To set the state of an item in a pop-up or nested pop-up menu by position, an application must specify the `CMenu` of the pop-up menu.

When an application specifies the MF_BYCOMMAND flag, Windows checks all pop-up menu items that are subordinate to the `CMenu`; therefore, unless duplicate menu items are present, using the `CMenu` of the menu bar is sufficient.

### Example

[!code-cpp[NVC_MFCWindowing#25](../../mfc/reference/codesnippet/cpp/cmenu-class_5.cpp)]

## <a name="fromhandle"></a> CMenu::FromHandle

Returns a pointer to a `CMenu` object given a Windows handle to a menu.

```
static CMenu* PASCAL FromHandle(HMENU hMenu);
```

### Parameters

*hMenu*<br/>
A Windows handle to a menu.

### Return Value

A pointer to a `CMenu` that may be temporary or permanent.

### Remarks

If a `CMenu` object is not already attached to the Windows menu object, a temporary `CMenu` object is created and attached.

This temporary `CMenu` object is only valid until the next time the application has idle time in its event loop, at which time all temporary objects are deleted.

### Example

  See the example for [CMenu::CreateMenu](#createmenu).

## <a name="getdefaultitem"></a> CMenu::GetDefaultItem

Determines the default menu item on the specified menu.

```
UINT GetDefaultItem(
    UINT gmdiFlags,
    BOOL fByPos = FALSE);
```

### Parameters

*gmdiFlags*<br/>
Value specifying how the function searches for menu items. This parameter can be none, one, or a combination of the following values:

|Value|Meaning|
|-----------|-------------|
|GMDI_GOINTOPOPUPS|Specifies that, if the default item is one that opens a submenu, the function is to search in the corresponding submenu recursively. If the submenu has no default item, the return value identifies the item that opens the submenu.<br /><br /> By default, the function returns the first default item on the specified menu, regardless of whether it is an item that opens a submenu.|
|GMDI_USEDISABLED|Specifies that the function is to return a default item, even if it is disabled.<br /><br /> By default, the function skips disabled or grayed items.|

*fByPos*<br/>
Value specifying whether to retrieve the menu item's identifier or its position. If this parameter is FALSE, the identifier is returned. Otherwise, the position is returned.

### Return Value

If the function succeeds, the return value is the identifier or position of the menu item. If the function fails, the return value is - 1.

### Remarks

This member function implements the behavior of the Win32 function [GetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-getmenudefaultitem), as described in the Windows SDK.

### Example

  See the example for [CMenu::InsertMenu](#insertmenu).

## <a name="getmenucontexthelpid"></a> CMenu::GetMenuContextHelpId

Retrieves the context help ID associated with `CMenu`.

```
DWORD GetMenuContextHelpId() const;
```

### Return Value

The context help ID currently associated with `CMenu` if it has one; zero otherwise.

### Example

  See the example for [CMenu::InsertMenu](#insertmenu).

## <a name="getmenuinfo"></a> CMenu::GetMenuInfo

Retrieves information for a menu.

```
BOOL GetMenuInfo(LPMENUINFO lpcmi) const;
```

### Parameters

*lpcmi*<br/>
A pointer to a [MENUINFO](/windows/win32/api/winuser/ns-winuser-menuinfo) structure containing information for the menu.

### Return Value

If the function succeeds, the return value is nonzero; otherwise, the return value is zero.

### Remarks

Call this function to retrieve information about the menu.

## <a name="getmenuitemcount"></a> CMenu::GetMenuItemCount

Determines the number of items in a pop-up or top-level menu.

```
UINT GetMenuItemCount() const;
```

### Return Value

The number of items in the menu if the function is successful; otherwise -1.

### Example

  See the example for [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).

## <a name="getmenuitemid"></a> CMenu::GetMenuItemID

Obtains the menu-item identifier for a menu item located at the position defined by *nPos*.

```
UINT GetMenuItemID(int nPos) const;
```

### Parameters

*nPos*<br/>
Specifies the position (zero-based) of the menu item whose ID is being retrieved.

### Return Value

The item ID for the specified item in a pop-up menu if the function is successful. If the specified item is a pop-up menu (as opposed to an item within the pop-up menu), the return value is -1. If *nPos* corresponds to a SEPARATOR menu item, the return value is 0.

### Example

  See the example for [CMenu::InsertMenu](#insertmenu).

## <a name="getmenuiteminfo"></a> CMenu::GetMenuItemInfo

Retrieves information about a menu item.

```
BOOL GetMenuItemInfo(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### Parameters

*uItem*<br/>
Identifier or position of the menu item to get information about. The meaning of this parameter depends on the value of `ByPos`.

*lpMenuItemInfo*<br/>
A pointer to a [MENUITEMINFO](/windows/win32/api/winuser/ns-winuser-menuiteminfow), as described in the Windows SDK, that contains information about the menu.

*fByPos*<br/>
Value specifying the meaning of `nIDItem`. By default, `ByPos` is FALSE, which indicates that uItem is a menu item identifier. If `ByPos` is not set to FALSE, it indicates a menu item position.

### Return Value

If the function succeeds, the return value is nonzero. If the function fails, the return value is zero. To get extended error information, use the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror), as described in the Windows SDK.

### Remarks

This member function implements the behavior of the of the Win32 function [GetMenuItemInfo](/windows/win32/api/winuser/nf-winuser-getmenuiteminfow), as described in the Windows SDK. Note that in the MFC implementation of `GetMenuItemInfo`, you do not use a handle to a menu.

### Example

[!code-cpp[NVC_MFCWindowing#26](../../mfc/reference/codesnippet/cpp/cmenu-class_6.cpp)]

## <a name="getmenustate"></a> CMenu::GetMenuState

Returns the status of the specified menu item or the number of items in a pop-up menu.

```
UINT GetMenuState(
    UINT nID,
    UINT nFlags) const;
```

### Parameters

*nID*<br/>
Specifies the menu item ID, as determined by *nFlags*.

*nFlags*<br/>
Specifies the nature of *nID*. It can be one of the following values:

- MF_BYCOMMAND Specifies that the parameter gives the command ID of the existing menu item. This is the default.

- MF_BYPOSITION Specifies that the parameter gives the position of the existing menu item. The first item is at position 0.

### Return Value

The value 0xFFFFFFFF if the specified item does not exist. If *nId* identifies a pop-up menu, the high-order byte contains the number of items in the pop-up menu and the low-order byte contains the menu flags associated with the pop-up menu. Otherwise the return value is a mask (Boolean OR) of the values from the following list (this mask describes the status of the menu item that *nId* identifies):

- MF_CHECKED Acts as a toggle with MF_UNCHECKED to place the default check mark next to the item. When the application supplies check-mark bitmaps (see the `SetMenuItemBitmaps` member function), the "check mark on" bitmap is displayed.

- MF_DISABLED Disables the menu item so that it cannot be selected but does not dim it.

- MF_ENABLED Enables the menu item so that it can be selected and restores it from its dimmed state. Note that the value of this constant is 0; an application should not test against 0 for failure when using this value.

- MF_GRAYED Disables the menu item so that it cannot be selected and dims it.

- MF_MENUBARBREAK Places the item on a new line in static menus or in a new column in pop-up menus. The new pop-up menu column will be separated from the old column by a vertical dividing line.

- MF_MENUBREAK Places the item on a new line in static menus or in a new column in pop-up menus. No dividing line is placed between the columns.

- MF_SEPARATOR Draws a horizontal dividing line. Can only be used in a pop-up menu. This line cannot be dimmed, disabled, or highlighted. Other parameters are ignored.

- MF_UNCHECKED Acts as a toggle with MF_CHECKED to remove a check mark next to the item. When the application supplies check-mark bitmaps (see the `SetMenuItemBitmaps` member function), the "check mark off" bitmap is displayed. Note that the value of this constant is 0; an application should not test against 0 for failure when using this value.

### Example

[!code-cpp[NVC_MFCWindowing#27](../../mfc/reference/codesnippet/cpp/cmenu-class_7.cpp)]

## <a name="getmenustring"></a> CMenu::GetMenuString

Copies the label of the specified menu item to the specified buffer.

```
int GetMenuString(
    UINT nIDItem,
    LPTSTR lpString,
    int nMaxCount,
    UINT nFlags) const;

int GetMenuString(
    UINT nIDItem,
    CString& rString,
    UINT nFlags) const;
```

### Parameters

*nIDItem*<br/>
Specifies the integer identifier of the menu item or the offset of the menu item in the menu, depending on the value of *nFlags*.

*lpString*<br/>
Points to the buffer that is to receive the label.

*rString*<br/>
A reference to a `CString` object that is to receive the copied menu string.

*nMaxCount*<br/>
Specifies the maximum length (in characters) of the label to be copied. If the label is longer than the maximum specified in *nMaxCount*, the extra characters are truncated.

*nFlags*<br/>
Specifies the interpretation of the *nIDItem* parameter. It can be one of the following values:

|nFlags|Interpretation of nIDItem|
|------------|-------------------------------|
|MF_BYCOMMAND|Specifies that the parameter gives the command ID of the existing menu item. This is the default if neither MF_BYCOMMAND nor MF_BYPOSITION is set.|
|MF_BYPOSITION|Specifies that the parameter gives the position of the existing menu item. The first item is at position 0.|

### Return Value

Specifies the actual number of characters copied to the buffer, not including the null terminator.

### Remarks

The *nMaxCount* parameter should be one larger than the number of characters in the label to accommodate the null character that terminates a string.

### Example

  See the example for [CMenu::InsertMenu](#insertmenu).

## <a name="getsafehmenu"></a> CMenu::GetSafeHmenu

Returns the HMENU wrapped by this `CMenu` object, or a NULL`CMenu` pointer.

```
HMENU GetSafeHmenu() const;
```

### Example

  See the example for [CMenu::LoadMenu](#loadmenu).

## <a name="getsubmenu"></a> CMenu::GetSubMenu

Retrieves the `CMenu` object of a pop-up menu.

```
CMenu* GetSubMenu(int nPos) const;
```

### Parameters

*nPos*<br/>
Specifies the position of the pop-up menu contained in the menu. Position values start at 0 for the first menu item. The pop-up menu's identifier cannot be used in this function.

### Return Value

A pointer to a `CMenu` object whose `m_hMenu` member contains a handle to the pop-up menu if a pop-up menu exists at the given position; otherwise NULL. If a `CMenu` object does not exist, then a temporary one is created. The `CMenu` pointer returned should not be stored.

### Example

  See the example for [CMenu::TrackPopupMenu](#trackpopupmenu).

## <a name="insertmenu"></a> CMenu::InsertMenu

Inserts a new menu item at the position specified by *nPosition* and moves other items down the menu.

```
BOOL InsertMenu(
    UINT nPosition,
    UINT nFlags,
    UINT_PTR nIDNewItem = 0,
    LPCTSTR lpszNewItem = NULL);

BOOL InsertMenu(
    UINT nPosition,
    UINT nFlags,
    UINT_PTR nIDNewItem,
    const CBitmap* pBmp);
```

### Parameters

*nPosition*<br/>
Specifies the menu item before which the new menu item is to be inserted. The *nFlags* parameter can be used to interpret *nPosition* in the following ways:

|nFlags|Interpretation of nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifies that the parameter gives the command ID of the existing menu item. This is the default if neither MF_BYCOMMAND nor MF_BYPOSITION is set.|
|MF_BYPOSITION|Specifies that the parameter gives the position of the existing menu item. The first item is at position 0. If *nPosition* is -1, the new menu item is appended to the end of the menu.|

*nFlags*<br/>
Specifies how *nPosition* is interpreted and specifies information about the state of the new menu item when it is added to the menu. For a list of the flags that may be set, see the [AppendMenu](#appendmenu) member function. To specify more than one value, use the bitwise OR operator to combine them with the MF_BYCOMMAND or MF_BYPOSITION flag.

*nIDNewItem*<br/>
Specifies either the command ID of the new menu item or, if *nFlags* is set to MF_POPUP, the menu handle ( HMENU) of the pop-up menu. The *nIDNewItem* parameter is ignored (not needed) if *nFlags* is set to MF_SEPARATOR.

*lpszNewItem*<br/>
Specifies the content of the new menu item. *nFlags* can be used to interpret *lpszNewItem* in the following ways:

|nFlags|Interpretation of lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contains an application-supplied 32-bit value that the application can use to maintain additional data associated with the menu item. This 32-bit value is available to the application in the `itemData` member of the structure supplied by the [WM_MEASUREITEM](/windows/win32/Controls/wm-measureitem) and [WM_DRAWITEM](/windows/win32/Controls/wm-drawitem) messages. These messages are sent when the menu item is initially displayed or is changed.|
|MF_STRING|Contains a long pointer to a null-terminated string. This is the default interpretation.|
|MF_SEPARATOR|The *lpszNewItem* parameter is ignored (not needed).|

*pBmp*<br/>
Points to a `CBitmap` object that will be used as the menu item.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

The application can specify the state of the menu item by setting values in *nFlags*.

Whenever a menu that resides in a window is changed (whether or not the window is displayed), the application should call `CWnd::DrawMenuBar`.

When *nIDNewItem* specifies a pop-up menu, it becomes part of the menu in which it is inserted. If that menu is destroyed, the inserted menu will also be destroyed. An inserted menu should be detached from a `CMenu` object to avoid conflict.

If the active multiple document interface (MDI) child window is maximized and an application inserts a pop-up menu into the MDI application's menu by calling this function and specifying the MF_BYPOSITION flag, the menu is inserted one position farther left than expected. This happens because the Control menu of the active MDI child window is inserted into the first position of the MDI frame window's menu bar. To position the menu properly, the application must add 1 to the position value that would otherwise be used. An application can use the WM_MDIGETACTIVE message to determine whether the currently active child window is maximized.

### Example

[!code-cpp[NVC_MFCWindowing#28](../../mfc/reference/codesnippet/cpp/cmenu-class_8.cpp)]

## <a name="insertmenuitem"></a> CMenu::InsertMenuItem

Inserts a new menu item at the specified position in a menu.

```
BOOL InsertMenuItem(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### Parameters

*uItem*<br/>
See description of *uItem* in [InsertMenuItem](/windows/win32/api/winuser/nf-winuser-insertmenuitemw) in the Windows SDK.

*lpMenuItemInfo*<br/>
See description of *lpmii* in `InsertMenuItem` in the Windows SDK.

*fByPos*<br/>
See description of *fByPosition* in `InsertMenuItem` in the Windows SDK.

### Remarks

This function wraps [InsertMenuItem](/windows/win32/api/winuser/nf-winuser-insertmenuitemw), described in the Windows SDK.

## <a name="loadmenu"></a> CMenu::LoadMenu

Loads a menu resource from the application's executable file and attaches it to the `CMenu` object.

```
BOOL LoadMenu(LPCTSTR lpszResourceName);
BOOL LoadMenu(UINT nIDResource);
```

### Parameters

*lpszResourceName*<br/>
Points to a null-terminated string that contains the name of the menu resource to load.

*nIDResource*<br/>
Specifies the menu ID of the menu resource to load.

### Return Value

Nonzero if the menu resource was loaded successfully; otherwise 0.

### Remarks

Before exiting, an application must free system resources associated with a menu if the menu is not assigned to a window. An application frees a menu by calling the [DestroyMenu](#destroymenu) member function.

### Example

[!code-cpp[NVC_MFCWindowing#29](../../mfc/reference/codesnippet/cpp/cmenu-class_9.cpp)]

## <a name="loadmenuindirect"></a> CMenu::LoadMenuIndirect

Loads a resource from a menu template in memory and attaches it to the `CMenu` object.

```
BOOL LoadMenuIndirect(const void* lpMenuTemplate);
```

### Parameters

*lpMenuTemplate*<br/>
Points to a menu template (which is a single [MENUITEMTEMPLATEHEADER](/windows/win32/api/winuser/ns-winuser-menuitemtemplateheader) structure and a collection of one or more [MENUITEMTEMPLATE](/windows/win32/api/winuser/ns-winuser-menuitemtemplate) structures). For more information on these two structures, see the Windows SDK.

### Return Value

Nonzero if the menu resource was loaded successfully; otherwise 0.

### Remarks

A menu template is a header followed by a collection of one or more [MENUITEMTEMPLATE](/windows/win32/api/winuser/ns-winuser-menuitemtemplate) structures, each of which may contain one or more menu items and pop-up menus.

The version number should be 0.

The `mtOption` flags should include MF_END for the last item in a pop-up list and for the last item in the main list. See the `AppendMenu` member function for other flags. The `mtId` member must be omitted from the MENUITEMTEMPLATE structure when MF_POPUP is specified in `mtOption`.

The space allocated for the MENUITEMTEMPLATE structure must be large enough for `mtString` to contain the name of the menu item as a null-terminated string.

Before exiting, an application must free system resources associated with a menu if the menu is not assigned to a window. An application frees a menu by calling the [DestroyMenu](#destroymenu) member function.

### Example

[!code-cpp[NVC_MFCWindowing#30](../../mfc/reference/codesnippet/cpp/cmenu-class_10.cpp)]

## <a name="m_hmenu"></a> CMenu::m_hMenu

Specifies the HMENU handle of the Windows menu attached to the `CMenu` object.

```
HMENU m_hMenu;
```

### Example

  See the example for [CMenu::LoadMenu](#loadmenu).

## <a name="measureitem"></a> CMenu::MeasureItem

Called by the framework when a menu with the owner-draw style is created.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### Parameters

*lpMeasureItemStruct*<br/>
A pointer to a `MEASUREITEMSTRUCT` structure.

### Remarks

By default, this member function does nothing. Override this member function and fill in the `MEASUREITEMSTRUCT` structure to inform Windows of the menu's dimensions.

See [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) for a description of the `MEASUREITEMSTRUCT` structure.

### Example

The following code is from the MFC [CTRLTEST](../../overview/visual-cpp-samples.md) sample:

[!code-cpp[NVC_MFCWindowing#31](../../mfc/reference/codesnippet/cpp/cmenu-class_11.cpp)]

## <a name="modifymenu"></a> CMenu::ModifyMenu

Changes an existing menu item at the position specified by *nPosition*.

```
BOOL ModifyMenu(
    UINT nPosition,
    UINT nFlags,
    UINT_PTR nIDNewItem = 0,
    LPCTSTR lpszNewItem = NULL);

BOOL ModifyMenu(
    UINT nPosition,
    UINT nFlags,
    UINT_PTR nIDNewItem,
    const CBitmap* pBmp);
```

### Parameters

*nPosition*<br/>
Specifies the menu item to be changed. The *nFlags* parameter can be used to interpret *nPosition* in the following ways:

|nFlags|Interpretation of nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifies that the parameter gives the command ID of the existing menu item. This is the default if neither MF_BYCOMMAND nor MF_BYPOSITION is set.|
|MF_BYPOSITION|Specifies that the parameter gives the position of the existing menu item. The first item is at position 0.|

*nFlags*<br/>
Specifies how *nPosition* is interpreted and gives information about the changes to be made to the menu item. For a list of flags that may be set, see the [AppendMenu](#appendmenu) member function.

*nIDNewItem*<br/>
Specifies either the command ID of the modified menu item or, if *nFlags* is set to MF_POPUP, the menu handle (HMENU) of a pop-up menu. The *nIDNewItem* parameter is ignored (not needed) if *nFlags* is set to MF_SEPARATOR.

*lpszNewItem*<br/>
Specifies the content of the new menu item. The *nFlags* parameter can be used to interpret *lpszNewItem* in the following ways:

|nFlags|Interpretation of lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contains an application-supplied 32-bit value that the application can use to maintain additional data associated with the menu item. This 32-bit value is available to the application when it processes MF_MEASUREITEM and MF_DRAWITEM.|
|MF_STRING|Contains a long pointer to a null-terminated string or to a `CString`.|
|MF_SEPARATOR|The *lpszNewItem* parameter is ignored (not needed).|

*pBmp*<br/>
Points to a `CBitmap` object that will be used as the menu item.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

The application specifies the new state of the menu item by setting values in *nFlags*. If this function replaces a pop-up menu associated with the menu item, it destroys the old pop-up menu and frees the memory used by the pop-up menu.

When *nIDNewItem* specifies a pop-up menu, it becomes part of the menu in which it is inserted. If that menu is destroyed, the inserted menu will also be destroyed. An inserted menu should be detached from a `CMenu` object to avoid conflict.

Whenever a menu that resides in a window is changed (whether or not the window is displayed), the application should call `CWnd::DrawMenuBar`. To change the attributes of existing menu items, it is much faster to use the `CheckMenuItem` and `EnableMenuItem` member functions.

### Example

  See the example for [CMenu::InsertMenu](#insertmenu).

## <a name="operator_hmenu"></a> CMenu::operator HMENU

Use this operator to retrieve the handle of the `CMenu` object.

```
operator HMENU() const;
```

### Return Value

If successful, the handle of the `CMenu` object; otherwise, NULL.

### Remarks

You can use the handle to call Windows APIs directly.

## <a name="operator_neq"></a> CMenu::operator !=

Determines if two menus are logically not equal.

```
BOOL operator!=(const CMenu& menu) const;
```

### Parameters

*menu*<br/>
A `CMenu` object for comparison.

### Remarks

Tests if a menu object on the left side is not equal to a menu object on the right side.

## <a name="operator_eq_eq"></a> CMenu::operator ==

Determines if two menus are logically equal.

```
BOOL operator==(const CMenu& menu) const;
```

### Parameters

*menu*<br/>
A `CMenu` object for comparison.

### Remarks

Tests if a menu object on the left side is equal (in terms of the HMENU value) to a menu object on the right side.

## <a name="removemenu"></a> CMenu::RemoveMenu

Deletes a menu item with an associated pop-up menu from the menu.

```
BOOL RemoveMenu(
    UINT nPosition,
    UINT nFlags);
```

### Parameters

*nPosition*<br/>
Specifies the menu item to be removed. The *nFlags* parameter can be used to interpret *nPosition* in the following ways:

|nFlags|Interpretation of nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifies that the parameter gives the command ID of the existing menu item. This is the default if neither MF_BYCOMMAND nor MF_BYPOSITION is set.|
|MF_BYPOSITION|Specifies that the parameter gives the position of the existing menu item. The first item is at position 0.|

*nFlags*<br/>
Specifies how *nPosition* is interpreted.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

It does not destroy the handle for a pop-up menu, so the menu can be reused. Before calling this function, the application may call the `GetSubMenu` member function to retrieve the pop-up `CMenu` object for reuse.

Whenever a menu that resides in a window is changed (whether or not the window is displayed), the application must call `CWnd::DrawMenuBar`.

### Example

  See the example for [CMenu::InsertMenu](#insertmenu).

## <a name="setdefaultitem"></a> CMenu::SetDefaultItem

Sets the default menu item for the specified menu.

```
BOOL SetDefaultItem(
    UINT uItem,
    BOOL fByPos = FALSE);
```

### Parameters

*uItem*<br/>
Identifier or position of the new default menu item or - 1 for no default item. The meaning of this parameter depends on the value of *fByPos*.

*fByPos*<br/>
Value specifying the meaning of *uItem*. If this parameter is FALSE, *uItem* is a menu item identifier. Otherwise, it is a menu item position.

### Return Value

If the function succeeds, the return value is nonzero. If the function fails, the return value is zero. To get extended error information, use the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror), as described in the Windows SDK.

### Remarks

This member function implements the behavior of the Win32 function [SetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-setmenudefaultitem), as described in the Windows SDK.

### Example

  See the example for [CMenu::InsertMenu](#insertmenu).

## <a name="setmenucontexthelpid"></a> CMenu::SetMenuContextHelpId

Associates a context help ID with `CMenu`.

```
BOOL SetMenuContextHelpId(DWORD dwContextHelpId);
```

### Parameters

*dwContextHelpId*<br/>
Context help ID to associate with `CMenu`.

### Return Value

Nonzero if successful; otherwise 0

### Remarks

All items in the menu share this identifier — it is not possible to attach a help context identifier to the individual menu items.

### Example

  See the example for [CMenu::InsertMenu](#insertmenu).

## <a name="setmenuinfo"></a> CMenu::SetMenuInfo

Sets information for a menu.

```
BOOL SetMenuInfo(LPCMENUINFO lpcmi);
```

### Parameters

*lpcmi*<br/>
A pointer to a [MENUINFO](/windows/win32/api/winuser/ns-winuser-menuinfo) structure containing information for the menu.

### Return Value

If the function succeeds, the return value is nonzero; otherwise, the return value is zero.

### Remarks

Call this function to set specific information about the menu.

## <a name="setmenuitembitmaps"></a> CMenu::SetMenuItemBitmaps

Associates the specified bitmaps with a menu item.

```
BOOL SetMenuItemBitmaps(
    UINT nPosition,
    UINT nFlags,
    const CBitmap* pBmpUnchecked,
    const CBitmap* pBmpChecked);
```

### Parameters

*nPosition*<br/>
Specifies the menu item to be changed. The *nFlags* parameter can be used to interpret *nPosition* in the following ways:

|nFlags|Interpretation of nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifies that the parameter gives the command ID of the existing menu item. This is the default if neither MF_BYCOMMAND nor MF_BYPOSITION is set.|
|MF_BYPOSITION|Specifies that the parameter gives the position of the existing menu item. The first item is at position 0.|

*nFlags*<br/>
Specifies how *nPosition* is interpreted.

*pBmpUnchecked*<br/>
Specifies the bitmap to use for menu items that are not checked.

*pBmpChecked*<br/>
Specifies the bitmap to use for menu items that are checked.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

Whether the menu item is checked or unchecked, Windows displays the appropriate bitmap next to the menu item.

If either *pBmpUnchecked* or *pBmpChecked* is NULL, then Windows displays nothing next to the menu item for the corresponding attribute. If both parameters are NULL, Windows uses the default check mark when the item is checked and removes the check mark when the item is unchecked.

When the menu is destroyed, these bitmaps are not destroyed; the application must destroy them.

The Windows `GetMenuCheckMarkDimensions` function retrieves the dimensions of the default check mark used for menu items. The application uses these values to determine the appropriate size for the bitmaps supplied with this function. Get the size, create your bitmaps, and then set them.

### Example

[!code-cpp[NVC_MFCWindowing#32](../../mfc/reference/codesnippet/cpp/cmenu-class_12.cpp)]

[!code-cpp[NVC_MFCWindowing#33](../../mfc/reference/codesnippet/cpp/cmenu-class_13.cpp)]

## <a name="setmenuiteminfo"></a> CMenu::SetMenuItemInfo

Changes information about a menu item.

```
BOOL SetMenuItemInfo(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### Parameters

*uItem*<br/>
See description of *uItem* in [SetMenuItemInfo](/windows/win32/api/winuser/nf-winuser-setmenuiteminfow) in the Windows SDK.

*lpMenuItemInfo*<br/>
See description of *lpmii* in `SetMenuItemInfo` in the Windows SDK.

*fByPos*<br/>
See description of *fByPosition* in `SetMenuItemInfo` in the Windows SDK.

### Remarks

This function wraps [SetMenuItemInfo](/windows/win32/api/winuser/nf-winuser-setmenuiteminfow), described in the Windows SDK.

## <a name="trackpopupmenu"></a> CMenu::TrackPopupMenu

Displays a floating pop-up menu at the specified location and tracks the selection of items on the pop-up menu.

```
BOOL TrackPopupMenu(
    UINT nFlags,
    int x,
    int y,
    CWnd* pWnd,
    LPCRECT lpRect = 0);
```

### Parameters

*nFlags*<br/>
Specifies screen-position and mouse-position flags. See [TrackPopupMenu](/windows/win32/api/winuser/nf-winuser-trackpopupmenu) for a list of available flags.

*x*<br/>
Specifies the horizontal position in screen coordinates of the pop-up menu. Depending on the value of the *nFlags* parameter, the menu can be left-aligned, right-aligned, or centered relative to this position.

*y*<br/>
Specifies the vertical position in screen coordinates of the top of the menu on the screen.

*pWnd*<br/>
Identifies the window that owns the pop-up menu. This parameter cannot be NULL, even if the TPM_NONOTIFY flag is specified. This window receives all WM_COMMAND messages from the menu. In Windows versions 3.1 and later, the window does not receive WM_COMMAND messages until `TrackPopupMenu` returns. In Windows 3.0, the window receives WM_COMMAND messages before `TrackPopupMenu` returns.

*lpRect*<br/>
Ignored.

### Return Value

This method returns the result of calling [TrackPopupMenu](/windows/win32/api/winuser/nf-winuser-trackpopupmenu) in the Windows SDK.

### Remarks

A floating pop-up menu can appear anywhere on the screen.

### Example

[!code-cpp[NVC_MFCWindowing#34](../../mfc/reference/codesnippet/cpp/cmenu-class_14.cpp)]

## <a name="trackpopupmenuex"></a> CMenu::TrackPopupMenuEx

Displays a floating pop-up menu at the specified location and tracks the selection of items on the pop-up menu.

```
BOOL TrackPopupMenuEx(
    UINT fuFlags,
    int x,
    int y,
    CWnd* pWnd,
    LPTPMPARAMS lptpm);
```

### Parameters

*fuFlags*<br/>
Specifies various functions for the extended menu. For a listing of all values and their meaning, see [TrackPopupMenuEx](/windows/win32/api/winuser/nf-winuser-trackpopupmenuex).

*x*<br/>
Specifies the horizontal position in screen coordinates of the pop-up menu.

*y*<br/>
Specifies the vertical position in screen coordinates of the top of the menu on the screen.

*pWnd*<br/>
A pointer to the window owning the pop-up menu and receiving the messages from the created menu. This window can be any window from the current application but cannot be NULL. If you specify TPM_NONOTIFY in the *fuFlags* parameter, the function does not send any messages to *pWnd*. The function must return for the window pointed to by *pWnd* to receive the WM_COMMAND message.

*lptpm*<br/>
Pointer to a [TPMPARAMS](/windows/win32/api/winuser/ns-winuser-tpmparams) structure that specifies an area of the screen the menu should not overlap. This parameter can be NULL.

### Return Value

If you specify TPM_RETURNCMD in the *fuFlags* parameter, the return value is the menu-item identifier of the item that the user selected. If the user cancels the menu without making a selection, or if an error occurs, then the return value is 0.

If you do not specify TPM_RETURNCMD in the *fuFlags* parameter, the return value is nonzero if the function succeeds and 0 if it fails. To get extended error information, call [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### Remarks

A floating pop-up menu can appear anywhere on the screen. For more information on handling errors when creating the pop-up menu, see [TrackPopupMenuEx](/windows/win32/api/winuser/nf-winuser-trackpopupmenuex).

## See also

[MFC Sample CTRLTEST](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample DYNAMENU](../../overview/visual-cpp-samples.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)
