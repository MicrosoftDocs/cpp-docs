---
title: "improper_scheduler_detach Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::improper_scheduler_detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "improper_scheduler_detach class"
ms.assetid: 30132102-c900-4951-a470-b63b4e3aa2d2
caps.latest.revision: 18
ms.author: "mithom"
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
# improper_scheduler_detach Class
This class describes an exception thrown when the `CurrentScheduler::Detach` method is called on a context which has not been attached to any scheduler using the `Attach` method of a `Scheduler` object.  
  
## Syntax  
  
```
class improper_scheduler_detach : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[improper_scheduler_detach::improper_scheduler_detach Constructor](#improper_scheduler_detach__improper_scheduler_detach_constructor)|Overloaded. Constructs an `improper_scheduler_detach` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `improper_scheduler_detach`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="improper_scheduler_detach__improper_scheduler_detach_constructor"></a>  improper_scheduler_detach::improper_scheduler_detach Constructor  
 Constructs an `improper_scheduler_detach` object.  
  
```
explicit _CRTIMP improper_scheduler_detach(_In_z_ const char* _Message) throw();

improper_scheduler_detach() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [Scheduler Class](../parallel/scheduler-class.md)   
 [CurrentScheduler::Detach Method](../parallel/currentscheduler-class.md#currentscheduler__detach_method)   
 [Scheduler::Attach Method](../parallel/scheduler-class.md#scheduler__attach_method)

