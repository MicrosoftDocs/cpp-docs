---
title: "SemaphoreTraits Structure"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: eddb8576-d063-409b-9201-cc87ca5d111e
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
# SemaphoreTraits Structure
Defines common characteristics of a Semaphore object.  
  
## Syntax  
  
```  
struct SemaphoreTraits : HANDLENullTraits;  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SemaphoreTraits::Unlock Method](../VS_visualcpp/SemaphoreTraits--Unlock-Method.md)|Releases control of a shared resource.|  
  
## Inheritance Hierarchy  
 `HANDLENullTraits`  
  
 `SemaphoreTraits`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [Microsoft::WRL::Wrappers::HandleTraits Namespace](../VS_visualcpp/Microsoft--WRL--Wrappers--HandleTraits-Namespace.md)