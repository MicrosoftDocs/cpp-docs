---
title: "CAccessorBase::ReleaseAccessors | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CAccessorBase::ReleaseAccessors", "CAccessorBase.ReleaseAccessors", "ReleaseAccessors"]
dev_langs: ["C++"]
helpviewer_keywords: ["ReleaseAccessors method"]
ms.assetid: f08bc88e-0552-4a9c-9c65-b4061094649a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CAccessorBase::ReleaseAccessors
Releases the accessors created by the class.  
  
## Syntax  
  
```cpp
HRESULT ReleaseAccessors(IUnknown* pUnk);  
```  
  
#### Parameters  
 *pUnk*  
 [in] A pointer to an **IUnknown** interface for the COM object for which the accessors have been created.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 Called from [CAccessorRowset::Close](../../data/oledb/caccessorrowset-close.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorBase Class](../../data/oledb/caccessorbase-class.md)