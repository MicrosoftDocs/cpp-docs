---
title: "IRowsetImpl::RefRows | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IRowsetImpl::RefRows"
  - "ATL.IRowsetImpl.RefRows"
  - "IRowsetImpl.RefRows"
  - "RefRows"
  - "IRowsetImpl::RefRows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RefRows method"
ms.assetid: 1c048a2a-65dc-4bba-9c81-a23c0dc249c8
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetImpl::RefRows
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetImpl::RefRows](https://docs.microsoft.com/cpp/data/oledb/irowsetimpl-refrows).  
  
  
Called by [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) and [ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md) to either increment or release a reference count to an existing row handle.  
  
## Syntax  
  
```  
  
      HRESULT RefRows(  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBREFCOUNT rgRefCounts[],  
   DBROWSTATUS rgRowStatus[],  
   BOOL bAdd   
);  
```  
  
#### Parameters  
 See [IRowset::AddRefRows](https://msdn.microsoft.com/library/ms719619.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT` value.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)   
 [CSimpleRow Class](../../data/oledb/csimplerow-class.md)

