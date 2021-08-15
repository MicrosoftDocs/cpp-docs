---
description: "Learn more about: bad_target Class"
title: "bad_target Class"
ms.date: "11/04/2016"
f1_keywords: ["bad_target", "CONCRT/concurrency::bad_target", "CONCRT/concurrency::bad_target::bad_target"]
helpviewer_keywords: ["bad_target class"]
ms.assetid: e6dcddbf-9217-4fac-ac7f-7b8b4781d2f5
---
# bad_target Class

This class describes an exception thrown when a messaging block is given a pointer to a target which is invalid for the operation being performed.

## Syntax

```cpp
class bad_target : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[bad_target](#ctor)|Overloaded. Constructs a `bad_target` object.|

## Remarks

This exception is typically thrown for reasons such as a target attempting to consume a message which is reserved for a different target or releasing a reservation that it does not hold.

## Inheritance Hierarchy

`exception`

`bad_target`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> bad_target

Constructs a `bad_target` object.

```cpp
explicit _CRTIMP bad_target(_In_z_ const char* _Message) throw();

bad_target() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md)
