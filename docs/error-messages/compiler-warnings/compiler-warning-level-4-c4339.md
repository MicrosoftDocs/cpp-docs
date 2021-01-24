---
description: "Learn more about: Compiler Warning (level 4) C4339"
title: "Compiler Warning (level 4) C4339"
ms.date: "11/04/2016"
f1_keywords: ["C4339"]
helpviewer_keywords: ["C4339"]
ms.assetid: 5b83353d-7777-4afb-8476-3c368349028c
---
# Compiler Warning (level 4) C4339

'type' : use of undefined type detected in WinRT or CLR meta-data - use of this type may lead to a runtime exception

A type was not defined in code that was compiled for Windows Runtime or the common language runtime. Define the type to avoid a possible runtime exception.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4339 and shows how to fix it:

```cpp
// C4339.cpp
// compile with: /W4 /clr /c
// C4339 expected
#pragma warning(default : 4339)

// Delete the following line to resolve.
class A;

// Uncomment the following line to resolve.
// class A{};

class X {
public:
   X() {}

   virtual A *mf() {
      return 0;
   }
};

X * f() {
   return new X();
}
```
