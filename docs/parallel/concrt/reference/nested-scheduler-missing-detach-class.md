---
title: "nested_scheduler_missing_detach Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::nested_scheduler_missing_detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nested_scheduler_missing_detach class"
ms.assetid: 65d3f277-6d43-4160-97ef-caf8b26c1641
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
# nested_scheduler_missing_detach Class
This class describes an exception thrown when the Concurrency Runtime detects that you neglected to call the `CurrentScheduler::Detach` method on a context that attached to a second scheduler using the `Attach` method of the `Scheduler` object.  
  
## Syntax  
  
```
class nested_scheduler_missing_detach : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[nested_scheduler_missing_detach::nested_scheduler_missing_detach Constructor](#ctor)|Overloaded. Constructs a `nested_scheduler_missing_detach` object.|  
  
## Remarks  
 This exception is thrown only when you nest one scheduler inside another by calling the `Attach` method of a `Scheduler` object on a context that is already owned by or attached to another scheduler. The Concurrency Runtime throws this exception opportunistically when it can detect the scenario as an aid to locating the problem. Not every instance of neglecting to call the `CurrentScheduler::Detach` method is guaranteed to throw this exception.  
  
## Inheritance Hierarchy  
 `exception`  
  
 `nested_scheduler_missing_detach`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a>  nested_scheduler_missing_detach::nested_scheduler_missing_detach Constructor  
 Constructs a `nested_scheduler_missing_detach` object.  
  
```
explicit _CRTIMP nested_scheduler_missing_detach(_In_z_ const char* _Message) throw();

nested_scheduler_missing_detach() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [Scheduler Class](scheduler-class.md)
