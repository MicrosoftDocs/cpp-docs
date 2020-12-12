---
description: "Learn more about: Scheduler Class"
title: "Scheduler Class"
ms.date: "11/04/2016"
f1_keywords: ["Scheduler", "CONCRT/concurrency::Scheduler", "CONCRT/concurrency::Scheduler::Scheduler", "CONCRT/concurrency::Scheduler::Attach", "CONCRT/concurrency::Scheduler::Create", "CONCRT/concurrency::Scheduler::CreateScheduleGroup", "CONCRT/concurrency::Scheduler::GetNumberOfVirtualProcessors", "CONCRT/concurrency::Scheduler::GetPolicy", "CONCRT/concurrency::Scheduler::Id", "CONCRT/concurrency::Scheduler::IsAvailableLocation", "CONCRT/concurrency::Scheduler::Reference", "CONCRT/concurrency::Scheduler::RegisterShutdownEvent", "CONCRT/concurrency::Scheduler::Release", "CONCRT/concurrency::Scheduler::ResetDefaultSchedulerPolicy", "CONCRT/concurrency::Scheduler::ScheduleTask", "CONCRT/concurrency::Scheduler::SetDefaultSchedulerPolicy"]
helpviewer_keywords: ["Scheduler class"]
ms.assetid: 34cf7961-048d-4852-8a5c-a32f823e3506
---
# Scheduler Class

Represents an abstraction for a Concurrency Runtime scheduler.

## Syntax

```cpp
class Scheduler;
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[Scheduler](#ctor)|An object of the `Scheduler` class can only created using factory methods, or implicitly.|
|[~Scheduler Destructor](#dtor)|An object of the `Scheduler` class is implicitly destroyed when all external references to it cease to exist.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[Attach](#attach)|Attaches the scheduler to the calling context. After this method returns, the calling context is managed by the scheduler and the scheduler becomes the current scheduler.|
|[Create](#create)|Creates a new scheduler whose behavior is described by the `_Policy` parameter, places an initial reference on the scheduler, and returns a pointer to it.|
|[CreateScheduleGroup](#createschedulegroup)|Overloaded. Creates a new schedule group within the scheduler. The version that takes the parameter `_Placement` causes tasks within the newly created schedule group to be biased towards executing at the location specified by that parameter.|
|[GetNumberOfVirtualProcessors](#getnumberofvirtualprocessors)|Returns the current number of virtual processors for the scheduler.|
|[GetPolicy](#getpolicy)|Returns a copy of the policy that the scheduler was created with.|
|[Id](#id)|Returns a unique identifier for the scheduler.|
|[IsAvailableLocation](#isavailablelocation)|Determines whether a given location is available on the scheduler.|
|[Reference](#reference)|Increments the scheduler reference count.|
|[RegisterShutdownEvent](#registershutdownevent)|Causes the Windows event handle passed in the `_Event` parameter to be signaled when the scheduler shuts down and destroys itself. At the time the event is signaled, all work that had been scheduled to the scheduler is complete. Multiple shutdown events can be registered through this method.|
|[Release](#release)|Decrements the scheduler reference count.|
|[ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy)|Resets the default scheduler policy to the runtime default. The next time a default scheduler is created, it will use the runtime default policy settings.|
|[ScheduleTask](#scheduletask)|Overloaded. Schedules a light-weight task within the scheduler. The light-weight task will be placed in a schedule group determined by the runtime. The version that takes the parameter `_Placement` causes the task to be biased towards executing at the specified location.|
|[SetDefaultSchedulerPolicy](#setdefaultschedulerpolicy)|Allows a user defined policy to be used to create the default scheduler. This method can be called only when no default scheduler exists within the process. After a default policy has been set, it remains in effect until the next valid call to either the `SetDefaultSchedulerPolicy` or the [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) method.|

## Remarks

The Concurrency Runtime scheduler uses execution contexts, which map to the operating system execution contexts, such as a thread, to execute the work queued to it by your application. At any time, the concurrency level of a scheduler is equal to the number of virtual processor granted to it by the Resource Manager. A virtual processor is an abstraction for a processing resource and maps to a hardware thread on the underlying system. Only a single scheduler context can execute on a virtual processor at a given time.

The Concurrency Runtime will create a default scheduler per process to execute parallel work. In addition you can create your own scheduler instances and manipulate it using this class.

## Inheritance Hierarchy

`Scheduler`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="attach"></a> Attach

Attaches the scheduler to the calling context. After this method returns, the calling context is managed by the scheduler and the scheduler becomes the current scheduler.

```cpp
virtual void Attach() = 0;
```

### Remarks

Attaching a scheduler implicitly places a reference on the scheduler.

At some point in the future, you must call the [CurrentScheduler::Detach](currentscheduler-class.md#detach) method in order to allow the scheduler to shut down.

If this method is called from a context that is already attached to a different scheduler, the existing scheduler is remembered as the previous scheduler, and the newly created scheduler becomes the current scheduler. When you call the `CurrentScheduler::Detach` method at a later point, the previous scheduler is restored as the current scheduler.

This method will throw an [improper_scheduler_attach](improper-scheduler-attach-class.md) exception if this scheduler is the current scheduler of the calling context.

## <a name="create"></a> Create

Creates a new scheduler whose behavior is described by the `_Policy` parameter, places an initial reference on the scheduler, and returns a pointer to it.

```cpp
static Scheduler* __cdecl Create(const SchedulerPolicy& _Policy);
```

### Parameters

*_Policy*<br/>
The scheduler policy that describes behavior of the newly created scheduler.

### Return Value

A pointer to a newly created scheduler. This `Scheduler` object has an initial reference count placed on it.

### Remarks

After a scheduler is created with the `Create` method, you must call the `Release` method at some point in the future in order to remove the initial reference count and allow the scheduler to shut down.

A scheduler created with this method is not attached to the calling context. It can be attached to a context using the [Attach](#attach) method.

This method can throw a variety of exceptions, including [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md) and [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md).

## <a name="createschedulegroup"></a> CreateScheduleGroup

Creates a new schedule group within the scheduler. The version that takes the parameter `_Placement` causes tasks within the newly created schedule group to be biased towards executing at the location specified by that parameter.

```cpp
virtual ScheduleGroup* CreateScheduleGroup() = 0;

virtual ScheduleGroup* CreateScheduleGroup(location& _Placement) = 0;
```

### Parameters

*_Placement*<br/>
A reference to a location where the tasks within the schedule group will biased towards executing at.

### Return Value

A pointer to the newly created schedule group. This `ScheduleGroup` object has an initial reference count placed on it.

### Remarks

You must invoke the [Release](schedulegroup-class.md#release) method on a schedule group when you are done scheduling work to it. The scheduler will destroy the schedule group when all work queued to it has completed.

Note that if you explicitly created this scheduler, you must release all references to schedule groups within it, before you release your references on the scheduler.

## <a name="getnumberofvirtualprocessors"></a> GetNumberOfVirtualProcessors

Returns the current number of virtual processors for the scheduler.

```cpp
virtual unsigned int GetNumberOfVirtualProcessors() const = 0;
```

### Return Value

The current number of virtual processors for the scheduler.

## <a name="getpolicy"></a> GetPolicy

Returns a copy of the policy that the scheduler was created with.

```cpp
virtual SchedulerPolicy GetPolicy() const = 0;
```

### Return Value

A copy of the policy that the scheduler was created with.

## <a name="id"></a> Id

Returns a unique identifier for the scheduler.

```cpp
virtual unsigned int Id() const = 0;
```

### Return Value

A unique identifier for the scheduler.

## <a name="isavailablelocation"></a> IsAvailableLocation

Determines whether a given location is available on the scheduler.

```cpp
virtual bool IsAvailableLocation(const location& _Placement) const = 0;
```

### Parameters

*_Placement*<br/>
A reference to the location to query the scheduler about.

### Return Value

An indication of whether or not the location specified by the `_Placement` argument is available on the scheduler.

### Remarks

Note that the return value is an instantaneous sampling of whether the given location is available. In the presence of multiple schedulers, dynamic resource management can add or take away resources from schedulers at any point. Should this happen, the given location can change availability.

## <a name="reference"></a> Reference

Increments the scheduler reference count.

```cpp
virtual unsigned int Reference() = 0 ;
```

### Return Value

The newly incremented reference count.

### Remarks

This is typically used to manage the lifetime of the scheduler for composition. When the reference count of a scheduler falls to zero, the scheduler will shut down and destruct itself after all work on the scheduler has completed.

The method will throw an [improper_scheduler_reference](improper-scheduler-reference-class.md) exception if the reference count prior to calling the `Reference` method was zero and the call is made from a context that is not owned by the scheduler.

## <a name="registershutdownevent"></a> RegisterShutdownEvent

Causes the Windows event handle passed in the `_Event` parameter to be signaled when the scheduler shuts down and destroys itself. At the time the event is signaled, all work that had been scheduled to the scheduler is complete. Multiple shutdown events can be registered through this method.

```cpp
virtual void RegisterShutdownEvent(HANDLE _Event) = 0;
```

### Parameters

*_Event*<br/>
A handle to a Windows event object which will be signaled by the runtime when the scheduler shuts down and destroys itself.

## <a name="release"></a> Release

Decrements the scheduler reference count.

```cpp
virtual unsigned int Release() = 0;
```

### Return Value

The newly decremented reference count.

### Remarks

This is typically used to manage the lifetime of the scheduler for composition. When the reference count of a scheduler falls to zero, the scheduler will shut down and destruct itself after all work on the scheduler has completed.

## <a name="resetdefaultschedulerpolicy"></a> ResetDefaultSchedulerPolicy

Resets the default scheduler policy to the runtime default. The next time a default scheduler is created, it will use the runtime default policy settings.

```cpp
static void __cdecl ResetDefaultSchedulerPolicy();
```

### Remarks

This method can be called while a default scheduler exists within the process. It will not affect the policy of the existing default scheduler. However, if the default scheduler were to shutdown, and a new default were to be created at a later point, the new scheduler would use the runtime default policy settings.

## <a name="ctor"></a> Scheduler

An object of the `Scheduler` class can only created using factory methods, or implicitly.

```cpp
Scheduler();
```

### Remarks

The process' default scheduler is created implicitly when you utilize many of the runtime functions which require a scheduler to be attached to the calling context. Methods within the `CurrentScheduler` class and features of the PPL and agents layers typically perform implicit attachment.

You can also create a scheduler explicitly through either the `CurrentScheduler::Create` method or the `Scheduler::Create` method.

## <a name="dtor"></a> ~Scheduler

An object of the `Scheduler` class is implicitly destroyed when all external references to it cease to exist.

```cpp
virtual ~Scheduler();
```

## <a name="scheduletask"></a> ScheduleTask

Schedules a light-weight task within the scheduler. The light-weight task will be placed in a schedule group determined by the runtime. The version that takes the parameter `_Placement` causes the task to be biased towards executing at the specified location.

```cpp
virtual void ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data) = 0;

virtual void ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data,
    location& _Placement) = 0;
```

### Parameters

*_Proc*<br/>
A pointer to the function to execute to perform the body of the light-weight task.

*_Data*<br/>
A void pointer to the data that will be passed as a parameter to the body of the task.

*_Placement*<br/>
A reference to a location where the light-weight task will be biased towards executing at.

## <a name="setdefaultschedulerpolicy"></a> SetDefaultSchedulerPolicy

Allows a user defined policy to be used to create the default scheduler. This method can be called only when no default scheduler exists within the process. After a default policy has been set, it remains in effect until the next valid call to either the `SetDefaultSchedulerPolicy` or the [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) method.

```cpp
static void __cdecl SetDefaultSchedulerPolicy(const SchedulerPolicy& _Policy);
```

### Parameters

*_Policy*<br/>
The policy to be set as the default scheduler policy.

### Remarks

If the `SetDefaultSchedulerPolicy` method is called when a default scheduler already exists within the process, the runtime will throw a [default_scheduler_exists](default-scheduler-exists-class.md) exception.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Scheduler Class](scheduler-class.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
