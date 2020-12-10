---
description: "Learn more about: Compiler Error C3160"
title: "Compiler Error C3160"
ms.date: "11/04/2016"
f1_keywords: ["C3160"]
helpviewer_keywords: ["C3160"]
ms.assetid: a250c433-8adf-43b9-8dee-c3794e09b0a5
---
# Compiler Error C3160

'pointer' : a data member of a managed or WinRT class cannot have this type

Interior garbage collection pointers may point to the interior of a managed or WinRT class. Because they are slower than whole-object pointers and require special handling by the garbage collector, you cannot declare interior managed pointers as members of a class.

The following sample generates C3160:

```cpp
// C3160.cpp
// compile with: /clr
ref struct A {
   // cannot create interior pointers inside a class
   interior_ptr<int> pg;   // C3160
   int g;   // OK
   int* pg2;   // OK
};

int main() {
   interior_ptr<int> pg2;   // OK
}
```
