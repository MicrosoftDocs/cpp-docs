---
title: "SRWLock::LockExclusive Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockExclusive"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LockExclusive method"
ms.assetid: f361b672-fca6-45cc-a9b4-310cc0d23fdc
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SRWLock::LockExclusive Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SRWLock::LockExclusive Method](https://docs.microsoft.com/cpp/windows/srwlock-lockexclusive-method).  
  
  
Acquires an SRWLock object in exclusive mode.  
  
## Syntax  
  
```  
SyncLockExclusive LockExclusive();  
  
static SyncLockExclusive LockExclusive(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### Parameters  
 `lock`  
 Pointer to an SRWLock object.  
  
## Return Value  
 An SRWLock object in exclusive mode.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [SRWLock Class](../windows/srwlock-class.md)

