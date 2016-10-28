---
title: "IAccessorImpl::AddRefAccessor"
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
  - "ATL::IAccessorImpl::AddRefAccessor"
  - "AddRefAccessor"
  - "IAccessorImpl::AddRefAccessor"
  - "IAccessorImpl.AddRefAccessor"
  - "ATL.IAccessorImpl.AddRefAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRefAccessor method"
ms.assetid: 4c15392c-944b-4cbd-8cc7-2a5c2f308a70
caps.latest.revision: 8
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
# IAccessorImpl::AddRefAccessor
Adds a reference count to an existing accessor.  
  
## Syntax  
  
```  
  
      STDMETHOD(AddRefAccessor)(  
   HACCESSOR hAccessor,  
   DBREFCOUNT* pcRefCount   
);  
```  
  
#### Parameters  
 See [IAccessor::AddRefAccessor](https://msdn.microsoft.com/en-us/library/ms714978.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IAccessorImpl Class](../data/iaccessorimpl-class.md)   
 [IAccessorImpl::CreateAccessor](../data/iaccessorimpl--createaccessor.md)   
 [IAccessorImpl::ReleaseAccessor](../data/iaccessorimpl--releaseaccessor.md)