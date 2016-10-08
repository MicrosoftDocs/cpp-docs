---
title: "Semaphore Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: ded53526-17b4-4381-9c60-ea5e77363db6
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Semaphore Class
Represents a synchronization object that controls a shared resource that can support a limited number of users.  
  
## Syntax  
  
```  
  
class Semaphore : public HandleT<HandleTraits::SemaphoreTraits>  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`SyncLock`|A synonym for a class that supports synchronous locks.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Semaphore::Semaphore Constructor](../VS_visualcpp/Semaphore--Semaphore-Constructor.md)|Initializes a new instance of the Semaphore class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[InvokeHelper::Invoke Method](../VS_visualcpp/InvokeHelper--Invoke-Method.md)|Calls the event handler whose signature contains the specified number of arguments.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[Semaphore::Lock Method](../VS_visualcpp/Semaphore--Lock-Method.md)|Waits until the current object, or the object associated with the specified handle, is in the signaled state or the specified time-out interval has elapsed.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[Semaphore::operator= Operator](../VS_visualcpp/Semaphore--operator=-Operator.md)|Moves the specified handle from a Semaphore object to the current Semaphore object.|  
  
## Inheritance Hierarchy  
 `Semaphore`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../VS_visualcpp/Microsoft--WRL--Wrappers-Namespace.md)