---
description: "Learn more about: context_unblock_unbalanced Class"
title: "context_unblock_unbalanced Class"
ms.date: "11/04/2016"
f1_keywords: ["context_unblock_unbalanced", "CONCRT/concurrency::context_unblock_unbalanced", "CONCRT/concurrency::context_unblock_unbalanced::context_unblock_unbalanced"]
helpviewer_keywords: ["context_unblock_unbalanced class"]
ms.assetid: a76066c8-19dd-44fa-959a-6941ec1b0d2d
---
# context_unblock_unbalanced Class

This class describes an exception thrown when calls to the `Block` and `Unblock` methods of a `Context` object are not properly paired.

## Syntax

```cpp
class context_unblock_unbalanced : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[context_unblock_unbalanced](#ctor)|Overloaded. Constructs a `context_unblock_unbalanced` object.|

## Remarks

Calls to the `Block` and `Unblock` methods of a `Context` object must always be properly paired. The Concurrency Runtime allows the operations to happen in either order. For example, a call to `Block` can be followed by a call to `Unblock`, or vice-versa. This exception would be thrown if, for instance, two calls to the `Unblock` method were made in a row, on a `Context` object which was not blocked.

## Inheritance Hierarchy

`exception`

`context_unblock_unbalanced`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> context_unblock_unbalanced

Constructs a `context_unblock_unbalanced` object.

```cpp
explicit _CRTIMP context_unblock_unbalanced(_In_z_ const char* _Message) throw();

context_unblock_unbalanced() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)
