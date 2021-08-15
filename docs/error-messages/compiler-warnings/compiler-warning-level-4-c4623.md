---
description: "Learn more about: Compiler Warning (level 4) C4623"
title: "Compiler Warning (level 4) C4623"
ms.date: "11/04/2016"
f1_keywords: ["C4623"]
helpviewer_keywords: ["C4623"]
ms.assetid: e630d8d0-f6ea-469c-a74f-07b027587225
---
# Compiler Warning (level 4) C4623

'`derived class`' : default constructor was implicitly defined as deleted because a base class default constructor is inaccessible or deleted

A constructor was not accessible in a base class and was not generated for the derived class. Any attempt to create an object of this type on the stack will cause a compiler error.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

The following sample generates C4623.

```cpp
// C4623.cpp
// compile with: /W4
#pragma warning(default : 4623)
class B {
   B();
};

class C {
public:
   C();
};

class D : public B {};   // C4623 - to fix, make B's constructor public
class E : public C {};   // OK - class C constructor is public

int main() {
   // D d;  will cause an error
}
```
