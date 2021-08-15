---
description: "Learn more about: invalid_compute_domain Class"
title: "invalid_compute_domain Class"
ms.date: "11/04/2016"
f1_keywords: ["invalid_compute_domain", "AMPRT/invalid_compute_domain", "AMPRT/Concurrency::invalid_compute_domain::invalid_compute_domain"]
helpviewer_keywords: ["invalid_compute_domain class"]
ms.assetid: ac7a7166-8bdb-4db1-8caf-ea129ab5117e
---
# invalid_compute_domain Class

The exception that's thrown when the runtime can't start a kernel by using the compute domain specified at the [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each) call site.

## Syntax

```cpp
class invalid_compute_domain : public runtime_exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[invalid_compute_domain Constructor](#ctor)|Initializes a new instance of the `invalid_compute_domain` class.|

## Inheritance Hierarchy

`exception`

`runtime_exception`

`invalid_compute_domain`

## Requirements

**Header:** amprt.h

**Namespace:** Concurrency

## <a name="ctor"></a> invalid_compute_domain

Initializes a new instance of the class.

### Syntax

```cpp
explicit invalid_compute_domain(
    const char * _Message ) throw();

invalid_compute_domain() throw();
```

### Parameters

*_Message*<br/>
A description of the error.

### Return Value

An instance of the `invalid_compute_domain` class

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
