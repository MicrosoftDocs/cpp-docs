---
description: "Learn more about: Compiler Warning (level 3) C4557"
title: "Compiler Warning (level 3) C4557"
ms.date: "11/04/2016"
f1_keywords: ["C4557"]
helpviewer_keywords: ["C4557"]
ms.assetid: 7d9db716-03b2-4ee5-9b09-ba8aa5aa7e4c
---
# Compiler Warning (level 3) C4557

'__assume' contains effect 'effect'

The value passed to an [__assume](../../intrinsics/assume.md) statement2 was modified.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4557:

```cpp
// C4557.cpp
// compile with: /W3
#pragma warning(default : 4557)
int main()
{
   int i;
   __assume(i++);   // C4557
}
```
