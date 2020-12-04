---
description: "Learn more about: default_scheduler_exists Class"
title: "default_scheduler_exists Class"
ms.date: "11/04/2016"
f1_keywords: ["default_scheduler_exists", "CONCRT/concurrency::default_scheduler_exists", "CONCRT/concurrency::default_scheduler_exists::default_scheduler_exists"]
helpviewer_keywords: ["default_scheduler_exists class"]
ms.assetid: f6e575e2-4e0f-455a-9e06-54f462ce0c1c
---
# default_scheduler_exists Class

This class describes an exception thrown when the `Scheduler::SetDefaultSchedulerPolicy` method is called when a default scheduler already exists within the process.

## Syntax

```cpp
class default_scheduler_exists : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[default_scheduler_exists](#ctor)|Overloaded. Constructs a `default_scheduler_exists` object.|

## Inheritance Hierarchy

`exception`

`default_scheduler_exists`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> default_scheduler_exists

Constructs a `default_scheduler_exists` object.

```cpp
explicit _CRTIMP default_scheduler_exists(_In_z_ const char* _Message) throw();

default_scheduler_exists() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)
