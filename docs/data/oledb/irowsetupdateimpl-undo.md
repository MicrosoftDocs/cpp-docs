---
title: "IRowsetUpdateImpl::Undo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.IRowsetUpdateImpl.Undo", "ATL::IRowsetUpdateImpl::Undo", "IRowsetUpdateImpl::Undo", "IRowsetUpdateImpl.Undo"]
dev_langs: ["C++"]
helpviewer_keywords: ["Undo method"]
ms.assetid: f3dc7764-050c-4322-9b2f-9ca772a0fb88
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetUpdateImpl::Undo
Undoes any changes to the row since the last fetch or update.  
  
## Syntax  
  
```cpp
      STDMETHOD (Undo )(HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[ ],  
   DBCOUNTITEM* pcRowsUndone,  
   HROW** prgRowsUndone,  
   DBROWSTATUS** prgRowStatus);  
```  
  
#### Parameters  
 `hReserved`  
 [in] Corresponds to the `hChapter` parameter in [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx).  
  
 *pcRowsUndone*  
 [out] Corresponds to the `pcRows` parameter in [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx).  
  
 *prgRowsUndone*  
 [in] Corresponds to the *prgRows* parameter in [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx).  
  
 For other parameters, see [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../../data/oledb/irowsetupdateimpl-class.md)