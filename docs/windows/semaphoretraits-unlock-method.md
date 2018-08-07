---
title: "SemaphoreTraits::Unlock Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits::Unlock"]
dev_langs: ["C++"]
helpviewer_keywords: ["Unlock method"]
ms.assetid: 4e0ea808-b70d-43f7-81ef-998c3b34e3a0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SemaphoreTraits::Unlock Method
Releases control of a shared resource.  
  
## Syntax  
  
```  
inline static void Unlock(  
   _In_ Type h  
);  
```  
  
### Parameters  
 *h*  
 Handle to a **Semaphore** object.  
  
## Remarks  
 If the unlock operation is unsuccessful, **Unlock()** emits an error that indicates the cause of the failure.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [SemaphoreTraits Structure](../windows/semaphoretraits-structure.md)