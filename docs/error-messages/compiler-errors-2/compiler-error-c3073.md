---
description: "Learn more about: Compiler Error C3073"
title: "Compiler Error C3073"
ms.date: "11/04/2016"
f1_keywords: ["C3073"]
helpviewer_keywords: ["C3073"]
ms.assetid: b24b9b8b-f9fb-4c3c-a1a0-97fad2081bfc
---
# Compiler Error C3073

'type' : ref class does not have a user-defined copy constructor

In a [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) compilation, the compiler will not generate a copy constructor for a reference type. In any **/clr** compilation, you must define your own copy constructor for a reference type if you expect an instance of the type to be copied.

For more information, see [C++ Stack Semantics for Reference Types](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## Example

The following sample generates C3073.

```cpp
// C3073.cpp
// compile with: /clr
ref class R {
public:
   R(int) {}
};

ref class S {
public:
   S(int) {}
   S(const S %rhs) {}   // copy constructor
};

void f(R) {}
void f2(S) {}
void f3(R%){}

int main() {
   R r(1);
   f(r);   // C3073
   f3(r);   // OK

   S s(1);
   f2(s);   // OK
}
```
