---
title: "CRowset::GetApproximatePosition"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 8f9ccd41-0590-468e-b202-6731d0f99d21
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CRowset::GetApproximatePosition
Returns the approximate position of a row corresponding to a bookmark.  
  
## Syntax  
  
```  
  
      HRESULT GetApproximatePosition(   
   const CBookmarkBase* pBookmark,   
   DBCOUNTITEM* pPosition,   
   DBCOUNTITEM* pcRows    
) throw( );  
```  
  
#### Parameters  
 `pBookmark`  
 [in] A pointer to a bookmark that identifies the row whose position is to be found. **NULL** if only the row count is required.  
  
 *pPosition*  
 [out] A pointer to the location where `GetApproximatePosition` returns the position of the row. **NULL** if the position is not required.  
  
 `pcRows`  
 [out] A pointer to the location where `GetApproximatePosition` returns the total number of rows. **NULL** if the row count is not required.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method requires the optional interface `IRowsetScroll`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetScroll** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
 For information about using bookmarks in consumers, see [Using Bookmarks](../VS_visualcpp/Using-Bookmarks.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../VS_visualcpp/CRowset-Class.md)   
 [IRowsetScroll::GetApproximatePosition](https://msdn.microsoft.com/en-us/library/ms712901.aspx)