---
title: "Microsoft::WRL::Wrappers::HandleTraits Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HandleTraits namespace"
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
caps.latest.revision: 7
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
# Microsoft::WRL::Wrappers::HandleTraits Namespace
Describes characteristics of common handle-based resource types.  
  
## Syntax  
  
```  
namespace Microsoft::WRL::Wrappers::HandleTraits;  
```  
  
## Members  
  
### Structures  
  
|Name|Description|  
|----------|-----------------|  
|[CriticalSectionTraits Structure](../windows/criticalsectiontraits-structure.md)|Specializes a `CriticalSection` object to support either an invalid critical section or a function to release a critical section.|  
|[EventTraits Structure](../windows/eventtraits-structure.md)|Defines characteristics of an `Event` class handle.|  
|[FileHandleTraits Structure](../windows/filehandletraits-structure.md)|Defines characteristics of a file handle.|  
|[HANDLENullTraits Structure](../windows/handlenulltraits-structure.md)|Defines common characteristics of an uninitialized handle.|  
|[HANDLETraits Structure](../windows/handletraits-structure.md)|Defines common characteristics of a handle.|  
|[MutexTraits Structure](../windows/mutextraits-structure.md)|Defines common characteristics of the [Mutex](../windows/mutex-class1.md) class.|  
|[SemaphoreTraits Structure](../windows/semaphoretraits-structure.md)|Defines common characteristics of a Semaphore object.|  
|[SRWLockExclusiveTraits Structure](../windows/srwlockexclusivetraits-structure.md)|Describes common characteristics of the `SRWLock` class in exclusive lock mode.|  
|[SRWLockSharedTraits Structure](../windows/srwlocksharedtraits-structure.md)|Describes common characteristics of the `SRWLock` class in shared lock mode.|  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)