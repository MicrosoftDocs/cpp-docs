---
title: "IAccessorImpl::GetBindings"
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
ms.assetid: eb550077-77ef-450b-89f1-a2930cee6ab8
caps.latest.revision: 8
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
# IAccessorImpl::GetBindings
Returns the basic columns bindings from the consumer in an accessor.  
  
## Syntax  
  
```  
  
      STDMETHOD(GetBindings)(  
   HACCESSOR hAccessor,  
   DBACCESSORFLAGS* pdwAccessorFlags,  
   DBCOUNTITEM* pcBindings,  
   DBBINDING** prgBindings   
);  
```  
  
#### Parameters  
 See [IAccessor::GetBindings](https://msdn.microsoft.com/en-us/library/ms721253.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IAccessorImpl Class](../VS_visualcpp/IAccessorImpl-Class.md)