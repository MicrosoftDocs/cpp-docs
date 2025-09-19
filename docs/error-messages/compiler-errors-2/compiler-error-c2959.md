---
title: "Compiler Error C2959"
description: "Learn more about: Compiler Error C2959"
ms.date: 11/04/2016
f1_keywords: ["C2959"]
helpviewer_keywords: ["C2959"]
---
# Compiler Error C2959

> a generic class or function may not be a member of a template

## Remarks

For more information, see [Windows Runtime and Managed Templates](../../extensions/windows-runtime-and-managed-templates-cpp-component-extensions.md) and [Generics](../../extensions/generics-cpp-component-extensions.md).

## Example

The following example generates C2959.

```cpp
// C2959.cpp
// compile with: /clr /c
template <class T> ref struct S {
   generic <class U> ref struct GR1;   // C2959
};
```
