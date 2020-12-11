---
description: "Learn more about: Compiler Error C2975"
title: "Compiler Error C2975"
ms.date: "11/04/2016"
f1_keywords: ["C2975"]
helpviewer_keywords: ["C2975"]
ms.assetid: 526f6b9d-6c76-4c12-9252-1b1d7c1e06c7
---
# Compiler Error C2975

> '*argument*' : invalid template argument for '*type*', expected compile-time constant expression

The template argument does not match the template declaration; a constant expression should appear within the angle brackets. Variables are not allowed as template actual arguments. Check the template definition to find the correct types.

## Example

The following sample generates C2975 and also shows correct usage:

```cpp
// C2975.cpp
template<int I>
class X {};

int main() {
   int i = 4, j = 2;
   X<i + j> x1;   // C2975
   X<6> x2;   // OK
}
```

C2975 also occurs when you use &#95;&#95;LINE&#95;&#95; as a compile-time constant with [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md). One solution would be to compile with [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) instead of **/ZI**.

```cpp
// C2975b.cpp
// compile with: /ZI
// processor: x86
template<long line>
void test(void) {}

int main() {
   test<__LINE__>();   // C2975
}
```
