---
title: "Compiler Error C3736"
description: "Learn more about: Compiler Error C3736"
ms.date: 11/04/2016
f1_keywords: ["C3736"]
helpviewer_keywords: ["C3736"]
---
# Compiler Error C3736

> 'event': must be a method or, in the case of managed events, optionally a data member

## Remarks

Native and COM events must be methods. .NET events can also be data members.

## Example

The following example generates C3736:

```cpp
// C3736.cpp
struct A {
   __event int e();
};

struct B {
   int f;   // C3736
   // The following line resolves the error.
   // int f();
   B(A* a) {
      __hook(&A::e, a, &B::f);
   }
};

int main() {
}
```
