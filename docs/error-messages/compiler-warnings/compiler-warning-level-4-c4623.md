---
description: "Learn more about: Compiler Warning (level 4) C4623"
title: "Compiler Warning (level 4) C4623"
ms.date: 10/27/2022
f1_keywords: ["C4623"]
helpviewer_keywords: ["C4623"]
ms.assetid: e630d8d0-f6ea-469c-a74f-07b027587225
---
# Compiler Warning (level 4) C4623

> '`derived class`' : default constructor was implicitly defined as deleted

Because the default constructor is deleted or inaccessible in a base class, the compiler can't generate a default constructor for the derived class. Attempts to create an object of this type by using the default constructor (for example, in an array) cause a compiler error.

This warning is off by default. For more information, see [Compiler warnings that are off by default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

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
   // D d;  // Error C2280
}
```
