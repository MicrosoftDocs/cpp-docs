---
description: "Learn more about: Compiler Error C2819"
title: "Compiler Error C2819"
ms.date: "11/04/2016"
f1_keywords: ["C2819"]
helpviewer_keywords: ["C2819"]
ms.assetid: fcc7762d-cb82-4bb1-a715-0d82da832edf
---
# Compiler Error C2819

type 'type' does not have an overloaded member 'operator ->'

You need to define `operator->()` to use this pointer operation.

The following sample generates C2819:

```cpp
// C2819.cpp
// compile with: /c
class A {
   public:
      int i;
};

class B {};

void C(B j) {
   j->i;   // C2819
}

class D {
   A* pA;

   public:
      A* operator->() {
         return pA;
      }
};

void F(D j) {
   j->i;
}
```

C2819 can also occur when using [C++ Stack Semantics for Reference Types](../../dotnet/cpp-stack-semantics-for-reference-types.md). The following sample generates C2819:

```cpp
// C2819_b.cpp
// compile with: /clr
ref struct R {
   void Test() {}
};

int main() {
   R r;
   r->Test();   // C2819
   r.Test();   // OK
}
```
