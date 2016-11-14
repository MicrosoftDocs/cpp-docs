---
title: "SyncLockWithStatusT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SyncLockWithStatusT class"
ms.assetid: 4832fd93-0ac8-4168-9404-b43fefea7476
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
# SyncLockWithStatusT Class
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename SyncTraits  
>  
class SyncLockWithStatusT : public SyncLockT<SyncTraits>;  
```  
  
#### Parameters  
 `SyncTraits`  
 A type that can take exclusive or shared ownership of a resource.  
  
## Remarks  
 Represents a type that can take exclusive or shared ownership of a resource.  
  
 The SyncLockWithStatusT class is used to implement the [Mutex](../windows/mutex-class1.md) and [Semaphore](../windows/semaphore-class.md) classes.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[SyncLockWithStatusT::SyncLockWithStatusT Constructor](../windows/synclockwithstatust-synclockwithstatust-constructor.md)|Initializes a new instance of the SyncLockWithStatusT class.|  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[SyncLockWithStatusT::SyncLockWithStatusT Constructor](../windows/synclockwithstatust-synclockwithstatust-constructor.md)|Initializes a new instance of the SyncLockWithStatusT class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SyncLockWithStatusT::GetStatus Method](../windows/synclockwithstatust-getstatus-method.md)|Retrieves the wait status of the current SyncLockWithStatusT object.|  
|[SyncLockWithStatusT::IsLocked Method](../windows/synclockwithstatust-islocked-method.md)|Indicates whether the current SyncLockWithStatusT object owns a resource; that is, the SyncLockWithStatusT object is *locked*.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[SyncLockWithStatusT::status_ Data Member](../windows/synclockwithstatust-status-data-member.md)|Holds the result of the underlying wait operation after a lock operation on an object based on the current SyncLockWithStatusT object.|  
  
## Inheritance Hierarchy  
 `SyncLockT`  
  
 `SyncLockWithStatusT`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [Microsoft::WRL::Wrappers::Details Namespace](../windows/microsoft-wrl-wrappers-details-namespace.md)