---
title: "Compiler Warning (level 4, off) C4296"
description: "Learn more about: Compiler Warning (level 4, off) C4296"
ms.date: 11/04/2016
f1_keywords: ["C4296"]
helpviewer_keywords: ["C4296"]
---
# Compiler Warning (level 4, off) C4296

> 'operator' : expression is always false

## Remarks

An unsigned variable was used in a comparison operation with zero.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

The following example generates C4296:

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
