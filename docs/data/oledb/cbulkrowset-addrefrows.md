---
title: "CBulkRowset::AddRefRows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["CBulkRowset::AddRefRows", "AddRefRows", "CBulkRowset.AddRefRows", "ATL.CBulkRowset<TAccessor>.AddRefRows", "ATL::CBulkRowset::AddRefRows", "CBulkRowset<TAccessor>::AddRefRows", "ATL.CBulkRowset.AddRefRows", "ATL::CBulkRowset<TAccessor>::AddRefRows"]
dev_langs: ["C++"]
helpviewer_keywords: ["AddRefRows method"]
ms.assetid: 014be991-50f8-4377-ba16-fec80b54b406
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CBulkRowset::AddRefRows
Calls [IRowset::AddRefRows](https://msdn.microsoft.com/en-us/library/ms719619.aspx) to increment the reference count for all rows currently retrieved from the bulk rowset.  
  
## Syntax  
  
```  
  
HRESULT AddRefRows( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CBulkRowset Class](../../data/oledb/cbulkrowset-class.md)   
 [CBulkRowset::ReleaseRows](../../data/oledb/cbulkrowset-releaserows.md)