---
title: "IRowsetChangeImpl::InsertRow"
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
ms.assetid: 93027be3-921e-438e-a19a-6e5aadb813eb
caps.latest.revision: 10
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
# IRowsetChangeImpl::InsertRow
Creates and initializes a new row in the rowset.  
  
## Syntax  
  
```  
  
      STDMETHOD ( InsertRow )(  
   HCHAPTER /* hReserved */,  
   HACCESSOR hAccessor,  
   void* pData,  
   HROW* phRow   
);  
```  
  
#### Parameters  
 See [IRowsetChange::InsertRow](https://msdn.microsoft.com/en-us/library/ms716921.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetChangeImpl Class](../VS_visualcpp/IRowsetChangeImpl-Class.md)