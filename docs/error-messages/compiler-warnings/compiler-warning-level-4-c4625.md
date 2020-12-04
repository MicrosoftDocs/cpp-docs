---
description: "Learn more about: Compiler Warning (level 4) C4625"
title: "Compiler Warning (level 4) C4625"
ms.date: "11/04/2016"
f1_keywords: ["C4625"]
helpviewer_keywords: ["C4625"]
ms.assetid: 4cc99e50-846c-4784-97da-48b977067851
---
# Compiler Warning (level 4) C4625

'derived class' : copy constructor was implicitly defined as deleted because a base class copy constructor is inaccessible or deleted

A copy constructor was deleted or not accessible in a base class and was therefore not generated for a derived class. Any attempt to copy an object of this type will cause a compiler error.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

The following sample generates C4625 and shows how to fix it.

```cpp
// C4625.cpp
// compile with: /W4 /c
#pragma warning(default : 4625)

struct A {
   A() {}

private:
   A(const A&) {}
};

struct C : private virtual A {};
struct B :  C {};   // C4625 no copy constructor

struct D : A {};
struct E :  D {};   // OK
```
