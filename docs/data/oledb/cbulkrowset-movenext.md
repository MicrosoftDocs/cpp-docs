---
title: "CBulkRowset::MoveNext | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["ATL.CBulkRowset<TAccessor>.MoveNext", "ATL::CBulkRowset::MoveNext", "CBulkRowset::MoveNext", "ATL.CBulkRowset.MoveNext", "CBulkRowset.MoveNext", "ATL::CBulkRowset<TAccessor>::MoveNext", "CBulkRowset<TAccessor>.MoveNext", "CBulkRowset<TAccessor>::MoveNext"]
dev_langs: ["C++"]
helpviewer_keywords: ["MoveNext method"]
ms.assetid: 788f3344-cf60-4af1-8f5f-0098c8d1a3f0
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CBulkRowset::MoveNext
Retrieves the next row of data.  
  
## Syntax  
  
```cpp
HRESULT MoveNext() throw();  
  
```  
  
## Return Value  
 A standard `HRESULT`. When the end of the rowset has been reached, returns **DB_S_ENDOFROWSET**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CBulkRowset Class](../../data/oledb/cbulkrowset-class.md)