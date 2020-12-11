---
description: "Learn more about: invalid_link_target Class"
title: "invalid_link_target Class"
ms.date: "11/04/2016"
f1_keywords: ["invalid_link_target", "CONCRT/concurrency::invalid_link_target", "CONCRT/concurrency::invalid_link_target::invalid_link_target"]
helpviewer_keywords: ["invalid_link_target class"]
ms.assetid: 33b64885-34d8-4d4e-a893-02e9f19c958e
---
# invalid_link_target Class

This class describes an exception thrown when the `link_target` method of a messaging block is called and the messaging block is unable to link to the target. This can be the result of exceeding the number of links the messaging block is allowed or attempting to link a specific target twice to the same source.

## Syntax

```cpp
class invalid_link_target : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[invalid_link_target](#ctor)|Overloaded. Constructs an `invalid_link_target` object.|

## Inheritance Hierarchy

`exception`

`invalid_link_target`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> invalid_link_target

Constructs an `invalid_link_target` object.

```cpp
explicit _CRTIMP invalid_link_target(_In_z_ const char* _Message) throw();

invalid_link_target() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md)
