---
title: "IAccessorImpl::AddRefAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["ATL::IAccessorImpl::AddRefAccessor", "AddRefAccessor", "IAccessorImpl::AddRefAccessor", "IAccessorImpl.AddRefAccessor", "ATL.IAccessorImpl.AddRefAccessor"]
dev_langs: ["C++"]
helpviewer_keywords: ["AddRefAccessor method"]
ms.assetid: 4c15392c-944b-4cbd-8cc7-2a5c2f308a70
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# IAccessorImpl::AddRefAccessor
Adds a reference count to an existing accessor.  
  
## Syntax  
  
```cpp
      STDMETHOD(AddRefAccessor)(HACCESSOR hAccessor,  
   DBREFCOUNT* pcRefCount);  
```  
  
#### Parameters  
 See [IAccessor::AddRefAccessor](https://msdn.microsoft.com/en-us/library/ms714978.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IAccessorImpl Class](../../data/oledb/iaccessorimpl-class.md)   
 [IAccessorImpl::CreateAccessor](../../data/oledb/iaccessorimpl-createaccessor.md)   
 [IAccessorImpl::ReleaseAccessor](../../data/oledb/iaccessorimpl-releaseaccessor.md)