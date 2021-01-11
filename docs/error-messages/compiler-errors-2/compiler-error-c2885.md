---
description: "Learn more about: Compiler Error C2885"
title: "Compiler Error C2885"
ms.date: "11/04/2016"
f1_keywords: ["C2885"]
helpviewer_keywords: ["C2885"]
ms.assetid: 7743e5f3-a034-44b4-9ee8-5a6254c27f8c
---
# Compiler Error C2885

'class::identifier' : not a valid using-declaration at non-class scope

You used a [using](../../cpp/using-declaration.md) declaration incorrectly.

This error can be generated as a result of compiler conformance work that was done for Visual Studio 2005: it is no longer valid to have a **`using`** declaration to a nested type; you must explicitly qualify each reference you make to the nested type, put the type in a namespace, or create a typedef.

## Examples

The following sample generates C2885.

```cpp
// C2885.cpp
namespace MyNamespace {
   class X1 {};
}

struct MyStruct {
   struct X1 {
      int i;
   };
};

int main () {
   using MyStruct::X1;   // C2885

   // OK
   using MyNamespace::X1;
   X1 myX1;

   MyStruct::X1 X12;

   typedef MyStruct::X1 abc;
   abc X13;
   X13.i = 9;
}
```

If you use the **`using`** keyword with a class member, C++ requires you to define that member inside another class (a derived class).

The following sample generates C2885.

```cpp
// C2885_b.cpp
// compile with: /c
class A {
public:
   int i;
};

void z() {
   using A::i;   // C2885 not in a class
}

class B : public A {
public:
   using A::i;
};
```
