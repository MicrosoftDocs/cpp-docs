---
title: "IRowsetLocateImpl::GetRowsByBookmark | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IRowsetLocateImpl::GetRowsByBookmark", "IRowsetLocateImpl.GetRowsByBookmark", "GetRowsByBookmark"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetRowsByBookmark method"]
ms.assetid: 07906e42-3582-427e-812a-aa19791e3c56
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetLocateImpl::GetRowsByBookmark
Fetches one or more rows that match the specified bookmarks.  
  
## Syntax  
  
```cpp
      STDMETHOD (GetRowsByBookmark )(HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const DBBKMARK rgcbBookmarks[],  
   const BYTE* rgpBookmarks,  
   HROW rghRows[],  
   DBROWSTATUS* rgRowStatus[]);  
```  
  
#### Parameters  
 `hReserved`  
 [in] Corresponds to `hChapter` parameter to [IRowsetLocate::GetRowsByBookmark](https://msdn.microsoft.com/en-us/library/ms725420.aspx).  
  
 For other parameters, see [IRowsetLocate::GetRowsByBookmark](https://msdn.microsoft.com/en-us/library/ms725420.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 The bookmark can be a value you define or an OLE DB [standard bookmarks](https://msdn.microsoft.com/en-us/library/ms712954.aspx) (**DBBMK_FIRST** or **DBBMK_LAST**). Does not change the cursor position.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetLocateImpl Class](../../data/oledb/irowsetlocateimpl-class.md)   
 [IRowsetLocateImpl::GetRowsAt](../../data/oledb/irowsetlocateimpl-getrowsat.md)