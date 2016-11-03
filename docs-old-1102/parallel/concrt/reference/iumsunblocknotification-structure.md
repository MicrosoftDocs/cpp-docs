---
title: "IUMSUnblockNotification Structure"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IUMSUnblockNotification"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IUMSUnblockNotification structure"
ms.assetid: eaca9529-c1cc-472b-8ec6-722a1ff0fa2a
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
# IUMSUnblockNotification Structure
Represents a notification from the Resource Manager that a thread proxy which blocked and triggered a return to the scheduler's designated scheduling context has unblocked and is ready to be scheduled. This interface is invalid once the thread proxy's associated execution context, returned from the `GetContext` method, is rescheduled.  
  
## Syntax  
  
```
struct IUMSUnblockNotification;
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IUMSUnblockNotification::GetContext Method](#iumsunblocknotification__getcontext_method)|Returns the `IExecutionContext` interface for the execution context associated with the thread proxy which has unblocked. Once this method returns and the underlying execution context has been rescheduled via a call to the `IThreadProxy::SwitchTo` method, this interface is no longer valid.|  
|[IUMSUnblockNotification::GetNextUnblockNotification Method](#iumsunblocknotification__getnextunblocknotification_method)|Returns the next `IUMSUnblockNotification` interface in the chain returned from the method `IUMSCompletionList::GetUnblockNotifications`.|  
  
## Inheritance Hierarchy  
 `IUMSUnblockNotification`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="iumsunblocknotification__getcontext_method"></a>  IUMSUnblockNotification::GetContext Method  
 Returns the `IExecutionContext` interface for the execution context associated with the thread proxy which has unblocked. Once this method returns and the underlying execution context has been rescheduled via a call to the `IThreadProxy::SwitchTo` method, this interface is no longer valid.  
  
```
virtual IExecutionContext* GetContext() = 0;
```  
  
### Return Value  
 An `IExecutionContext` interface for the execution context to a thread proxy which has unblocked.  
  
##  <a name="iumsunblocknotification__getnextunblocknotification_method"></a>  IUMSUnblockNotification::GetNextUnblockNotification Method  
 Returns the next `IUMSUnblockNotification` interface in the chain returned from the method `IUMSCompletionList::GetUnblockNotifications`.  
  
```
virtual IUMSUnblockNotification* GetNextUnblockNotification() = 0;
```  
  
### Return Value  
 The next `IUMSUnblockNotification` interface in the chain returned from the method `IUMSCompletionList::GetUnblockNotifications`.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [IUMSScheduler Structure](../../../parallel/concrt/reference/iumsscheduler-structure.md)   
 [IUMSCompletionList Structure](../../../parallel/concrt/reference/iumscompletionlist-structure.md)
