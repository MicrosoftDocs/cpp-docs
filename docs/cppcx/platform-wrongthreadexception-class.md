---
title: "Platform::WrongThreadException Class"
description: "Learn more about: Platform::WrongThreadException Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::WrongThreadException", "VCCORLIB/Platform::WrongThreadException::WrongThreadException"]
helpviewer_keywords: ["Platform::WrongThreadException"]
---
# Platform::WrongThreadException Class

Thrown when a thread calls by way of an interface pointer for a proxy object that doesn't belong to the thread's apartment.

## Syntax

```cpp
public ref class WrongThreadException : COMException, IException, IPrintable, IEquatable
```

### Remarks

For more information, see the [COMException](../cppcx/platform-comexception-class.md).

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## See also

[Platform::COMException Class](../cppcx/platform-comexception-class.md)
