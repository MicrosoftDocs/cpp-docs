---
title: "IDBInitializeImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["ATL.IDBInitializeImpl<T>", "ATL::IDBInitializeImpl<T>", "IDBInitializeImpl", "ATL::IDBInitializeImpl", "ATL.IDBInitializeImpl"]
dev_langs: ["C++"]
helpviewer_keywords: ["IDBInitializeImpl class"]
ms.assetid: e4182f81-0443-44f5-a0d3-e7e075d6f883
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# IDBInitializeImpl Class
Provides an implementation for the [IDBInitialize](https://msdn.microsoft.com/en-us/library/ms713706.aspx) interface.  
  
## Syntax

```cpp
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
|[IDBInitializeImpl](../../data/oledb/idbinitializeimpl-idbinitializeimpl.md)|The constructor.|  
  
### Interface Methods  
  
|||  
|-|-|  
|[Initialize](../../data/oledb/idbinitializeimpl-initialize.md)|Starts the provider.|  
|[Uninitialize](../../data/oledb/idbinitializeimpl-uninitialize.md)|Stops the provider.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_dwStatus](../../data/oledb/idbinitializeimpl-m-dwstatus.md)|Data source flags.|  
|[m_pCUtlPropInfo](../../data/oledb/idbinitializeimpl-m-pcutlpropinfo.md)|A pointer to implementation of DB Properties information.|  
  
## Remarks  
 A mandatory interface on data source objects and optional interface on enumerators.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)