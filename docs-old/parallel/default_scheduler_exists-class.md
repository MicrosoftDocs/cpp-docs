---
title: "default_scheduler_exists Class"
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
  - "concrt/concurrency::default_scheduler_exists"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "default_scheduler_exists class"
ms.assetid: f6e575e2-4e0f-455a-9e06-54f462ce0c1c
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
# default_scheduler_exists Class
This class describes an exception thrown when the `Scheduler::SetDefaultSchedulerPolicy` method is called when a default scheduler already exists within the process.  
  
## Syntax  
  
```
class default_scheduler_exists : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[default_scheduler_exists::default_scheduler_exists Constructor](#default_scheduler_exists__default_scheduler_exists_constructor)|Overloaded. Constructs a `default_scheduler_exists` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `default_scheduler_exists`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="default_scheduler_exists__default_scheduler_exists_constructor"></a>  default_scheduler_exists::default_scheduler_exists Constructor  
 Constructs a `default_scheduler_exists` object.  
  
```
explicit _CRTIMP default_scheduler_exists(_In_z_ const char* _Message) throw();

default_scheduler_exists() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [Scheduler::SetDefaultSchedulerPolicy Method](../parallel/scheduler-class.md#scheduler__setdefaultschedulerpolicy_method)

