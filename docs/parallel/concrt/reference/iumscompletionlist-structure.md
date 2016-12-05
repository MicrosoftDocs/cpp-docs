---
title: "IUMSCompletionList Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IUMSCompletionList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IUMSCompletionList structure"
ms.assetid: 81b5250e-3065-492c-b20d-2cdabf12271a
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# IUMSCompletionList Structure
Represents a UMS completion list. When a UMS thread blocks, the scheduler's designated scheduling context is dispatched in order to make a decision of what to schedule on the underlying virtual processor root while the original thread is blocked. When the original thread unblocks, the operating system queues it to the completion list which is accessible through this interface. The scheduler can query the completion list on the designated scheduling context or any other place it searches for work.  
  
## Syntax  
  
```
struct IUMSCompletionList;
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IUMSCompletionList::GetUnblockNotifications Method](#getunblocknotifications)|Retrieves a chain of `IUMSUnblockNotification` interfaces representing execution contexts whose associated thread proxies have unblocked since the last time this method was invoked.|  
  
## Remarks  
 A scheduler must be extraordinarily careful about what actions are performed after utilizing this interface to dequeue items from the completion list. The items should be placed on the scheduler's list of runnable contexts and be generally accessible as soon as possible. It is entirely possible that one of the dequeued items has been given ownership of an arbitrary lock. The scheduler can make no arbitrary function calls that may block between the call to dequeue items and the placement of those items on a list that can be generally accessed from within the scheduler.  
  
## Inheritance Hierarchy  
 `IUMSCompletionList`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="getunblocknotifications"></a>  IUMSCompletionList::GetUnblockNotifications Method  
 Retrieves a chain of `IUMSUnblockNotification` interfaces representing execution contexts whose associated thread proxies have unblocked since the last time this method was invoked.  
  
```
virtual IUMSUnblockNotification *GetUnblockNotifications() = 0;
```  
  
### Return Value  
 A chain of `IUMSUnblockNotification` interfaces.  
  
### Remarks  
 The returned notifications are invalid once the execution contexts are rescheduled.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [IUMSScheduler Structure](iumsscheduler-structure.md)   
 [IUMSUnblockNotification Structure](iumsunblocknotification-structure.md)
