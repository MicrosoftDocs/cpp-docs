---
description: "Learn more about: CMouseManager Class"
title: "CMouseManager Class"
ms.date: "11/04/2016"
f1_keywords: ["CMouseManager", "AFXMOUSEMANAGER/CMouseManager", "AFXMOUSEMANAGER/CMouseManager::AddView", "AFXMOUSEMANAGER/CMouseManager::GetViewDblClickCommand", "AFXMOUSEMANAGER/CMouseManager::GetViewIconId", "AFXMOUSEMANAGER/CMouseManager::GetViewIdByName", "AFXMOUSEMANAGER/CMouseManager::GetViewNames", "AFXMOUSEMANAGER/CMouseManager::LoadState", "AFXMOUSEMANAGER/CMouseManager::SaveState", "AFXMOUSEMANAGER/CMouseManager::SetCommandForDblClk"]
helpviewer_keywords: ["CMouseManager [MFC], AddView", "CMouseManager [MFC], GetViewDblClickCommand", "CMouseManager [MFC], GetViewIconId", "CMouseManager [MFC], GetViewIdByName", "CMouseManager [MFC], GetViewNames", "CMouseManager [MFC], LoadState", "CMouseManager [MFC], SaveState", "CMouseManager [MFC], SetCommandForDblClk"]
ms.assetid: a4d05017-4e44-4a40-8b57-4ece0de20481
---
# CMouseManager Class

Allows a user to associate different commands with a particular [CView](../../mfc/reference/cview-class.md) object when the user double-clicks inside that view.

## Syntax

```
class CMouseManager : public CObject
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMouseManager::AddView](#addview)|Adds a `CView` object to the **Customization** dialog box. The **Customization** dialog box enables the user to associate a double-click with a command for each of the listed views.|
|[CMouseManager::GetViewDblClickCommand](#getviewdblclickcommand)|Returns the command that is executed when the user double-clicks inside the provided view.|
|[CMouseManager::GetViewIconId](#getviewiconid)|Returns the icon associated with the provided view ID.|
|[CMouseManager::GetViewIdByName](#getviewidbyname)|Returns the view ID associated with the provided view name.|
|[CMouseManager::GetViewNames](#getviewnames)|Retrieves a list of all added view names.|
|[CMouseManager::LoadState](#loadstate)|Loads the `CMouseManager` state from the Windows registry.|
|[CMouseManager::SaveState](#savestate)|Writes the `CMouseManager` state to the Windows registry.|
|[CMouseManager::SetCommandForDblClk](#setcommandfordblclk)|Associates the provided command and the provided view.|

## Remarks

The `CMouseManager` class maintains a collection of `CView` objects. Each view is identified by a name and by an ID. These views are shown in the **Customization** dialog box. The user can change the command that is associated with any view through the **Customization** dialog box. The associated command is executed when the user double-clicks in that view. To support this from a coding perspective, you must process the WM_LBUTTONDBLCLK message and call the [CWinAppEx::OnViewDoubleClick](../../mfc/reference/cwinappex-class.md#onviewdoubleclick) function in the code for that `CView` object..

You should not create a `CMouseManager` object manually. It will be created by the framework of your application. It will also be destroyed automatically when the user exits the application. To get a pointer to the mouse manager for your application, call [CWinAppEx::GetMouseManager](../../mfc/reference/cwinappex-class.md#getmousemanager).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMouseManager`

## Requirements

**Header:** afxmousemanager.h

## <a name="addview"></a> CMouseManager::AddView

Registers a [CView](../../mfc/reference/cview-class.md) object with the [CMouseManager Class](../../mfc/reference/cmousemanager-class.md) to support custom mouse behavior.

```
BOOL AddView(
    int iViewId,
    UINT uiViewNameResId,
    UINT uiIconId = 0);

BOOL AddView(
    int iId,
    LPCTSTR lpszViewName,
    UINT uiIconId = 0);
```

### Parameters

*iViewId*<br/>
[in] A view ID.

*uiViewNameResId*<br/>
[in] A resource string ID that references the view name.

*uiIconId*<br/>
[in] A view icon ID.

*iId*<br/>
[in] A view ID.

*lpszViewName*<br/>
[in] A view name.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

In order to support custom mouse behavior, a view must be registered with the `CMouseManager` object. Any object derived from the `CView` class can be registered with the mouse manager. The string and icon associated with a view are displayed in the **Mouse** tab of the **Customize** dialog box.

It is the responsibility of the programmer to create and maintain view IDs such as *iViewId* and *iId*.

For more information about how to provide custom mouse behavior, see [Keyboard and Mouse Customization](../../mfc/keyboard-and-mouse-customization.md).

### Example

The following example demonstrates how to retrieve a pointer to a `CMouseManager` object by using the `CWinAppEx::GetMouseManager` method and the `AddView` method in the `CMouseManager` class. This code snippet is part of the [State Collection sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_StateCollection#4](../../mfc/reference/codesnippet/cpp/cmousemanager-class_1.cpp)]

## <a name="getviewdblclickcommand"></a> CMouseManager::GetViewDblClickCommand

Returns the command that is executed when the user double-clicks inside the provided view.

```
UINT GetViewDblClickCommand(int iId) const;
```

### Parameters

*iId*<br/>
[in] The view ID.

### Return Value

The command identifier if the view is associated with a command; otherwise 0.

## <a name="getviewiconid"></a> CMouseManager::GetViewIconId

Retrieves the icon associated with a view ID.

```
UINT GetViewIconId(int iViewId) const;
```

### Parameters

*iViewId*<br/>
[in] The view ID.

### Return Value

An icon resource identifier if successful; otherwise 0.

### Remarks

This method will fail if the view is not first registered by using [CMouseManager::AddView](#addview).

## <a name="getviewidbyname"></a> CMouseManager::GetViewIdByName

Retrieves the view ID associated with a view name.

```
int GetViewIdByName(LPCTSTR lpszName) const;
```

### Parameters

*lpszName*<br/>
[in] The view name.

### Return Value

A view ID if successful; otherwise 0.

### Remarks

This method searches through views registered by using [CMouseManager::AddView](#addview).

## <a name="getviewnames"></a> CMouseManager::GetViewNames

Retrieves a list of all the registered view names.

```cpp
void GetViewNames(CStringList& listOfNames) const;
```

### Parameters

*listOfNames*<br/>
[out] A reference to `CStringList` object.

### Remarks

This method fills the parameter `listOfNames` with the names of all the views registered by using [CMouseManager::AddView](#addview).

## <a name="loadstate"></a> CMouseManager::LoadState

Loads the state of the [CMouseManager Class](../../mfc/reference/cmousemanager-class.md) from the registry.

```
BOOL LoadState(LPCTSTR lpszProfileName = NULL);
```

### Parameters

*lpszProfileName*<br/>
[in] A path of a registry key.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The state information loaded from the registry includes the registered views, view identifiers, and the associated commands. If the parameter *lpszProfileName* is NULL, this function loads the `CMouseManager` data from the default registry location controlled by the [CWinAppEx Class](../../mfc/reference/cwinappex-class.md).

In most cases, you do not have to call this function directly. It is called as a part of the workspace initialization process. For more information about the workspace initialization process, see [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#loadstate).

## <a name="savestate"></a> CMouseManager::SaveState

Writes the state of the [CMouseManager Class](../../mfc/reference/cmousemanager-class.md) to the registry.

```
BOOL SaveState(LPCTSTR lpszProfileName = NULL);
```

### Parameters

*lpszProfileName*<br/>
[in] A path of a registry key.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The state information written to the registry includes all registered views, view identifiers, and the associated commands. If the parameter *lpszProfileName* is NULL, this function writes the `CMouseManager` data to the default registry location controlled by the [CWinAppEx Class](../../mfc/reference/cwinappex-class.md).

In most cases, you do not have to call this function directly. It is called as a part of the workspace serialization process. For more information about the workspace serialization process, see [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate).

## <a name="setcommandfordblclk"></a> CMouseManager::SetCommandForDblClk

Associates a custom command with a view that is first registered with the mouse manager.

```cpp
void SetCommandForDblClk(
    int iViewId,
    UINT uiCmd);
```

### Parameters

*iViewId*<br/>
[in] The view identifier.

*uiCmd*<br/>
[in] The command identifier.

### Remarks

In order to associate a custom command with a view, you must first register the view by using [CMouseManager::AddView](#addview). The `AddView` method requires a view identifier as an input parameter. Once you register a view, you can call `CMouseManager::SetCommandForDblClk` with the same view identifier input parameter that you supplied to `AddView`. Thereafter, when the user double-clicks the mouse in the registered view, the application will execute the command indicated by *uiCmd.* To support the custom mouse behavior, you will also need to customize the view registered with the mouse manager. For more information about custom mouse behavior, see [Keyboard and Mouse Customization](../keyboard-and-mouse-customization.md).

If *uiCmd* is set to 0, the specified view is no longer associated with a command.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CWinAppEx Class](../../mfc/reference/cwinappex-class.md)<br/>
[Keyboard and Mouse Customization](../../mfc/keyboard-and-mouse-customization.md)
