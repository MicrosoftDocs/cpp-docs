---
title: "Compiler Error C2819"
description: "Learn more about: Compiler Error C2819"
ms.date: 11/04/2016
f1_keywords: ["C2819"]
helpviewer_keywords: ["C2819"]
---
# Compiler Error C2819

> type 'type' does not have an overloaded member 'operator ->'

## Remarks

You need to define `operator->()` to use this pointer operation.

## Examples

The following example generates C2819:

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

C2819 can also occur when using [C++ Stack Semantics for Reference Types](../../dotnet/cpp-stack-semantics-for-reference-types.md). The following example generates C2819:

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
