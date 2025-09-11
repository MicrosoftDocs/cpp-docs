---
title: "Compiler Error C3753"
description: "Learn more about: Compiler Error C3753"
ms.date: 11/04/2016
f1_keywords: ["C3753"]
helpviewer_keywords: ["C3753"]
---
# Compiler Error C3753

> a generic property is not allowed

## Remarks

Generic parameter lists can only appear on managed classes, structs, or functions.

For more information, see [Generics](../../extensions/generics-cpp-component-extensions.md) and [property](../../extensions/property-cpp-component-extensions.md).

## Example

The following example generates C3753.

```cpp
// C3753.cpp
// compile with: /clr /c
ref struct A {
   generic <typename T>
   property int i;   // C3753 error
};
```
