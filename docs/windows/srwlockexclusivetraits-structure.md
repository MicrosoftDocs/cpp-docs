---
title: "SRWLockExclusiveTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SRWLockExclusiveTraits structure"
ms.assetid: 38a996ef-c2d7-4886-b413-a426ecee8f05
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
|`Type`|Synonym for a pointer to the [SRWLOCK](../windows/srwlock-class.md) class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLockExclusiveTraits::GetInvalidValue Method](../windows/srwlockexclusivetraits-getinvalidvalue-method.md)|Retrieves an SRWLockExclusiveTraits object that is always invalid.|  
|[SRWLockExclusiveTraits::Unlock Method](../windows/srwlockexclusivetraits-unlock-method.md)|Releases exclusive control of the specified SRWLock object.|  
  
## Inheritance Hierarchy  
 `SRWLockExclusiveTraits`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [Microsoft::WRL::Wrappers::HandleTraits Namespace](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)