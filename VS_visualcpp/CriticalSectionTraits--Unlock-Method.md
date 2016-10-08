---
title: "CriticalSectionTraits::Unlock Method"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 8fb382f5-6eda-407e-9673-71d77bda4962
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# CriticalSectionTraits::Unlock Method
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
 [CriticalSectionTraits Structure](../VS_visualcpp/CriticalSectionTraits-Structure.md)