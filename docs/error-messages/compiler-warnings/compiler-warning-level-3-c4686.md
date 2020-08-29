---
title: "Compiler Warning (level 3) C4686"
description: "Microsoft C++ compiler warning C4686."
ms.date: 08/29/2020
f1_keywords: ["C4686"]
helpviewer_keywords: ["C4686"]
ms.assetid: 767c83c2-9e4b-4f9e-88c8-02128ba563f4
---
# Compiler Warning (level 3) C4686

> '*user-defined type*' : possible change in behavior, change in UDT return calling convention

## Remarks

A class template specialization wasn't defined before it was used in a return type. Anything that instantiates the class resolves C4686; declaring an instance or accessing a member (for example, `C<int>::some_member`) are also options.

This warning is off by default. For more information, see [Compiler warnings that are off by default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

Try the following instead:

```cpp
// C4686.cpp
// compile with: /W3
#pragma warning (default : 4686)
template <class T>
class C;

template <class T>
C<T> f(T);

template <class T>
class C {};

int main() {
   f(1);   // C4686
}

template <class T>
C<T> f(T) {
   return C<int>();
}
```
