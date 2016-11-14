---
title: "SRWLockSharedTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SRWLockSharedTraits structure"
ms.assetid: 709cb51e-d70c-40b6-bdb4-d8eacf3af495
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
|`Type`|Synonym for a pointer to the [SRWLOCK](../windows/srwlock-class.md) class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLockSharedTraits::GetInvalidValue Method](../windows/srwlocksharedtraits-getinvalidvalue-method.md)|Retrieves an SRWLockSharedTraits object that is always invalid.|  
|[SRWLockSharedTraits::Unlock Method](../windows/srwlocksharedtraits-unlock-method.md)|Releases exclusive control of the specified SRWLock object.|  
  
## Inheritance Hierarchy  
 `SRWLockSharedTraits`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [Microsoft::WRL::Wrappers::HandleTraits Namespace](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)