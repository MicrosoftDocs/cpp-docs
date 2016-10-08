---
title: "IRowsetImpl::AddRefRows"
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
ms.assetid: adc0989b-7592-432e-82d9-df4445431531
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
# IRowsetImpl::AddRefRows
Adds a reference count to an existing row handle.  
  
## Syntax  
  
```  
  
      STDMETHOD( AddRefRows )(  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBREFCOUNT rgRefCounts[],  
   DBROWSTATUS rgRowStatus[]   
);  
```  
  
#### Parameters  
 See [IRowset::AddRefRows](https://msdn.microsoft.com/en-us/library/ms719619.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../VS_visualcpp/IRowsetImpl-Class.md)   
 [IRowsetImpl::RefRows](../VS_visualcpp/IRowsetImpl--RefRows.md)   
 [IRowsetImpl::GetNextRows](../VS_visualcpp/IRowsetImpl--GetNextRows.md)   
 [IRowsetImpl::ReleaseRows](../VS_visualcpp/IRowsetImpl--ReleaseRows.md)