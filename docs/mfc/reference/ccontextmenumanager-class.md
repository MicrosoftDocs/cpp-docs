---
description: "Learn more about: CContextMenuManager Class"
title: "CContextMenuManager Class"
ms.date: "11/04/2016"
f1_keywords: ["CContextMenuManager", "AFXCONTEXTMENUMANAGER/CContextMenuManager", "AFXCONTEXTMENUMANAGER/CContextMenuManager::CContextMenuManager", "AFXCONTEXTMENUMANAGER/CContextMenuManager::AddMenu", "AFXCONTEXTMENUMANAGER/CContextMenuManager::GetMenuById", "AFXCONTEXTMENUMANAGER/CContextMenuManager::GetMenuByName", "AFXCONTEXTMENUMANAGER/CContextMenuManager::GetMenuNames", "AFXCONTEXTMENUMANAGER/CContextMenuManager::LoadState", "AFXCONTEXTMENUMANAGER/CContextMenuManager::ResetState", "AFXCONTEXTMENUMANAGER/CContextMenuManager::SaveState", "AFXCONTEXTMENUMANAGER/CContextMenuManager::SetDontCloseActiveMenu", "AFXCONTEXTMENUMANAGER/CContextMenuManager::ShowPopupMenu", "AFXCONTEXTMENUMANAGER/CContextMenuManager::TrackPopupMenu"]
helpviewer_keywords: ["CContextMenuManager [MFC], CContextMenuManager", "CContextMenuManager [MFC], AddMenu", "CContextMenuManager [MFC], GetMenuById", "CContextMenuManager [MFC], GetMenuByName", "CContextMenuManager [MFC], GetMenuNames", "CContextMenuManager [MFC], LoadState", "CContextMenuManager [MFC], ResetState", "CContextMenuManager [MFC], SaveState", "CContextMenuManager [MFC], SetDontCloseActiveMenu", "CContextMenuManager [MFC], ShowPopupMenu", "CContextMenuManager [MFC], TrackPopupMenu"]
ms.assetid: 1de20640-243c-47e1-85de-1baa4153bc83
---
# CContextMenuManager Class

The `CContextMenuManager` object manages shortcut menus, also known as context menus.

## Syntax

```
class CContextMenuManager : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CContextMenuManager::CContextMenuManager](#ccontextmenumanager)|Constructs a `CContextMenuManager` object.|
|`CContextMenuManager::~CContextMenuManager`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CContextMenuManager::AddMenu](#addmenu)|Adds a new shortcut menu.|
|[CContextMenuManager::GetMenuById](#getmenubyid)|Returns a handle to the menu associated with the provided resource ID.|
|[CContextMenuManager::GetMenuByName](#getmenubyname)|Returns a handle to the menu that matches the provided menu name.|
|[CContextMenuManager::GetMenuNames](#getmenunames)|Returns a list of menu names.|
|[CContextMenuManager::LoadState](#loadstate)|Loads shortcut menus stored in the Windows registry.|
|[CContextMenuManager::ResetState](#resetstate)|Clears the shortcut menus from the context menu manager.|
|[CContextMenuManager::SaveState](#savestate)|Saves shortcut menus to the Windows registry.|
|[CContextMenuManager::SetDontCloseActiveMenu](#setdontcloseactivemenu)|Controls whether the `CContextMenuManager` closes the active shortcut menu when it shows a new shortcut menu.|
|[CContextMenuManager::ShowPopupMenu](#showpopupmenu)|Displays the specified shortcut menu.|
|[CContextMenuManager::TrackPopupMenu](#trackpopupmenu)|Displays the specified shortcut menu. Returns the index of the selected menu command.|

## Remarks

`CContextMenuManager` manages shortcut menus and makes sure that they have a consistent appearance.

You should not create a `CContextMenuManager` object manually. The framework of your application creates the `CContextMenuManager` object. However, you should call [CWinAppEx::InitContextMenuManager](../../mfc/reference/cwinappex-class.md#initcontextmenumanager) when your application is initialized. After initializing the context manager, use the method [CWinAppEx::GetContextMenuManager](../../mfc/reference/cwinappex-class.md#getcontextmenumanager) to obtain a pointer to the context manager for your application.

You can create shortcut menus at runtime by calling `AddMenu`. If you want to show the menu without first receiving user input, call `ShowPopupMenu`. `TrackPopupMenu` is used when you want to create a menu and wait for user input. `TrackPopupMenu` returns the index of the selected command or 0 if the user exited without selecting anything.

The `CContextMenuManager` can also save and load its state to the Windows registry.

## Example

The following example demonstrates how to add a menu to a `CContextMenuManager` object, and how not to close the active pop-up menu when the `CContextMenuManager` object displays a new pop-up menu. This code snippet is part of the [Custom Pages sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#4](../../mfc/reference/codesnippet/cpp/ccontextmenumanager-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CContextMenuManager`

## Requirements

**Header:** afxcontextmenumanager.h

## <a name="addmenu"></a> CContextMenuManager::AddMenu

Adds a new shortcut menu to the [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).

```
BOOL AddMenu(
    UINT uiMenuNameResId,
    UINT uiMenuResId);

BOOL AddMenu(
    LPCTSTR lpszName,
    UINT uiMenuResId);
```

### Parameters

*uiMenuNameResId*<br/>
[in] A resource ID for a string that contains the name for the new menu.

*uiMenuResId*<br/>
[in] The menu resource ID.

*lpszName*<br/>
[in] A string that contains the name for the new menu.

### Return Value

Nonzero if the method was successful; 0 if the method fails.

### Remarks

This method fails if *uiMenuResId* is invalid or if another menu with the same name already is in the `CContextMenuManager`.

## <a name="ccontextmenumanager"></a> CContextMenuManager::CContextMenuManager

Constructs a [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) object.

```
CContextMenuManager();
```

### Remarks

In most cases, you should not create a `CContextMenuManager` manually. The framework of your application creates the `CContextMenuManager` object. You should call [CWinAppEx::InitContextMenuManager](../../mfc/reference/cwinappex-class.md#initcontextmenumanager) during the initialization of your application. To get a pointer to the context manager, call [CWinAppEx::GetContextMenuManager](../../mfc/reference/cwinappex-class.md#getcontextmenumanager).

## <a name="getmenubyid"></a> CContextMenuManager::GetMenuById

Returns a handle to the menu associated with a given resource ID.

```
HMENU GetMenuById(UINT nMenuResId) const;
```

### Parameters

*nMenuResId*<br/>
[in] The resource ID for the menu.

### Return Value

A handle to the associated menu or `NULL` if the menu is not found.

## <a name="getmenubyname"></a> CContextMenuManager::GetMenuByName

Returns a handle to a specific menu.

```
HMENU GetMenuByName(
    LPCTSTR lpszName,
    UINT* puiOrigResID = NULL) const;
```

### Parameters

*lpszName*<br/>
[in] A string that contains the name of the menu to retrieve.

*puiOrigResID*<br/>
[out] A pointer to an UINT. This parameter contains the resource ID of the specified menu, if found.

### Return Value

A handle to the menu that matches the name that was specified by *lpszName*. NULL if there is no menu called *lpszName*.

### Remarks

If this method finds a menu that matches *lpszName*, `GetMenuByName` stores the menu resource ID in the parameter *puiOrigResID*.

## <a name="getmenunames"></a> CContextMenuManager::GetMenuNames

Returns the list of menu names added to the [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).

```cpp
void GetMenuNames(CStringList& listOfNames) const;
```

### Parameters

*listOfNames*<br/>
[out] A reference to a [CStringList](../../mfc/reference/cstringlist-class.md) parameter. This method writes the list of menu names to this parameter.

## <a name="loadstate"></a> CContextMenuManager::LoadState

Loads information associated with the [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md) from the Windows registry.

```
virtual BOOL LoadState(LPCTSTR lpszProfileName = NULL);
```

### Parameters

*lpszProfileName*<br/>
[in] A string that contains the relative path of a registry key.

### Return Value

Nonzero if the method is successful; otherwise 0.

### Remarks

The *lpszProfileName* parameter is not the absolute path for a registry entry. It is a relative path that is added to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](../../mfc/reference/cwinappex-class.md#getregistrybase) and [CWinAppEx::SetRegistryBase](../../mfc/reference/cwinappex-class.md#setregistrybase) respectively.

Use the method [CContextMenuManager::SaveState](#savestate) to save the shortcut menus to the registry.

## <a name="resetstate"></a> CContextMenuManager::ResetState

Clears all items from the shortcut menus associated with the [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md).

```
virtual BOOL ResetState();
```

### Return Value

TRUE if the method is successful; FALSE if a failure occurs.

### Remarks

This method clears the pop-up menus and removes them from the `CContextMenuManager`.

## <a name="savestate"></a> CContextMenuManager::SaveState

Saves information associated with the [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md) to the Windows registry.

```
virtual BOOL SaveState(LPCTSTR lpszProfileName = NULL);
```

### Parameters

*lpszProfileName*<br/>
[in] A string that contains the relative path of a registry key.

### Return Value

Nonzero if the method is successful; otherwise 0.

### Remarks

The *lpszProfileName* parameter is not the absolute path for a registry entry. It is a relative path that is added to the end of the default registry key for your application. To get or set the default registry key, use the methods [CWinAppEx::GetRegistryBase](../../mfc/reference/cwinappex-class.md#getregistrybase) and [CWinAppEx::SetRegistryBase](../../mfc/reference/cwinappex-class.md#setregistrybase) respectively.

Use the method [CContextMenuManager::LoadState](#loadstate) to load the shortcut menus from the registry.

## <a name="setdontcloseactivemenu"></a> CContextMenuManager::SetDontCloseActiveMenu

Controls whether the [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) closes the active pop-up menu when it displays a new pop-up menu.

```cpp
void SetDontCloseActiveMenu (BOOL bSet = TRUE);
```

### Parameters

*bSet*<br/>
[in] A Boolean parameter that controls whether to close the active pop-up menu. A value of TRUE indicates the active pop-up menu is not closed. FALSE indicates that the active pop-up menu is closed.

### Remarks

By default, the `CContextMenuManager` closes the active pop-up menu.

## <a name="showpopupmenu"></a> CContextMenuManager::ShowPopupMenu

Displays the specified shortcut menu.

```
virtual BOOL ShowPopupMenu(
    UINT uiMenuResId,
    int x,
    int y,
    CWnd* pWndOwner,
    BOOL bOwnMessage = FALSE,
    BOOL bRightAlign = FALSE);

virtual CMFCPopupMenu* ShowPopupMenu(
    HMENU hmenuPopup,
    int x,
    int y,
    CWnd* pWndOwner,
    BOOL bOwnMessage = FALSE,
    BOOL bAutoDestroy = TRUE,
    BOOL bRightAlign = FALSE);
```

### Parameters

*uiMenuResId*<br/>
[in] The resource ID of the menu that this method will display.

*x*<br/>
[in] The horizontal offset for the shortcut menu in client coordinates.

*y*<br/>
[in] The vertical offset for the shortcut menu in client coordinates

*pWndOwner*<br/>
[in] A pointer to the parent window of the shortcut menu.

*bOwnMessage*<br/>
[in] A Boolean parameter that indicates how messages are routed. If *bOwnMessage* is FALSE, standard MFC routing is used. Otherwise, *pWndOwner* receives the messages.

*hmenuPopup*<br/>
[in] The handle of the menu that this method will display.

*bAutoDestroy*<br/>
[in] A Boolean parameter that indicates whether the menu will be automatically destroyed.

*bRightAlign*<br/>
[in] A Boolean parameter that indicates how the menu items are aligned. If *bRightAlign* is TRUE, the menu is right-aligned for right-to-left reading order.

### Return Value

The first method overload returns nonzero if the method shows the menu successfully; otherwise 0. The second method overload returns a pointer to [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) if the shortcut menu displays correctly; otherwise NULL.

### Remarks

This method resembles the method [CContextMenuManager::TrackPopupMenu](#trackpopupmenu) in that both methods display a shortcut menu. However, `TrackPopupMenu` returns the index of the selected menu command.

If the parameter *bAutoDestroy* is FALSE, you must manually call the inherited `DestroyMenu` method to release memory resources. The default implementation of `ShowPopupMenu` does not use the parameter *bAutoDestroy*. It is provided for future use or for custom classes derived from the `CContextMenuManager` class .

## <a name="trackpopupmenu"></a> CContextMenuManager::TrackPopupMenu

Displays the specified shortcut menu and returns the index of the selected shortcut menu command.

```
virtual UINT TrackPopupMenu(
    HMENU hmenuPopup,
    int x,
    int y,
    CWnd* pWndOwner,
    BOOL bRightAlign = FALSE);
```

### Parameters

*hmenuPopup*<br/>
[in] The handle of the shortcut menu that this method displays.

*x*<br/>
[in] The horizontal offset for the shortcut menu in client coordinates.

*y*<br/>
[in] The vertical offset for the shortcut menu in client coordinates.

*pWndOwner*<br/>
[in] A pointer to the parent window of the shortcut menu.

*bRightAlign*<br/>
[in] A Boolean parameter that indicates how menu items are aligned. If *bRightAlign* is TRUE, the menu is right-aligned for right-to-left reading order. If *bRightAlign* is FALSE, the menu is left-aligned for left-to-right reading order.

### Return Value

The menu command ID of the command that the user chooses; 0 if the user closes the shortcut menu without selecting a menu command.

### Remarks

This method functions as a modal call to display a shortcut menu. The application will not continue to the following line in code until the user either closes the shortcut menu or selects a command. An alternative method that you can use to display a shortcut menu is [CContextMenuManager::ShowPopupMenu](#showpopupmenu). That method is not a modal call and will not return the ID of the selected command.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CWinAppEx Class](../../mfc/reference/cwinappex-class.md)
