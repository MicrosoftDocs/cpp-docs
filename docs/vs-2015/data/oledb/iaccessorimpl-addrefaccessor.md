---
title: "IAccessorImpl::AddRefAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IAccessorImpl::AddRefAccessor
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IAccessorImpl::AddRefAccessor](https://docs.microsoft.com/cpp/data/oledb/iaccessorimpl-addrefaccessor).  
  
  
Adds a reference count to an existing accessor.  
  
## Syntax  
  
```  
  
      STDMETHOD(AddRefAccessor)(  
   HACCESSOR hAccessor,  
   DBREFCOUNT* pcRefCount   
);  
```  
  
#### Parameters  
 See [IAccessor::AddRefAccessor](https://msdn.microsoft.com/library/ms714978.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IAccessorImpl Class](../../data/oledb/iaccessorimpl-class.md)   
 [IAccessorImpl::CreateAccessor](../../data/oledb/iaccessorimpl-createaccessor.md)   
 [IAccessorImpl::ReleaseAccessor](../../data/oledb/iaccessorimpl-releaseaccessor.md)

