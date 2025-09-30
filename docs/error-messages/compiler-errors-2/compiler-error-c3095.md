---
title: "Compiler Error C3095"
description: "Learn more about: Compiler Error C3095"
ms.date: 11/04/2016
f1_keywords: ["C3095"]
helpviewer_keywords: ["C3095"]
---
# Compiler Error C3095

> 'attribute': attribute cannot be repeated

## Remarks

Some attributes are declared such that, multiple occurrences of the attribute cannot be applied to a target.

For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following example generates C3095.

```cpp
// C3095.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::All, AllowMultiple=false)]
public ref class Attr : public Attribute {
public:
   Attr(int t) : m_t(t) {}
   const int m_t;
};

[AttributeUsage(AttributeTargets::All, AllowMultiple=true)]
public ref class Attr2 : public Attribute {
public:
   Attr2(int t) : m_t(t) {}
   const int m_t;
};

[Attr(10)]   // C3095
[Attr(11)]
ref class A {};

[Attr2(10)]   // OK
[Attr2(11)]
ref class B {};
```
