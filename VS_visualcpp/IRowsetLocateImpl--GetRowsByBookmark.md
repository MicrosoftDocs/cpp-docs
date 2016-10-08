---
title: "IRowsetLocateImpl::GetRowsByBookmark"
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
ms.assetid: 07906e42-3582-427e-812a-aa19791e3c56
caps.latest.revision: 8
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
# IRowsetLocateImpl::GetRowsByBookmark
Fetches one or more rows that match the specified bookmarks.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetRowsByBookmark )(  
   HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const DBBKMARK rgcbBookmarks[],  
   const BYTE* rgpBookmarks,  
   HROW rghRows[],  
   DBROWSTATUS* rgRowStatus[]   
);  
```  
  
#### Parameters  
 `hReserved`  
 [in] Corresponds to `hChapter` parameter to [IRowsetLocate::GetRowsByBookmark](https://msdn.microsoft.com/en-us/library/ms725420.aspx).  
  
 For other parameters, see [IRowsetLocate::GetRowsByBookmark](https://msdn.microsoft.com/en-us/library/ms725420.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 The bookmark can be a value you define or an OLE DB [standard bookmarks](https://msdn.microsoft.com/en-us/library/ms712954.aspx) (**DBBMK_FIRST** or **DBBMK_LAST**). Does not change the cursor position.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetLocateImpl Class](../VS_visualcpp/IRowsetLocateImpl-Class.md)   
 [IRowsetLocateImpl::GetRowsAt](../VS_visualcpp/IRowsetLocateImpl--GetRowsAt.md)