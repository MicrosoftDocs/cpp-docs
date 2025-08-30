---
title: "Compiler Warning (level 1) C4549"
description: "Learn more about: Compiler Warning (level 1) C4549"
ms.date: 11/04/2016
f1_keywords: ["C4549"]
helpviewer_keywords: ["C4549"]
---
# Compiler Warning (level 1) C4549

> 'operator' : operator before comma has no effect; did you intend 'operator'?

## Remarks

The compiler detected an ill-formed comma expression.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

The following example generates C4549:

```cpp
// C4549.cpp
// compile with: /W1
#pragma warning (default : 4549)

int main() {
   int i = 0, k = 0;

   if ( i == 0, k )   // C4549
   // try the following line instead
   // if ( i == 0 )
      i++;
}
```
