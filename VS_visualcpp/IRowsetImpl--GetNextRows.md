---
title: "IRowsetImpl::GetNextRows"
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
ms.assetid: 1c0975d6-d770-4884-830b-6986c6fa8e65
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
# IRowsetImpl::GetNextRows
Fetches rows sequentially, remembering the previous position.  
  
## Syntax  
  
```  
  
      STDMETHOD( GetNextRows )(  
   HCHAPTER hReserved,  
   DBROWOFFSET lRowsOffset,  
   DBROWCOUNT cRows,  
   DBCOUNTITEM* pcRowsObtained,  
   HROW** prghRows   
);  
```  
  
#### Parameters  
 See [IRowset::GetNextRows](https://msdn.microsoft.com/en-us/library/ms709827.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../VS_visualcpp/IRowsetImpl-Class.md)   
 [IRowsetImpl::AddRefRows](../VS_visualcpp/IRowsetImpl--AddRefRows.md)   
 [IRowsetImpl::ReleaseRows](../VS_visualcpp/IRowsetImpl--ReleaseRows.md)