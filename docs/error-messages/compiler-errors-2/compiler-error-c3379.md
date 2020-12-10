---
description: "Learn more about: Compiler Error C3379"
title: "Compiler Error C3379"
ms.date: "11/04/2016"
f1_keywords: ["C3379"]
helpviewer_keywords: ["C3379"]
ms.assetid: a66c2c4e-091c-4426-9cde-7c4cfb2ffce1
---
# Compiler Error C3379

'class' : a nested class cannot have an assembly access specifier as part of its declaration

When applied to a managed type, such as class or struct, the [public](../../cpp/public-cpp.md) and [private](../../cpp/private-cpp.md) keywords indicate whether the class will be exposed through assembly metadata. `public` or `private` cannot be applied to a nested class, which will inherit the assembly access of the enclosing class.

When used with [/clr](../../build/reference/clr-common-language-runtime-compilation.md), the `ref` and `value` keywords indicate that a class is managed (see [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md)).

The following sample generates C3379:

```cpp
// C3379a.cpp
// compile with: /clr
using namespace System;

public ref class A {
public:
   static int i = 9;

   public ref class BA {   // C3379
   // try the following line instead
   // ref class BA {
   public:
      static int ii = 8;
   };
};

int main() {

   A^ myA = gcnew A;
   Console::WriteLine(myA->i);

   A::BA^ myBA = gcnew A::BA;
   Console::WriteLine(myBA->ii);
}
```
