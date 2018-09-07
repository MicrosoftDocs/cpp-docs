---
title: "Platform::Delegate Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Delegate"]
dev_langs: ["C++"]
helpviewer_keywords: ["Platform::Delegate Class"]
ms.assetid: 82b21271-768f-4193-9ca2-be68ddfd546e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Platform::Delegate Class

Represents a function object.

## Syntax

```cpp
public delegate void delegate_name();
```

### Members

The Delegate class has the Equals(), GetHashCode(), and ToString() methods derived from the [Platform::Object Class](../cppcx/platform-object-class.md).

### Remarks

Use the [delegate](../windows/delegate-cpp-component-extensions.md) keyword to create delegates; do not use Platform::Delegate explicitly. For more information, see [Delegates](../cppcx/delegates-c-cx.md). For an example of how to create and consume a delegate, see [Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## See Also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)