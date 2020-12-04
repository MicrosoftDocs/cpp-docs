---
description: "Learn more about: invalid_oversubscribe_operation Class"
title: "invalid_oversubscribe_operation Class"
ms.date: "11/04/2016"
f1_keywords: ["invalid_oversubscribe_operation", "CONCRT/concurrency::invalid_oversubscribe_operation", "CONCRT/concurrency::invalid_oversubscribe_operation::invalid_oversubscribe_operation"]
helpviewer_keywords: ["invalid_oversubscribe_operation class"]
ms.assetid: 0a9c5f08-d5e6-4ad0-90a9-517472b3ac28
---
# invalid_oversubscribe_operation Class

This class describes an exception thrown when the `Context::Oversubscribe` method is called with the `_BeginOversubscription` parameter set to **`false`** without a prior call to the `Context::Oversubscribe` method with the `_BeginOversubscription` parameter set to **`true`**.

## Syntax

```cpp
class invalid_oversubscribe_operation : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[invalid_oversubscribe_operation](#ctor)|Overloaded. Constructs an `invalid_oversubscribe_operation` object.|

## Inheritance Hierarchy

`exception`

`invalid_oversubscribe_operation`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> invalid_oversubscribe_operation

Constructs an `invalid_oversubscribe_operation` object.

```cpp
explicit _CRTIMP invalid_oversubscribe_operation(_In_z_ const char* _Message) throw();

invalid_oversubscribe_operation() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)
