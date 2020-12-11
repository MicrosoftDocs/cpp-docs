---
description: "Learn more about: Compiler Error C2682"
title: "Compiler Error C2682"
ms.date: "11/04/2016"
f1_keywords: ["C2682"]
helpviewer_keywords: ["C2682"]
ms.assetid: 30c6a7c4-f5f7-4fe8-81a8-c48938521ab4
---
# Compiler Error C2682

cannot use casting_operator to convert from 'type1' to 'type2'

A casting operator tried to convert between incompatible types. For example, you cannot use the [dynamic_cast](../../cpp/dynamic-cast-operator.md) operator to convert a pointer to a reference. The **`dynamic_cast`** operator cannot be used to cast away qualifiers. All qualifiers on the types must match.

You can use the **`const_cast`** operator to remove attributes such as **`const`**, **`volatile`**, or **`__unaligned`**.

The following sample generates C2682:

```cpp
// C2682.cpp
class A { virtual void f(); };
class B: public A {};

void g(A* pa) {
    B& rb = dynamic_cast<B&>(pa); // C2682
}
```

The following sample generates C2682:

```cpp
// C2682b.cpp
// compile with: /clr
ref struct R{};
ref struct RR : public R{};
ref struct H {
   RR^ r ;
   short s;
   int i;
};

int main() {
   H^ h = gcnew H();
   interior_ptr<int>lr = &(h->i);
   interior_ptr<short>ssr = safe_cast<interior_ptr<short> >(lr);   // C2682
   interior_ptr<short>ssr = reinterpret_cast<interior_ptr<short> >(lr);   // OK
}
```
