---
description: "Learn more about: IUMSThreadProxy Structure"
title: "IUMSThreadProxy Structure"
ms.date: "11/04/2016"
f1_keywords: ["IUMSThreadProxy", "CONCRTRM/concurrency::IUMSThreadProxy", "CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::EnterCriticalRegion", "CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::EnterHyperCriticalRegion", "CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::ExitCriticalRegion", "CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::ExitHyperCriticalRegion", "CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::GetCriticalRegionType"]
helpviewer_keywords: ["IUMSThreadProxy structure"]
ms.assetid: 61c69b7e-5c37-4048-bcb4-e75c536afd86
---
# IUMSThreadProxy Structure

An abstraction for a thread of execution. If you want your scheduler to be granted user-mode schedulable (UMS) threads, set the value for the scheduler policy element `SchedulerKind` to `UmsThreadDefault`, and implement the `IUMSScheduler` interface. UMS threads are only supported on 64-bit operating systems with version Windows 7 and higher.

## Syntax

```cpp
struct IUMSThreadProxy : public IThreadProxy;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IUMSThreadProxy::EnterCriticalRegion](#entercriticalregion)|Called in order to enter a critical region. When inside a critical region, the scheduler will not observe asynchronous blocking operations that happen during the region. This means that the scheduler will not be reentered for page faults, thread suspensions, kernel asynchronous procedure calls (APCs), and so forth, for a UMS thread.|
|[IUMSThreadProxy::EnterHyperCriticalRegion](#enterhypercriticalregion)|Called in order to enter a hyper-critical region. When inside a hyper-critical region, the scheduler will not observe any blocking operations that happen during the region. This means the scheduler will not be reentered for blocking function calls, lock acquisition attempts which block, page faults, thread suspensions, kernel asynchronous procedure calls (APCs), and so forth, for a UMS thread.|
|[IUMSThreadProxy::ExitCriticalRegion](#exitcriticalregion)|Called in order to exit a critical region.|
|[IUMSThreadProxy::ExitHyperCriticalRegion](#exithypercriticalregion)|Called in order to exit a hyper-critical region.|
|[IUMSThreadProxy::GetCriticalRegionType](#getcriticalregiontype)|Returns what kind of critical region the thread proxy is within. Because hyper-critical regions are a superset of critical regions, if code has entered a critical region and then a hyper-critical region, `InsideHyperCriticalRegion` will be returned.|

## Inheritance Hierarchy

[IThreadProxy](ithreadproxy-structure.md)

`IUMSThreadProxy`

## Requirements

**Header:** concrtrm.h

**Namespace:** concurrency

## <a name="entercriticalregion"></a> IUMSThreadProxy::EnterCriticalRegion Method

Called in order to enter a critical region. When inside a critical region, the scheduler will not observe asynchronous blocking operations that happen during the region. This means that the scheduler will not be reentered for page faults, thread suspensions, kernel asynchronous procedure calls (APCs), and so forth, for a UMS thread.

```cpp
virtual int EnterCriticalRegion() = 0;
```

### Return Value

The new depth of critical region. Critical regions are reentrant.

## <a name="enterhypercriticalregion"></a> IUMSThreadProxy::EnterHyperCriticalRegion Method

Called in order to enter a hyper-critical region. When inside a hyper-critical region, the scheduler will not observe any blocking operations that happen during the region. This means the scheduler will not be reentered for blocking function calls, lock acquisition attempts which block, page faults, thread suspensions, kernel asynchronous procedure calls (APCs), and so forth, for a UMS thread.

```cpp
virtual int EnterHyperCriticalRegion() = 0;
```

### Return Value

The new depth of hyper-critical region. Hyper-critical regions are reentrant.

### Remarks

The scheduler must be extraordinarily careful about what methods it calls and what locks it acquires in such regions. If code in such a region blocks on a lock that is held by something the scheduler is responsible for scheduling, deadlock may ensue.

## <a name="exitcriticalregion"></a> IUMSThreadProxy::ExitCriticalRegion Method

Called in order to exit a critical region.

```cpp
virtual int ExitCriticalRegion() = 0;
```

### Return Value

The new depth of critical region. Critical regions are reentrant.

## <a name="exithypercriticalregion"></a> IUMSThreadProxy::ExitHyperCriticalRegion Method

Called in order to exit a hyper-critical region.

```cpp
virtual int ExitHyperCriticalRegion() = 0;
```

### Return Value

The new depth of hyper-critical region. Hyper-critical regions are reentrant.

## <a name="getcriticalregiontype"></a> IUMSThreadProxy::GetCriticalRegionType Method

Returns what kind of critical region the thread proxy is within. Because hyper-critical regions are a superset of critical regions, if code has entered a critical region and then a hyper-critical region, `InsideHyperCriticalRegion` will be returned.

```cpp
virtual CriticalRegionType GetCriticalRegionType() const = 0;
```

### Return Value

The type of critical region the thread proxy is within.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[IUMSScheduler Structure](iumsscheduler-structure.md)
