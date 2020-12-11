---
description: "Learn more about: scheduler_not_attached Class"
title: "scheduler_not_attached Class"
ms.date: "11/04/2016"
f1_keywords: ["scheduler_not_attached", "CONCRT/concurrency::scheduler_not_attached", "CONCRT/concurrency::scheduler_not_attached::scheduler_not_attached"]
helpviewer_keywords: ["scheduler_not_attached class"]
ms.assetid: 26001970-b400-463b-be3d-8623359c399a
---
# scheduler_not_attached Class

This class describes an exception thrown when an operation is performed which requires a scheduler to be attached to the current context and one is not.

## Syntax

```cpp
class scheduler_not_attached : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[scheduler_not_attached](#ctor)|Overloaded. Constructs a `scheduler_not_attached` object.|

## Inheritance Hierarchy

`exception`

`scheduler_not_attached`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> scheduler_not_attached

Constructs a `scheduler_not_attached` object.

```cpp
explicit _CRTIMP scheduler_not_attached(_In_z_ const char* _Message) throw();

scheduler_not_attached() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Scheduler Class](scheduler-class.md)
