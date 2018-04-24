---
title: "SRWLockExclusiveTraits::Unlock Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::Unlock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unlock method"
ms.assetid: 7fd6b0fb-8b88-4a43-aa74-0d7fe47a0da6
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SRWLockExclusiveTraits::Unlock Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SRWLockExclusiveTraits::Unlock Method](https://docs.microsoft.com/cpp/windows/srwlockexclusivetraits-unlock-method).  
  
  
Releases exclusive control of the specified SRWLock object.  
  
## Syntax  
  
```  
inline static void Unlock(  
   _In_ Type srwlock  
);  
```  
  
#### Parameters  
 `srwlock`  
 Handle to an SRWLock object.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [SRWLockExclusiveTraits Structure](../windows/srwlockexclusivetraits-structure.md)

