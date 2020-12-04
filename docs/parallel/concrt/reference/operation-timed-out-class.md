---
description: "Learn more about: operation_timed_out Class"
title: "operation_timed_out Class"
ms.date: "11/04/2016"
f1_keywords: ["operation_timed_out", "CONCRT/concurrency::operation_timed_out", "CONCRT/concurrency::operation_timed_out::operation_timed_out"]
helpviewer_keywords: ["operation_timed_out class"]
ms.assetid: 963efe1d-a6e0-477c-9a70-d93d8412c897
---
# operation_timed_out Class

This class describes an exception thrown when an operation has timed out.

## Syntax

```cpp
class operation_timed_out : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[operation_timed_out](#ctor)|Overloaded. Constructs an `operation_timed_out` object.|

## Inheritance Hierarchy

`exception`

`operation_timed_out`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> operation_timed_out

Constructs an `operation_timed_out` object.

```cpp
explicit _CRTIMP operation_timed_out(_In_z_ const char* _Message) throw();

operation_timed_out() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)
