---
description: "Learn more about: Compiler Error C3133"
title: "Compiler Error C3133"
ms.date: "11/04/2016"
f1_keywords: ["C3133"]
helpviewer_keywords: ["C3133"]
ms.assetid: 4a709405-b67b-4061-8a2a-19fa5fb34a2a
---
# Compiler Error C3133

Attributes cannot be applied to C++ varargs

An attribute was applied incorrectly. Attributes can not be applied to an ellipsis representing variable arguments.

For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following sample generates C3133.

```cpp
// C3133.cpp
// compile with: /clr /c
ref struct MyAttr: System::Attribute {};
void Func([MyAttr]...);   // C3133
void Func2([MyAttr] int i);   // OK
```
