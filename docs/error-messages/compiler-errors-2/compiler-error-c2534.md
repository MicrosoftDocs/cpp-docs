---
title: "Compiler Error C2534"
description: "Learn more about: Compiler Error C2534"
ms.date: 11/04/2016
f1_keywords: ["C2534"]
helpviewer_keywords: ["C2534"]
---
# Compiler Error C2534

> 'identifier' : constructor cannot return a value

## Remarks

A constructor cannot contain a **`return`** statement with an expression (even if the expression has type **`void`**). This differs from regular void-returning function where a return expression of type **`void`** is allowed. However, using the **`return`** statement without an expression is allowed for early returns in the constructor.

## Example

The following example generates C2534:

```cpp
// C2534.cpp
// compile with: /c
void void_func() {}

class A {
public:
   int i;
   A() {
      return i;   // C2534
      return 123;   // C2534
      return (void)0;   // C2534
      return void_func();   // C2534

      return;   // OK
   }
};
```

The preceding errors may be fixed by removing the entire **`return`** statement or omitting the return expression if an early return is desired.
