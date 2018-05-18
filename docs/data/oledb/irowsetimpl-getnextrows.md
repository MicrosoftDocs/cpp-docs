---
title: "IRowsetImpl::GetNextRows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetNextRows", "ATL.IRowsetImpl.GetNextRows", "ATL::IRowsetImpl::GetNextRows", "IRowsetImpl::GetNextRows", "IRowsetImpl.GetNextRows"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetNextRows method"]
ms.assetid: 1c0975d6-d770-4884-830b-6986c6fa8e65
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetImpl::GetNextRows
Fetches rows sequentially, remembering the previous position.  
  
## Syntax  
  
```cpp
      STDMETHOD(GetNextRows )(HCHAPTER hReserved,  
   DBROWOFFSET lRowsOffset,  
   DBROWCOUNT cRows,  
   DBCOUNTITEM* pcRowsObtained,  
   HROW** prghRows);  
```  
  
#### Parameters  
 See [IRowset::GetNextRows](https://msdn.microsoft.com/en-us/library/ms709827.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)   
 [IRowsetImpl::AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md)   
 [IRowsetImpl::ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md)