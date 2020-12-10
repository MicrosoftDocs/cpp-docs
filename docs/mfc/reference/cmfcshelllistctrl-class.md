---
description: "Learn more about: CMFCShellListCtrl Class"
title: "CMFCShellListCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCShellListCtrl", "AFXSHELLLISTCTRL/CMFCShellListCtrl", "AFXSHELLLISTCTRL/CMFCShellListCtrl::DisplayFolder", "AFXSHELLLISTCTRL/CMFCShellListCtrl::DisplayParentFolder", "AFXSHELLLISTCTRL/CMFCShellListCtrl::EnableShellContextMenu", "AFXSHELLLISTCTRL/CMFCShellListCtrl::GetCurrentFolder", "AFXSHELLLISTCTRL/CMFCShellListCtrl::GetCurrentFolderName", "AFXSHELLLISTCTRL/CMFCShellListCtrl::GetCurrentItemIdList", "AFXSHELLLISTCTRL/CMFCShellListCtrl::GetCurrentShellFolder", "AFXSHELLLISTCTRL/CMFCShellListCtrl::GetItemPath", "AFXSHELLLISTCTRL/CMFCShellListCtrl::GetItemTypes", "AFXSHELLLISTCTRL/CMFCShellListCtrl::IsDesktop", "AFXSHELLLISTCTRL/CMFCShellListCtrl::OnCompareItems", "AFXSHELLLISTCTRL/CMFCShellListCtrl::OnFormatFileDate", "AFXSHELLLISTCTRL/CMFCShellListCtrl::OnFormatFileSize", "AFXSHELLLISTCTRL/CMFCShellListCtrl::OnGetItemIcon", "AFXSHELLLISTCTRL/CMFCShellListCtrl::OnGetItemText", "AFXSHELLLISTCTRL/CMFCShellListCtrl::OnSetColumns", "AFXSHELLLISTCTRL/CMFCShellListCtrl::Refresh", "AFXSHELLLISTCTRL/CMFCShellListCtrl::SetItemTypes"]
helpviewer_keywords: ["CMFCShellListCtrl [MFC], DisplayFolder", "CMFCShellListCtrl [MFC], DisplayParentFolder", "CMFCShellListCtrl [MFC], EnableShellContextMenu", "CMFCShellListCtrl [MFC], GetCurrentFolder", "CMFCShellListCtrl [MFC], GetCurrentFolderName", "CMFCShellListCtrl [MFC], GetCurrentItemIdList", "CMFCShellListCtrl [MFC], GetCurrentShellFolder", "CMFCShellListCtrl [MFC], GetItemPath", "CMFCShellListCtrl [MFC], GetItemTypes", "CMFCShellListCtrl [MFC], IsDesktop", "CMFCShellListCtrl [MFC], OnCompareItems", "CMFCShellListCtrl [MFC], OnFormatFileDate", "CMFCShellListCtrl [MFC], OnFormatFileSize", "CMFCShellListCtrl [MFC], OnGetItemIcon", "CMFCShellListCtrl [MFC], OnGetItemText", "CMFCShellListCtrl [MFC], OnSetColumns", "CMFCShellListCtrl [MFC], Refresh", "CMFCShellListCtrl [MFC], SetItemTypes"]
ms.assetid: ad472958-5586-4c50-aadf-1844c30bf6e7
---
# CMFCShellListCtrl Class

The `CMFCShellListCtrl` class provides Windows list control functionality and expands it by including the ability to display a list of shell items.

## Syntax

```
class CMFCShellListCtrl : public CMFCListCtrl
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCShellListCtrl::DisplayFolder](#displayfolder)|Displays a list of items that are contained in a provided folder.|
|[CMFCShellListCtrl::DisplayParentFolder](#displayparentfolder)|Displays a list of items that are contained in the folder that is the parent of the currently displayed folder.|
|[CMFCShellListCtrl::EnableShellContextMenu](#enableshellcontextmenu)|Enables or disables the shortcut menu.|
|[CMFCShellListCtrl::GetCurrentFolder](#getcurrentfolder)|Retrieves the path of the current folder.|
|[CMFCShellListCtrl::GetCurrentFolderName](#getcurrentfoldername)|Retrieves the name of the current folder.|
|[CMFCShellListCtrl::GetCurrentItemIdList](#getcurrentitemidlist)|Returns the PIDL of the current list control item.|
|[CMFCShellListCtrl::GetCurrentShellFolder](#getcurrentshellfolder)|Returns a pointer to the current Shell folder.|
|[CMFCShellListCtrl::GetItemPath](#getitempath)|Returns the textual path of an item.|
|[CMFCShellListCtrl::GetItemTypes](#getitemtypes)|Returns Shell item types that are displayed by the list control.|
|[CMFCShellListCtrl::IsDesktop](#isdesktop)|Checks if the currently selected folder is the desktop folder.|
|[CMFCShellListCtrl::OnCompareItems](#oncompareitems)|The framework calls this method when it compares two items. (Overrides [CMFCListCtrl::OnCompareItems](../../mfc/reference/cmfclistctrl-class.md#oncompareitems).)|
|[CMFCShellListCtrl::OnFormatFileDate](#onformatfiledate)|Called when the framework retrieves the file date displayed by the list control.|
|[CMFCShellListCtrl::OnFormatFileSize](#onformatfilesize)|Called when the framework converts the file size of a list control.|
|[CMFCShellListCtrl::OnGetItemIcon](#ongetitemicon)|Called when the framework retrieves the icon of a list control item.|
|[CMFCShellListCtrl::OnGetItemText](#ongetitemtext)|Called when the framework converts the text of a list control item.|
|[CMFCShellListCtrl::OnSetColumns](#onsetcolumns)|Called by the framework when it sets the names of the columns.|
|[CMFCShellListCtrl::Refresh](#refresh)|Refreshes and repaints the list control.|
|[CMFCShellListCtrl::SetItemTypes](#setitemtypes)|Sets the type of items displayed by the list control.|

## Remarks

The `CMFCShellListCtrl` class extends the functionality of the [CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md) by enabling your program to list Windows shell items. The display format that is used is like that of a list view for an Explorer window.

A [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) object can be associated with a `CMFCShellListCtrl` object to create a complete Explorer window. Then, selecting an item in the `CMFCShellTreeCtrl` will cause the `CMFCShellListCtrl` object to list the contents of the selected item.

## Example

The following example demonstrates how to create an object of the `CMFCShellListCtrl` class and how to display the parent folder of the currently displayed folder. This code snippet is part of the [Explorer sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Explorer#1](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_1.h)]
[!code-cpp[NVC_MFC_Explorer#2](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_2.cpp)]
[!code-cpp[NVC_MFC_Explorer#3](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_3.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListCtrl](../../mfc/reference/clistctrl-class.md)

[CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)

`CMFCShellListCtrl`

## Requirements

**Header:** afxshelllistCtrl.h

## <a name="displayfolder"></a> CMFCShellListCtrl::DisplayFolder

Displays a list of items that are contained in the provided folder.

```
virtual HRESULT DisplayFolder(LPCTSTR lpszPath);
virtual HRESULT DisplayFolder(LPAFX_SHELLITEMINFO lpItemInfo);
```

### Parameters

*lpszPath*<br/>
[in] A string that contains the path of a folder.

*lpItemInfo*<br/>
[in] A pointer to a `LPAFX_SHELLITEMINFO` structure that describes a folder to display.

### Return Value

S_OK if successful; E_FAIL otherwise.

## <a name="displayparentfolder"></a> CMFCShellListCtrl::DisplayParentFolder

Updates the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object to display the parent folder of the currently displayed folder.

```
virtual HRESULT DisplayParentFolder();
```

### Return Value

S_OK if successful; E_FAIL otherwise.

## <a name="enableshellcontextmenu"></a> CMFCShellListCtrl::EnableShellContextMenu

Enables the shortcut menu.

```cpp
void EnableShellContextMenu(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
[in] A Boolean that specifies whether the framework enables the shortcut menu.

## <a name="getcurrentfolder"></a> CMFCShellListCtrl::GetCurrentFolder

Retrieves the path of the currently selected folder in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.

```
BOOL GetCurrentFolder(CString& strPath) const;
```

### Parameters

*strPath*<br/>
[out] A reference to a string parameter where the method writes the path.

### Return Value

Nonzero if successful; 0 otherwise.

### Remarks

This method fails if there is no folder selected in the `CMFCShellListCtrl`.

## <a name="getcurrentfoldername"></a> CMFCShellListCtrl::GetCurrentFolderName

Retrieves the name of the currently selected folder in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.

```
BOOL GetCurrentFolderName(CString& strName) const;
```

### Parameters

*strName*<br/>
[out] A reference to a string parameter where the method writes the name.

### Return Value

Nonzero if successful; 0 otherwise.

### Remarks

This method fails if there is no folder selected in the `CMFCShellListCtrl`.

## <a name="getcurrentitemidlist"></a> CMFCShellListCtrl::GetCurrentItemIdList

Returns the PIDL of the currently selected item.

```
LPITEMIDLIST GetCurrentItemIdList() const;
```

### Return Value

The PIDL of the current item.

## <a name="getcurrentshellfolder"></a> CMFCShellListCtrl::GetCurrentShellFolder

Gets a pointer to the currently selected item in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.

```
const IShellFolder* GetCurrentShellFolder() const;
```

### Return Value

A pointer to the [IShellFolder Interface](/windows/win32/api/shobjidl_core/nn-shobjidl_core-ishellfolder) for the selected object.

### Remarks

This method returns NULL if no object is currently selected.

## <a name="getitempath"></a> CMFCShellListCtrl::GetItemPath

Retrieves the path for an item.

```
BOOL GetItemPath(
    CString& strPath,
    int iItem) const;
```

### Parameters

*strPath*<br/>
[out] A reference to a string that receives the path.

*iItem*<br/>
[in] The index of the list item.

### Return Value

TRUE if successful; FALSE otherwise.

### Remarks

The index supplied by *iItem* is based on the items currently displayed by the [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object.

## <a name="getitemtypes"></a> CMFCShellListCtrl::GetItemTypes

Returns the type of items displayed by the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.

```
SHCONTF GetItemTypes() const;
```

### Return Value

A [SHCONTF](/windows/win32/api/shobjidl_core/ne-shobjidl_core-_shcontf) value that contains the type of items listed in the `CMFCShellListCtrl`.

### Remarks

To set the type of items listed in a `CMFCShellListCtrl`, call [CMFCShellListCtrl::SetItemTypes](#setitemtypes).

## <a name="isdesktop"></a> CMFCShellListCtrl::IsDesktop

Determines if the folder that is displayed in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object is the desktop folder.

```
BOOL IsDesktop() const;
```

### Return Value

TRUE if the displayed folder is the desktop folder; FALSE otherwise.

## <a name="oncompareitems"></a> CMFCShellListCtrl::OnCompareItems

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual int OnCompareItems(
    LPARAM lParam1,
    LPARAM lParam2,
    int iColumn);
```

### Parameters

[in] *lParam1*<br/>
[in] *lParam2*<br/>
[in] *iColumn*<br/>

### Return Value

### Remarks

## <a name="onformatfiledate"></a> CMFCShellListCtrl::OnFormatFileDate

The framework calls this method when it must convert the date associated with an object into a string.

```
virtual void OnFormatFileDate(
    const CTime& tmFile,
    CString& str);
```

### Parameters

*tmFile*<br/>
[in] The date associated with a file.

*str*<br/>
[out] A string that contains the formatted file date.

### Remarks

When a [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object displays the date associated with a file, it must convert that date to a string format. The `CMFCShellListCtrl` uses this method to make that conversion. By default, this method uses the current locale to format the date into a string.

## <a name="onformatfilesize"></a> CMFCShellListCtrl::OnFormatFileSize

The framework calls this method when it converts the size of an object to a string.

```
virtual void OnFormatFileSize(
    long lFileSize,
    CString& str);
```

### Parameters

*lFileSize*<br/>
[in] The size of the file that the framework will display.

*str*<br/>
[out] A string that contains the formatted file size.

### Remarks

When a [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object needs to display the size of a file, it needs to convert the file size into a string format. The `CMFCShellListCtrl` uses this method to make that conversion. By default, this method converts the file size from bytes to kilobytes and then uses the current locale to format the size into string.

## <a name="ongetitemicon"></a> CMFCShellListCtrl::OnGetItemIcon

The framework calls this method to retrieve the icon associated with a shell list item.

```
virtual int OnGetItemIcon(
    int iItem,
    LPAFX_SHELLITEMINFO pItem);
```

### Parameters

*iItem*<br/>
[in] The item index.

*pItem*<br/>
[in] A LPAFX_SHELLITEMINFO parameter that describes the item.

### Return Value

The index of the icon image if successful; -1 if the function fails.

### Remarks

The icon image index is based on the system image list.

By default, this method relies on the *pItem* parameter. The value of *iItem* is not used in the default implementation. You can use *iItem* to implement custom behavior.

## <a name="ongetitemtext"></a> CMFCShellListCtrl::OnGetItemText

The framework calls this method when it must retrieve the text of a shell item.

```
virtual CString OnGetItemText(
    int iItem,
    int iColumn,
    LPAFX_SHELLITEMINFO pItem);
```

### Parameters

*iItem*<br/>
[in] The item index.

*iColumn*<br/>
[in] The column of interest.

*pItem*<br/>
[in] A LPAFX_SHELLITEMINFO parameter that describes the item.

### Return Value

A `CString` that contains the text associated with the item.

### Remarks

Each item in the `CMFCShellListCtrl` object may have text in one or more columns. When the framework calls this method, it specifies the column that it is interested in. If you call this function manually, you must also specify the column that you are interested in.

By default, this method relies on the *pItem* parameter to determine which item to process. The value of *iItem* is not used in the default implementation.

## <a name="onsetcolumns"></a> CMFCShellListCtrl::OnSetColumns

The framework calls this method when it sets the names of the columns.

```
virtual void OnSetColumns();
```

### Remarks

By default, the framework creates four columns in a `CMFCShellListCtrl` object. The names of these columns are **Name**, **Size**, **Type**, and **Modified**. You can override this method to customize the number of columns and their names.

## <a name="refresh"></a> CMFCShellListCtrl::Refresh

Refreshes and repaints the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.

```
virtual HRESULT Refresh();
```

### Return Value

`S_OK` if successful; otherwise an error value.

### Remarks

Call this method to refresh the list of items displayed by the `CMFCShellListCtrl` object.

## <a name="setitemtypes"></a> CMFCShellListCtrl::SetItemTypes

Sets the type of items that are listed in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.

```cpp
void SetItemTypes(SHCONTF nTypes);
```

### Parameters

*nTypes*<br/>
[in] A list of item types that the `CMFCShellListCtrl` object supports.

### Remarks

For more information about the list of item types, see [SHCONTF](/windows/win32/api/shobjidl_core/ne-shobjidl_core-_shcontf).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md)<br/>
[CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md)
