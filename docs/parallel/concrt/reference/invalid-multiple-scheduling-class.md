---
description: "Learn more about: invalid_multiple_scheduling Class"
title: "invalid_multiple_scheduling Class"
ms.date: "11/04/2016"
f1_keywords: ["invalid_multiple_scheduling", "CONCRT/concurrency::invalid_multiple_scheduling", "CONCRT/concurrency::invalid_multiple_scheduling::invalid_multiple_scheduling"]
helpviewer_keywords: ["invalid_multiple_scheduling class"]
ms.assetid: e9a47cb7-a778-4df7-92b0-3752119fd4c7
---
# invalid_multiple_scheduling Class

This class describes an exception thrown when a `task_handle` object is scheduled multiple times using the `run` method of a `task_group` or `structured_task_group` object without an intervening call to either the `wait` or `run_and_wait` methods.

## Syntax

```cpp
class invalid_multiple_scheduling : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[invalid_multiple_scheduling](#ctor)|Overloaded. Constructs an `invalid_multiple_scheduling` object.|

## Inheritance Hierarchy

`exception`

`invalid_multiple_scheduling`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> invalid_multiple_scheduling

Constructs an `invalid_multiple_scheduling` object.

```cpp
explicit _CRTIMP invalid_multiple_scheduling(_In_z_ const char* _Message) throw();

invalid_multiple_scheduling() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[task_handle Class](task-handle-class.md)<br/>
[task_group Class](task-group-class.md)<br/>
[run](task-group-class.md)<br/>
[wait](task-group-class.md)<br/>
[run_and_wait](task-group-class.md)<br/>
[structured_task_group Class](structured-task-group-class.md)
