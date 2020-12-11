---
description: "Learn more about: Compiler Warning (level 4) C4296"
title: "Compiler Warning (level 4) C4296"
ms.date: "11/04/2016"
f1_keywords: ["C4296"]
helpviewer_keywords: ["C4296"]
ms.assetid: 9d99aafe-f6bd-4ee0-b8d0-98ce5712274d
---
# Compiler Warning (level 4) C4296

'operator' : expression is always false

An unsigned variable was used in a comparison operation with zero.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4296:

```cpp
// C4296.cpp
// compile with: /W4
#pragma warning(default : 4296)
int main()
{
   unsigned int u = 9;
   if (u < 0)    // C4296
      u++;
   if (u >= 0)   // C4296
      u++;
}
```
