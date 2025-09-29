---
title: "Compiler Error C3375"
description: "Learn more about: Compiler Error C3375"
ms.date: 11/04/2016
f1_keywords: ["C3375"]
helpviewer_keywords: ["C3375"]
---
# Compiler Error C3375

> 'function' : ambiguous delegate function

## Remarks

A delegate instantiation could have been to a static member function, or as an unbound delegate to an instance function, so the compiler issued this error.

For more information, see [delegate  (C++ Component Extensions)](../../extensions/delegate-cpp-component-extensions.md).

## Example

The following example generates C3375.

```cpp
// C3375.cpp
// compile with: /clr
ref struct R {
   static void f(R^) {}
   void f() {}
};

delegate void Del(R^);

int main() {
   Del ^ a = gcnew Del(&R::f);   // C3375
}
```
