---
description: "Learn more about: Platform::ChangedStateException Class"
title: "Platform::ChangedStateException Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::ChangedStateException", "VCCORLIB/Platform::ChangedStateException::ChangedStateException"]
helpviewer_keywords: ["Platform::ChangedStateException"]
ms.assetid: f894beac-9e80-4fac-ac25-89f1dbc0a6a4
---
# Platform::ChangedStateException Class

Thrown when the internal state of an object has changed, thereby invalidating the results of the method.

## Syntax

```cpp
public ref class ChangedStateException : COMException,    IException,    IPrintable,    IEquatable
```

### Remarks

One example where this exception is thrown is when methods of a collection iterator or a collection view are called after the parent collection has changed, invalidating the results of the method.

For more information, see the [COMException](../cppcx/platform-comexception-class.md) class.

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## See also

[Platform::COMException Class](../cppcx/platform-comexception-class.md)
