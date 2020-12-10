---
description: "Learn more about: Compiler Error C3145"
title: "Compiler Error C3145"
ms.date: "11/04/2016"
f1_keywords: ["C3145"]
helpviewer_keywords: ["C3145"]
ms.assetid: f165c874-0f51-45c7-85e8-ebe321cbc168
---
# Compiler Error C3145

'object' : global or static variable may not have managed or WinRT type 'type'

You can only define CLR or WinRT objects within function scope.

The following sample generates C3145 and shows how to fix it:

```cpp
// C3145.cpp
// compile with: /clr
using namespace System;
ref class G {};

G ^ ptr;   // C3145
G ^ ptr2 = gcnew G;   // C3145

ref class GlobalObjects {
public:
   static G ^ ptr;   // OK
   static G ^ ptr2 = gcnew G;   // OK
};

int main() {
   G ^ ptr;   // OK
   G ^ ptr2 = gcnew G;   // OK
}
```

The following sample generates C3145:

```cpp
// C3145b.cpp
// compile with: /clr
ref class MyClass {
public:
   static int data;
};

interior_ptr<int> p = &(MyClass::data);   // C3145

void Test(interior_ptr<int> x) {}

int main() {
   MyClass ^ h_MyClass = gcnew MyClass;
   interior_ptr<int> p = &(h_MyClass->data);
}
```
