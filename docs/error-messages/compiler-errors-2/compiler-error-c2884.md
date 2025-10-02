---
title: "Compiler Error C2884"
description: "Learn more about: Compiler Error C2884"
ms.date: 11/04/2016
f1_keywords: ["C2884"]
helpviewer_keywords: ["C2884"]
---
# Compiler Error C2884

> 'name' : introduced by using-declaration conflicts with local function 'function'

## Remarks

You tried to define a function more than once. The first definition is a local definition. The second is from a namespace with a **`using`** declaration.

## Example

The following example generates C2884:

```cpp
// C2884.cpp
namespace A {
   void z(int);
}

void f() {
   void z(int);
   using A::z;   // C2884 z is already defined
}
```
