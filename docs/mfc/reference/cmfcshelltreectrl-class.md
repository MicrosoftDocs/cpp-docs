---
title: "CMFCShellTreeCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCShellTreeCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCShellTreeCtrl class"
ms.assetid: 3d1da715-9554-4ed7-968c-055c48146267
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
# CMFCShellTreeCtrl Class
The `CMFCShellTreeCtrl` class extends [CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md) functionality by displaying a hierarchy of Shell items.  
  
## Syntax  
  
```  
class CMFCShellTreeCtrl : public CTreeCtrl  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCShellTreeCtrl::EnableShellContextMenu](#cmfcshelltreectrl__enableshellcontextmenu)|Enables or disables the shortcut menu.|  
|[CMFCShellTreeCtrl::GetFlags](#cmfcshelltreectrl__getflags)|Returns a combination of flags that are passed to [IShellFolder::EnumObjects](http://msdn.microsoft.com/library/windows/desktop/bb775066).|  
|[CMFCShellTreeCtrl::GetItemPath](#cmfcshelltreectrl__getitempath)|Retrieves the path to an item.|  
|[CMFCShellTreeCtrl::GetRelatedList](#cmfcshelltreectrl__getrelatedlist)|Returns a pointer to the [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object that is used together with this `CMFCShellTreeCtrl` object to create an Explorer-like window.|  
|[CMFCShellTreeCtrl::OnChildNotify](#cmfcshelltreectrl__onchildnotify)|This member function is called by this window's parent window when it receives a notification message that applies to this window. (Overrides [CWnd::OnChildNotify](../../mfc/reference/cwnd-class.md#cwnd__onchildnotify).)|  
|[CMFCShellTreeCtrl::OnGetItemIcon](#cmfcshelltreectrl__ongetitemicon)||  
|[CMFCShellTreeCtrl::OnGetItemText](#cmfcshelltreectrl__ongetitemtext)||  
|[CMFCShellTreeCtrl::Refresh](#cmfcshelltreectrl__refresh)|Refreshes and repaints the current `CMFCShellTreeCtrl` object.|  
|[CMFCShellTreeCtrl::SelectPath](#cmfcshelltreectrl__selectpath)|Selects the appropriate tree control item based on a supplied PIDL or string path.|  
|[CMFCShellTreeCtrl::SetFlags](#cmfcshelltreectrl__setflags)|Sets flags to filter the tree context (similar to the flags used by `IShellFolder::EnumObjects`).|  
|[CMFCShellTreeCtrl::SetRelatedList](#cmfcshelltreectrl__setrelatedlist)|Sets a relation between the current `CMFCShellTreeCtrl` object and a `CMFCShellListCtrl` object.|  
  
## Remarks  
 This class extends the `CTreeCtrl` class by enabling your program to include Windows Shell items in the tree. This class can be associated with a `CMFCShellListCtrl` object to create a complete Explorer window. Then, selecting an item in the tree will display a list of Windows Shell items in the associated list.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CTreeCtrl](../../mfc/reference/ctreectrl-class.md)  
  
 [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md)  
  
## Requirements  
 **Header:** afxshelltreeCtrl.h  
  
## Example  
 The following example demonstrates how to create an object of the `CMFCShellTreeCtrl` class. This code snippet is part of the [Explorer sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_Explorer#4](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_1.h)]  
[!code-cpp[NVC_MFC_Explorer#5](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_2.cpp)]  
  
##  <a name="cmfcshelltreectrl__enableshellcontextmenu"></a>  CMFCShellTreeCtrl::EnableShellContextMenu  
 Enables the shortcut menu.  
  
```  
void EnableShellContextMenu(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 A Boolean that specifies whether to enable the shortcut menu.  
  
##  <a name="cmfcshelltreectrl__getflags"></a>  CMFCShellTreeCtrl::GetFlags  
 Returns the flags set for the [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md) object.  
  
```  
DWORD GetFlags() const;

 
```  
  
### Return Value  
 A `DWORD` value that specifies the combination of flags currently set.  
  
### Remarks  
 The flags set in the `CMFCShellTreeCtrl` are sent to the method [IShellFolder::EnumObjects](http://msdn.microsoft.com/library/windows/desktop/bb775066) whenever the object is refreshed. You can change the flags with the [CMFCShellTreeCtrl::SetFlags](#cmfcshelltreectrl__setflags) method.  
  
##  <a name="cmfcshelltreectrl__getitempath"></a>  CMFCShellTreeCtrl::GetItemPath  
 Retrieves the path of an item in the [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md) object.  
  
```  
BOOL GetItemPath(
    CString& strPath,  
    HTREEITEM htreeItem = NULL) const;

 
```  
  
### Parameters  
 [out] `strPath`  
 A reference to a string parameter. The method writes the path of the item to this parameter.  
  
 [in] `htreeItem`  
 The method retrieves the path for this tree control item.  
  
### Return Value  
 Nonzero if successful; 0 otherwise.  
  
### Remarks  
 If this method fails, `strPath` contains the empty string.  
  
 If you do not specify `hTreeItem`, this method tries to obtain the string for the currently selected item. If no item is selected and `hTreeItem` is `NULL`, this method fails.  
  
##  <a name="cmfcshelltreectrl__getrelatedlist"></a>  CMFCShellTreeCtrl::GetRelatedList  
 Returns a pointer to the [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) object that is associated with this [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) object.  
  
```  
CMFCShellListCtrl* GetRelatedList() const;

 
```  
  
### Return Value  
 A pointer to the `CMFCShellListCtrl` object that is associated with this tree control object.  
  
### Remarks  
 By using a `CMFCShellListCtrl` object together with a `CMFCShellTreeCtrl` object, you can create an Explorer-like window. Use the method [CMFCShellTreeCtrl::SetRelatedList](#cmfcshelltreectrl__setrelatedlist) to associate the two classes. After they are associated, the framework automatically updates the `CMFCShellListCtrl` if the selection in the `CMFCShellTreeCtrl` changes.  
  
##  <a name="cmfcshelltreectrl__onchildnotify"></a>  CMFCShellTreeCtrl::OnChildNotify  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnChildNotify(
    UINT message,  
    WPARAM wParam,  
    LPARAM lParam,  
    LRESULT* pLResult);
```  
  
### Parameters  
 [in] `message`  
 [in] `wParam`  
 [in] `lParam`  
 [in] `pLResult`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcshelltreectrl__ongetitemicon"></a>  CMFCShellTreeCtrl::OnGetItemIcon  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int OnGetItemIcon(
    LPAFX_SHELLITEMINFO pItem,  
    BOOL bSelected);
```  
  
### Parameters  
 [in] `pItem`  
 [in] `bSelected`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcshelltreectrl__ongetitemtext"></a>  CMFCShellTreeCtrl::OnGetItemText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CString OnGetItemText(LPAFX_SHELLITEMINFO pItem);
```  
  
### Parameters  
 [in] `pItem`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcshelltreectrl__refresh"></a>  CMFCShellTreeCtrl::Refresh  
 Refreshes and repaints the [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md).  
  
```  
void Refresh();
```  
  
### Remarks  
 Call this method to refresh the hierarchy of the items displayed in the `CMFCShellTreeCtrl`.  
  
##  <a name="cmfcshelltreectrl__selectpath"></a>  CMFCShellTreeCtrl::SelectPath  
 Selects an item in the [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md) based on the supplied path.  
  
```  
BOOL SelectPath(LPCTSTR lpszPath);

BOOL SelectPath(LPCITEMIDLIST lpidl);
```  
  
### Parameters  
 [in] `lpszPath`  
 A string that specifies the path of an item.  
  
 [in] `lpidl`  
 A PIDL that specifies the item  
  
### Return Value  
 `S_OK` if successful; `E_FAIL` otherwise.  
  
##  <a name="cmfcshelltreectrl__setflags"></a>  CMFCShellTreeCtrl::SetFlags  
 Sets flags to filter the tree context.  
  
```  
void SetFlags(
    DWORD dwFlags,  
    BOOL bRefresh = TRUE);
```  
  
### Parameters  
 [in] `dwFlags`  
 The flags to set.  
  
 [in] `bRefresh`  
 A Boolean that specifies whether the [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md) should be refreshed immediately.  
  
### Remarks  
 The `CMFCShellTreeCtrl` passes all set flags to [IShellFolder::EnumObjects](http://msdn.microsoft.com/library/windows/desktop/bb775066). For more information about the values of different flags, see [IShellFolder::EnumObjects](http://msdn.microsoft.com/library/windows/desktop/bb775066).  
  
##  <a name="cmfcshelltreectrl__setrelatedlist"></a>  CMFCShellTreeCtrl::SetRelatedList  
 Associates a [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) object with a [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) object.  
  
```  
void SetRelatedList(CMFCShellListCtrl* pShellList);
```  
  
### Parameters  
 [in] `pShellList`  
 A pointer to a `CMFCShellListCtrl` object.  
  
### Remarks  
 This method associates a `CMFCShellListCtrl` with a `CMFCShellTreeCtrl`. These objects may be displayed as an Explorer-like window: if the user selects an object in the `CMFCShellTreeCtrl`, the associated items in the `CMFCShellListCtrl` will be automatically updated.  
  
 Use the method [CMFCShellTreeCtrl::GetRelatedList](#cmfcshelltreectrl__getrelatedlist) to retrieve the `CMFCShellListCtrl` associated with a `CMFCShellTreeCtrl`.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md)   
 [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md)
