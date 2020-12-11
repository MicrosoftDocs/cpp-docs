---
description: "Learn more about: Compiler Error C2843"
title: "Compiler Error C2843"
ms.date: "11/04/2016"
f1_keywords: ["C2843"]
helpviewer_keywords: ["C2843"]
ms.assetid: 9d3f2ac4-eea5-4fed-abeb-e752f442bfcc
---
# Compiler Error C2843

'member' : cannot take the address of a non-static data member or method of a managed or WinRT type

An instance is needed to take the address of nonstatic data members of a managed or WinRT class or interface.

The following sample generates C2843 and shows how to fix it:

```cpp
// C2843_2.cpp
// compile with: /clr
public ref class C {
public:
   int m_i;
};

ref struct MyStruct {
   static void sf() {}
   void f() {}
};

int main() {
   MyStruct ^ps = gcnew MyStruct;
   void (__clrcall MyStruct::*F1)() = & MyStruct::f;   // C2843
   void (__clrcall MyStruct::*F2)() = & ps->f;   // C2843
   void (__clrcall MyStruct::*F3)();   // C2843

   void (__clrcall *F5)() = MyStruct::sf;   // OK
   void (__clrcall *F6)() = & ps->sf;   // OK

   interior_ptr<int> i = &C::m_i; // C2843
   C ^x = gcnew C();
   interior_ptr<int> ii = &x->m_i;
}
```
