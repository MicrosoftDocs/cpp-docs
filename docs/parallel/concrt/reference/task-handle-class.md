---
description: "Learn more about: task_handle Class"
title: "task_handle Class"
ms.date: "03/27/2019"
f1_keywords: ["task_handle", "PPL/concurrency::task_handle", "PPL/concurrency::task_handle::task_handle"]
helpviewer_keywords: ["task_handle class"]
ms.assetid: 74a34b15-708b-4231-a509-947874292b13
---
# task_handle Class

The `task_handle` class represents an individual parallel work item. It encapsulates the instructions and the data required to execute a piece of work.

## Syntax

```cpp
template<
    typename _Function
>
class task_handle : public ::Concurrency::details::_UnrealizedChore;
```

### Parameters

*_Function*<br/>
The type of the function object that will be invoked to execute the work represented by the `task_handle` object.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[task_handle](#task_handle)|Constructs a new `task_handle` object. The work of the task is performed by invoking the function specified as a parameter to the constructor.|
|[~task_handle Destructor](#dtor)|Destroys the `task_handle` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator()](#task_handle__operator_call)|The function call operator that the runtime invokes to perform the work of the task handle.|

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

## <a name="task_handle__operator_call"></a> operator()

The function call operator that the runtime invokes to perform the work of the task handle.

```cpp
void operator()() const;
```

## <a name="task_handle"></a> task_handle

Constructs a new `task_handle` object. The work of the task is performed by invoking the function specified as a parameter to the constructor.

```cpp
task_handle(const _Function& _Func);
```

### Parameters

*_Func*<br/>
The function that will be invoked to execute the work represented by the `task_handle` object. This may be a lambda functor, a pointer to a function, or any object that supports a version of the function call operator with the signature `void operator()()`.

### Remarks

The runtime creates a copy of the work function that you pass to the constructor. Therefore, any state changes that occur in a function object that you pass to a `task_handle` object will not appear in your copy of that function object.

## <a name="dtor"></a> ~task_handle

Destroys the `task_handle` object.

```cpp
~task_handle();
```

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[task_group Class](task-group-class.md)<br/>
[structured_task_group Class](structured-task-group-class.md)
