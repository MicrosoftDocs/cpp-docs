---
title: "IRowsetChangeImpl::DeleteRows | Microsoft Docs"
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
  - "ATL.IRowsetChangeImpl.DeleteRows"
  - "ATL::IRowsetChangeImpl::DeleteRows"
  - "IRowsetChangeImpl.DeleteRows"
  - "DeleteRows"
  - "IRowsetChangeImpl::DeleteRows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DeleteRows method"
ms.assetid: 462ad4f1-3b2a-4134-9733-be65708aa1d9
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetChangeImpl::DeleteRows
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetChangeImpl::DeleteRows](https://docs.microsoft.com/cpp/data/oledb/irowsetchangeimpl-deleterows).  
  
  
Deletes rows from the rowset.  
  
## Syntax  
  
```  
  
      STDMETHOD ( DeleteRows )(  
   HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBROWSTATUS rgRowStatus[]   
);  
```  
  
#### Parameters  
 See [IRowsetChange::DeleteRows](https://msdn.microsoft.com/library/ms724362.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetChangeImpl Class](../../data/oledb/irowsetchangeimpl-class.md)

