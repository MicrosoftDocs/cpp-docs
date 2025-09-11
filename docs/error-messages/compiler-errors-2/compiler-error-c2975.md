---
title: "Compiler Error C2975"
description: "Learn more about: Compiler Error C2975"
ms.date: 11/04/2016
f1_keywords: ["C2975"]
helpviewer_keywords: ["C2975"]
---
# Compiler Error C2975

> '*argument*' : invalid template argument for '*type*', expected compile-time constant expression

## Remarks

The template argument does not match the template declaration; a constant expression should appear within the angle brackets. Variables are not allowed as template actual arguments. Check the template definition to find the correct types.

## Examples

The following example generates C2975 and also shows correct usage:

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

C2975 also occurs when you use `__LINE__` as a compile-time constant with [`/ZI`](../../build/reference/z7-zi-zi-debug-information-format.md). One solution would be to compile with [`/Zi`](../../build/reference/z7-zi-zi-debug-information-format.md) instead of **`/ZI`**.

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
