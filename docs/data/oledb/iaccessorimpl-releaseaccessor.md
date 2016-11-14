---
title: "IAccessorImpl::ReleaseAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ReleaseAccessor"
  - "IAccessorImpl::ReleaseAccessor"
  - "ATL.IAccessorImpl.ReleaseAccessor"
  - "ATL::IAccessorImpl::ReleaseAccessor"
  - "IAccessorImpl.ReleaseAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseAccessor method"
ms.assetid: 1526e360-bd9c-4ecd-967e-5afdd7506d2a
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
# IAccessorImpl::ReleaseAccessor
Releases an accessor.  
  
## Syntax  
  
```  
  
      STDMETHOD(ReleaseAccessor)(  
   HACCESSOR hAccessor,  
   DBREFCOUNT* pcRefCount   
);  
```  
  
#### Parameters  
 See [IAccessor::ReleaseAccessor](https://msdn.microsoft.com/en-us/library/ms719717.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IAccessorImpl Class](../../data/oledb/iaccessorimpl-class.md)   
 [IAccessorImpl::CreateAccessor](../../data/oledb/iaccessorimpl-createaccessor.md)   
 [IAccessorImpl::AddRefAccessor](../../data/oledb/iaccessorimpl-addrefaccessor.md)