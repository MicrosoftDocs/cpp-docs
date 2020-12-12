---
description: "Learn more about: structured_task_group Class"
title: "structured_task_group Class"
ms.date: "11/04/2016"
f1_keywords: ["structured_task_group", "PPL/concurrency::structured_task_group", "PPL/concurrency::structured_task_group::structured_task_group", "PPL/concurrency::structured_task_group::cancel", "PPL/concurrency::structured_task_group::is_canceling", "PPL/concurrency::structured_task_group::run", "PPL/concurrency::structured_task_group::run_and_wait", "PPL/concurrency::structured_task_group::wait"]
helpviewer_keywords: ["structured_task_group class"]
ms.assetid: 742afa8c-c7b6-482c-b0ba-04c809927b22
---
# structured_task_group Class

The `structured_task_group` class represents a highly structured collection of parallel work. You can queue individual parallel tasks to a `structured_task_group` using `task_handle` objects, and wait for them to complete, or cancel the task group before they have finished executing, which will abort any tasks that have not begun execution.

## Syntax

```cpp
class structured_task_group;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[structured_task_group](#ctor)|Overloaded. Constructs a new `structured_task_group` object.|
|[~structured_task_group Destructor](#dtor)|Destroys a `structured_task_group` object. You are expected to call either the `wait` or `run_and_wait` method on the object prior to the destructor executing, unless the destructor is executing as a result of stack unwinding due to an exception.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[cancel](#cancel)|Makes a best effort attempt to cancel the sub-tree of work rooted at this task group. Every task scheduled on the task group will get canceled transitively if possible.|
|[is_canceling](#is_canceling)|Informs the caller whether or not the task group is currently in the midst of a cancellation. This does not necessarily indicate that the `cancel` method was called on the `structured_task_group` object (although such certainly qualifies this method to return **`true`**). It may be the case that the `structured_task_group` object is executing inline and a task group further up in the work tree was canceled. In cases such as these where the runtime can determine ahead of time that cancellation will flow through this `structured_task_group` object, **`true`** will be returned as well.|
|[run](#run)|Overloaded. Schedules a task on the `structured_task_group` object. The caller manages the lifetime of the `task_handle` object passed in the `_Task_handle` parameter. The version that takes the parameter `_Placement` causes the task to be biased towards executing at the location specified by that parameter.|
|[run_and_wait](#run_and_wait)|Overloaded. Schedules a task to be run inline on the calling context with the assistance of the `structured_task_group` object for full cancellation support. If a `task_handle` object is passed as a parameter to `run_and_wait`, the caller is responsible for managing the lifetime of the `task_handle` object. The function then waits until all work on the `structured_task_group` object has either completed or been canceled.|
|[wait](#wait)|Waits until all work on the `structured_task_group` has completed or is canceled.|

## Remarks

There are a number of severe restrictions placed on usage of a `structured_task_group` object in order to gain performance:

- A single `structured_task_group` object cannot be used by multiple threads. All operations on a `structured_task_group` object must be performed by the thread that created the object. The two exceptions to this rule are the member functions `cancel` and `is_canceling`. The object may not be in the capture list of a lambda expression and be used within a task, unless the task is using one of the cancellation operations.

- All tasks scheduled to a `structured_task_group` object are scheduled through the use of `task_handle` objects which you must explicitly manage the lifetime of.

- Multiple groups may only be used in absolutely nested order. If two `structured_task_group` objects are declared, the second one being declared (the inner one) must destruct before any method except `cancel` or `is_canceling` is called on the first one (the outer one). This condition holds true in both the case of simply declaring multiple `structured_task_group` objects within the same or functionally nested scopes as well as the case of a task that was queued to the `structured_task_group` via the `run` or `run_and_wait` methods.

- Unlike the general `task_group` class, all states in the `structured_task_group` class are final. After you have queued tasks to the group and waited for them to complete, you may not use the same group again.

For more information, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

## Inheritance Hierarchy

`structured_task_group`

## Requirements

**Header:** ppl.h

**Namespace:** concurrency

## <a name="cancel"></a> cancel

Makes a best effort attempt to cancel the sub-tree of work rooted at this task group. Every task scheduled on the task group will get canceled transitively if possible.

```cpp
void cancel();
```

### Remarks

For more information, see [Cancellation](../../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).

## <a name="is_canceling"></a> is_canceling

Informs the caller whether or not the task group is currently in the midst of a cancellation. This does not necessarily indicate that the `cancel` method was called on the `structured_task_group` object (although such certainly qualifies this method to return **`true`**). It may be the case that the `structured_task_group` object is executing inline and a task group further up in the work tree was canceled. In cases such as these where the runtime can determine ahead of time that cancellation will flow through this `structured_task_group` object, **`true`** will be returned as well.

```cpp
bool is_canceling();
```

### Return Value

An indication of whether the `structured_task_group` object is in the midst of a cancellation (or is guaranteed to be shortly).

### Remarks

For more information, see [Cancellation](../../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).

## <a name="run"></a> run

Schedules a task on the `structured_task_group` object. The caller manages the lifetime of the `task_handle` object passed in the `_Task_handle` parameter. The version that takes the parameter `_Placement` causes the task to be biased towards executing at the location specified by that parameter.

```cpp
template<class _Function>
void run(
    task_handle<_Function>& _Task_handle);

template<class _Function>
void run(
    task_handle<_Function>& _Task_handle,
    location& _Placement);
```

### Parameters

*_Function*<br/>
The type of the function object that will be invoked to execute the body of the task handle.

*_Task_handle*<br/>
A handle to the work being scheduled. Note that the caller has responsibility for the lifetime of this object. The runtime will continue to expect it to live until either the `wait` or `run_and_wait` method has been called on this `structured_task_group` object.

*_Placement*<br/>
A reference to the location where the task represented by the `_Task_handle` parameter should execute.

### Remarks

The runtime creates a copy of the work function that you pass to this method. Any state changes that occur in a function object that you pass to this method will not appear in your copy of that function object.

If the `structured_task_group` destructs as the result of stack unwinding from an exception, you do not need to guarantee that a call has been made to either the `wait` or `run_and_wait` method. In this case, the destructor will appropriately cancel and wait for the task represented by the `_Task_handle` parameter to complete.

Throws an [invalid_multiple_scheduling](invalid-multiple-scheduling-class.md) exception if the task handle given by the `_Task_handle` parameter has already been scheduled onto a task group object via the `run` method and there has been no intervening call to either the `wait` or `run_and_wait` method on that task group.

## <a name="run_and_wait"></a> run_and_wait

Schedules a task to be run inline on the calling context with the assistance of the `structured_task_group` object for full cancellation support. If a `task_handle` object is passed as a parameter to `run_and_wait`, the caller is responsible for managing the lifetime of the `task_handle` object. The function then waits until all work on the `structured_task_group` object has either completed or been canceled.

```cpp
template<class _Function>
task_group_status run_and_wait(task_handle<_Function>& _Task_handle);

template<class _Function>
task_group_status run_and_wait(const _Function& _Func);
```

### Parameters

*_Function*<br/>
The type of the function object that will be invoked to execute the task.

*_Task_handle*<br/>
A handle to the task which will be run inline on the calling context. Note that the caller has responsibility for the lifetime of this object. The runtime will continue to expect it to live until the `run_and_wait` method finishes execution.

*_Func*<br/>
A function which will be called to invoke the body of the work. This may be a lambda or other object which supports a version of the function call operator with the signature `void operator()()`.

### Return Value

An indication of whether the wait was satisfied or the task group was canceled, due to either an explicit cancel operation or an exception being thrown from one of its tasks. For more information, see [task_group_status](concurrency-namespace-enums.md)

### Remarks

Note that one or more of the tasks scheduled to this `structured_task_group` object may execute inline on the calling context.

If one or more of the tasks scheduled to this `structured_task_group` object throws an exception, the runtime will select one such exception of its choosing and propagate it out of the call to the `run_and_wait` method.

After this function returns, the `structured_task_group` object is considered in a final state and should not be used. Note that utilization after the `run_and_wait` method returns will result in undefined behavior.

In the non-exceptional path of execution, you have a mandate to call either this method or the `wait` method before the destructor of the `structured_task_group` executes.

## <a name="ctor"></a> structured_task_group

Constructs a new `structured_task_group` object.

```cpp
structured_task_group();

structured_task_group(cancellation_token _CancellationToken);
```

### Parameters

*_CancellationToken*<br/>
A cancellation token to associate with this structured task group. The structured task group will be canceled when the token is canceled.

### Remarks

The constructor that takes a cancellation token creates a `structured_task_group` that will be canceled when the source associated with the token is canceled. Providing an explicit cancellation token also isolates this structured task group from participating in an implicit cancellation from a parent group with a different token or no token.

## <a name="dtor"></a> ~structured_task_group

Destroys a `structured_task_group` object. You are expected to call either the `wait` or `run_and_wait` method on the object prior to the destructor executing, unless the destructor is executing as a result of stack unwinding due to an exception.

```cpp
~structured_task_group();
```

### Remarks

If the destructor runs as the result of normal execution (for example, not stack unwinding due to an exception) and neither the `wait` nor `run_and_wait` methods have been called, the destructor may throw a [missing_wait](missing-wait-class.md) exception.

## <a name="wait"></a> wait

Waits until all work on the `structured_task_group` has completed or is canceled.

```cpp
task_group_status wait();
```

### Return Value

An indication of whether the wait was satisfied or the task group was canceled, due to either an explicit cancel operation or an exception being thrown from one of its tasks. For more information, see [task_group_status](concurrency-namespace-enums.md)

### Remarks

Note that one or more of the tasks scheduled to this `structured_task_group` object may execute inline on the calling context.

If one or more of the tasks scheduled to this `structured_task_group` object throws an exception, the runtime will select one such exception of its choosing and propagate it out of the call to the `wait` method.

After this function returns, the `structured_task_group` object is considered in a final state and should not be used. Note that utilization after the `wait` method returns will result in undefined behavior.

In the non-exceptional path of execution, you have a mandate to call either this method or the `run_and_wait` method before the destructor of the `structured_task_group` executes.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[task_group Class](task-group-class.md)<br/>
[task_handle Class](task-handle-class.md)
