---
title: "CRowset::MovePrev | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CRowset<TAccessor>.MovePrev", "CRowset.MovePrev", "MovePrev", "CRowset::MovePrev", "ATL.CRowset.MovePrev", "ATL::CRowset<TAccessor>::MovePrev", "ATL::CRowset::MovePrev", "ATL.CRowset<TAccessor>.MovePrev", "CRowset<TAccessor>::MovePrev"]
dev_langs: ["C++"]
helpviewer_keywords: ["MovePrev method"]
ms.assetid: 7ced2bfb-f556-40fc-97ea-0d4e7213e114
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowset::MovePrev
Moves the cursor to the previous record.  
  
## Syntax  
  
```cpp
HRESULT MovePrev() throw();  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method requires that you set either **DBPROP_CANFETCHBACKWARDS** or **DBPROP_CANSCROLLBACKWARDS** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [CRowset::MoveNext](../../data/oledb/crowset-movenext.md)   
 [CRowset::MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)   
 [CRowset::MoveLast](../../data/oledb/crowset-movelast.md)