---
title: "SRWLockExclusiveTraits Structure"
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
ms.assetid: 38a996ef-c2d7-4886-b413-a426ecee8f05
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
# SRWLockExclusiveTraits Structure
Describes common characteristics of the SRWLock class in exclusive lock mode.  
  
## Syntax  
  
```  
struct SRWLockExclusiveTraits;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Type`|Synonym for a pointer to the [SRWLOCK](../VS_visualcpp/SRWLock-Class.md) class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLockExclusiveTraits::GetInvalidValue Method](../VS_visualcpp/SRWLockExclusiveTraits--GetInvalidValue-Method.md)|Retrieves an SRWLockExclusiveTraits object that is always invalid.|  
|[SRWLockExclusiveTraits::Unlock Method](../VS_visualcpp/SRWLockExclusiveTraits--Unlock-Method.md)|Releases exclusive control of the specified SRWLock object.|  
  
## Inheritance Hierarchy  
 `SRWLockExclusiveTraits`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [Microsoft::WRL::Wrappers::HandleTraits Namespace](../VS_visualcpp/Microsoft--WRL--Wrappers--HandleTraits-Namespace.md)