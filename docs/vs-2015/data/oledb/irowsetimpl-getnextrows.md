---
title: "IRowsetImpl::GetNextRows | Microsoft Docs"
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
  - "GetNextRows"
  - "ATL.IRowsetImpl.GetNextRows"
  - "ATL::IRowsetImpl::GetNextRows"
  - "IRowsetImpl::GetNextRows"
  - "IRowsetImpl.GetNextRows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetNextRows method"
ms.assetid: 1c0975d6-d770-4884-830b-6986c6fa8e65
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetImpl::GetNextRows
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetImpl::GetNextRows](https://docs.microsoft.com/cpp/data/oledb/irowsetimpl-getnextrows).  
  
  
Fetches rows sequentially, remembering the previous position.  
  
## Syntax  
  
```  
  
      STDMETHOD( GetNextRows )(  
   HCHAPTER hReserved,  
   DBROWOFFSET lRowsOffset,  
   DBROWCOUNT cRows,  
   DBCOUNTITEM* pcRowsObtained,  
   HROW** prghRows   
);  
```  
  
#### Parameters  
 See [IRowset::GetNextRows](https://msdn.microsoft.com/library/ms709827.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)   
 [IRowsetImpl::AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md)   
 [IRowsetImpl::ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md)

