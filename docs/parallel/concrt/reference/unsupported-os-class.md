---
description: "Learn more about: unsupported_os Class"
title: "unsupported_os Class"
ms.date: "11/04/2016"
f1_keywords: ["unsupported_os", "CONCRT/concurrency::unsupported_os", "CONCRT/concurrency::unsupported_os::unsupported_os"]
helpviewer_keywords: ["unsupported_os class"]
ms.assetid: 6fa57636-341b-4b51-84cc-261d283ff736
---
# unsupported_os Class

This class describes an exception thrown when an unsupported operating system is used.

## Syntax

```cpp
class unsupported_os : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[unsupported_os](#ctor)|Overloaded. Constructs an `unsupported_os` object.|

## Inheritance Hierarchy

`exception`

`unsupported_os`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> unsupported_os

Constructs an `unsupported_os` object.

### Syntax

```cpp
explicit _CRTIMP unsupported_os(_In_z_ const char* _Message) throw();

unsupported_os() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See also

[concurrency Namespace](concurrency-namespace.md)
