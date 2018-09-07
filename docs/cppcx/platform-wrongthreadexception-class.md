---
title: "Platform::WrongThreadException Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::WrongThreadException", "VCCORLIB/Platform::WrongThreadException::WrongThreadException"]
dev_langs: ["C++"]
helpviewer_keywords: ["Platform::WrongThreadException"]
ms.assetid: c193f97e-0392-4535-a4c4-0711e4e4a836
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Platform::WrongThreadException Class

Thrown when a thread calls by way of an interface pointer for a proxy object that doesn't belong to the thread's apartment.

## Syntax

```cpp
public ref class WrongThreadException : COMException,    IException,    IPrintable,    IEquatable
```

### Remarks

For more information, see the [COMException](../cppcx/platform-comexception-class.md).

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## See Also

[Platform::COMException Class](../cppcx/platform-comexception-class.md)