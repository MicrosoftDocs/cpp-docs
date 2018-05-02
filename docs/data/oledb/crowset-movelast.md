---
title: "CRowset::MoveLast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::CRowset<TAccessor>::MoveLast", "CRowset<TAccessor>::MoveLast", "ATL.CRowset.MoveLast", "ATL::CRowset::MoveLast", "CRowset<TAccessor>.MoveLast", "MoveLast", "CRowset::MoveLast", "ATL.CRowset<TAccessor>.MoveLast", "CRowset.MoveLast"]
dev_langs: ["C++"]
helpviewer_keywords: ["MoveLast method"]
ms.assetid: 81063578-ae9d-467b-8c88-81d8fc66e020
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowset::MoveLast
Moves the cursor to the last row.  
  
## Syntax  
  
```cpp
HRESULT MoveLast() throw();  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 Calls [IRowset::RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx) to reposition the next-fetch location to the last position and retrieves the last row.  
  
 This method requires that you set **DBPROP_CANSCROLLBACKWARDS** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset. (For better performance, you might also set **DBPROP_QUICKRESTART** to `VARIANT_TRUE`.)  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [CRowset::MoveNext](../../data/oledb/crowset-movenext.md)   
 [IRowset::RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx)   
 [CRowset::MovePrev](../../data/oledb/crowset-moveprev.md)