---
title: "Platform::FailureException Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::FailureException::FailureException", "VCCORLIB/Platform::FailureException"]
dev_langs: ["C++"]
helpviewer_keywords: ["Platform::FailureException"]
ms.assetid: 1729cd07-bfc2-448e-9db5-185d5cbf5b81
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Platform::FailureException Class

Thrown when the operation has failed. It is the equivalent of the E_FAIL HRESULT.

## Syntax

```cpp
public ref class FailureException : COMException,    IException,    IPrintable,    IEquatable
```

### Remarks

For more information, see the [COMException](../cppcx/platform-comexception-class.md) class.

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## See Also

[Platform::COMException Class](../cppcx/platform-comexception-class.md)