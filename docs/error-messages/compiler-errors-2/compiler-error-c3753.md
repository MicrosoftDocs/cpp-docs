---
description: "Learn more about: Compiler Error C3753"
title: "Compiler Error C3753"
ms.date: "11/04/2016"
f1_keywords: ["C3753"]
helpviewer_keywords: ["C3753"]
ms.assetid: a5b99e28-796c-4107-a673-97c2ae3bb2b9
---
# Compiler Error C3753

a generic property is not allowed

Generic parameter lists can only appear on managed classes, structs, or functions.

For more information, see [Generics](../../extensions/generics-cpp-component-extensions.md) and [property](../../extensions/property-cpp-component-extensions.md).

## Example

The following sample generates C3753.

```cpp
// C3753.cpp
// compile with: /clr /c
ref struct A {
   generic <typename T>
   property int i;   // C3753 error
};
```
