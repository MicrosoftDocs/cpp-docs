---
description: "Learn more about: Compiler Warning (level 4) C4626"
title: "Compiler Warning (level 4) C4626"
ms.date: "11/04/2016"
f1_keywords: ["C4626"]
helpviewer_keywords: ["C4626"]
ms.assetid: 7f822ff4-a4a3-4f17-b45b-e8b7b4659a14
---
# Compiler Warning (level 4) C4626

'derived class' : assignment operator was implicitly defined as deleted because a base class assignment operator is inaccessible or deleted

An assignment operator was deleted or not accessible in a base class and was therefore not generated for a derived class. Any attempt to assign objects of this type will cause a compiler error.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4626 and shows how to fix it:

```
// C4626
// compile with: /W4
#pragma warning(default : 4626)
class B
{
// public:
   B& operator = (const B&)
   {
      return *this;
   }
};

class D : public B
{

}; // C4626 - to fix, make B's copy constructor public

int main()
{
   D m;
   D n;
   // m = n;   // this line will cause an error
}
```
