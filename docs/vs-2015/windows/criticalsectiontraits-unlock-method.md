---
title: "CriticalSectionTraits::Unlock Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unlock method"
ms.assetid: 8fb382f5-6eda-407e-9673-71d77bda4962
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CriticalSectionTraits::Unlock Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [CriticalSectionTraits::Unlock Method](https://docs.microsoft.com/cpp/windows/criticalsectiontraits-unlock-method).  
  
  
Specializes a CriticalSection template so that it supports releasing ownership of the specified critical section object.  
  
## Syntax  
  
```  
inline static void Unlock(  
   _In_ Type cs  
);  
```  
  
#### Parameters  
 `cs`  
 A pointer to a critical section object.  
  
## Remarks  
 The *Type* modifier is defined as `typedef CRITICAL_SECTION* Type;`.  
  
 For more information, see "LeaveCriticalSection function" in the "Synchronization Functions" section of the Windows API documentation.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [CriticalSectionTraits Structure](../windows/criticalsectiontraits-structure.md)

