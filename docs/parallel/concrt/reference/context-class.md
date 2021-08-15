---
description: "Learn more about: Context Class"
title: "Context Class"
ms.date: "11/04/2016"
f1_keywords: ["Context", "CONCRT/concurrency::Context", "CONCRT/concurrency::Context::Block", "CONCRT/concurrency::Context::CurrentContext", "CONCRT/concurrency::Context::GetId", "CONCRT/concurrency::Context::GetScheduleGroupId", "CONCRT/concurrency::Context::GetVirtualProcessorId", "CONCRT/concurrency::Context::Id", "CONCRT/concurrency::Context::IsCurrentTaskCollectionCanceling", "CONCRT/concurrency::Context::IsSynchronouslyBlocked", "CONCRT/concurrency::Context::Oversubscribe", "CONCRT/concurrency::Context::ScheduleGroupId", "CONCRT/concurrency::Context::Unblock", "CONCRT/concurrency::Context::VirtualProcessorId", "CONCRT/concurrency::Context::Yield"]
helpviewer_keywords: ["Context class"]
ms.assetid: c0d553f3-961d-4ecd-9a29-4fa4351673b8
---
# Context Class

Represents an abstraction for an execution context.

## Syntax

```cpp
class Context;
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[~Context Destructor](#dtor)||

### Public Methods

|Name|Description|
|----------|-----------------|
|[Block](#block)|Blocks the current context.|
|[CurrentContext](#currentcontext)|Returns a pointer to the current context.|
|[GetId](#getid)|Returns an identifier for the context that is unique within the scheduler to which the context belongs.|
|[GetScheduleGroupId](#getschedulegroupid)|Returns an identifier for the schedule group that the context is currently working on.|
|[GetVirtualProcessorId](#getvirtualprocessorid)|Returns an identifier for the virtual processor that the context is currently executing on.|
|[Id](#id)|Returns an identifier for the current context that is unique within the scheduler to which the current context belongs.|
|[IsCurrentTaskCollectionCanceling](#iscurrenttaskcollectioncanceling)|Returns an indication of whether the task collection which is currently executing inline on the current context is in the midst of an active cancellation (or will be shortly).|
|[IsSynchronouslyBlocked](#issynchronouslyblocked)|Determines whether or not the context is synchronously blocked. A context is considered to be synchronously blocked if it explicitly performed an action which led to blocking.|
|[Oversubscribe](#oversubscribe)|Injects an additional virtual processor into a scheduler for the duration of a block of code when invoked on a context executing on one of the virtual processors in that scheduler.|
|[ScheduleGroupId](#schedulegroupid)|Returns an identifier for the schedule group that the current context is working on.|
|[Unblock](#unblock)|Unblocks the context and causes it to become runnable.|
|[VirtualProcessorId](#virtualprocessorid)|Returns an identifier for the virtual processor that the current context is executing on.|
|[Yield](#yield)|Yields execution so that another context can execute. If no other context is available to yield to, the scheduler can yield to another operating system thread.|

## Remarks

The Concurrency Runtime scheduler (see [Scheduler](scheduler-class.md)) uses execution contexts to execute the work queued to it by your application. A Win32 thread is an example of an execution context on a Windows operating system.

At any time, the concurrency level of a scheduler is equal to the number of virtual processors granted to it by the Resource Manager. A virtual processor is an abstraction for a processing resource and maps to a hardware thread on the underlying system. Only a single scheduler context can execute on a virtual processor at a given time.

The scheduler is cooperative in nature and an executing context can yield its virtual processor to a different context at any time if it wishes to enter a wait state. When its wait it satisfied, it cannot resume until an available virtual processor from the scheduler begins executing it.

## Inheritance Hierarchy

`Context`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="block"></a> Block

Blocks the current context.

```cpp
static void __cdecl Block();
```

### Remarks

This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.

If the calling context is running on a virtual processor, the virtual processor will find another runnable context to execute or can potentially create a new one.

After the `Block` method has been called or will be called, you must pair it with a call to the [Unblock](#unblock) method from another execution context in order for it to run again. Be aware that there is a critical period between the point where your code publishes its context for another thread to be able to call the `Unblock` method and the point where the actual method call to `Block` is made. During this period, you must not call any method which can in turn block and unblock for its own reasons (for example, acquiring a lock). Calls to the `Block` and `Unblock` method do not track the reason for the blocking and unblocking. Only one object should have ownership of a `Block`- `Unblock` pair.

This method can throw a variety of exceptions, including [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md).

## <a name="dtor"></a> ~Context

```cpp
virtual ~Context();
```

## <a name="currentcontext"></a> CurrentContext

Returns a pointer to the current context.

```cpp
static Context* __cdecl CurrentContext();
```

### Return Value

A pointer to the current context.

### Remarks

This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.

## <a name="getid"></a> GetId

Returns an identifier for the context that is unique within the scheduler to which the context belongs.

```cpp
virtual unsigned int GetId() const = 0;
```

### Return Value

An identifier for the context that is unique within the scheduler to which the context belongs.

## <a name="getschedulegroupid"></a> GetScheduleGroupId

Returns an identifier for the schedule group that the context is currently working on.

```cpp
virtual unsigned int GetScheduleGroupId() const = 0;
```

### Return Value

An identifier for the schedule group the context is currently working on.

### Remarks

The return value from this method is an instantaneous sampling of the schedule group that the context is executing on. If this method is called on a context other than the current context, the value can be stale the moment it is returned and cannot be relied upon. Typically, this method is used for debugging or tracing purposes only.

## <a name="getvirtualprocessorid"></a> GetVirtualProcessorId

Returns an identifier for the virtual processor that the context is currently executing on.

```cpp
virtual unsigned int GetVirtualProcessorId() const = 0;
```

### Return Value

If the context is currently executing on a virtual processor, an identifier for the virtual processor that the context is currently executing on; otherwise, the value `-1`.

### Remarks

The return value from this method is an instantaneous sampling of the virtual processor that the context is executing on. This value can be stale the moment it is returned and cannot be relied upon. Typically, this method is used for debugging or tracing purposes only.

## <a name="id"></a> Id

Returns an identifier for the current context that is unique within the scheduler to which the current context belongs.

```cpp
static unsigned int __cdecl Id();
```

### Return Value

If the current context is attached to a scheduler, an identifier for the current context that is unique within the scheduler to which the current context belongs; otherwise, the value `-1`.

## <a name="iscurrenttaskcollectioncanceling"></a> IsCurrentTaskCollectionCanceling

Returns an indication of whether the task collection which is currently executing inline on the current context is in the midst of an active cancellation (or will be shortly).

```cpp
static bool __cdecl IsCurrentTaskCollectionCanceling();
```

### Return Value

If a scheduler is attached to the calling context and a task group is executing a task inline on that context, an indication of whether that task group is in the midst of an active cancellation (or will be shortly); otherwise, the value **`false`**.

## <a name="issynchronouslyblocked"></a> IsSynchronouslyBlocked

Determines whether or not the context is synchronously blocked. A context is considered to be synchronously blocked if it explicitly performed an action which led to blocking.

```cpp
virtual bool IsSynchronouslyBlocked() const = 0;
```

### Return Value

Whether the context is synchronously blocked.

### Remarks

A context is considered to be synchronously blocked if it explicitly performed an action which led to blocking. On the thread scheduler, this would indicate a direct call to the `Context::Block` method or a synchronization object which was built using the `Context::Block` method.

The return value from this method is an instantaneous sample of whether the context is synchronously blocked. This value may be stale the moment it is returned and can only be used under very specific circumstances.

## <a name="operator_delete"></a> operator delete

A `Context` object is destroyed internally by the runtime. It can not be explicitly deleted.

```cpp
void operator delete(void* _PObject);
```

### Parameters

*_PObject*<br/>
A pointer to the object to be deleted.

## <a name="oversubscribe"></a> Oversubscribe

Injects an additional virtual processor into a scheduler for the duration of a block of code when invoked on a context executing on one of the virtual processors in that scheduler.

```cpp
static void __cdecl Oversubscribe(bool _BeginOversubscription);
```

### Parameters

*_BeginOversubscription*<br/>
If **`true`**, an indication that an extra virtual processor should be added for the duration of the oversubscription. If **`false`**, an indication that the oversubscription should end and the previously added virtual processor should be removed.

## <a name="schedulegroupid"></a> ScheduleGroupId

Returns an identifier for the schedule group that the current context is working on.

```cpp
static unsigned int __cdecl ScheduleGroupId();
```

### Return Value

If the current context is attached to a scheduler and working on a schedule group, an identifier for the scheduler group that the current context is working on; otherwise, the value `-1`.

## <a name="unblock"></a> Unblock

Unblocks the context and causes it to become runnable.

```cpp
virtual void Unblock() = 0;
```

### Remarks

It is perfectly legal for a call to the `Unblock` method to come before a corresponding call to the [Block](#block) method. As long as calls to the `Block` and `Unblock` methods are properly paired, the runtime properly handles the natural race of either ordering. An `Unblock` call coming before a `Block` call simply negates the effect of the `Block` call.

There are several exceptions which can be thrown from this method. If a context attempts to call the `Unblock` method on itself, a [context_self_unblock](context-self-unblock-class.md) exception will be thrown. If calls to `Block` and `Unblock` are not properly paired (for example, two calls to `Unblock` are made for a context which is currently running), a [context_unblock_unbalanced](context-unblock-unbalanced-class.md) exception will be thrown.

Be aware that there is a critical period between the point where your code publishes its context for another thread to be able to call the `Unblock` method and the point where the actual method call to `Block` is made. During this period, you must not call any method which can in turn block and unblock for its own reasons (for example, acquiring a lock). Calls to the `Block` and `Unblock` method do not track the reason for the blocking and unblocking. Only one object should have ownership of a `Block` and `Unblock` pair.

## <a name="virtualprocessorid"></a> VirtualProcessorId

Returns an identifier for the virtual processor that the current context is executing on.

```cpp
static unsigned int __cdecl VirtualProcessorId();
```

### Return Value

If the current context is attached to a scheduler, an identifier for the virtual processor that the current context is executing on; otherwise, the value `-1`.

### Remarks

The return value from this method is an instantaneous sampling of the virtual processor that the current context is executing on. This value can be stale the moment it is returned and cannot be relied upon. Typically, this method is used for debugging or tracing purposes only.

## <a name="yield"></a> Yield

Yields execution so that another context can execute. If no other context is available to yield to, the scheduler can yield to another operating system thread.

```cpp
static void __cdecl Yield();
```

### Remarks

This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.

## <a name="yieldexecution"></a> YieldExecution

Yields execution so that another context can execute. If no other context is available to yield to, the scheduler can yield to another operating system thread.

```cpp
static void __cdecl YieldExecution();
```

### Remarks

This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.

This function is new in Visual Studio 2015 and is identical to the [Yield](#yield) function but does not conflict with the Yield macro in Windows.h.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Scheduler Class](scheduler-class.md)<br/>
[Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
