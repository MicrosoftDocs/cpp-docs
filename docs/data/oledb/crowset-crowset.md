---
title: "CRowset::CRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CRowset<TAccessor>::CRowset", "CRowset.CRowset", "ATL::CRowset::CRowset", "ATL::CRowset<TAccessor>::CRowset", "ATL.CRowset.CRowset", "CRowset", "CRowset<TAccessor>.CRowset", "CRowset::CRowset", "ATL.CRowset<TAccessor>.CRowset"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRowset class, constructor"]
ms.assetid: 1c6f72e2-f4f4-48dc-957e-038ae8914ba7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowset::CRowset
Creates a new `CRowset` object and (optionally) associates it with an [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) interface supplied as a parameter.  
  
## Syntax  
  
```cpp
      CRowset();   

CRowset(IRowset* pRowset);  
```  
  
#### Parameters  
 `pRowset`  
 [in] A pointer to an `IRowset` interface to be associated with this class.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)