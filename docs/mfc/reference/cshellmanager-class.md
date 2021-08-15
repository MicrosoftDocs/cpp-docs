---
description: "Learn more about: CShellManager Class"
title: "CShellManager Class"
ms.date: "11/04/2016"
f1_keywords: ["CShellManager", "AFXSHELLMANAGER/CShellManager", "AFXSHELLMANAGER/CShellManager::CShellManager", "AFXSHELLMANAGER/CShellManager::BrowseForFolder", "AFXSHELLMANAGER/CShellManager::ConcatenateItem", "AFXSHELLMANAGER/CShellManager::CopyItem", "AFXSHELLMANAGER/CShellManager::CreateItem", "AFXSHELLMANAGER/CShellManager::FreeItem", "AFXSHELLMANAGER/CShellManager::GetItemCount", "AFXSHELLMANAGER/CShellManager::GetItemSize", "AFXSHELLMANAGER/CShellManager::GetNextItem", "AFXSHELLMANAGER/CShellManager::GetParentItem", "AFXSHELLMANAGER/CShellManager::ItemFromPath"]
helpviewer_keywords: ["CShellManager [MFC], CShellManager", "CShellManager [MFC], BrowseForFolder", "CShellManager [MFC], ConcatenateItem", "CShellManager [MFC], CopyItem", "CShellManager [MFC], CreateItem", "CShellManager [MFC], FreeItem", "CShellManager [MFC], GetItemCount", "CShellManager [MFC], GetItemSize", "CShellManager [MFC], GetNextItem", "CShellManager [MFC], GetParentItem", "CShellManager [MFC], ItemFromPath"]
ms.assetid: f15c4c1a-6fae-487d-9913-9b7369b33da0
---
# CShellManager Class

Implements several methods that enable you to work with pointers to identifier lists (PIDLs).

## Syntax

```
class CShellManager : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CShellManager::CShellManager](#cshellmanager)|Constructs a `CShellManager` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CShellManager::BrowseForFolder](#browseforfolder)|Displays a dialog box that enables the user to select a shell folder.|
|[CShellManager::ConcatenateItem](#concatenateitem)|Concatenates two PIDLs.|
|[CShellManager::CopyItem](#copyitem)|Creates a new PIDL and copies the supplied PIDL to it.|
|[CShellManager::CreateItem](#createitem)|Creates a new PIDL of the specified size.|
|[CShellManager::FreeItem](#freeitem)|Deletes the supplied PIDL.|
|[CShellManager::GetItemCount](#getitemcount)|Returns the number of items in the supplied PIDL.|
|[CShellManager::GetItemSize](#getitemsize)|Returns the size of the supplied PIDL.|
|[CShellManager::GetNextItem](#getnextitem)|Returns the next item from the PIDL.|
|[CShellManager::GetParentItem](#getparentitem)|Retrieves the parent item of the supplied item.|
|[CShellManager::ItemFromPath](#itemfrompath)|Retrieves the PIDL for the item identified by the supplied path.|

## Remarks

The methods of the `CShellManager` class all deal with PIDLs. A PIDL is a unique identifier for a shell object.

You should not create a `CShellManager` object manually. It will be created automatically by the framework of your application. However, you should call [CWinAppEx::InitShellManager](../../mfc/reference/cwinappex-class.md#initshellmanager) during the initialization process of your application. To get a pointer to the shell manager for your application, call [CWinAppEx::GetShellManager](../../mfc/reference/cwinappex-class.md#getshellmanager).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CShellManager](../../mfc/reference/cshellmanager-class.md)

## Requirements

**Header:** afxshellmanager.h

## <a name="browseforfolder"></a> CShellManager::BrowseForFolder

Displays a dialog box that enables the user to select a shell folder.

```
BOOL BrowseForFolder(
    CString& strOutFolder,
    CWnd* pWndParent = NULL,
    LPCTSTR lplszInitialFolder = NULL,
    LPCTSTR lpszTitle = NULL,
    UINT ulFlags = BIF_RETURNONLYFSDIRS,
    LPINT piFolderImage = NULL);
```

### Parameters

*strOutFolder*<br/>
[out] The string used by the method to store the path of the selected folder.

*pWndParent*<br/>
[in] A pointer to the parent window.

*lplszInitialFolder*<br/>
[in] A string that contains the folder that is selected by default when the dialog box is displayed.

*lpszTitle*<br/>
[in] The title for the dialog box.

*ulFlags*<br/>
[in] Flags specifying options for the dialog box. See [BROWSEINFO](/windows/win32/api/shlobj_core/ns-shlobj_core-browseinfow) for the detailed description.

*piFolderImage*<br/>
[out] A pointer to the integer value where the method writes the image index of the selected folder.

### Return Value

Nonzero if the user selects a folder from the dialog box; otherwise 0.

### Remarks

When you call this method, the application creates and shows a dialog box that enables the user to select a folder. The method will write the path of the folder into the *strOutFolder* parameter.

### Example

The following example demonstrates how to retrieve a reference to a `CShellManager` object by using the `CWinAppEx::GetShellManager` method and how to use the `BrowseForFolder` method. This code snippet is part of the [Explorer sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Explorer#6](../../mfc/reference/codesnippet/cpp/cshellmanager-class_1.cpp)]

## <a name="concatenateitem"></a> CShellManager::ConcatenateItem

Creates a new list containing two PIDLs.

```
LPITEMIDLIST ConcatenateItem(
    LPCITEMIDLIST pidl1,
    LPCITEMIDLIST pidl2);
```

### Parameters

*pidl1*<br/>
[in] The first item.

*pidl2*<br/>
[in] The second item.

### Return Value

A pointer to the new item list if the function succeeds, otherwise NULL.

### Remarks

This method creates a new [ITEMIDLIST](/windows/win32/api/shtypes/ns-shtypes-itemidlist) large enough to contain both *pidl1* and *pidl2*. It then copies *pidl1* and *pidl2* to the new list.

## <a name="copyitem"></a> CShellManager::CopyItem

Copies an item list.

```
LPITEMIDLIST CopyItem(LPCITEMIDLIST pidlSource);
```

### Parameters

*pidlSource*<br/>
[in] The original item list.

### Return Value

A pointer to the newly created item list if successful; otherwise NULL.

### Remarks

The newly created item list has the same size as the source item list.

## <a name="createitem"></a> CShellManager::CreateItem

Creates a new PIDL.

```
LPITEMIDLIST CreateItem(UINT cbSize);
```

### Parameters

*cbSize*<br/>
[in] The size of the item list.

### Return Value

A pointer to the created item list if successful; otherwise NULL.

## <a name="cshellmanager"></a> CShellManager::CShellManager

Constructs a `CShellManager` object.

```
CShellManager();
```

### Remarks

In most cases, you do not have to create a `CShellManager` directly. By default, the framework creates one for you. To get a pointer to the `CShellManager`, call [CWinAppEx::GetShellManager](../../mfc/reference/cwinappex-class.md#getshellmanager). If you do create a `CShellManager` manually, you must initialize it with the method [CWinAppEx::InitShellManager](../../mfc/reference/cwinappex-class.md#initshellmanager).

## <a name="freeitem"></a> CShellManager::FreeItem

Deletes an item list.

```cpp
void FreeItem(LPITEMIDLIST pidl);
```

### Parameters

*pidl*<br/>
[in] An item list to delete.

## <a name="getitemcount"></a> CShellManager::GetItemCount

Returns the number of items in an item list.

```
UINT GetItemCount(LPCITEMIDLIST pidl);
```

### Parameters

*pidl*<br/>
[in] A pointer to an item list.

### Return Value

The number of items in the item list.

## <a name="getitemsize"></a> CShellManager::GetItemSize

Returns the size of an item list.

```
UINT GetItemSize(LPCITEMIDLIST pidl);
```

### Parameters

*pidl*<br/>
[in] A pointer to an item list.

### Return Value

The size of the item list.

## <a name="getnextitem"></a> CShellManager::GetNextItem

Retrieves the next item from a pointer to an item identifier list (PIDL).

```
LPITEMIDLIST GetNextItem(LPCITEMIDLIST pidl);
```

### Parameters

*pidl*<br/>
[in] The list of items to iterate.

### Return Value

A pointer to the next item in the list.

### Remarks

If there are no more items in the list, this method returns NULL.

## <a name="getparentitem"></a> CShellManager::GetParentItem

Retrieves the parent of a pointer to an item identifier list (PIDL).

```
int GetParentItem(
    LPCITEMIDLIST lpidl,
    LPITEMIDLIST& lpidlParent);
```

### Parameters

*lpidl*<br/>
[in] A PIDL whose parent will be retrieved.

*lpidlParent*<br/>
[out] A reference to a PIDL where the method will store the result.

### Return Value

The level of the parent PIDL.

### Remarks

The level of a PIDL is relative to the desktop. The desktop PIDL is considered to have a level of 0.

## <a name="itemfrompath"></a> CShellManager::ItemFromPath

Retrieves the pointer to an item identifier list (PIDL) from the item identified by a string path.

```
HRESULT ItemFromPath(
    LPCTSTR lpszPath,
    LPITEMIDLIST& pidl);
```

### Parameters

*lpszPath*<br/>
[in] A string that specifies the path for the item.

*pidl*<br/>
[out] A reference to a PIDL. The method uses this PIDL to store the pointer to its return value.

### Return Value

Returns NOERROR if successful; an OLE-defined error value.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
