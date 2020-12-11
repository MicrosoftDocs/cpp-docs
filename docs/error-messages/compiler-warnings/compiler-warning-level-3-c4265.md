---
description: "Learn more about: Compiler Warning (level 3) C4265"
title: "Compiler Warning (level 3) C4265"
ms.date: "11/04/2016"
f1_keywords: ["C4265"]
helpviewer_keywords: ["C4265"]
ms.assetid: 20547159-6f30-4cc4-83aa-927884c8bb4c
---
# Compiler Warning (level 3) C4265

'class' : class has virtual functions, but destructor is not virtual

When a class has virtual functions but a nonvirtual destructor, objects of the type might not be destroyed properly when the class is destroyed through a base class pointer.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4265:

```cpp
// C4265.cpp
// compile with: /W3 /c
#pragma warning(default : 4265)
class B
{
public:
   virtual void vmf();

   ~B();
   // try the following line instead
   // virtual ~B();
};   // C4265

int main()
{
   B b;
}
```
