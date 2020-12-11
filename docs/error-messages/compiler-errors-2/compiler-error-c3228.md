---
description: "Learn more about: Compiler Error C3228"
title: "Compiler Error C3228"
ms.date: "11/04/2016"
f1_keywords: ["C3228"]
helpviewer_keywords: ["C3228"]
ms.assetid: 9015adf9-17b0-4312-b4a7-c1f33e4126f4
---
# Compiler Error C3228

'function' : generic type argument for 'param' cannot be 'type', it must be a valuetype or handle type

An incorrect type was passed as a generic type argument.

The following sample generates C3228:

```cpp
// C3228.cpp
// compile with: /clr
class A {};

value class B {};

generic <class T>
void Test() {}

ref class C {
public:
   generic <class T>
   static void f() {}
};

int main() {
   C::f<A>();   // C3228
   C::f<B>();   // OK

   Test<C>();   // C3228
   Test<C ^>();   // OK
}
```
