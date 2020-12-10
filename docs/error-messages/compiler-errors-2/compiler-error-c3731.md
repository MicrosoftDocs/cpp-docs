---
description: "Learn more about: Compiler Error C3731"
title: "Compiler Error C3731"
ms.date: "11/04/2016"
f1_keywords: ["C3731"]
helpviewer_keywords: ["C3731"]
ms.assetid: 45f89fcd-464c-4bc8-8a42-edcb5416d26c
---
# Compiler Error C3731

incompatible event 'function1' and handler 'function2'; event source and event handler must be the same type

The event source and event receiver must have the same type (for example `native` vs. `com` types). To fix this error, make the types of the event source and the event handler match.

The following sample generates C3731:

```cpp
// C3731.cpp
// compile with: /clr
#using <mscorlib.dll>
[event_source(native)]
struct A {
   __event void MyEvent();
};

[event_receiver(managed)]
// try the following line instead
// [event_receiver(native)]
struct B {
   void func();
   B(A a) {
      __hook(&A::MyEvent, &a, &B::func);   // C3731
   }
};

int main() {
}
```
