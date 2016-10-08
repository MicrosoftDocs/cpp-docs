---
title: "IRowsetUpdateImpl::GetRowStatus"
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
ms.assetid: ce57e8be-5891-44d9-b3c5-59ffd3913678
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
# IRowsetUpdateImpl::GetRowStatus
Returns the status of specified rows.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetRowStatus )(  
   HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBPENDINGSTATUS rgPendingStatus[]   
);  
```  
  
#### Parameters  
 `hReserved`  
 [in] Corresponds to the `hChapter` parameter in [IRowsetUpdate::GetRowStatus](https://msdn.microsoft.com/en-us/library/ms724377.aspx).  
  
 For other parameters, see [IRowsetUpdate::GetRowStatus](https://msdn.microsoft.com/en-us/library/ms724377.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../VS_visualcpp/IRowsetUpdateImpl-Class.md)