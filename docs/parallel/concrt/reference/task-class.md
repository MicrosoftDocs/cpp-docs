---
title: "task Class (Concurrency Runtime) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppltasks/concurrency::task"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "task class"
ms.assetid: cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a
caps.latest.revision: 12
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
# task Class (Concurrency Runtime)
The Parallel Patterns Library (PPL) `task` class. A `task` object represents work that can be executed asynchronously, and concurrently with other tasks and parallel work produced by parallel algorithms in the Concurrency Runtime. It produces a result of type `_ResultType` on successful completion. Tasks of type `task<void>` produce no result. A task can be waited upon and canceled independently of other tasks. It can also be composed with other tasks using continuations( `then`), and join( `when_all`) and choice( `when_any`) patterns.  
  
## Syntax  
  
```
template <typename T>
class task;

template <>
class task<void>;

template<typename _ReturnType>
class task;
```  
  
#### Parameters  
 `T`  
 `T`  
 `_ReturnType`  
 The result type of this task.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`result_type`|The type of the result an object of this class produces.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[task::task Constructor](#ctor)|Overloaded. Constructs a `task` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[task::get Method](#get)|Overloaded. Returns the result this task produced. If the task is not in a terminal state, a call to `get` will wait for the task to finish. This method does not return a value when called on a task with a `result_type` of `void`.|  
|[task::is_apartment_aware Method](#is_apartment_aware)|Determines whether the task unwraps a Windows Runtime `IAsyncInfo` interface or is descended from such a task.|  
|[task::is_done Method (Concurrency Runtime)](#is_done)|Determines if the task is completed.|  
|[task::scheduler Method (Concurrency Runtime)](#scheduler)|Returns the scheduler for this task|  
|[task::then Method](#then)|Overloaded. Adds a continuation task to this task.|  
|[task::wait Method](#wait)|Waits for this task to reach a terminal state. It is possible for `wait` to execute the task inline, if all of the tasks dependencies are satisfied, and it has not already been picked up for execution by a background worker.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[task::operator!= Operator](#operator_neq)|Overloaded. Determines whether two `task` objects represent different internal tasks.|  
|[task::operator= Operator](#operator_eq)|Overloaded. Replaces the contents of one `task` object with another.|  
|[task::operator== Operator](#operator_eq_eq)|Overloaded. Determines whether two `task` objects represent the same internal task.|  
  
## Remarks  
 For more information, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
## Inheritance Hierarchy  
 `task`  
  
## Requirements  
 **Header:** ppltasks.h  
  
 **Namespace:** concurrency  
  
##  <a name="get"></a>  task::get Method  
 Returns the result this task produced. If the task is not in a terminal state, a call to `get` will wait for the task to finish. This method does not return a value when called on a task with a `result_type` of `void`.  
  
```
_ReturnType get() const;

void get() const;
```  
  
### Return Value  
 The result of the task.  
  
### Remarks  
 If the task is canceled, a call to `get` will throw a [task_canceled](task-canceled-class.md) exception. If the task encountered an different exception or an exception was propagated to it from an antecedent task, a call to `get` will throw that exception.  
  
> [!IMPORTANT]
>  In a [!INCLUDE[win8_appname_long](../../../build/includes/win8_appname_long_md.md)] app, do not call [concurrency::task::wait](#wait) or `get` ( `wait` calls `get`) in code that runs on the STA. Otherwise, the runtime throws [concurrency::invalid_operation](invalid-operation-class.md) because these methods block the current thread and can cause the app to become unresponsive. However, you can call the `get` method to receive the result of the antecedent task in a task-based continuation because the result is immediately available.  
  
##  <a name="is_apartment_aware"></a>  task::is_apartment_aware Method  
 Determines whether the task unwraps a Windows Runtime `IAsyncInfo` interface or is descended from such a task.  
  
```
bool is_apartment_aware() const;
```  
  
### Return Value  
 `true` if the task unwraps an `IAsyncInfo` interface or is descended from such a task, `false` otherwise.  
  
##  <a name="is_done"></a>  task::is_done Method (Concurrency Runtime)  
 Determines if the task is completed.  
  
```
bool is_done() const;
```  
  
### Return Value  
 True if the task has completed, false otherwise.  
  
### Remarks  
 The function returns true if the task is completed or canceled (with or without user exception).  
  
##  <a name="operator_neq"></a>  task::operator!= Operator  
 Determines whether two `task` objects represent different internal tasks.  
  
```
bool operator!= (const task<_ReturnType>& _Rhs) const;

bool operator!= (const task<void>& _Rhs) const;
```  
  
### Parameters  
 `_Rhs`  
  
### Return Value  
 `true` if the objects refer to different underlying tasks, and `false` otherwise.  
  
##  <a name="operator_eq"></a>  task::operator= Operator  
 Replaces the contents of one `task` object with another.  
  
```
task& operator= (const task& _Other);

task& operator= (task&& _Other);
```  
  
### Parameters  
 `_Other`  
 The source `task` object.  
  
### Return Value  
  
### Remarks  
 As `task` behaves like a smart pointer, after a copy assignment, this `task` objects represents the same actual task as `_Other` does.  
  
##  <a name="operator_eq_eq"></a>  task::operator== Operator  
 Determines whether two `task` objects represent the same internal task.  
  
```
bool operator== (const task<_ReturnType>& _Rhs) const;

bool operator== (const task<void>& _Rhs) const;
```  
  
### Parameters  
 `_Rhs`  
  
### Return Value  
 `true` if the objects refer to the same underlying task, and `false` otherwise.  
  
##  <a name="scheduler"></a>  task::scheduler Method (Concurrency Runtime)  
 Returns the scheduler for this task  
  
```
scheduler_ptr scheduler() const;
```  
  
### Return Value  
 A pointer to the scheduler  
  
##  <a name="ctor"></a>  task::task Constructor  
 Constructs a `task` object.  
  
```
task();

template<typename T>
__declspec(
    noinline) explicit task(T _Param);

template<typename T>
__declspec(
    noinline) explicit task(T _Param, const task_options& _TaskOptions);

task(
    const task& _Other);

task(
    task&& _Other);
```  
  
### Parameters  
 `T`  
 The type of the parameter from which the task is to be constructed.  
  
 `_Param`  
 The parameter from which the task is to be constructed. This could be a lambda, a function object, a `task_completion_event<result_type>` object, or a Windows::Foundation::IAsyncInfo if you are using tasks in your Windows Store app. The lambda or function object should be a type equivalent to `std::function<X(void)>`, where X can be a variable of type `result_type`, `task<result_type>`, or a Windows::Foundation::IAsyncInfo in Windows Store apps.  
  
 `_TaskOptions`  
 The task options include cancellation token, scheduler etc  
  
 `_Other`  
 The source `task` object.  
  
### Remarks  
 The default constructor for a `task` is only present in order to allow tasks to be used within containers. A default constructed task cannot be used until you assign a valid task to it. Methods such as `get`, `wait` or `then` will throw an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception when called on a default constructed task.  
  
 A task that is created from a `task_completion_event` will complete (and have its continuations scheduled) when the task completion event is set.  
  
 The version of the constructor that takes a cancellation token creates a task that can be canceled using the `cancellation_token_source` the token was obtained from. Tasks created without a cancellation token are not cancelable.  
  
 Tasks created from a `Windows::Foundation::IAsyncInfo` interface or a lambda that returns an `IAsyncInfo` interface reach their terminal state when the enclosed Windows Runtime asynchronous operation or action completes. Similarly, tasks created from a lamda that returns a `task<result_type>` reach their terminal state when the inner task reaches its terminal state, and not when the lamda returns.  
  
 `task` behaves like a smart pointer and is safe to pass around by value. It can be accessed by multiple threads without the need for locks.  
  
 The constructor overloads that take a Windows::Foundation::IAsyncInfo interface or a lambda returning such an interface, are only available to Windows Store apps.  
  
 For more information, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
##  <a name="then"></a>  task::then Method  
 Adds a continuation task to this task.  
  
```
template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func) const -> typename details::_ContinuationTypeTraits<_Function,
    _ReturnType>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    const task_options& _TaskOptions) const -> typename details::_ContinuationTypeTraits<_Function,
    _ReturnType>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    cancellation_token _CancellationToken,
    task_continuation_context _ContinuationContext) const -> typename details::_ContinuationTypeTraits<_Function,
    _ReturnType>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    const task_options& _TaskOptions = task_options()) const -> typename details::_ContinuationTypeTraits<_Function,
    void>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    cancellation_token _CancellationToken,
    task_continuation_context _ContinuationContext) const -> typename details::_ContinuationTypeTraits<_Function,
    void>::_TaskOfType;
```   
  
### Parameters  
 `_Function`  
 The type of the function object that will be invoked by this task.  
  
 `_Func`  
 The continuation function to execute when this task completes. This continuation function must take as input a variable of either `result_type` or `task<result_type>`, where `result_type` is the type of the result this task produces.  
  
 `_TaskOptions`  
 The task options include cancellation token, scheduler and continuation context. By default the former 3 options are inherited from the antecedent task  
  
 `_CancellationToken`  
 The cancellation token to associate with the continuation task. A continuation task that is created without a cancellation token will inherit the token of its antecedent task.  
  
 `_ContinuationContext`  
 A variable that specifies where the continuation should execute. This variable is only useful when used in a Windows Store style app. For more information, see [task_continuation_context](task-continuation-context-class.md)  
  
### Return Value  
 The newly created continuation task. The result type of the returned task is determined by what `_Func` returns.  
  
### Remarks  
 The overloads of `then` that take a lambda or functor that returns a Windows::Foundation::IAsyncInfo interface, are only available to Windows Store apps.  
  
 For more information on how to use task continuations to compose asynchronous work, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
##  <a name="wait"></a>  task::wait Method  
 Waits for this task to reach a terminal state. It is possible for `wait` to execute the task inline, if all of the tasks dependencies are satisfied, and it has not already been picked up for execution by a background worker.  
  
```
task_status wait() const;
```  
  
### Return Value  
 A `task_status` value which could be either `completed` or `canceled`. If the task encountered an exception during execution, or an exception was propagated to it from an antecedent task, `wait` will throw that exception.  
  
### Remarks  
  
> [!IMPORTANT]
>  In a [!INCLUDE[win8_appname_long](../../../build/includes/win8_appname_long_md.md)] app, do not call `wait` in code that runs on the STA. Otherwise, the runtime throws [concurrency::invalid_operation](invalid-operation-class.md) because this method blocks the current thread and can cause the app to become unresponsive. However, you can call the [concurrency::task::get](#get) method to receive the result of the antecedent task in a task-based continuation.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
