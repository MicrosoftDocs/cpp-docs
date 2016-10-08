---
title: "SRWLock Class"
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
ms.assetid: 4fa250e3-5f29-4b06-ac24-61b6c04ade93
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
# SRWLock Class
Represents a slim reader/writer lock.  
  
## Syntax  
  
```  
class SRWLock;  
```  
  
## Remarks  
 A slim reader/writer lock is used to synchronize access across threads to an object or resource. For more information, see [Synchronization Functions](assetId:///9b6359c2-0113-49b6-83d0-316ad95aba1b) in the MSDN Library.  
  
## Members  
  
### Public Typedefs  
  
|||  
|-|-|  
|**SyncLockExclusive**|Synonym for an SRWLock object that is acquired in exclusive mode.|  
|**SyncLockShared**|Synonym for an SRWLock object that is acquired in shared mode.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLock::SRWLock Constructor](../VS_visualcpp/SRWLock--SRWLock-Constructor.md)|Initializes a new instance of the SRWLock class.|  
|[SRWLock::~SRWLock Destructor](../VS_visualcpp/SRWLock--~SRWLock-Destructor.md)|Deinitializes an instance of the SRWLock class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLock::LockExclusive Method](../VS_visualcpp/SRWLock--LockExclusive-Method.md)|Acquires an SRWLock object in exclusive mode.|  
|[SRWLock::LockShared Method](../VS_visualcpp/SRWLock--LockShared-Method.md)|Acquires an SRWLock object in shared mode.|  
|[SRWLock::TryLockExclusive Method](../VS_visualcpp/SRWLock--TryLockExclusive-Method.md)|Attempts to acquire a SRWLock object in exclusive mode for the current or specified SRWLock object.|  
|[SRWLock::TryLockShared Method](../VS_visualcpp/SRWLock--TryLockShared-Method.md)|Attempts to acquire a SRWLock object in shared mode for the current or specified SRWLock object.|  
  
### Protected Data Member  
  
|Name|Description|  
|----------|-----------------|  
|[SRWLock::SRWLock_ Data Member](../VS_visualcpp/SRWLock--SRWLock_-Data-Member.md)|Contains the underlying lock variable for the current SRWLock object.|  
  
## Inheritance Hierarchy  
 `SRWLock`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../VS_visualcpp/Microsoft--WRL--Wrappers-Namespace.md)