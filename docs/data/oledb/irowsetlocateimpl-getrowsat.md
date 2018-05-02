---
title: "IRowsetLocateImpl::GetRowsAt | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetRowsAt", "IRowsetLocateImpl.GetRowsAt", "ATL::IRowsetLocateImpl::GetRowsAt", "IRowsetLocateImpl::GetRowsAt", "ATL.IRowsetLocateImpl.GetRowsAt"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetRowsAt method"]
ms.assetid: 6aeb09dc-3aa8-4729-97a8-144dd27063f7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetLocateImpl::GetRowsAt
Fetches rows starting with the row specified by an offset from a bookmark.  
  
## Syntax  
  
```cpp
      STDMETHOD (GetRowsAt )(HWATCHREGION /* hReserved1 */,  
   HCHAPTER hReserved2,  
   DBBKMARK cbBookmark,  
   const BYTE* pBookmark,  
   DBROWOFFSET lRowsOffset,  
   DBROWCOUNT cRows,  
   DBCOUNTITEM* pcRowsObtained,  
   HROW** prghRows);  
```  
  
#### Parameters  
 See [IRowsetLocate::GetRowsAt](https://msdn.microsoft.com/en-us/library/ms723031.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 To fetch from the cursor position instead, use [IRowset::GetRowsAt](https://msdn.microsoft.com/en-us/library/ms723031.aspx).  
  
 `IRowsetLocateImpl::GetRowsAt` does not change the cursor position.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetLocateImpl Class](../../data/oledb/irowsetlocateimpl-class.md)   
 [IRowsetLocateImpl::GetRowsByBookmark](../../data/oledb/irowsetlocateimpl-getrowsbybookmark.md)