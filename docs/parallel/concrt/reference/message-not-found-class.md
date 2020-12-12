---
description: "Learn more about: message_not_found Class"
title: "message_not_found Class"
ms.date: "11/04/2016"
f1_keywords: ["message_not_found", "CONCRT/concurrency::message_not_found", "CONCRT/concurrency::message_not_found::message_not_found"]
helpviewer_keywords: ["message_not_found class"]
ms.assetid: a96b9995-5ad7-4600-83c8-c15e329ff10e
---
# message_not_found Class

This class describes an exception thrown when a messaging block is unable to find a requested message.

## Syntax

```cpp
class message_not_found : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[message_not_found](#ctor)|Overloaded. Constructs a `message_not_found` object.|

## Inheritance Hierarchy

`exception`

`message_not_found`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> message_not_found

Constructs a `message_not_found` object.

```cpp
explicit _CRTIMP message_not_found(_In_z_ const char* _Message) throw();

message_not_found() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md)
