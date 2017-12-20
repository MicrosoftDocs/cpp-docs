---
title: "CRowset::AddRefRows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset<TAccessor>.AddRefRows"
  - "CRowset.AddRefRows"
  - "ATL.CRowset.AddRefRows"
  - "AddRefRows"
  - "CRowset::AddRefRows"
  - "CRowset<TAccessor>::AddRefRows"
  - "ATL::CRowset::AddRefRows"
  - "ATL.CRowset<TAccessor>.AddRefRows"
  - "ATL::CRowset<TAccessor>::AddRefRows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRefRows method"
ms.assetid: 590b5a24-870f-4c42-b0c8-28491f368a82
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
  - "data-storage"
---
# CRowset::AddRefRows
Calls [IRowset::AddRefRows](https://msdn.microsoft.com/en-us/library/ms719619.aspx) to increment (by one) the reference count associated with the current row handle.  
  
## Syntax  
  
```  
  
HRESULT AddRefRows( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method increments the reference count for the current row handle. Call [ReleaseRows](../../data/oledb/crowset-releaserows.md) to decrement the count. Rows returned by the move methods have a reference count of one.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [CRowset::ReleaseRows](../../data/oledb/crowset-releaserows.md)