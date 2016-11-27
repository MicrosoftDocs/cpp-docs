---
title: "CMFCShellListCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCShellListCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCShellListCtrl class"
ms.assetid: ad472958-5586-4c50-aadf-1844c30bf6e7
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[CMFCShellListCtrl::DisplayFolder](#cmfcshelllistctrl__displayfolder)|Displays a list of items that are contained in a provided folder.|  
|[CMFCShellListCtrl::DisplayParentFolder](#cmfcshelllistctrl__displayparentfolder)|Displays a list of items that are contained in the folder that is the parent of the currently displayed folder.|  
|[CMFCShellListCtrl::EnableShellContextMenu](#cmfcshelllistctrl__enableshellcontextmenu)|Enables or disables the shortcut menu.|  
|[CMFCShellListCtrl::GetCurrentFolder](#cmfcshelllistctrl__getcurrentfolder)|Retrieves the path of the current folder.|  
|[CMFCShellListCtrl::GetCurrentFolderName](#cmfcshelllistctrl__getcurrentfoldername)|Retrieves the name of the current folder.|  
|[CMFCShellListCtrl::GetCurrentItemIdList](#cmfcshelllistctrl__getcurrentitemidlist)|Returns the PIDL of the current list control item.|  
|[CMFCShellListCtrl::GetCurrentShellFolder](#cmfcshelllistctrl__getcurrentshellfolder)|Returns a pointer to the current Shell folder.|  
|[CMFCShellListCtrl::GetItemPath](#cmfcshelllistctrl__getitempath)|Returns the textual path of an item.|  
|[CMFCShellListCtrl::GetItemTypes](#cmfcshelllistctrl__getitemtypes)|Returns Shell item types that are displayed by the list control.|  
|[CMFCShellListCtrl::IsDesktop](#cmfcshelllistctrl__isdesktop)|Checks if the currently selected folder is the desktop folder.|  
|[CMFCShellListCtrl::OnCompareItems](#cmfcshelllistctrl__oncompareitems)|The framework calls this method when it compares two items. (Overrides [CMFCListCtrl::OnCompareItems](../../mfc/reference/cmfclistctrl-class.md#cmfclistctrl__oncompareitems).)|  
|[CMFCShellListCtrl::OnFormatFileDate](#cmfcshelllistctrl__onformatfiledate)|Called when the framework retrieves the file date displayed by the list control.|  
|[CMFCShellListCtrl::OnFormatFileSize](#cmfcshelllistctrl__onformatfilesize)|Called when the framework converts the file size of a list control.|  
|[CMFCShellListCtrl::OnGetItemIcon](#cmfcshelllistctrl__ongetitemicon)|Called when the framework retrieves the icon of a list control item.|  
|[CMFCShellListCtrl::OnGetItemText](#cmfcshelllistctrl__ongetitemtext)|Called when the framework converts the text of a list control item.|  
|[CMFCShellListCtrl::OnSetColumns](#cmfcshelllistctrl__onsetcolumns)|Called by the framework when it sets the names of the columns.|  
|[CMFCShellListCtrl::Refresh](#cmfcshelllistctrl__refresh)|Refreshes and repaints the list control.|  
|[CMFCShellListCtrl::SetItemTypes](#cmfcshelllistctrl__setitemtypes)|Sets the type of items displayed by the list control.|  
  
## Remarks  
 The `CMFCShellListCtrl` class extends the functionality of the [CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md) by enabling your program to list Windows shell items. The display format that is used is like that of a list view for an Explorer window.  
  
 A [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) object can be associated with a `CMFCShellListCtrl` object to create a complete Explorer window. Then, selecting an item in the `CMFCShellTreeCtrl` will cause the `CMFCShellListCtrl` object to list the contents of the selected item.  
  
## Example  
 The following example demonstrates how to create an object of the `CMFCShellListCtrl` class and how to display the parent folder of the currently displayed folder. This code snippet is part of the [Explorer sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_Explorer#1](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_1.h)]  
[!code-cpp[NVC_MFC_Explorer#2](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_2.cpp)]  
[!code-cpp[NVC_MFC_Explorer#3](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_3.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListCtrl](../../mfc/reference/clistctrl-class.md)  
  
 [CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)  
  
 [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md)  
  
## Requirements  
 **Header:** afxshelllistCtrl.h  
  
##  <a name="cmfcshelllistctrl__displayfolder"></a>  CMFCShellListCtrl::DisplayFolder  
 Displays a list of items that are contained in the provided folder.  
  
```  
virtual HRESULT DisplayFolder(LPCTSTR lpszPath);

virtual HRESULT DisplayFolder(LPAFX_SHELLITEMINFO lpItemInfo);
```  
  
### Parameters  
 [in] `lpszPath`  
 A string that contains the path of a folder.  
  
 [in] `lpItemInfo`  
 A pointer to a `LPAFX_SHELLITEMINFO` structure that describes a folder to display.  
  
### Return Value  
 `S_OK` if successful; `E_FAIL` otherwise.  
  
##  <a name="cmfcshelllistctrl__displayparentfolder"></a>  CMFCShellListCtrl::DisplayParentFolder  
 Updates the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object to display the parent folder of the currently displayed folder.  
  
```  
virtual HRESULT DisplayParentFolder();
```  
  
### Return Value  
 `S_OK` if successful; `E_FAIL` otherwise.  
  
##  <a name="cmfcshelllistctrl__enableshellcontextmenu"></a>  CMFCShellListCtrl::EnableShellContextMenu  
 Enables the shortcut menu.  
  
```  
void EnableShellContextMenu(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 A Boolean that specifies whether the framework enables the shortcut menu.  
  
##  <a name="cmfcshelllistctrl__getcurrentfolder"></a>  CMFCShellListCtrl::GetCurrentFolder  
 Retrieves the path of the currently selected folder in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.  
  
```  
BOOL GetCurrentFolder(CString& strPath) const;

 
```  
  
### Parameters  
 [out] `strPath`  
 A reference to a string parameter where the method writes the path.  
  
### Return Value  
 Nonzero if successful; 0 otherwise.  
  
### Remarks  
 This method fails if there is no folder selected in the `CMFCShellListCtrl`.  
  
##  <a name="cmfcshelllistctrl__getcurrentfoldername"></a>  CMFCShellListCtrl::GetCurrentFolderName  
 Retrieves the name of the currently selected folder in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.  
  
```  
BOOL GetCurrentFolderName(CString& strName) const;

 
```  
  
### Parameters  
 [out] `strName`  
 A reference to a string parameter where the method writes the name.  
  
### Return Value  
 Nonzero if successful; 0 otherwise.  
  
### Remarks  
 This method fails if there is no folder selected in the `CMFCShellListCtrl`.  
  
##  <a name="cmfcshelllistctrl__getcurrentitemidlist"></a>  CMFCShellListCtrl::GetCurrentItemIdList  
 Returns the PIDL of the currently selected item.  
  
```  
LPITEMIDLIST GetCurrentItemIdList() const;

 
```  
  
### Return Value  
 The PIDL of the current item.  
  
##  <a name="cmfcshelllistctrl__getcurrentshellfolder"></a>  CMFCShellListCtrl::GetCurrentShellFolder  
 Gets a pointer to the currently selected item in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.  
  
```  
const IShellFolder* GetCurrentShellFolder() const;

 
```  
  
### Return Value  
 A pointer to the [IShellFolder Interface](http://msdn.microsoft.com/library/windows/desktop/bb775075) for the selected object.  
  
### Remarks  
 This method returns `NULL` if no object is currently selected.  
  
##  <a name="cmfcshelllistctrl__getitempath"></a>  CMFCShellListCtrl::GetItemPath  
 Retrieves the path for an item.  
  
```  
BOOL GetItemPath(
    CString& strPath,  
    int iItem) const;

 
```  
  
### Parameters  
 [out] `strPath`  
 A reference to a string that receives the path.  
  
 [in] `iItem`  
 The index of the list item.  
  
### Return Value  
 `TRUE` if successful; `FALSE` otherwise.  
  
### Remarks  
 The index supplied by `iItem` is based on the items currently displayed by the [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object.  
  
##  <a name="cmfcshelllistctrl__getitemtypes"></a>  CMFCShellListCtrl::GetItemTypes  
 Returns the type of items displayed by the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.  
  
```  
SHCONTF GetItemTypes() const;

 
```  
  
### Return Value  
 A [SHCONTF](http://msdn.microsoft.com/library/windows/desktop/bb762539) value that contains the type of items listed in the `CMFCShellListCtrl`.  
  
### Remarks  
 To set the type of items listed in a `CMFCShellListCtrl`, call [CMFCShellListCtrl::SetItemTypes](#cmfcshelllistctrl__setitemtypes).  
  
##  <a name="cmfcshelllistctrl__isdesktop"></a>  CMFCShellListCtrl::IsDesktop  
 Determines if the folder that is displayed in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object is the desktop folder.  
  
```  
BOOL IsDesktop() const;

 
```  
  
### Return Value  
 `TRUE` if the displayed folder is the desktop folder; `FALSE` otherwise.  
  
##  <a name="cmfcshelllistctrl__oncompareitems"></a>  CMFCShellListCtrl::OnCompareItems  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int OnCompareItems(
    LPARAM lParam1,  
    LPARAM lParam2,  
    int iColumn);
```  
  
### Parameters  
 [in] `lParam1`  
 [in] `lParam2`  
 [in] `iColumn`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcshelllistctrl__onformatfiledate"></a>  CMFCShellListCtrl::OnFormatFileDate  
 The framework calls this method when it must convert the date associated with an object into a string.  
  
```  
virtual void OnFormatFileDate(
    const CTime& tmFile,  
    CString& str);
```  
  
### Parameters  
 [in] `tmFile`  
 The date associated with a file.  
  
 [out] `str`  
 A string that contains the formatted file date.  
  
### Remarks  
 When a [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object displays the date associated with a file, it must convert that date to a string format. The `CMFCShellListCtrl` uses this method to make that conversion. By default, this method uses the current locale to format the date into a string.  
  
##  <a name="cmfcshelllistctrl__onformatfilesize"></a>  CMFCShellListCtrl::OnFormatFileSize  
 The framework calls this method when it converts the size of an object to a string.  
  
```  
virtual void OnFormatFileSize(
    long lFileSize,  
    CString& str);
```  
  
### Parameters  
 [in] `lFileSize`  
 The size of the file that the framework will display.  
  
 [out] `str`  
 A string that contains the formatted file size.  
  
### Remarks  
 When a [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object needs to display the size of a file, it needs to convert the file size into a string format. The `CMFCShellListCtrl` uses this method to make that conversion. By default, this method converts the file size from bytes to kilobytes and then uses the current locale to format the size into string.  
  
##  <a name="cmfcshelllistctrl__ongetitemicon"></a>  CMFCShellListCtrl::OnGetItemIcon  
 The framework calls this method to retrieve the icon associated with a shell list item.  
  
```  
virtual int OnGetItemIcon(
    int iItem,  
    LPAFX_SHELLITEMINFO pItem);
```  
  
### Parameters  
 [in] `iItem`  
 The item index.  
  
 [in] `pItem`  
 A `LPAFX_SHELLITEMINFO` parameter that describes the item.  
  
### Return Value  
 The index of the icon image if successful; -1 if the function fails.  
  
### Remarks  
 The icon image index is based on the system image list.  
  
 By default, this method relies on the `pItem` parameter. The value of `iItem` is not used in the default implementation. You can use `iItem` to implement custom behavior.  
  
##  <a name="cmfcshelllistctrl__ongetitemtext"></a>  CMFCShellListCtrl::OnGetItemText  
 The framework calls this method when it must retrieve the text of a shell item.  
  
```  
virtual CString OnGetItemText(
    int iItem,  
    int iColumn,  
    LPAFX_SHELLITEMINFO pItem);
```  
  
### Parameters  
 [in] `iItem`  
 The item index.  
  
 [in] `iColumn`  
 The column of interest.  
  
 [in] `pItem`  
 A `LPAFX_SHELLITEMINFO` parameter that describes the item.  
  
### Return Value  
 A `CString` that contains the text associated with the item.  
  
### Remarks  
 Each item in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object may have text in one or more columns. When the framework calls this method, it specifies the column that it is interested in. If you call this function manually, you must also specify the column that you are interested in.  
  
 By default, this method relies on the `pItem` parameter to determine which item to process. The value of `iItem` is not used in the default implementation.  
  
##  <a name="cmfcshelllistctrl__onsetcolumns"></a>  CMFCShellListCtrl::OnSetColumns  
 The framework calls this method when it sets the names of the columns.  
  
```  
virtual void OnSetColumns();
```  
  
### Remarks  
 By default, the framework creates four columns in a [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object. The names of these columns are `Name`, `Size`, `Type`, and `Modified`. You can override this method to customize the number of columns and their names.  
  
##  <a name="cmfcshelllistctrl__refresh"></a>  CMFCShellListCtrl::Refresh  
 Refreshes and repaints the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.  
  
```  
virtual HRESULT Refresh();
```  
  
### Return Value  
 `S_OK` if successful; otherwise an error value.  
  
### Remarks  
 Call this method to refresh the list of items displayed by the `CMFCShellListCtrl` object.  
  
##  <a name="cmfcshelllistctrl__setitemtypes"></a>  CMFCShellListCtrl::SetItemTypes  
 Sets the type of items that are listed in the [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object.  
  
```  
void SetItemTypes(SHCONTF nTypes);
```  
  
### Parameters  
 [in] `nTypes`  
 A list of item types that the `CMFCShellListCtrl` object supports.  
  
### Remarks  
 For more information about the list of item types, see [SHCONTF](http://msdn.microsoft.com/library/windows/desktop/bb762539).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md)   
 [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md)
