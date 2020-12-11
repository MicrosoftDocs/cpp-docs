---
description: "Learn more about: task_group Class"
title: "task_group Class"
ms.date: "07/20/2018"
f1_keywords: ["task_group", "PPL/concurrency::task_group", "PPL/concurrency::task_group::task_group"]
helpviewer_keywords: ["task_group class"]
---
# task_group Class

The `task_group` class represents a collection of parallel work which can be waited on or canceled.

## Syntax

```cpp
class task_group;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[task_group](#ctor)|Overloaded. Constructs a new `task_group` object.|
|[~task_group Destructor](#dtor)|Destroys a `task_group` object. You are expected to call the either the `wait` or `run_and_wait` method on the object prior to the destructor executing, unless the destructor is executing as the result of stack unwinding due to an exception.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[cancel](#cancel)|Makes a best effort attempt to cancel the sub-tree of work rooted at this task group. Every task scheduled on the task group will get canceled transitively if possible.|
|[is_canceling](#is_canceling)|Informs the caller whether or not the task group is currently in the midst of a cancellation. This does not necessarily indicate that the `cancel` method was called on the `task_group` object (although such certainly qualifies this method to return **`true`**). It may be the case that the `task_group` object is executing inline and a task group further up in the work tree was canceled. In cases such as these where the runtime can determine ahead of time that cancellation will flow through this `task_group` object, **`true`** will be returned as well.|
|[run](#run)|Overloaded. Schedules a task on the `task_group` object. If a `task_handle` object is passed as a parameter to `run`, the caller is responsible for managing the lifetime of the `task_handle` object. The version of the method that takes a reference to a function object as a parameter involves heap allocation inside the runtime which may be perform less well than using the version that takes a reference to a `task_handle` object. The version which takes the parameter `_Placement` causes the task to be biased towards executing at the location specified by that parameter.|
|[run_and_wait](#run_and_wait)|Overloaded. Schedules a task to be run inline on the calling context with the assistance of the `task_group` object for full cancellation support. The function then waits until all work on the `task_group` object has either completed or been canceled. If a `task_handle` object is passed as a parameter to `run_and_wait`, the caller is responsible for managing the lifetime of the `task_handle` object.|
|[wait](#wait)|Waits until all work on the `task_group` object has either completed or been canceled.|

## Remarks

Unlike the heavily restricted `structured_task_group` class, the `task_group` class is much more general construct. It does not have any of the restrictions described by [structured_task_group](structured-task-group-class.md). `task_group` objects may safely be used across threads and utilized in free-form ways. The disadvantage of the `task_group` construct is that it may not perform as well as the `structured_task_group` construct for tasks which perform small amounts of work.

For more information, see [Task Parallelism](../task-parallelism-concurrency-runtime.md).

## Inheritance Hierarchy

`task_group`

## Requirements

**Header:** ppl.h

**Namespace:** concurrency

## <a name="cancel"></a> cancel

Makes a best effort attempt to cancel the sub-tree of work rooted at this task group. Every task scheduled on the task group will get canceled transitively if possible.

```cpp
void cancel();
```

### Remarks

For more information, see [Cancellation](../cancellation-in-the-ppl.md).

## <a name="is_canceling"></a> is_canceling

Informs the caller whether or not the task group is currently in the midst of a cancellation. This does not necessarily indicate that the `cancel` method was called on the `task_group` object (although such certainly qualifies this method to return **`true`**). It may be the case that the `task_group` object is executing inline and a task group further up in the work tree was canceled. In cases such as these where the runtime can determine ahead of time that cancellation will flow through this `task_group` object, **`true`** will be returned as well.

```cpp
bool is_canceling();
```

### Return Value

An indication of whether the `task_group` object is in the midst of a cancellation (or is guaranteed to be shortly).

### Remarks

For more information, see [Cancellation](../cancellation-in-the-ppl.md).

## <a name="run"></a> run

Schedules a task on the `task_group` object. If a `task_handle` object is passed as a parameter to `run`, the caller is responsible for managing the lifetime of the `task_handle` object. The version of the method that takes a reference to a function object as a parameter involves heap allocation inside the runtime which may be perform less well than using the version that takes a reference to a `task_handle` object. The version which takes the parameter `_Placement` causes the task to be biased towards executing at the location specified by that parameter.

```cpp
template<
   typename _Function
>
void run(
   const _Function& _Func
);

template<
   typename _Function
>
void run(
   const _Function& _Func,
   location& _Placement
);

template<
   typename _Function
>
void run(
   task_handle<_Function>& _Task_handle
);

template<
   typename _Function
>
void run(
   task_handle<_Function>& _Task_handle,
   location& _Placement
);
```

### Parameters

*_Function*<br/>
The type of the function object that will be invoked to execute the body of the task handle.

*_Func*<br/>
A function which will be called to invoke the body of the task. This may be a lambda expression or other object which supports a version of the function call operator with the signature `void operator()()`.

*_Placement*<br/>
A reference to the location where the task represented by the `_Func` parameter should execute.

*_Task_handle*<br/>
A handle to the work being scheduled. Note that the caller has responsibility for the lifetime of this object. The runtime will continue to expect it to live until either the `wait` or `run_and_wait` method has been called on this `task_group` object.

### Remarks

The runtime schedules the provided work function to run at a later time, which can be after the calling function returns. This method uses a [task_handle](task-handle-class.md) object to hold a copy of the provided work function. Therefore, any state changes that occur in a function object that you pass to this method will not appear in your copy of that function object. In addition, make sure that the lifetime of any objects that you pass by pointer or by reference to the work function remain valid until the work function returns.

If the `task_group` destructs as the result of stack unwinding from an exception, you do not need to guarantee that a call has been made to either the `wait` or `run_and_wait` method. In this case, the destructor will appropriately cancel and wait for the task represented by the `_Task_handle` parameter to complete.

The method throws an [invalid_multiple_scheduling](invalid-multiple-scheduling-class.md) exception if the task handle given by the `_Task_handle` parameter has already been scheduled onto a task group object via the `run` method and there has been no intervening call to either the `wait` or `run_and_wait` method on that task group.

## <a name="run_and_wait"></a> run_and_wait

Schedules a task to be run inline on the calling context with the assistance of the `task_group` object for full cancellation support. The function then waits until all work on the `task_group` object has either completed or been canceled. If a `task_handle` object is passed as a parameter to `run_and_wait`, the caller is responsible for managing the lifetime of the `task_handle` object.

```cpp
template<
   class _Function
>
task_group_status run_and_wait(
   task_handle<_Function>& _Task_handle
);

template<
   class _Function
>
task_group_status run_and_wait(
   const _Function& _Func
);
```

### Parameters

*_Function*<br/>
The type of the function object that will be invoked to execute the body of the task.

*_Task_handle*<br/>
A handle to the task which will be run inline on the calling context. Note that the caller has responsibility for the lifetime of this object. The runtime will continue to expect it to live until the `run_and_wait` method finishes execution.

*_Func*<br/>
A function which will be called to invoke the body of the work. This may be a lambda expression or other object which supports a version of the function call operator with the signature `void operator()()`.

### Return Value

An indication of whether the wait was satisfied or the task group was canceled, due to either an explicit cancel operation or an exception being thrown from one of its tasks. For more information, see [task_group_status](concurrency-namespace-enums.md#task_group_status).

### Remarks

Note that one or more of the tasks scheduled to this `task_group` object may execute inline on the calling context.

If one or more of the tasks scheduled to this `task_group` object throws an exception, the runtime will select one such exception of its choosing and propagate it out of the call to the `run_and_wait` method.

Upon return from the `run_and_wait` method on a `task_group` object, the runtime resets the object to a clean state where it can be reused. This includes the case where the `task_group` object was canceled.

In the non-exceptional path of execution, you have a mandate to call either this method or the `wait` method before the destructor of the `task_group` executes.

## <a name="ctor"></a> task_group

Constructs a new `task_group` object.

```cpp
task_group();

task_group(
   cancellation_token _CancellationToken
);
```

### Parameters

*_CancellationToken*<br/>
A cancellation token to associate with this task group. The task group will be canceled when the token is canceled.

### Remarks

The constructor that takes a cancellation token creates a `task_group` that will be canceled when the source associated with the token is canceled. Providing an explicit cancellation token also isolates this task group from participating in an implicit cancellation from a parent group with a different token or no token.

## <a name="dtor"></a> ~task_group

Destroys a `task_group` object. You are expected to call the either the `wait` or `run_and_wait` method on the object prior to the destructor executing, unless the destructor is executing as the result of stack unwinding due to an exception.

```cpp
~task_group();
```

### Remarks

If the destructor runs as the result of normal execution (for example, not stack unwinding due to an exception) and neither the `wait` nor `run_and_wait` methods have been called, the destructor may throw a [missing_wait](missing-wait-class.md) exception.

## <a name="wait"></a> wait

Waits until all work on the `task_group` object has either completed or been canceled.

```cpp
task_group_status wait();
```

### Return Value

An indication of whether the wait was satisfied or the task group was canceled, due to either an explicit cancel operation or an exception being thrown from one of its tasks. For more information, see [task_group_status](concurrency-namespace-enums.md#task_group_status).

### Remarks

Note that one or more of the tasks scheduled to this `task_group` object may execute inline on the calling context.

If one or more of the tasks scheduled to this `task_group` object throws an exception, the runtime will select one such exception of its choosing and propagate it out of the call to the `wait` method.

Calling `wait` on a `task_group` object resets it to a clean state where it can be reused. This includes the case where the `task_group` object was canceled.

In the non-exceptional path of execution, you have a mandate to call either this method or the `run_and_wait` method before the destructor of the `task_group` executes.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[structured_task_group Class](structured-task-group-class.md)<br/>
[task_handle Class](task-handle-class.md)
