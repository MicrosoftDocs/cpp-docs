---
description: "Learn more about: improper_scheduler_reference Class"
title: "improper_scheduler_reference Class"
ms.date: "11/04/2016"
f1_keywords: ["improper_scheduler_reference", "CONCRT/concurrency::improper_scheduler_reference", "CONCRT/concurrency::improper_scheduler_reference::improper_scheduler_reference"]
helpviewer_keywords: ["improper_scheduler_reference class"]
ms.assetid: 434a7512-7796-4255-92a7-f3bf71c6a7a7
---
# improper_scheduler_reference Class

This class describes an exception thrown when the `Reference` method is called on a `Scheduler` object that is shutting down, from a context that is not part of that scheduler.

## Syntax

```cpp
class improper_scheduler_reference : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[improper_scheduler_reference](#ctor)|Overloaded. Constructs an `improper_scheduler_reference` object.|

## Inheritance Hierarchy

`exception`

`improper_scheduler_reference`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> improper_scheduler_reference

Constructs an `improper_scheduler_reference` object.

```cpp
explicit _CRTIMP improper_scheduler_reference(_In_z_ const char* _Message) throw();

improper_scheduler_reference() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Scheduler Class](scheduler-class.md)
