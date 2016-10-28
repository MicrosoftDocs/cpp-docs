---
title: "SRWLockSharedTraits::Unlock Method"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::Unlock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unlock method"
ms.assetid: 33cdead9-1900-4094-b18e-38fcf1a0bd28
caps.latest.revision: 3
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
# SRWLockSharedTraits::Unlock Method
Releases exclusive control of the specified SRWLock object.  
  
## Syntax  
  
```  
inline static void Unlock(  
   _In_ Type srwlock  
);  
```  
  
#### Parameters  
 `srwlock`  
 A handle to an SRWLock object.  
  
## Return Value  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [SRWLockSharedTraits Structure](../windows/srwlocksharedtraits-structure.md)