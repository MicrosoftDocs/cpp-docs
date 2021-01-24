---
description: "Learn more about: Compiler Warning (level 1) C4358"
title: "Compiler Warning (level 1) C4358"
ms.date: "11/04/2016"
f1_keywords: ["C4358"]
helpviewer_keywords: ["C4358"]
ms.assetid: a9848f84-14b3-405e-81bf-ee3e91a51511
---
# Compiler Warning (level 1) C4358

'operator': return type of combined delegates is not 'void'; returned value is undefined

Two delegates were combined and the return value is not void. If two delegates with non-void return values are combined, the compiler will not be able to do a proper assignment if the return value of the delegate is used.

The following sample generates C4358:

```cpp
// C4358.cpp
// compile with: /clr /W1
delegate int D();
delegate void E();

ref class X {
   int i;
public:
   X(int ii) : i(ii) {}
   int f() {
      return i;
   }
};

ref class Y {
   int i;
public:
   Y() {}
   void g() {}
};

int main() {
   D^ d = gcnew D(gcnew X(1), &X::f);
   D^ d2 = gcnew D(gcnew X(2), &X::f);

   d += d2;   // C4358
   int j = d();   // return value indeterminate

   E^ e = gcnew E(gcnew Y, &Y::g);
   E^ e2 = gcnew E(gcnew Y, &Y::g);
   e += e2;   // OK
}
```
