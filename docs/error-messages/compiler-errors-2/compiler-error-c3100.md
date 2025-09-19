---
title: "Compiler Error C3100"
description: "Learn more about: Compiler Error C3100"
ms.date: 11/04/2016
f1_keywords: ["C3100"]
helpviewer_keywords: ["C3100"]
---
# Compiler Error C3100

> 'target' : unknown attribute qualifier

## Remarks

An invalid attribute target was specified.

For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following example generates C3100.

```cpp
// C3100.cpp
// compile with: /clr /c
using namespace System;
[AttributeUsage(AttributeTargets::All)]
public ref class Attr : public Attribute {
public:
   Attr(int t) : m_t(t) {}
   int m_t;
};

[invalid_target:Attr(10)];   // C3100
[assembly:Attr(10)];   // OK
```
