---
title: "invalid_scheduler_policy_thread_specification Class"
description: "Learn more about: invalid_scheduler_policy_thread_specification Class"
ms.date: "11/04/2016"
f1_keywords: ["concrt/concurrency::invalid_scheduler_policy_thread_specification"]
helpviewer_keywords: ["invalid_scheduler_policy_thread_specification class"]
---
# invalid_scheduler_policy_thread_specification Class

This class describes an exception thrown when an attempt is made to set the concurrency limits of a `SchedulerPolicy` object such that the value of the `MinConcurrency` key is less than the value of the `MaxConcurrency` key.

## Syntax

```cpp
class invalid_scheduler_policy_thread_specification : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[invalid_scheduler_policy_thread_specification](#ctor)|Overloaded. Constructs an `invalid_scheduler_policy_thread_specification` object.|

## Inheritance Hierarchy

`exception`

`invalid_scheduler_policy_thread_specification`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> invalid_scheduler_policy_thread_specification

Constructs an `invalid_scheduler_policy_value` object.

```cpp
explicit _CRTIMP invalid_scheduler_policy_thread_specification(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_thread_specification() throw();
```

### Parameters

*_Message*\
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)\
[SchedulerPolicy Class](schedulerpolicy-class.md)
