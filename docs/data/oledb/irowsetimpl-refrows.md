---
title: "IRowsetImpl::RefRows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# IRowsetImpl::RefRows
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
 See [IRowset::AddRefRows](https://msdn.microsoft.com/en-us/library/ms719619.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT` value.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)   
 [CSimpleRow Class](../../data/oledb/csimplerow-class.md)