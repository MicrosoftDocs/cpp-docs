---
description: "Learn more about: Compiler Error C3185"
title: "Compiler Error C3185"
ms.date: "11/04/2016"
f1_keywords: ["C3185"]
helpviewer_keywords: ["C3185"]
ms.assetid: 5bf96279-043c-4981-9d02-b4550071b192
---
# Compiler Error C3185

'typeid' used on managed or WinRT type 'type', use 'operator' instead

You cannot apply the [typeid](../../cpp/typeid-operator.md) operator to a managed or WinRT type; use [typeid](../../extensions/typeid-cpp-component-extensions.md) instead.

The following sample generates C3185 and shows how to fix it:

```cpp
// C3185a.cpp
// compile with: /clr
ref class Base {};
ref class Derived : public Base {};

int main() {
   Derived ^ pd = gcnew Derived;
   Base ^pb = pd;
   const type_info & t1 = typeid(pb);   // C3185
   System::Type ^ MyType = Base::typeid;   // OK
};
```
