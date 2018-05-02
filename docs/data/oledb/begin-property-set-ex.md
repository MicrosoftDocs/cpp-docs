---
title: "BEGIN_PROPERTY_SET_EX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["BEGIN_PROPERTY_SET_EX"]
dev_langs: ["C++"]
helpviewer_keywords: ["BEGIN_PROPERTY_SET_EX macro"]
ms.assetid: c95e7fab-edce-47b8-b282-200e53a2ea8a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# BEGIN_PROPERTY_SET_EX
Marks the beginning of a property set in a property set map.  
  
## Syntax  
  
```cpp
BEGIN_PROPERTY_SET_EX(guid  
, flags )  
```  
  
#### Parameters  
 `guid`  
 [in] The property GUID.  
  
 `flags`  
 [in] **UPROPSET_HIDDEN** for any property sets you do not wish to expose, or **UPROPSET_PASSTHROUGH** for a provider exposing properties defined outside the scope of the provider.  
  
## Example  
 See [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)