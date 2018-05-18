---
title: "CRowset::Update | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CRowset.Update", "ATL.CRowset.Update", "ATL.CRowset<TAccessor>.Update", "ATL::CRowset<TAccessor>::Update", "CRowset<TAccessor>::Update", "CRowset::Update", "CRowset<TAccessor>.Update", "ATL::CRowset::Update"]
dev_langs: ["C++"]
helpviewer_keywords: ["Update method"]
ms.assetid: cd5fedc8-2b85-4cb8-8c40-c79576316903
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowset::Update
Transmits any pending changes made to the current row since the last fetch or **Update** call on it.  
  
## Syntax  
  
```cpp
HRESULT Update(DBCOUNTITEM* pcRows = NULL,   
   HROW* phRow = NULL,   
   DBROWSTATUS* pStatus = NULL) throw();  
```  
  
#### Parameters  
 `pcRows`  
 [out] A pointer to the location where **Update** returns the number of rows it attempted to update, if required.  
  
 `phRow`  
 [out] A pointer to the location where **Update** returns the handle of the row it attempted to update. No handle is returned if `phRow` is null.  
  
 `pStatus`  
 [out] A pointer to the location where **Update** returns the row status value. No status is returned if `pStatus` is null.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 Transmits any pending changes made to the current row since that row was last fetched or updated (using **Update** or [UpdateAll](../../data/oledb/crowset-updateall.md)). You typically call [SetData](../../data/oledb/crowset-setdata.md) to set data values in columns in a row, and then call **Update** to transmit those changes.  
  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetUpdate** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx)   
 [CRowset::UpdateAll](../../data/oledb/crowset-updateall.md)   
 [CRowset::SetData](../../data/oledb/crowset-setdata.md)