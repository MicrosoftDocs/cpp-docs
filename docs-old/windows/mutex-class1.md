---
title: "Mutex Class1"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Mutex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Mutex class"
ms.assetid: 682a0963-721c-46a2-8871-000e9997505b
caps.latest.revision: 4
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
# Mutex Class1
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
|[Mutex::Mutex Constructor](../windows/mutex--mutex-constructor.md)|Initializes a new instance of the Mutex class.|  
  
### Public Members  
  
|Name|Description|  
|----------|-----------------|  
|[Mutex::Lock Method](../windows/mutex--lock-method.md)|Waits until the current object, or the Mutex object associated with the specified handle, releases the mutex or the specified time-out interval has elapsed.|  
  
### Public Operator  
  
|Name|Description|  
|----------|-----------------|  
|[Mutex::operator= Operator](../windows/mutex--operator=-operator.md)|Assigns (moves) the specified Mutex object to the current Mutex object.|  
  
## Inheritance Hierarchy  
 `Mutex`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft--wrl--wrappers-namespace.md)