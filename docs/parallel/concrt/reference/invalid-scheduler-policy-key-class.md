---
description: "Learn more about: invalid_scheduler_policy_key Class"
title: "invalid_scheduler_policy_key Class"
ms.date: "11/04/2016"
f1_keywords: ["invalid_scheduler_policy_key", "CONCRT/concurrency::invalid_scheduler_policy_key", "CONCRT/concurrency::invalid_scheduler_policy_key::invalid_scheduler_policy_key"]
helpviewer_keywords: ["invalid_scheduler_policy_key class"]
ms.assetid: 6a7c42fe-9bc4-4a02-bebb-99fe9ef9817d
---
# invalid_scheduler_policy_key Class

This class describes an exception thrown when an invalid or unknown key is passed to a `SchedulerPolicy` object constructor, or the `SetPolicyValue` method of a `SchedulerPolicy` object is passed a key that must be changed using other means such as the `SetConcurrencyLimits` method.

## Syntax

```cpp
class invalid_scheduler_policy_key : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[invalid_scheduler_policy_key](#ctor)|Overloaded. Constructs an `invalid_scheduler_policy_key` object.|

## Inheritance Hierarchy

`exception`

`invalid_scheduler_policy_key`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> invalid_scheduler_policy_key

Constructs an `invalid_scheduler_policy_key` object.

```cpp
explicit _CRTIMP invalid_scheduler_policy_key(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_key() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[SchedulerPolicy Class](schedulerpolicy-class.md)
