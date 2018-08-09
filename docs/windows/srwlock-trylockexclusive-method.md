---
title: "SRWLock::TryLockExclusive Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive"]
dev_langs: ["C++"]
helpviewer_keywords: ["TryLockExclusive method"]
ms.assetid: 661e8b19-3058-4511-8742-c9fbb90412c7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SRWLock::TryLockExclusive Method
Attempts to acquire a **SRWLock** object in exclusive mode for the current or specified **SRWLock** object. If the call is successful, the calling thread takes ownership of the lock.  
  
## Syntax  
  
```cpp  
SyncLockExclusive TryLockExclusive();  
  
static SyncLockExclusive TryLockExclusive(  
   _In_ SRWLOCK* lock  
);  
```  
  
### Parameters  
 *lock*  
 Pointer to an **SRWLock** object.  
  
## Return Value  
 If successful, an **SRWLock** object in exclusive mode and the calling thread takes ownership of the lock. Otherwise, an **SRWLock** object whose state is invalid.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [SRWLock Class](../windows/srwlock-class.md)