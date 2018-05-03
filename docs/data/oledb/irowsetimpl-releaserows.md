---
title: "IRowsetImpl::ReleaseRows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.IRowsetImpl.ReleaseRows", "ReleaseRows", "IRowsetImpl::ReleaseRows", "ATL::IRowsetImpl::ReleaseRows", "IRowsetImpl.ReleaseRows"]
dev_langs: ["C++"]
helpviewer_keywords: ["ReleaseRows method"]
ms.assetid: e4d47be8-8ebf-485b-b1e9-df13e4c8ee8d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetImpl::ReleaseRows
Releases rows.  
  
## Syntax  
  
```cpp
      STDMETHOD(ReleaseRows )(DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBROWOPTIONS rgRowOptions[],  
   DBREFCOUNT rgRefCounts[],  
   DBROWSTATUS rgRowStatus[]);  
```  
  
#### Parameters  
 See [IRowset::ReleaseRows](https://msdn.microsoft.com/en-us/library/ms719771.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)   
 [IRowsetImpl::AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md)   
 [IRowsetImpl::RefRows](../../data/oledb/irowsetimpl-refrows.md)