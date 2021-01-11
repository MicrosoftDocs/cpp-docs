---
description: "Learn more about: uninitialized_object Class"
title: "uninitialized_object Class"
ms.date: "03/27/2019"
f1_keywords: ["uninitialized_object", "AMPRT/uninitialized_object", "AMPRT/Concurrency::uninitialized_object"]
helpviewer_keywords: ["uninitialized_object class"]
ms.assetid: 6ae3c4e8-64a6-4511-a158-03be197b63af
---
# uninitialized_object Class

The exception that is thrown when an uninitialized object is used.

## Syntax

```cpp
class uninitialized_object : public runtime_exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[uninitialized_object Constructor](#uninitialized_object)|Initializes a new instance of the `uninitialized_object` class.|

## Inheritance Hierarchy

`exception`

`runtime_exception`

`uninitialized_object`

## Requirements

**Header:** amprt.h

**Namespace:** Concurrency

## <a name="uninitialized_object"></a> uninitialized_object

Constructs a new instance of the `uninitialized_object` exception.

### Syntax

```cpp
explicit uninitialized_object(
    const char * _Message ) throw();

uninitialized_object() throw();
```

### Parameters

*_Message*<br/>
A description of the error.

### Return Value

The `uninitialized_object` exception object.

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
