---
title: "IDBCreateSessionImpl::CreateSession | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IDBCreateSessionImpl::CreateSession", "IDBCreateSessionImpl.CreateSession", "CreateSession"]
dev_langs: ["C++"]
helpviewer_keywords: ["CreateSession method"]
ms.assetid: 035e5ddb-56e6-43b1-874d-89c0e40b103b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IDBCreateSessionImpl::CreateSession
Creates a new session from the data source object and returns the requested interface on the newly created session.  
  
## Syntax  
  
```cpp
      STDMETHOD(CreateSession)(IUnknown * pUnkOuter,   
   REFIID riid,   
   IUnknown ** ppDBSession);  
```  
  
#### Parameters  
 See [IDBCreateSession::CreateSession](https://msdn.microsoft.com/en-us/library/ms714942.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBCreateSessionImpl Class](../../data/oledb/idbcreatesessionimpl-class.md)