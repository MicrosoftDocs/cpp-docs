---
title: "IDBCreateSessionImpl::CreateSession"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 035e5ddb-56e6-43b1-874d-89c0e40b103b
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# IDBCreateSessionImpl::CreateSession
Creates a new session from the data source object and returns the requested interface on the newly created session.  
  
## Syntax  
  
```  
  
      STDMETHOD(CreateSession)(   
   IUnknown * pUnkOuter,   
   REFIID riid,   
   IUnknown ** ppDBSession    
);  
```  
  
#### Parameters  
 See [IDBCreateSession::CreateSession](https://msdn.microsoft.com/en-us/library/ms714942.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBCreateSessionImpl Class](../VS_visualcpp/IDBCreateSessionImpl-Class.md)