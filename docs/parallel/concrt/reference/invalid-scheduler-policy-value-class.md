---
description: "Learn more about: invalid_scheduler_policy_value Class"
title: "invalid_scheduler_policy_value Class"
ms.date: "11/04/2016"
f1_keywords: ["concrt/concurrency::invalid_scheduler_policy_value"]
helpviewer_keywords: ["invalid_scheduler_policy_value class"]
ms.assetid: 8c533e3f-2774-4192-8616-b2313b859bf7
---
# invalid_scheduler_policy_value Class

This class describes an exception thrown when a policy key of a `SchedulerPolicy` object is set to an invalid value for that key.

## Syntax

```cpp
class invalid_scheduler_policy_value : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[invalid_scheduler_policy_value](invalid-scheduler-policy-thread-specification-class.md#ctor|Overloaded. Constructs an `invalid_scheduler_policy_value` object.|

## Inheritance Hierarchy

`exception`

`invalid_scheduler_policy_value`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> invalid_scheduler_policy_value

Constructs an `invalid_scheduler_policy_value` object.

```cpp
explicit _CRTIMP invalid_scheduler_policy_value(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_value() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[SchedulerPolicy Class](schedulerpolicy-class.md)
