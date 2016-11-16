---
title: "SyncLockT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SyncLockT class"
ms.assetid: a967f6f7-3555-43d1-b210-2bb65d63d15e
caps.latest.revision: 5
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
# SyncLockT Class
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename SyncTraits  
>  
class SyncLockT;  
```  
  
#### Parameters  
 `SyncTraits`  
 The type that can take ownership of a resource.  
  
## Remarks  
 Represents a type that can take exclusive or shared ownership of a resource.  
  
 The SyncLockT class is used, for example, to help implement the [SRWLock](../windows/srwlock-class.md) class.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[SyncLockT::SyncLockT Constructor](../windows/synclockt-synclockt-constructor.md)|Initializes a new instance of the SyncLockT class.|  
|[SyncLockT::~SyncLockT Destructor](../windows/synclockt-tilde-synclockt-destructor.md)|Deinitializes an instance of the SyncLockT class.|  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[SyncLockT::SyncLockT Constructor](../windows/synclockt-synclockt-constructor.md)|Initializes a new instance of the SyncLockT class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SyncLockT::IsLocked Method](../windows/synclockt-islocked-method.md)|Indicates whether the current SyncLockT object owns a resource; that is, the SyncLockT object is *locked*.|  
|[SyncLockT::Unlock Method](../windows/synclockt-unlock-method.md)|Releases control of the resource held by the current SyncLockT object, if any.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[SyncLockT::sync_ Data Member](../windows/synclockt-sync-data-member.md)|Holds the underlying resource represented by the SyncLockT class.|  
  
## Inheritance Hierarchy  
 `SyncLockT`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [Microsoft::WRL::Wrappers::Details Namespace](../windows/microsoft-wrl-wrappers-details-namespace.md)   
 [SRWLock Class](../windows/srwlock-class.md)