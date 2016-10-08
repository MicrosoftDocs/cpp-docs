---
title: "IRowsetUpdateImpl::GetPendingRows"
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
ms.assetid: 2d1ef748-da6d-4184-98dc-096427358dfd
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
# IRowsetUpdateImpl::GetPendingRows
Returns a list of rows with pending changes.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetPendingRows )(  
   HCHAPTER /* hReserved */,  
   DBPENDINGSTATUS dwRowStatus,  
   DBCOUNTITEM* pcPendingRows,  
   HROW** prgPendingRows,  
   DBPENDINGSTATUS** prgPendingStatus   
);  
```  
  
#### Parameters  
 `hReserved`  
 [in] Corresponds to the `hChapter` parameter in [IRowsetUpdate::GetPendingRows](https://msdn.microsoft.com/en-us/library/ms719626.aspx).  
  
 For other parameters, see [IRowsetUpdate::GetPendingRows](https://msdn.microsoft.com/en-us/library/ms719626.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 For more information, see [IRowsetUpdate::GetPendingRows](https://msdn.microsoft.com/en-us/library/ms719626.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../VS_visualcpp/IRowsetUpdateImpl-Class.md)