---
description: "Learn more about: Compiler Warning (level 1) C4928"
title: "Compiler Warning (level 1) C4928"
ms.date: "11/04/2016"
f1_keywords: ["C4928"]
helpviewer_keywords: ["C4928"]
ms.assetid: 77235d7f-9360-45cb-8348-d148c605c4a3
---
# Compiler Warning (level 1) C4928

illegal copy-initialization; more than one user-defined conversion has been implicitly applied

More than one user-defined conversion routine was found. The compiler executed the code in all such routines.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4928:

```cpp
// C4928.cpp
// compile with: /W1
#pragma warning(default: 4928)

struct I
{
};

struct I1 : I
{
};

struct I2 : I
{
};

template <class T>
struct Ptr
{
   operator T*()
   {
      return 0;
   }

   Ptr()
   {
   }

   Ptr(I*)
   {
   }
};

int main()
{
   Ptr<I1> p1;
   Ptr<I2> p2 = p1;   // C4928
   // try one of the following two lines to resolve this error
   // Ptr<I2> p2(p1);
   // Ptr<I2> p2 = (I1*) p1;
}
```
