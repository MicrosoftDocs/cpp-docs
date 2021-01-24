---
description: "Learn more about: nested_scheduler_missing_detach Class"
title: "nested_scheduler_missing_detach Class"
ms.date: "11/04/2016"
f1_keywords: ["nested_scheduler_missing_detach", "CONCRT/concurrency::nested_scheduler_missing_detach", "CONCRT/concurrency::nested_scheduler_missing_detach::nested_scheduler_missing_detach"]
helpviewer_keywords: ["nested_scheduler_missing_detach class"]
ms.assetid: 65d3f277-6d43-4160-97ef-caf8b26c1641
---
# nested_scheduler_missing_detach Class

This class describes an exception thrown when the Concurrency Runtime detects that you neglected to call the `CurrentScheduler::Detach` method on a context that attached to a second scheduler using the `Attach` method of the `Scheduler` object.

## Syntax

```cpp
class nested_scheduler_missing_detach : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[nested_scheduler_missing_detach](#ctor)|Overloaded. Constructs a `nested_scheduler_missing_detach` object.|

## Remarks

This exception is thrown only when you nest one scheduler inside another by calling the `Attach` method of a `Scheduler` object on a context that is already owned by or attached to another scheduler. The Concurrency Runtime throws this exception opportunistically when it can detect the scenario as an aid to locating the problem. Not every instance of neglecting to call the `CurrentScheduler::Detach` method is guaranteed to throw this exception.

## Inheritance Hierarchy

`exception`

`nested_scheduler_missing_detach`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> nested_scheduler_missing_detach

Constructs a `nested_scheduler_missing_detach` object.

```cpp
explicit _CRTIMP nested_scheduler_missing_detach(_In_z_ const char* _Message) throw();

nested_scheduler_missing_detach() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Scheduler Class](scheduler-class.md)
