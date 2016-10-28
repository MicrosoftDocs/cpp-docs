---
title: "SRWLock::LockShared Method"
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
  - "corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockShared"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LockShared method"
ms.assetid: 9d826a5c-b6a2-4430-ac85-d5753cbca889
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
# SRWLock::LockShared Method
Acquires an SRWLock object in shared mode.  
  
## Syntax  
  
```  
SyncLockShared LockShared();  
  
static SyncLockShared LockShared(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### Parameters  
 `lock`  
 Pointer to an SRWLock object.  
  
## Return Value  
 An SRWLock object in shared mode.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [SRWLock Class](../windows/srwlock-class.md)