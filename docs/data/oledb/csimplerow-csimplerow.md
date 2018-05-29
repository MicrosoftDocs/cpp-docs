---
title: "CSimpleRow::CSimpleRow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CSimpleRow", "ATL::CSimpleRow::CSimpleRow", "CSimpleRow.CSimpleRow", "ATL.CSimpleRow.CSimpleRow", "CSimpleRow::CSimpleRow"]
dev_langs: ["C++"]
helpviewer_keywords: ["CSimpleRow class, constructor"]
ms.assetid: 3968a36c-b8bb-48df-bd06-3956e64b0842
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CSimpleRow::CSimpleRow
The constructor.  
  
## Syntax  
  
```cpp
      CSimpleRow(DBCOUNTITEM iRowsetCur);  
```  
  
#### Parameters  
 `iRowsetCur`  
 [in] Index to the current rowset.  
  
## Remarks  
 Sets [m_iRowset](../../data/oledb/csimplerow-m-irowset.md) to `iRowsetCur`.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CSimpleRow Class](../../data/oledb/csimplerow-class.md)