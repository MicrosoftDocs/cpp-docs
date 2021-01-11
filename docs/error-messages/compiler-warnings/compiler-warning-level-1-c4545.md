---
description: "Learn more about: Compiler Warning (level 1) C4545"
title: "Compiler Warning (level 1) C4545"
ms.date: "11/04/2016"
f1_keywords: ["C4545"]
helpviewer_keywords: ["C4545"]
ms.assetid: 43f8f34f-ed46-4661-95c0-c588c577ff73
---
# Compiler Warning (level 1) C4545

expression before comma evaluates to a function which is missing an argument list

The compiler detected an ill-formed comma expression.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

The following sample generates C4545:

```cpp
// C4545.cpp
// compile with: /W1
#pragma warning (default : 4545)

void f() { }

int main()
{
   *(&f), 10;   // C4545
   // try the following line instead
   // (*(&f))(), 10;
}
```
