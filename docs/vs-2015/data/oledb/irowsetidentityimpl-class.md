---
title: "IRowsetIdentityImpl Class | Microsoft Docs"
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
  - "ATL::IRowsetIdentityImpl"
  - "ATL.IRowsetIdentityImpl"
  - "IRowsetIdentityImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetIdentityImpl class"
ms.assetid: 56821edf-e045-40c8-96bd-231552cd5799
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetIdentityImpl Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetIdentityImpl Class](https://docs.microsoft.com/cpp/data/oledb/irowsetidentityimpl-class).  
  
  
Implements the OLE DB [IRowsetIdentity](https://msdn.microsoft.com/library/ms715913.aspx) interface, which enables testing for row identity.  
  
## Syntax  
  
```  
template <class T, class RowClass = CSimpleRow>  
class ATL_NO_VTABLE IRowsetIdentityImpl   
   : public IRowsetIdentity  
```  
  
#### Parameters  
 `T`  
 A class derived from `IRowsetIdentityImpl`.  
  
 `RowClass`  
 The storage unit for the **HROW**.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[IsSameRow](../../data/oledb/irowsetidentityimpl-issamerow.md)|Compares two row handles to see if they refer to the same row.|  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)

