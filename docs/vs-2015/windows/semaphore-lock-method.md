---
title: "Semaphore::Lock Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Semaphore::Lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Lock method"
ms.assetid: 0eef6ede-dc7d-4f09-a6c8-2f7d39d65bfa
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Semaphore::Lock Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Semaphore::Lock Method](https://docs.microsoft.com/cpp/windows/semaphore-lock-method).  
  
  
Waits until the current object, or the Semaphore object associated with the specified handle, is in the signaled state or the specified time-out interval has elapsed.  
  
## Syntax  
  
```  
SyncLock Lock(  
   DWORD milliseconds = INFINITE  
);  
  
static SyncLock Lock(  
   HANDLE h,  
   DWORD milliseconds = INFINITE  
);  
```  
  
#### Parameters  
 `milliseconds`  
 The time-out interval, in milliseconds. The default value is INFINITE, which waits indefinitely.  
  
 `h`  
 A handle to a Semaphore object.  
  
## Return Value  
 A Details::SyncLockWithStatusT\<HandleTraits::SemaphoreTraits>  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
[Semaphore Class](../windows/semaphore-class.md)
 

