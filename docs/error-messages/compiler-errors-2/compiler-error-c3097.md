---
description: "Learn more about: Compiler Error C3097"
title: "Compiler Error C3097"
ms.date: "11/04/2016"
f1_keywords: ["C3097"]
helpviewer_keywords: ["C3097"]
ms.assetid: b24bd8f8-e04f-4fbb-be57-4feb9165572e
---
# Compiler Error C3097

'attribute': attribute must be scoped with 'assembly:' or 'module:'

A global attribute was used incorrectly.

For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following sample generates C3097.

```cpp
// C3097.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::All, AllowMultiple = true)]
public ref class Attr : public Attribute {
public:
   Attr(int t) : m_t(t) {}
   int m_t;
};

[Attr(10)];   // C3097
[assembly:Attr(10)];   // OK

[Attr(10)]   // OK
public ref class MyClass {};
```
