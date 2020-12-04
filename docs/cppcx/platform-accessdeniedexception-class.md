---
description: "Learn more about: Platform::AccessDeniedException Class"
title: "Platform::AccessDeniedException Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::AccessDeniedException", "VCCORLIB/Platform::AccessDeniedException::AccessDeniedException"]
helpviewer_keywords: ["Platform::AccessDeniedException"]
ms.assetid: 6ae2155b-7b16-4587-8d2d-da05eab4c7e9
---
# Platform::AccessDeniedException Class

Thrown when access to a resource or feature is denied.

## Syntax

```cpp
public ref class AccessDeniedException : COMException,    IException,    IPrintable,   IEquatable
```

### Remarks

If you hit this exception, ensure that you have requested the appropriate capability and made the required declarations in the package manifest of your app. For more information, see [COMException](../cppcx/platform-comexception-class.md) class.

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## See also

[Platform::COMException Class](../cppcx/platform-comexception-class.md)
