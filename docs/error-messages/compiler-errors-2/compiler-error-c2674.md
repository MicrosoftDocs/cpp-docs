---
description: "Learn more about: Compiler Error C2674"
title: "Compiler Error C2674"
ms.date: "11/04/2016"
f1_keywords: ["C2674"]
helpviewer_keywords: ["C2674"]
ms.assetid: 7cbd70d8-d992-44d7-a5cb-dd8cf9c759d2
---
# Compiler Error C2674

a generic declaration is not allowed in this context

A generic was declared incorrectly. For more information, see [Generics](../../extensions/generics-cpp-component-extensions.md).

## Example

The following sample generates C2674.

```cpp
// C2674.cpp
// compile with: /clr /c
void F(generic <class T> ref class R1);   // C2674
generic <class T> ref class R2 {};   // OK
```
