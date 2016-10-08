---
title: "IRowsetLocateImpl::Hash"
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
ms.assetid: 7df4386d-80fb-4332-a85f-baae98cdc6e0
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
# IRowsetLocateImpl::Hash
Returns hash values for the specified bookmarks.  
  
## Syntax  
  
```  
  
      STDMETHOD ( Hash )(  
   HCHAPTER /* hReserved */,  
   DBBKMARK cbBookmarks,  
   const DBBKMARK* rgcbBookmarks[],  
   const BYTE* rgpBookmarks[],  
   DBHASHVALUE rgHashValues[],  
   DBROWSTATUS rgBookmarkStatus[]   
);  
```  
  
#### Parameters  
 `hReserved`  
 [in] Corresponds to `hChapter` parameter to [IRowsetLocate::Hash](https://msdn.microsoft.com/en-us/library/ms709697.aspx).  
  
 For other parameters, see [IRowsetLocate::Hash](https://msdn.microsoft.com/en-us/library/ms709697.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetLocateImpl Class](../VS_visualcpp/IRowsetLocateImpl-Class.md)