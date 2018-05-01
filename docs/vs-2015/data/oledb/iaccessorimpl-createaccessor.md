---
title: "IAccessorImpl::CreateAccessor | Microsoft Docs"
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
  - "IAccessorImpl::CreateAccessor"
  - "CreateAccessor"
  - "ATL::IAccessorImpl::CreateAccessor"
  - "IAccessorImpl.CreateAccessor"
  - "ATL.IAccessorImpl.CreateAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateAccessor method"
ms.assetid: f6b92075-c0b8-46ca-8361-026d562d24f5
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IAccessorImpl::CreateAccessor
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IAccessorImpl::CreateAccessor](https://docs.microsoft.com/cpp/data/oledb/iaccessorimpl-createaccessor).  
  
  
Creates an accessor from a set of bindings.  
  
## Syntax  
  
```  
  
      STDMETHOD(CreateAccessor)(  
   DBACCESSORFLAGS dwAccessorFlags,  
   DBCOUNTITEM cBindings,  
   const DBBINDING rgBindings[],  
   DBLENGTH cbRowSize,  
   HACCESSOR* phAccessor,  
   DBBINDSTATUS rgStatus[]   
);  
```  
  
#### Parameters  
 See [IAccessor::CreateAccessor](https://msdn.microsoft.com/library/ms720969.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IAccessorImpl Class](../../data/oledb/iaccessorimpl-class.md)   
 [IAccessorImpl::AddRefAccessor](../../data/oledb/iaccessorimpl-addrefaccessor.md)   
 [IAccessorImpl::ReleaseAccessor](../../data/oledb/iaccessorimpl-releaseaccessor.md)

