---
title: "SRWLockSharedTraits Structure"
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
ms.assetid: 709cb51e-d70c-40b6-bdb4-d8eacf3af495
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
# SRWLockSharedTraits Structure
Describes common characteristics of the SRWLock class in shared lock mode.  
  
## Syntax  
  
```  
struct SRWLockSharedTraits;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Type`|Synonym for a pointer to the [SRWLOCK](../VS_visualcpp/SRWLock-Class.md) class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLockSharedTraits::GetInvalidValue Method](../VS_visualcpp/SRWLockSharedTraits--GetInvalidValue-Method.md)|Retrieves an SRWLockSharedTraits object that is always invalid.|  
|[SRWLockSharedTraits::Unlock Method](../VS_visualcpp/SRWLockSharedTraits--Unlock-Method.md)|Releases exclusive control of the specified SRWLock object.|  
  
## Inheritance Hierarchy  
 `SRWLockSharedTraits`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [Microsoft::WRL::Wrappers::HandleTraits Namespace](../VS_visualcpp/Microsoft--WRL--Wrappers--HandleTraits-Namespace.md)