---
description: "Learn more about: Compiler Warning (level 1) C4548"
title: "Compiler Warning (level 1) C4548"
ms.date: "11/04/2016"
f1_keywords: ["C4548"]
helpviewer_keywords: ["C4548"]
ms.assetid: 2cee817e-e463-4d90-bbd2-de120d48c101
---
# Compiler Warning (level 1) C4548

expression before comma has no effect; expected expression with side-effect

The compiler detected an ill-formed comma expression.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

The following sample generates C4548:

```cpp
// C4548.cpp
// compile with: /W1
#pragma warning (default : 4548)
int main()
{
   int i = 0, k = 0;

   if ( i, k )   // C4548
   // try the following line instead
   // if ( i = 0, k )
      i++;
}
```
