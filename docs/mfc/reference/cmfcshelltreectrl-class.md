---
description: "Learn more about: CMFCShellTreeCtrl Class"
title: "CMFCShellTreeCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCShellTreeCtrl", "AFXSHELLTREECTRL/CMFCShellTreeCtrl", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::EnableShellContextMenu", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::GetFlags", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::GetItemPath", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::GetRelatedList", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::OnChildNotify", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::OnGetItemIcon", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::OnGetItemText", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::Refresh", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::SelectPath", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::SetFlags", "AFXSHELLTREECTRL/CMFCShellTreeCtrl::SetRelatedList"]
helpviewer_keywords: ["CMFCShellTreeCtrl [MFC], EnableShellContextMenu", "CMFCShellTreeCtrl [MFC], GetFlags", "CMFCShellTreeCtrl [MFC], GetItemPath", "CMFCShellTreeCtrl [MFC], GetRelatedList", "CMFCShellTreeCtrl [MFC], OnChildNotify", "CMFCShellTreeCtrl [MFC], OnGetItemIcon", "CMFCShellTreeCtrl [MFC], OnGetItemText", "CMFCShellTreeCtrl [MFC], Refresh", "CMFCShellTreeCtrl [MFC], SelectPath", "CMFCShellTreeCtrl [MFC], SetFlags", "CMFCShellTreeCtrl [MFC], SetRelatedList"]
ms.assetid: 3d1da715-9554-4ed7-968c-055c48146267
---
# CMFCShellTreeCtrl Class

The `CMFCShellTreeCtrl` class extends [CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md) functionality by displaying a hierarchy of Shell items.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCShellTreeCtrl : public CTreeCtrl
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCShellTreeCtrl::EnableShellContextMenu](#enableshellcontextmenu)|Enables or disables the shortcut menu.|
|[CMFCShellTreeCtrl::GetFlags](#getflags)|Returns a combination of flags that are passed to [IShellFolder::EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects).|
|[CMFCShellTreeCtrl::GetItemPath](#getitempath)|Retrieves the path to an item.|
|[CMFCShellTreeCtrl::GetRelatedList](#getrelatedlist)|Returns a pointer to the [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object that is used together with this `CMFCShellTreeCtrl` object to create an Explorer-like window.|
|[CMFCShellTreeCtrl::OnChildNotify](#onchildnotify)|This member function is called by this window's parent window when it receives a notification message that applies to this window. (Overrides [CWnd::OnChildNotify](../../mfc/reference/cwnd-class.md#onchildnotify).)|
|[CMFCShellTreeCtrl::OnGetItemIcon](#ongetitemicon)||
|[CMFCShellTreeCtrl::OnGetItemText](#ongetitemtext)||
|[CMFCShellTreeCtrl::Refresh](#refresh)|Refreshes and repaints the current `CMFCShellTreeCtrl` object.|
|[CMFCShellTreeCtrl::SelectPath](#selectpath)|Selects the appropriate tree control item based on a supplied PIDL or string path.|
|[CMFCShellTreeCtrl::SetFlags](#setflags)|Sets flags to filter the tree context (similar to the flags used by `IShellFolder::EnumObjects`).|
|[CMFCShellTreeCtrl::SetRelatedList](#setrelatedlist)|Sets a relation between the current `CMFCShellTreeCtrl` object and a `CMFCShellListCtrl` object.|

## Remarks

This class extends the `CTreeCtrl` class by enabling your program to include Windows Shell items in the tree. This class can be associated with a `CMFCShellListCtrl` object to create a complete Explorer window. Then, selecting an item in the tree will display a list of Windows Shell items in the associated list.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CTreeCtrl](../../mfc/reference/ctreectrl-class.md)

`CMFCShellTreeCtrl`

## Requirements

**Header:** afxshelltreeCtrl.h

## Example

The following example demonstrates how to create an object of the `CMFCShellTreeCtrl` class. This code snippet is part of the [Explorer sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Explorer#4](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_1.h)]
[!code-cpp[NVC_MFC_Explorer#5](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_2.cpp)]

## <a name="enableshellcontextmenu"></a> CMFCShellTreeCtrl::EnableShellContextMenu

Enables the shortcut menu.

```cpp
void EnableShellContextMenu(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
[in] A Boolean that specifies whether to enable the shortcut menu.

## <a name="getflags"></a> CMFCShellTreeCtrl::GetFlags

Returns the flags set for the [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md) object.

```
DWORD GetFlags() const;
```

### Return Value

A DWORD value that specifies the combination of flags currently set.

### Remarks

The flags set in the `CMFCShellTreeCtrl` are sent to the method [IShellFolder::EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects) whenever the object is refreshed. You can change the flags with the [CMFCShellTreeCtrl::SetFlags](#setflags) method.

## <a name="getitempath"></a> CMFCShellTreeCtrl::GetItemPath

Retrieves the path of an item in the [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md) object.

```
BOOL GetItemPath(
    CString& strPath,
    HTREEITEM htreeItem = NULL) const;
```

### Parameters

*strPath*<br/>
[out] A reference to a string parameter. The method writes the path of the item to this parameter.

*htreeItem*<br/>
[in] The method retrieves the path for this tree control item.

### Return Value

Nonzero if successful; 0 otherwise.

### Remarks

If this method fails, *strPath* contains the empty string.

If you do not specify *hTreeItem*, this method tries to obtain the string for the currently selected item. If no item is selected and *hTreeItem* is NULL, this method fails.

## <a name="getrelatedlist"></a> CMFCShellTreeCtrl::GetRelatedList

Returns a pointer to the [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object that is associated with this [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) object.

```
CMFCShellListCtrl* GetRelatedList() const;
```

### Return Value

A pointer to the `CMFCShellListCtrl` object that is associated with this tree control object.

### Remarks

By using a `CMFCShellListCtrl` object together with a `CMFCShellTreeCtrl` object, you can create an Explorer-like window. Use the method [CMFCShellTreeCtrl::SetRelatedList](#setrelatedlist) to associate the two classes. After they are associated, the framework automatically updates the `CMFCShellListCtrl` if the selection in the `CMFCShellTreeCtrl` changes.

## <a name="onchildnotify"></a> CMFCShellTreeCtrl::OnChildNotify

```
virtual BOOL OnChildNotify(
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* pLResult);
```

### Parameters

[in] *message*<br/>
[in] *wParam*<br/>
[in] *lParam*<br/>
[in] *pLResult*<br/>

### Return Value

### Remarks

## <a name="ongetitemicon"></a> CMFCShellTreeCtrl::OnGetItemIcon

```
virtual int OnGetItemIcon(
    LPAFX_SHELLITEMINFO pItem,
    BOOL bSelected);
```

### Parameters

[in] *pItem*<br/>
[in] *bSelected*<br/>

### Return Value

### Remarks

## <a name="ongetitemtext"></a> CMFCShellTreeCtrl::OnGetItemText

```
virtual CString OnGetItemText(LPAFX_SHELLITEMINFO pItem);
```

### Parameters

[in] *pItem*<br/>

### Return Value

### Remarks

## <a name="refresh"></a> CMFCShellTreeCtrl::Refresh

Refreshes and repaints the [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md).

```cpp
void Refresh();
```

### Remarks

Call this method to refresh the hierarchy of the items displayed in the `CMFCShellTreeCtrl`.

## <a name="selectpath"></a> CMFCShellTreeCtrl::SelectPath

Selects an item in the [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md) based on the supplied path.

```
BOOL SelectPath(LPCTSTR lpszPath);
BOOL SelectPath(LPCITEMIDLIST lpidl);
```

### Parameters

*lpszPath*<br/>
[in] A string that specifies the path of an item.

*lpidl*<br/>
[in] A PIDL that specifies the item

### Return Value

S_OK if successful; E_FAIL otherwise.

## <a name="setflags"></a> CMFCShellTreeCtrl::SetFlags

Sets flags to filter the tree context.

```cpp
void SetFlags(
    DWORD dwFlags,
    BOOL bRefresh = TRUE);
```

### Parameters

*dwFlags*<br/>
[in] The flags to set.

*bRefresh*<br/>
[in] A Boolean that specifies whether the `CMFCShellTreeCtrl`  should be refreshed immediately.

### Remarks

The `CMFCShellTreeCtrl` passes all set flags to [IShellFolder::EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects). For more information about the values of different flags, see [IShellFolder::EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects).

## <a name="setrelatedlist"></a> CMFCShellTreeCtrl::SetRelatedList

Associates a [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object with a [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) object.

```cpp
void SetRelatedList(CMFCShellListCtrl* pShellList);
```

### Parameters

*pShellList*<br/>
[in] A pointer to a `CMFCShellListCtrl` object.

### Remarks

This method associates a `CMFCShellListCtrl` with a `CMFCShellTreeCtrl`. These objects may be displayed as an Explorer-like window: if the user selects an object in the `CMFCShellTreeCtrl`, the associated items in the `CMFCShellListCtrl` will be automatically updated.

Use the method [CMFCShellTreeCtrl::GetRelatedList](#getrelatedlist) to retrieve the `CMFCShellListCtrl` associated with a `CMFCShellTreeCtrl`.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md)<br/>
[CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md)
