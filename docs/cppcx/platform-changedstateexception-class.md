---
title: "Platform::ChangedStateException Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::ChangedStateException", "VCCORLIB/Platform::ChangedStateException::ChangedStateException"]
dev_langs: ["C++"]
helpviewer_keywords: ["Platform::ChangedStateException"]
ms.assetid: f894beac-9e80-4fac-ac25-89f1dbc0a6a4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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

## See Also

[Platform::COMException Class](../cppcx/platform-comexception-class.md)