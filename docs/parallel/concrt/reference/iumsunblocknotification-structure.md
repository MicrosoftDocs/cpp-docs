---
description: "Learn more about: IUMSUnblockNotification Structure"
title: "IUMSUnblockNotification Structure"
ms.date: "11/04/2016"
f1_keywords: ["IUMSUnblockNotification", "CONCRTRM/concurrency::IUMSUnblockNotification", "CONCRTRM/concurrency::IUMSUnblockNotification::IUMSUnblockNotification::GetContext", "CONCRTRM/concurrency::IUMSUnblockNotification::IUMSUnblockNotification::GetNextUnblockNotification"]
helpviewer_keywords: ["IUMSUnblockNotification structure"]
ms.assetid: eaca9529-c1cc-472b-8ec6-722a1ff0fa2a
---
# IUMSUnblockNotification Structure

Represents a notification from the Resource Manager that a thread proxy which blocked and triggered a return to the scheduler's designated scheduling context has unblocked and is ready to be scheduled. This interface is invalid once the thread proxy's associated execution context, returned from the `GetContext` method, is rescheduled.

## Syntax

```cpp
struct IUMSUnblockNotification;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IUMSUnblockNotification::GetContext](#getcontext)|Returns the `IExecutionContext` interface for the execution context associated with the thread proxy which has unblocked. Once this method returns and the underlying execution context has been rescheduled via a call to the `IThreadProxy::SwitchTo` method, this interface is no longer valid.|
|[IUMSUnblockNotification::GetNextUnblockNotification](#getnextunblocknotification)|Returns the next `IUMSUnblockNotification` interface in the chain returned from the method `IUMSCompletionList::GetUnblockNotifications`.|

## Inheritance Hierarchy

`IUMSUnblockNotification`

## Requirements

**Header:** concrtrm.h

**Namespace:** concurrency

## <a name="getcontext"></a> IUMSUnblockNotification::GetContext Method

Returns the `IExecutionContext` interface for the execution context associated with the thread proxy which has unblocked. Once this method returns and the underlying execution context has been rescheduled via a call to the `IThreadProxy::SwitchTo` method, this interface is no longer valid.

```cpp
virtual IExecutionContext* GetContext() = 0;
```

### Return Value

An `IExecutionContext` interface for the execution context to a thread proxy which has unblocked.

## <a name="getnextunblocknotification"></a> IUMSUnblockNotification::GetNextUnblockNotification Method

Returns the next `IUMSUnblockNotification` interface in the chain returned from the method `IUMSCompletionList::GetUnblockNotifications`.

```cpp
virtual IUMSUnblockNotification* GetNextUnblockNotification() = 0;
```

### Return Value

The next `IUMSUnblockNotification` interface in the chain returned from the method `IUMSCompletionList::GetUnblockNotifications`.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[IUMSScheduler Structure](iumsscheduler-structure.md)<br/>
[IUMSCompletionList Structure](iumscompletionlist-structure.md)
