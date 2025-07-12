---
description: "Learn more about: Compiler Error C2061"
title: "Compiler Error C2061"
ms.date: "11/04/2016"
f1_keywords: ["C2061"]
helpviewer_keywords: ["C2061"]
ms.assetid: b0e61c0c-a205-4820-b9aa-301d6c6fe6eb
---
# Compiler Error C2061

> syntax error : identifier 'identifier'

## Remarks

The compiler found an identifier where it wasn't expected. Make sure that `identifier` is declared before you use it.

An initializer may be enclosed by parentheses. To avoid this problem, enclose the declarator in parentheses or make it a **`typedef`**.

This error could also be caused when the compiler detects an expression as a class template argument; use [typename](../../cpp/typename.md) to tell the compiler it is a type, as shown in the following example:

## Examples

The following sample generates C2061:

```cpp
// C2061.cpp
// compile with: /std:c++17

template <A a> // C2061
class C1 {};

template <typename A a> // ok
class C2 {};

template <typename T>
class C3
{
   // Both are valid since C++20
   using Type1 = T::Type; // C2061
   using Type2 = typename T::Type; // OK
};

int main()
{
   int x;
   unsigned a1 = alignof(x);   // C2061
   unsigned a2 = alignof(int); // OK
   unsigned a3 = alignof(decltype(x)); // OK
}
```

To resolve the error with `template<A a> class C1{};`, use `template <typename a> class C1 {};`\
To resolve the issue with `using Type1 = T::Type;`, use `using Type1 = typename T::Type;`\
To resolve the issue with `alignof(x)`, replace the argument with the type of `x`. In this case, `int` or `decltype(x);`

C2061 can occur if you pass an instance name to [typeid](../../extensions/typeid-cpp-component-extensions.md):

```cpp
// C2061b.cpp
// compile with: /clr
ref struct G
{
   int i;
};

int main()
{
   G ^pG = gcnew G;
   System::Type ^ pType = typeid<pG>;   // C2061
   System::Type ^ pType2 = typeid<G>;   // OK
}
```
