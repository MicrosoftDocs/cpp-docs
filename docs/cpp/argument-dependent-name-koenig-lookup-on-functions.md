---
description: "Learn more about: Argument-Dependent Name (Koenig) Lookup on Functions"
title: "Argument-Dependent Name (Koenig) Lookup on Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["Koenig lookup", "argument-dependent lookup [C++]"]
ms.assetid: c0928401-da2c-4658-942d-9ba4df149c35
---
# Argument-Dependent Name (Koenig) Lookup on Functions

The compiler can use argument-dependent name lookup to find the definition of an unqualified function call. Argument-dependent name lookup is also called Koenig lookup. The type of every argument in a function call is defined within a hierarchy of namespaces, classes, structures, unions, or templates. When you specify an unqualified [postfix](../cpp/postfix-expressions.md) function call, the compiler searches for the function definition in the hierarchy associated with each argument type.

## Example

In the sample, the compiler notes that function `f()` takes an argument `x`. Argument `x` is of type `A::X`, which is defined in namespace `A`. The compiler searches namespace `A` and finds a definition for function `f()` that takes an argument of type `A::X`.

```cpp
// argument_dependent_name_koenig_lookup_on_functions.cpp
namespace A
{
   struct X
   {
   };
   void f(const X&)
   {
   }
}
int main()
{
// The compiler finds A::f() in namespace A, which is where
// the type of argument x is defined. The type of x is A::X.
   A::X x;
   f(x);
}
```
