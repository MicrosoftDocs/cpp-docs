---
title: "Compiler Error C3103"
description: "Learn more about: Compiler Error C3103"
ms.date: 11/04/2016
f1_keywords: ["C3103"]
helpviewer_keywords: ["C3103"]
---
# Compiler Error C3103

> 'argument': repeated named argument

## Remarks

An attribute can not repeat named arguments.

For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following example generates C3103.

```cpp
// C3103.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::All)]
public ref class Attr : public Attribute {
public:
   int m_t;
};

[Attr(m_t = 10, m_t = 1)]   // C3103
// try the following line instead
// [Attr(m_t = 10)]
ref class A {};
```
