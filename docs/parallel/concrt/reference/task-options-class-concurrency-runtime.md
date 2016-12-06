---
title: "task_options Class (Concurrency Runtime) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppltasks/concurrency::task_options"
dev_langs: 
  - "C++"
ms.assetid: f93d146b-70f7-46ec-8c2f-c33b8bb0af69
caps.latest.revision: 7
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
# task_options Class (Concurrency Runtime)
Represents the allowed options for creating a task  
  
## Syntax  
  
```
class task_options;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[task_options::task_options Constructor (Concurrency Runtime)](#ctor)|Overloaded. Default list of task creation options|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[task_options::get_cancellation_token Method (Concurrency Runtime)](#get_cancellation_token)|Returns the cancellation token|  
|[task_options::get_continuation_context Method (Concurrency Runtime)](#get_continuation_context)|Returns the continuation context|  
|[task_options::get_scheduler Method (Concurrency Runtime)](#get_scheduler)|Returns the scheduler|  
|[task_options::has_cancellation_token Method (Concurrency Runtime)](#has_cancellation_token)|Indicates whether a cancellation token was specified by the user|  
|[task_options::has_scheduler Method (Concurrency Runtime)](#has_scheduler)|Indicates whether a scheduler n was specified by the user|  
|[task_options::set_cancellation_token Method (Concurrency Runtime)](#set_cancellation_token)|Sets the given token in the options|  
|[task_options::set_continuation_context Method (Concurrency Runtime)](#set_continuation_context)|Sets the given continuation context in the options|  
  
## Inheritance Hierarchy  
 `task_options`  
  
## Requirements  
 **Header:** ppltasks.h  
  
 **Namespace:** concurrency  
  
##  <a name="get_cancellation_token"></a>  task_options::get_cancellation_token Method (Concurrency Runtime)  
 Returns the cancellation token  
  
```
cancellation_token get_cancellation_token() const;
```  
  
### Return Value  
  
##  <a name="get_continuation_context"></a>  task_options::get_continuation_context Method (Concurrency Runtime)  
 Returns the continuation context  
  
```
task_continuation_context get_continuation_context() const;
```  
  
### Return Value  
  
##  <a name="get_scheduler"></a>  task_options::get_scheduler Method (Concurrency Runtime)  
 Returns the scheduler  
  
```
scheduler_ptr get_scheduler() const;
```  
  
### Return Value  
  
##  <a name="has_cancellation_token"></a>  task_options::has_cancellation_token Method (Concurrency Runtime)  
 Indicates whether a cancellation token was specified by the user  
  
```
bool has_cancellation_token() const;
```  
  
### Return Value  
  
##  <a name="has_scheduler"></a>  task_options::has_scheduler Method (Concurrency Runtime)  
 Indicates whether a scheduler n was specified by the user  
  
```
bool has_scheduler() const;
```  
  
### Return Value  
  
##  <a name="set_cancellation_token"></a>  task_options::set_cancellation_token Method (Concurrency Runtime)  
 Sets the given token in the options  
  
```
void set_cancellation_token(cancellation_token _Token);
```  
  
### Parameters  
 `_Token`  
  
##  <a name="set_continuation_context"></a>  task_options::set_continuation_context Method (Concurrency Runtime)  
 Sets the given continuation context in the options  
  
```
void set_continuation_context(task_continuation_context _ContinuationContext);
```  
  
### Parameters  
 `_ContinuationContext`  
  
##  <a name="ctor"></a>  task_options::task_options Constructor (Concurrency Runtime)  
 Default list of task creation options  
  
```
task_options();

task_options(
    cancellation_token _Token);

task_options(
    task_continuation_context _ContinuationContext);

task_options(
    cancellation_token _Token,
    task_continuation_context _ContinuationContext);

template<typename _SchedType>
task_options(
    std::shared_ptr<_SchedType> _Scheduler);

task_options(
    scheduler_interface& _Scheduler);

task_options(
    scheduler_ptr _Scheduler);

task_options(
    const task_options& _TaskOptions);
```  
  
### Parameters  
 `_SchedType`  
 `_Token`  
 `_ContinuationContext`  
 `_Scheduler`  
 `_TaskOptions`  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
