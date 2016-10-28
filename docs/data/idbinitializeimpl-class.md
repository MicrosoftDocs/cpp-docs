---
title: "IDBInitializeImpl Class"
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
  - "ATL.IDBInitializeImpl<T>"
  - "ATL::IDBInitializeImpl<T>"
  - "IDBInitializeImpl"
  - "ATL::IDBInitializeImpl"
  - "ATL.IDBInitializeImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDBInitializeImpl class"
ms.assetid: e4182f81-0443-44f5-a0d3-e7e075d6f883
caps.latest.revision: 9
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
# IDBInitializeImpl Class
Provides an implementation for the [IDBInitialize](https://msdn.microsoft.com/en-us/library/ms713706.aspx) interface.  
  
## Syntax  
  
```  
template <class T>  
class ATL_NO_VTABLE IDBInitializeImpl : public IDBInitialize  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IDBInitializeImpl`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[IDBInitializeImpl](../data/idbinitializeimpl--idbinitializeimpl.md)|The constructor.|  
  
### Interface Methods  
  
|||  
|-|-|  
|[Initialize](../data/idbinitializeimpl--initialize.md)|Starts the provider.|  
|[Uninitialize](../data/idbinitializeimpl--uninitialize.md)|Stops the provider.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_dwStatus](../data/idbinitializeimpl--m_dwstatus.md)|Data source flags.|  
|[m_pCUtlPropInfo](../data/idbinitializeimpl--m_pcutlpropinfo.md)|A pointer to implementation of DB Properties information.|  
  
## Remarks  
 A mandatory interface on data source objects and optional interface on enumerators.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)