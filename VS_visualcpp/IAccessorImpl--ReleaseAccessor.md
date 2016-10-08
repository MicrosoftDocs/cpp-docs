---
title: "IAccessorImpl::ReleaseAccessor"
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
ms.assetid: 1526e360-bd9c-4ecd-967e-5afdd7506d2a
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
 [IAccessorImpl Class](../VS_visualcpp/IAccessorImpl-Class.md)   
 [IAccessorImpl::CreateAccessor](../VS_visualcpp/IAccessorImpl--CreateAccessor.md)   
 [IAccessorImpl::AddRefAccessor](../VS_visualcpp/IAccessorImpl--AddRefAccessor.md)