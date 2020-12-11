---
description: "Learn more about: Compiler Error C3103"
title: "Compiler Error C3103"
ms.date: "11/04/2016"
f1_keywords: ["C3103"]
helpviewer_keywords: ["C3103"]
ms.assetid: 7984bd3e-d51d-43e4-b6f4-08c1e9fb9704
---
# Compiler Error C3103

'argument': repeated named argument

An attribute can not repeat named arguments.

For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following sample generates C3103.

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
