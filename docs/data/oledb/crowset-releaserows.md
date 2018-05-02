---
title: "CRowset::ReleaseRows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ReleaseRows", "CRowset::ReleaseRows", "ATL::CRowset<TAccessor>::ReleaseRows", "CRowset<TAccessor>.ReleaseRows", "CRowset.ReleaseRows", "ATL.CRowset.ReleaseRows", "ATL.CRowset<TAccessor>.ReleaseRows", "CRowset<TAccessor>::ReleaseRows", "ATL::CRowset::ReleaseRows"]
dev_langs: ["C++"]
helpviewer_keywords: ["ReleaseRows method"]
ms.assetid: fa7254f5-566f-4754-bdf7-d0874256926f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowset::ReleaseRows
Calls [IRowset::ReleaseRows](https://msdn.microsoft.com/en-us/library/ms719771.aspx) to release the current row handle.  
  
## Syntax  
  
```cpp
HRESULT ReleaseRows() throw();  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)