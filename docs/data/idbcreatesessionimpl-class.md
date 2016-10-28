---
title: "IDBCreateSessionImpl Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
|[CreateSession](../data/idbcreatesessionimpl--createsession.md)|Creates a new session from the data source object and returns the requested interface on the newly created session.|  
  
## Remarks  
 A mandatory interface on data source objects.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)