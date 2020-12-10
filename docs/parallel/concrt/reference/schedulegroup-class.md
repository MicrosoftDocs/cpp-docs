---
description: "Learn more about: ScheduleGroup Class"
title: "ScheduleGroup Class"
ms.date: "11/04/2016"
f1_keywords: ["ScheduleGroup", "CONCRT/concurrency::ScheduleGroup", "CONCRT/concurrency::ScheduleGroup::Id", "CONCRT/concurrency::ScheduleGroup::Reference", "CONCRT/concurrency::ScheduleGroup::Release", "CONCRT/concurrency::ScheduleGroup::ScheduleTask"]
helpviewer_keywords: ["ScheduleGroup class"]
ms.assetid: 86d380ff-f2e8-411c-b1a8-22bd3079824a
---
# ScheduleGroup Class

Represents an abstraction for a schedule group. Schedule groups organize a set of related work that benefits from being scheduled close together either temporally, by executing another task in the same group before moving to another group, or spatially, by executing multiple items within the same group on the same NUMA node or physical socket.

## Syntax

```cpp
class ScheduleGroup;
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[~ScheduleGroup Destructor](#dtor)||

### Public Methods

|Name|Description|
|----------|-----------------|
|[Id](#id)|Returns an identifier for the schedule group that is unique within the scheduler to which the group belongs.|
|[Reference](#reference)|Increments the schedule group reference count.|
|[Release](#release)|Decrements the scheduler group reference count.|
|[ScheduleTask](#scheduletask)|Schedules a light-weight task within the schedule group.|

## Inheritance Hierarchy

`ScheduleGroup`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="id"></a> Id

Returns an identifier for the schedule group that is unique within the scheduler to which the group belongs.

```cpp
virtual unsigned int Id() const = 0;
```

### Return Value

An identifier for the schedule group that is unique within the scheduler to which the group belongs.

## <a name="operator_delete"></a> operator delete

A `ScheduleGroup` object is destroyed internally by the runtime when all external references to it are released. It cannot be explicitly deleted.

```cpp
void operator delete(
    void* _PObject);

void operator delete(
    void* _PObject,
    int,
const char *,
    int);
```

### Parameters

*_PObject*<br/>
A pointer to the object to be deleted.

## <a name="reference"></a> Reference

Increments the schedule group reference count.

```cpp
virtual unsigned int Reference() = 0;
```

### Return Value

The newly incremented reference count.

### Remarks

This is typically used to manage the lifetime of the schedule group for composition. When the reference count of a schedule group falls to zero, the schedule group is deleted by the runtime. A schedule group created using either the [CurrentScheduler::CreateScheduleGroup](currentscheduler-class.md#createschedulegroup) method, or the [Scheduler::CreateScheduleGroup](scheduler-class.md#createschedulegroup) method starts out with a reference count of one.

## <a name="release"></a> Release

Decrements the scheduler group reference count.

```cpp
virtual unsigned int Release() = 0;
```

### Return Value

The newly decremented reference count.

### Remarks

This is typically used to manage the lifetime of the schedule group for composition. When the reference count of a schedule group falls to zero, the schedule group is deleted by the runtime. After you have called the `Release` method the specific number of times to remove the creation reference count and any additional references placed using the `Reference` method, you cannot utilize the schedule group further. Doing so will result in undefined behavior.

A schedule group is associated with a particular scheduler instance. You must ensure that all references to the schedule group are released before all references to the scheduler are released, because the latter could result in the scheduler being destroyed. Doing otherwise results in undefined behavior.

## <a name="dtor"></a> ~ScheduleGroup

```cpp
virtual ~ScheduleGroup();
```

## <a name="scheduletask"></a> ScheduleTask

Schedules a light-weight task within the schedule group.

```cpp
virtual void ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data) = 0;
```

### Parameters

*_Proc*<br/>
A pointer to the function to execute to perform the body of the light-weight task.

*_Data*<br/>
A void pointer to the data that will be passed as a parameter to the body of the task.

### Remarks

Calling the `ScheduleTask` method implicitly places a reference count on the schedule group which is removed by the runtime at an appropriate time after the task executes.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[CurrentScheduler Class](currentscheduler-class.md)<br/>
[Scheduler Class](scheduler-class.md)<br/>
[Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
