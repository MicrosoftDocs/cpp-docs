---
title: "SemaphoreTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits"]
dev_langs: ["C++"]
helpviewer_keywords: ["SemaphoreTraits structure"]
ms.assetid: eddb8576-d063-409b-9201-cc87ca5d111e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SemaphoreTraits Structure
Defines common characteristics of a **Semaphore** object.  
  
## Syntax  
  
```cpp  
struct SemaphoreTraits : HANDLENullTraits;  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SemaphoreTraits::Unlock Method](../windows/semaphoretraits-unlock-method.md)|Releases control of a shared resource.|  
  
## Inheritance Hierarchy  
 `HANDLENullTraits`  
  
 `SemaphoreTraits`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [Microsoft::WRL::Wrappers::HandleTraits Namespace](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)