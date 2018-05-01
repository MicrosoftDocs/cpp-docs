---
title: "IAccessorImpl::GetBindings | Microsoft Docs"
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
  - "IAccessorImpl.GetBindings"
  - "ATL::IAccessorImpl::GetBindings"
  - "IAccessorImpl::GetBindings"
  - "GetBindings"
  - "ATL.IAccessorImpl.GetBindings"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetBindings method"
ms.assetid: eb550077-77ef-450b-89f1-a2930cee6ab8
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IAccessorImpl::GetBindings
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IAccessorImpl::GetBindings](https://docs.microsoft.com/cpp/data/oledb/iaccessorimpl-getbindings).  
  
  
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
 See [IAccessor::GetBindings](https://msdn.microsoft.com/library/ms721253.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IAccessorImpl Class](../../data/oledb/iaccessorimpl-class.md)

