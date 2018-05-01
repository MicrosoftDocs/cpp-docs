---
title: "Mutex::Lock Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Mutex::Lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Lock method"
ms.assetid: 61d95072-b690-441e-a080-0bf94a733141
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Mutex::Lock Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Mutex::Lock Method](https://docs.microsoft.com/cpp/windows/mutex-lock-method).  
  
  
Waits until the current object, or the Mutex object associated with the specified handle, releases the mutex or the specified time-out interval has elapsed.  
  
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
 The handle of a Mutex object.  
  
## Return Value  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## See Also
 [Mutex Class](../windows/mutex-class1.md)

