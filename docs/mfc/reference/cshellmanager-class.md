---
title: "CShellManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CShellManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CShellManager class"
ms.assetid: f15c4c1a-6fae-487d-9913-9b7369b33da0
caps.latest.revision: 23
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
|[CShellManager::CShellManager](#cshellmanager__cshellmanager)|Constructs a `CShellManager` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CShellManager::BrowseForFolder](#cshellmanager__browseforfolder)|Displays a dialog box that enables the user to select a shell folder.|  
|[CShellManager::ConcatenateItem](#cshellmanager__concatenateitem)|Concatenates two PIDLs.|  
|[CShellManager::CopyItem](#cshellmanager__copyitem)|Creates a new PIDL and copies the supplied PIDL to it.|  
|[CShellManager::CreateItem](#cshellmanager__createitem)|Creates a new PIDL of the specified size.|  
|[CShellManager::FreeItem](#cshellmanager__freeitem)|Deletes the supplied PIDL.|  
|[CShellManager::GetItemCount](#cshellmanager__getitemcount)|Returns the number of items in the supplied PIDL.|  
|[CShellManager::GetItemSize](#cshellmanager__getitemsize)|Returns the size of the supplied PIDL.|  
|[CShellManager::GetNextItem](#cshellmanager__getnextitem)|Returns the next item from the PIDL.|  
|[CShellManager::GetParentItem](#cshellmanager__getparentitem)|Retrieves the parent item of the supplied item.|  
|[CShellManager::ItemFromPath](#cshellmanager__itemfrompath)|Retrieves the PIDL for the item identified by the supplied path.|  
  
## Remarks  
 The methods of the `CShellManager` class all deal with PIDLs. A PIDL is a unique identifier for a shell object.  
  
 You should not create a `CShellManager` object manually. It will be created automatically by the framework of your application. However, you should call [CWinAppEx::InitShellManager](../../mfc/reference/cwinappex-class.md#cwinappex__initshellmanager) during the initialization process of your application. To get a pointer to the shell manager for your application, call [CWinAppEx::GetShellManager](../../mfc/reference/cwinappex-class.md#cwinappex__getshellmanager).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CShellManager](../../mfc/reference/cshellmanager-class.md)  
  
## Requirements  
 **Header:** afxshellmanager.h  
  
##  <a name="cshellmanager__browseforfolder"></a>  CShellManager::BrowseForFolder  
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
 [out] `strOutFolder`  
 The string used by the method to store the path of the selected folder.  
  
 [in] `pWndParent`  
 A pointer to the parent window.  
  
 [in] `lplszInitialFolder`  
 A string that contains the folder that is selected by default when the dialog box is displayed.  
  
 [in] `lpszTitle`  
 The title for the dialog box.  
  
 [in] `ulFlags`  
 Flags specifying options for the dialog box. See [BROWSEINFO](http://msdn.microsoft.com/library/windows/desktop/bb773205) for the detailed description.  
  
 [out] `piFolderImage`  
 A pointer to the integer value where the method writes the image index of the selected folder.  
  
### Return Value  
 Nonzero if the user selects a folder from the dialog box; otherwise 0.  
  
### Remarks  
 When you call this method, the application creates and shows a dialog box that enables the user to select a folder. The method will write the path of the folder into the `strOutFolder` parameter.  
  
### Example  
 The following example demonstrates how to retrieve a reference to a `CShellManager` object by using the `CWinAppEx::GetShellManager` method and how to use the `BrowseForFolder` method. This code snippet is part of the [Explorer sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_Explorer#6](../../mfc/reference/codesnippet/cpp/cshellmanager-class_1.cpp)]  
  
##  <a name="cshellmanager__concatenateitem"></a>  CShellManager::ConcatenateItem  
 Creates a new list containing two PIDLs.  
  
```  
LPITEMIDLIST ConcatenateItem(
    LPCITEMIDLIST pidl1,  
    LPCITEMIDLIST pidl2);
```  
  
### Parameters  
 [in] `pidl1`  
 The first item.  
  
 [in] `pidl2`  
 The second item.  
  
### Return Value  
 A pointer to the new item list if the function succeeds, otherwise `NULL`.  
  
### Remarks  
 This method creates a new [ITEMIDLIST](http://msdn.microsoft.com/library/windows/desktop/bb773321) large enough to contain both `pidl1` and `pidl2`. It then copies `pidl1` and `pidl2` to the new list.  
  
##  <a name="cshellmanager__copyitem"></a>  CShellManager::CopyItem  
 Copies an item list.  
  
```  
LPITEMIDLIST CopyItem(LPCITEMIDLIST pidlSource);
```  
  
### Parameters  
 [in] `pidlSource`  
 The original item list.  
  
### Return Value  
 A pointer to the newly created item list if successful; otherwise `NULL`.  
  
### Remarks  
 The newly created item list has the same size as the source item list.  
  
##  <a name="cshellmanager__createitem"></a>  CShellManager::CreateItem  
 Creates a new PIDL.  
  
```  
LPITEMIDLIST CreateItem(UINT cbSize);
```  
  
### Parameters  
 [in] `cbSize`  
 The size of the item list.  
  
### Return Value  
 A pointer to the created item list if successful; otherwise `NULL`.  
  
##  <a name="cshellmanager__cshellmanager"></a>  CShellManager::CShellManager  
 Constructs a `CShellManager` object.  
  
```  
CShellManager();
```  
  
### Remarks  
 In most cases, you do not have to create a `CShellManager` directly. By default, the framework creates one for you. To get a pointer to the `CShellManager`, call [CWinAppEx::GetShellManager](../../mfc/reference/cwinappex-class.md#cwinappex__getshellmanager). If you do create a `CShellManager` manually, you must initialize it with the method [CWinAppEx::InitShellManager](../../mfc/reference/cwinappex-class.md#cwinappex__initshellmanager).  
  
##  <a name="cshellmanager__freeitem"></a>  CShellManager::FreeItem  
 Deletes an item list.  
  
```  
void FreeItem(LPITEMIDLIST pidl);
```  
  
### Parameters  
 [in] `pidl`  
 An item list to delete.  
  
##  <a name="cshellmanager__getitemcount"></a>  CShellManager::GetItemCount  
 Returns the number of items in an item list.  
  
```  
UINT GetItemCount(LPCITEMIDLIST pidl);
```  
  
### Parameters  
 [in] `pidl`  
 A pointer to an item list.  
  
### Return Value  
 The number of items in the item list.  
  
##  <a name="cshellmanager__getitemsize"></a>  CShellManager::GetItemSize  
 Returns the size of an item list.  
  
```  
UINT GetItemSize(LPCITEMIDLIST pidl);
```  
  
### Parameters  
 [in] `pidl`  
 A pointer to an item list.  
  
### Return Value  
 The size of the item list.  
  
##  <a name="cshellmanager__getnextitem"></a>  CShellManager::GetNextItem  
 Retrieves the next item from a pointer to an item identifier list (PIDL).  
  
```  
LPITEMIDLIST GetNextItem(LPCITEMIDLIST pidl);
```  
  
### Parameters  
 [in] `pidl`  
 The list of items to iterate.  
  
### Return Value  
 A pointer to the next item in the list.  
  
### Remarks  
 If there are no more items in the list, this method returns `NULL`.  
  
##  <a name="cshellmanager__getparentitem"></a>  CShellManager::GetParentItem  
 Retrieves the parent of a pointer to an item identifier list (PIDL).  
  
```  
int GetParentItem(
    LPCITEMIDLIST lpidl,  
    LPITEMIDLIST& lpidlParent);
```  
  
### Parameters  
 [in] `lpidl`  
 A PIDL whose parent will be retrieved.  
  
 [out] `lpidlParent`  
 A reference to a PIDL where the method will store the result.  
  
### Return Value  
 The level of the parent PIDL.  
  
### Remarks  
 The level of a PIDL is relative to the desktop. The desktop PIDL is considered to have a level of 0.  
  
##  <a name="cshellmanager__itemfrompath"></a>  CShellManager::ItemFromPath  
 Retrieves the pointer to an item identifier list (PIDL) from the item identified by a string path.  
  
```  
HRESULT ItemFromPath(
    LPCTSTR lpszPath,  
    LPITEMIDLIST& pidl);
```  
  
### Parameters  
 [in] `lpszPath`  
 A string that specifies the path for the item.  
  
 [out] `pidl`  
 A reference to a PIDL. The method uses this PIDL to store the pointer to its return value.  
  
### Return Value  
 Returns `NOERROR` if successful; an OLE-defined error value.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
