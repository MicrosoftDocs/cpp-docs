---
title: "IAccessorImpl::CreateAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IAccessorImpl::CreateAccessor", "CreateAccessor", "ATL::IAccessorImpl::CreateAccessor", "IAccessorImpl.CreateAccessor", "ATL.IAccessorImpl.CreateAccessor"]
dev_langs: ["C++"]
helpviewer_keywords: ["CreateAccessor method"]
ms.assetid: f6b92075-c0b8-46ca-8361-026d562d24f5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IAccessorImpl::CreateAccessor
Creates an accessor from a set of bindings.  
  
## Syntax  
  
```cpp
      STDMETHOD(CreateAccessor)(DBACCESSORFLAGS dwAccessorFlags,  
   DBCOUNTITEM cBindings,  
   const DBBINDING rgBindings[],  
   DBLENGTH cbRowSize,  
   HACCESSOR* phAccessor,  
   DBBINDSTATUS rgStatus[]);  
```  
  
#### Parameters  
 See [IAccessor::CreateAccessor](https://msdn.microsoft.com/en-us/library/ms720969.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IAccessorImpl Class](../../data/oledb/iaccessorimpl-class.md)   
 [IAccessorImpl::AddRefAccessor](../../data/oledb/iaccessorimpl-addrefaccessor.md)   
 [IAccessorImpl::ReleaseAccessor](../../data/oledb/iaccessorimpl-releaseaccessor.md)