---
title: "Compiler Error C3342"
description: "Learn more about: Compiler Error C3342"
ms.date: 11/04/2016
f1_keywords: ["C3342"]
helpviewer_keywords: ["C3342"]
---
# Compiler Error C3342

> 'attribute': ambiguous attribute

## Remarks

The compiler found more than one definition of an attribute.

An attribute was defined more than once.

For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following example generates C3342.

```cpp
// C3342.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Reflection;

[AttributeUsage(AttributeTargets::All)]
public ref class XAttribute : public  Attribute {};

[AttributeUsage(AttributeTargets::All)]
public ref class X : public Attribute {};

[X]   // C3342 could refer to X or XAttribute
// try the following line instead
// [XAttribute]
public ref class Class4 {};
```
