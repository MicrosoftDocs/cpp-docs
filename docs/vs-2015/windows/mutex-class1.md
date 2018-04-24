---
title: "Mutex Class1 | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Mutex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Mutex class"
ms.assetid: 682a0963-721c-46a2-8871-000e9997505b
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Mutex Class1
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Mutex Class1](https://docs.microsoft.com/cpp/windows/mutex-class1).  
  
  
Represents a synchronization object that exclusively controls a shared resource.  
  
## Syntax  
  
```  
class Mutex : public HandleT<HandleTraits::MutexTraits>  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|**SyncLock**|A synonym for a class that supports synchronous locks.|  
  
### Public Constructor  
  
|Name|Description|  
|----------|-----------------|  
|[Mutex::Mutex Constructor](../windows/mutex-mutex-constructor.md)|Initializes a new instance of the Mutex class.|  
  
### Public Members  
  
|Name|Description|  
|----------|-----------------|  
|[Mutex::Lock Method](../windows/mutex-lock-method.md)|Waits until the current object, or the Mutex object associated with the specified handle, releases the mutex or the specified time-out interval has elapsed.|  
  
### Public Operator  
  
|Name|Description|  
|----------|-----------------|  
|[Mutex::operator= Operator](../windows/mutex-operator-assign-operator.md)|Assigns (moves) the specified Mutex object to the current Mutex object.|  
  
## Inheritance Hierarchy  
 `Mutex`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)

