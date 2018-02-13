---
title: "CRowset::Delete | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["ATL::CRowset::Delete", "CRowset.Delete", "CRowset::Delete", "ATL.CRowset.Delete", "ATL::CRowset<TAccessor>::Delete", "CRowset<TAccessor>.Delete", "CRowset<TAccessor>::Delete", "ATL.CRowset<TAccessor>.Delete"]
dev_langs: ["C++"]
helpviewer_keywords: ["Delete method"]
ms.assetid: 4feb4f7e-139f-489a-b7d5-ea6ec0058e0f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowset::Delete
Calls [IRowsetChange::DeleteRows](https://msdn.microsoft.com/en-us/library/ms724362.aspx) to delete the current row from the rowset.  
  
## Syntax  
  
```cpp
HRESULT Delete() const throw();  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)