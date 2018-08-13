---
title: "CreatorMap::factoryCreator Data Member | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::CreatorMap::factoryCreator"]
dev_langs: ["C++"]
helpviewer_keywords: ["factoryCreator data member"]
ms.assetid: c9aac363-8f38-4cfd-9605-1e6ac74c5097
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# CreatorMap::factoryCreator Data Member
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
HRESULT (*factoryCreator)(  
   unsigned int* currentflags,  
   const CreatorMap* entry,  
   REFIID iidClassFactory,  
 IUnknown** factory);  
```  
  
### Parameters  
 *currentflags*  
 One of the [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumerators.  
  
 *entry*  
 A CreatorMap.  
  
 *iidClassFactory*  
 The interface ID of a class factory.  
  
 *factory*  
 When the operation completes, the address of a class factory.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 Creates a factory for the specified CreatorMap.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [CreatorMap Structure](../windows/creatormap-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)