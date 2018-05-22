---
title: "SemaphoreTraits::Unlock Method | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits::Unlock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unlock method"
ms.assetid: 4e0ea808-b70d-43f7-81ef-998c3b34e3a0
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SemaphoreTraits::Unlock Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SemaphoreTraits::Unlock Method](https://docs.microsoft.com/cpp/windows/semaphoretraits-unlock-method).  
  
  
Releases control of a shared resource.  
  
## Syntax  
  
```  
inline static void Unlock(  
   _In_ Type h  
);  
```  
  
#### Parameters  
 `h`  
 Handle to a semaphore object.  
  
## Remarks  
 If the unlock operation is unsuccessful, Unlock() emits an error that indicates the cause of the failure.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [SemaphoreTraits Structure](../windows/semaphoretraits-structure.md)

