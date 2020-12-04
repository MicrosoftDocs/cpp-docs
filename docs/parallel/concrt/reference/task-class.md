---
description: "Learn more about: task Class (Concurrency Runtime)"
title: "task Class (Concurrency Runtime)"
ms.date: "07/30/2019"
f1_keywords: ["task", "PPLTASKS/concurrency::task", "PPLTASKS/concurrency::task::task", "PPLTASKS/concurrency::task::get", "PPLTASKS/concurrency::task::is_apartment_aware", "PPLTASKS/concurrency::task::is_done", "PPLTASKS/concurrency::task::scheduler", "PPLTASKS/concurrency::task::then", "PPLTASKS/concurrency::task::wait"]
helpviewer_keywords: ["task class"]
ms.assetid: cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a
---
# task Class (Concurrency Runtime)

The Parallel Patterns Library (PPL) `task` class. A `task` object represents work that can be executed asynchronously and concurrently with other tasks and parallel work produced by parallel algorithms in the Concurrency Runtime. It produces a result of type `_ResultType` on successful completion. Tasks of type `task<void>` produce no result. A task can be waited upon and canceled independently of other tasks. It can also be composed with other tasks using continuations( `then`), and join( `when_all`) and choice( `when_any`) patterns. When a task object is assigned to a new variable, the behavior is that of `std::shared_ptr`; in other words, both objects represent the same underlying task.

## Syntax

```cpp
template <>
class task<void>;

template<typename _ResultType>
class task;
```

### Parameters

*_ResultType*<br/>
The type of the result that the task produces.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`result_type`|The type of the result an object of this class produces.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[task](#ctor)|Overloaded. Constructs a `task` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[get](#get)|Overloaded. Returns the result this task produced. If the task is not in a terminal state, a call to `get` will wait for the task to finish. This method does not return a value when called on a task with a `result_type` of **`void`**.|
|[is_apartment_aware](#is_apartment_aware)|Determines whether the task unwraps a Windows Runtime `IAsyncInfo` interface or is descended from such a task.|
|[is_done](#is_done)|Determines if the task is completed.|
|[scheduler](#scheduler)|Returns the scheduler for this task|
|[then](#then)|Overloaded. Adds a continuation task to this task.|
|[wait](#wait)|Waits for this task to reach a terminal state. It is possible for `wait` to execute the task inline, if all of the tasks dependencies are satisfied, and it has not already been picked up for execution by a background worker.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator!=](#operator_neq)|Overloaded. Determines whether two `task` objects represent different internal tasks.|
|[operator=](#operator_eq)|Overloaded. Replaces the contents of one `task` object with another.|
|[operator==](#operator_eq_eq)|Overloaded. Determines whether two `task` objects represent the same internal task.|

## Remarks

For more information, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

## Inheritance Hierarchy

`task`

## Requirements

**Header:** ppltasks.h

**Namespace:** concurrency

## <a name="get"></a> get

Returns the result this task produced. If the task is not in a terminal state, a call to `get` will wait for the task to finish. This method does not return a value when called on a task with a `result_type` of **`void`**.

```cpp
_ResultType get() const;

void get() const;
```

### Return Value

The result of the task.

### Remarks

If the task is canceled, a call to `get` will throw a [task_canceled](task-canceled-class.md) exception. If the task encountered an different exception or an exception was propagated to it from an antecedent task, a call to `get` will throw that exception.

> [!IMPORTANT]
> In a Universal Windows Platform (UWP) app, do not call [concurrency::task::wait](#wait) or `get` ( `wait` calls `get`) in code that runs on the user-interface thread. Otherwise, the runtime throws [concurrency::invalid_operation](invalid-operation-class.md) because these methods block the current thread and can cause the app to become unresponsive. However, you can call the `get` method to receive the result of the antecedent task in a task-based continuation because the result is immediately available.

## <a name="is_apartment_aware"></a> is_apartment_aware

Determines whether the task unwraps a Windows Runtime `IAsyncInfo` interface or is descended from such a task.

```cpp
bool is_apartment_aware() const;
```

### Return Value

**`true`** if the task unwraps an `IAsyncInfo` interface or is descended from such a task, **`false`** otherwise.

## <a name="is_done"></a> task::is_done Method (Concurrency Runtime)

Determines if the task is completed.

```cpp
bool is_done() const;
```

### Return Value

True if the task has completed, false otherwise.

### Remarks

The function returns true if the task is completed or canceled (with or without user exception).

## <a name="operator_neq"></a> operator!=

Determines whether two `task` objects represent different internal tasks.

```cpp
bool operator!= (const task<_ResultType>& _Rhs) const;

bool operator!= (const task<void>& _Rhs) const;
```

### Parameters

*_Rhs*<br/>
The task to compare.

### Return Value

**`true`** if the objects refer to different underlying tasks, and **`false`** otherwise.

## <a name="operator_eq"></a> operator=

Replaces the contents of one `task` object with another.

```cpp
task& operator= (const task& _Other);

task& operator= (task&& _Other);
```

### Parameters

*_Other*<br/>
The source `task` object.

### Return Value

### Remarks

As `task` behaves like a smart pointer, after a copy assignment, this `task` objects represents the same actual task as `_Other` does.

## <a name="operator_eq_eq"></a> operator==

Determines whether two `task` objects represent the same internal task.

```cpp
bool operator== (const task<_ResultType>& _Rhs) const;

bool operator== (const task<void>& _Rhs) const;
```

### Parameters

*_Rhs*<br/>
The task to compare.

### Return Value

**`true`** if the objects refer to the same underlying task, and **`false`** otherwise.

## <a name="scheduler"></a> task::scheduler Method (Concurrency Runtime)

Returns the scheduler for this task

```cpp
scheduler_ptr scheduler() const;
```

### Return Value

A pointer to the scheduler

## <a name="ctor"></a> task

Constructs a `task` object.

```cpp
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

*T*<br/>
The type of the parameter from which the task is to be constructed.

*_Param*<br/>
The parameter from which the task is to be constructed. This could be a lambda, a function object, a `task_completion_event<result_type>` object, or a Windows::Foundation::IAsyncInfo if you are using tasks in your Windows Runtime app. The lambda or function object should be a type equivalent to `std::function<X(void)>`, where X can be a variable of type `result_type`, `task<result_type>`, or a Windows::Foundation::IAsyncInfo in Windows Runtime apps.

*_TaskOptions*<br/>
The task options include cancellation token, scheduler etc

*_Other*<br/>
The source `task` object.

### Remarks

The default constructor for a `task` is only present in order to allow tasks to be used within containers. A default constructed task cannot be used until you assign a valid task to it. Methods such as `get`, `wait` or `then` will throw an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception when called on a default constructed task.

A task that is created from a `task_completion_event` will complete (and have its continuations scheduled) when the task completion event is set.

The version of the constructor that takes a cancellation token creates a task that can be canceled using the `cancellation_token_source` the token was obtained from. Tasks created without a cancellation token are not cancelable.

Tasks created from a `Windows::Foundation::IAsyncInfo` interface or a lambda that returns an `IAsyncInfo` interface reach their terminal state when the enclosed Windows Runtime asynchronous operation or action completes. Similarly, tasks created from a lambda that returns a `task<result_type>` reach their terminal state when the inner task reaches its terminal state, and not when the lambda returns.

`task` behaves like a smart pointer and is safe to pass around by value. It can be accessed by multiple threads without the need for locks.

The constructor overloads that take a Windows::Foundation::IAsyncInfo interface or a lambda returning such an interface, are only available to Windows Runtime apps.

For more information, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

## <a name="then"></a> then

Adds a continuation task to this task.

```cpp
template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func) const -> typename details::_ContinuationTypeTraits<_Function,
    _ResultType>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    const task_options& _TaskOptions) const -> typename details::_ContinuationTypeTraits<_Function,
    _ResultType>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    cancellation_token _CancellationToken,
    task_continuation_context _ContinuationContext) const -> typename details::_ContinuationTypeTraits<_Function,
    _ResultType>::_TaskOfType;

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

*_Function*<br/>
The type of the function object that will be invoked by this task.

*_Func*<br/>
The continuation function to execute when this task completes. This continuation function must take as input a variable of either `result_type` or `task<result_type>`, where `result_type` is the type of the result this task produces.

*_TaskOptions*<br/>
The task options include cancellation token, scheduler and continuation context. By default the former 3 options are inherited from the antecedent task

*_CancellationToken*<br/>
The cancellation token to associate with the continuation task. A continuation task that is created without a cancellation token will inherit the token of its antecedent task.

*_ContinuationContext*<br/>
A variable that specifies where the continuation should execute. This variable is only useful when used in a UWP app. For more information, see [task_continuation_context](task-continuation-context-class.md)

### Return Value

The newly created continuation task. The result type of the returned task is determined by what `_Func` returns.

### Remarks

The overloads of `then` that take a lambda or functor that returns a Windows::Foundation::IAsyncInfo interface, are only available to Windows Runtime apps.

For more information on how to use task continuations to compose asynchronous work, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

## <a name="wait"></a> wait

Waits for this task to reach a terminal state. It is possible for `wait` to execute the task inline, if all of the tasks dependencies are satisfied, and it has not already been picked up for execution by a background worker.

```cpp
task_status wait() const;
```

### Return Value

A `task_status` value which could be either `completed` or `canceled`. If the task encountered an exception during execution, or an exception was propagated to it from an antecedent task, `wait` will throw that exception.

### Remarks

> [!IMPORTANT]
> In a Universal Windows Platform (UWP) app, do not call `wait` in code that runs on the user-interface thread. Otherwise, the runtime throws [concurrency::invalid_operation](invalid-operation-class.md) because this method blocks the current thread and can cause the app to become unresponsive. However, you can call the [concurrency::task::get](#get) method to receive the result of the antecedent task in a task-based continuation.

## See also

[concurrency Namespace](concurrency-namespace.md)
