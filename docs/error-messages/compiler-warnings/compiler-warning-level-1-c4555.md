---
description: "Learn more about: Compiler Warning (level 1) C4555"
title: "Compiler Warning (level 1) C4555"
ms.date: "11/04/2016"
f1_keywords: ["C4555"]
helpviewer_keywords: ["C4555"]
ms.assetid: 50b286c1-f7bf-4292-b1fa-baaac9538611
---
# Compiler Warning (level 1) C4555

expression has no effect; expected expression with side-effect

This warning informs you when an expression has no effect.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

For example:

```cpp
// C4555.cpp
// compile with: /W1
#pragma warning(default:4555)

void func1()
{
   1;   // C4555
}

void func2()
{
   int x;
   x;   // C4555
}

int main()
{
}
```
