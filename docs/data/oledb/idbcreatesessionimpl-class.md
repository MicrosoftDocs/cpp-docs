---
title: "IDBCreateSessionImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IDBCreateSessionImpl", "ATL.IDBCreateSessionImpl", "ATL::IDBCreateSessionImpl"]
dev_langs: ["C++"]
helpviewer_keywords: ["IDBCreateSessionImpl class"]
ms.assetid: 48c02c5c-8362-45ac-af8e-bb119cf8c5c7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IDBCreateSessionImpl Class
Provides an implementation for the [IDBCreateSession](https://msdn.microsoft.com/en-us/library/ms724076.aspx) interface.  
  
## Syntax

```cpp
template <class T, class SessionClass>  
class ATL_NO_VTABLE IDBCreateSessionImpl   
   : public IDBCreateSession  
```  
  
#### Parameters  
 `T`  
 YOUR CLASS, DERIVED FROM  
  
 `SessionClass`  
 The session object.  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[CreateSession](../../data/oledb/idbcreatesessionimpl-createsession.md)|Creates a new session from the data source object and returns the requested interface on the newly created session.|  
  
## Remarks  
 A mandatory interface on data source objects.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)