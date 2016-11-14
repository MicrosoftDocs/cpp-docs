---
title: "SRWLock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::SRWLock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SRWLock class"
ms.assetid: 4fa250e3-5f29-4b06-ac24-61b6c04ade93
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
# SRWLock Class
Represents a slim reader/writer lock.  
  
## Syntax  
  
```  
class SRWLock;  
```  
  
## Remarks  
 A slim reader/writer lock is used to synchronize access across threads to an object or resource. For more information, see [Synchronization Functions](http://msdn.microsoft.com/en-us/9b6359c2-0113-49b6-83d0-316ad95aba1b) in the MSDN Library.  
  
## Members  
  
### Public Typedefs  
  
|||  
|-|-|  
|**SyncLockExclusive**|Synonym for an SRWLock object that is acquired in exclusive mode.|  
|**SyncLockShared**|Synonym for an SRWLock object that is acquired in shared mode.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLock::SRWLock Constructor](../windows/srwlock-srwlock-constructor.md)|Initializes a new instance of the SRWLock class.|  
|[SRWLock::~SRWLock Destructor](../windows/srwlock-tilde-srwlock-destructor.md)|Deinitializes an instance of the SRWLock class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLock::LockExclusive Method](../windows/srwlock-lockexclusive-method.md)|Acquires an SRWLock object in exclusive mode.|  
|[SRWLock::LockShared Method](../windows/srwlock-lockshared-method.md)|Acquires an SRWLock object in shared mode.|  
|[SRWLock::TryLockExclusive Method](../windows/srwlock-trylockexclusive-method.md)|Attempts to acquire a SRWLock object in exclusive mode for the current or specified SRWLock object.|  
|[SRWLock::TryLockShared Method](../windows/srwlock-trylockshared-method.md)|Attempts to acquire a SRWLock object in shared mode for the current or specified SRWLock object.|  
  
### Protected Data Member  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLock::SRWLock_ Data Member](../windows/srwlock-srwlock-data-member.md)|Contains the underlying lock variable for the current SRWLock object.|  
  
## Inheritance Hierarchy  
 `SRWLock`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)