---
title: "IDBCreateSessionImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDBCreateSessionImpl"
  - "ATL.IDBCreateSessionImpl"
  - "ATL::IDBCreateSessionImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDBCreateSessionImpl class"
ms.assetid: 48c02c5c-8362-45ac-af8e-bb119cf8c5c7
caps.latest.revision: 9
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
# IDBCreateSessionImpl Class
Provides an implementation for the [IDBCreateSession](https://msdn.microsoft.com/en-us/library/ms724076.aspx) interface.  
  
## Syntax  
  
```  
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