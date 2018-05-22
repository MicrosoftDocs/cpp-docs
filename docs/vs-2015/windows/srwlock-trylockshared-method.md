---
title: "SRWLock::TryLockShared Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockShared"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TryLockShared method"
ms.assetid: 10cc198d-39a0-4d18-aa78-706744948668
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SRWLock::TryLockShared Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SRWLock::TryLockShared Method](https://docs.microsoft.com/cpp/windows/srwlock-trylockshared-method).  
  
  
Attempts to acquire a SRWLock object in shared mode for the current or specified SRWLock object.  
  
## Syntax  
  
```  
WRL_NOTHROW SyncLockShared TryLockShared();  
WRL_NOTHROW static SyncLockShared TryLockShared(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### Parameters  
 `lock`  
 Pointer to an SRWLock object.  
  
## Return Value  
 If successful, an SRWLock object in shared mode and the calling thread takes ownership of the lock. Otherwise, an SRWLock object whose state is invalid.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [SRWLock Class](../windows/srwlock-class.md)

