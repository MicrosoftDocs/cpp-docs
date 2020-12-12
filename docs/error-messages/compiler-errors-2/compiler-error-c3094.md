---
description: "Learn more about: Compiler Error C3094"
title: "Compiler Error C3094"
ms.date: "11/04/2016"
f1_keywords: ["C3094"]
helpviewer_keywords: ["C3094"]
ms.assetid: 10da9b7c-e72d-4013-9925-c83e1bb142db
---
# Compiler Error C3094

'attribute': anonymous usage not allowed

An attribute was not scoped correctly.  For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following sample generates C3094.

```cpp
// C3094.cpp
// compile with: /clr /c
using namespace System;
[AttributeUsage(AttributeTargets::Class)]
public ref class AAttribute : Attribute {};

[A];   // C3094

// OK
[A]
ref class x{};
```
