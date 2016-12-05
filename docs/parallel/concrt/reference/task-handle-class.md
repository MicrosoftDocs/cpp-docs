---
title: "task_handle Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::task_handle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "task_handle class"
ms.assetid: 74a34b15-708b-4231-a509-947874292b13
caps.latest.revision: 23
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
# task_handle Class
The `task_handle` class represents an individual parallel work item. It encapsulates the instructions and the data required to execute a piece of work.  
  
## Syntax  
  
```  
template<
    typename _Function  
>  
class task_handle : public ::Concurrency::details::_UnrealizedChore;  
```  
  
#### Parameters  
 `_Function`  
 The type of the function object that will be invoked to execute the work represented by the `task_handle` object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[task_handle::task_handle Constructor](#ctor)|Constructs a new `task_handle` object. The work of the task is performed by invoking the function specified as a parameter to the constructor.|  
|[task_handle::~task_handle Destructor](#dtor)|Destroys the `task_handle` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[task_handle::operator() Operator](#task_handle__operator_call)|The function call operator that the runtime invokes to perform the work of the task handle.|  
  
## Remarks  
 `task_handle` objects can be used in conjunction with a `structured_task_group` or a more general `task_group` object, to decompose work into parallel tasks. For more information, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 Note that the creator of a `task_handle` object is responsible for maintaining the lifetime of the created `task_handle` object until it is no longer required by the Concurrency Runtime. Typically, this means that the `task_handle` object must not destruct until either the `wait` or `run_and_wait` method of the `task_group` or `structured_task_group` to which it is queued has been called.  
  
 `task_handle` objects are typically used in conjunction with C++ lambdas. Because you do not know the true type of the lambda, the [make_task](concurrency-namespace-functions.md#make_task) function is typically used to create a `task_handle` object.  
  
 The runtime creates a copy of the work function that you pass to a `task_handle` object. Therefore, any state changes that occur in a function object that you pass to a `task_handle` object will not appear in your copy of that function object.  
  
## Inheritance Hierarchy  
 `task_handle`  
  
## Requirements  
 **Header:** ppl.h  
  
 **Namespace:** concurrency  
  
##  <a name="task_handle__operator_call"></a>  task_handle::operator() Operator  
 The function call operator that the runtime invokes to perform the work of the task handle.  
  
```  
void operator()() const;

 
```  
  
##  <a name="task_handle__ctor"></a>  task_handle::task_handle Constructor  
 Constructs a new `task_handle` object. The work of the task is performed by invoking the function specified as a parameter to the constructor.  
  
```  
task_handle(const _Function& _Func);
```  
  
### Parameters  
 `_Func`  
 The function that will be invoked to execute the work represented by the `task_handle` object. This may be a lambda functor, a pointer to a function, or any object that supports a version of the function call operator with the signature `void operator()()`.  
  
### Remarks  
 The runtime creates a copy of the work function that you pass to the constructor. Therefore, any state changes that occur in a function object that you pass to a `task_handle` object will not appear in your copy of that function object.  
  
##  <a name="dtor"></a>  task_handle::~task_handle Destructor  
 Destroys the `task_handle` object.  
  
```  
~task_handle();
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [task_group Class](task-group-class.md)   
 [structured_task_group Class](structured-task-group-class.md)
