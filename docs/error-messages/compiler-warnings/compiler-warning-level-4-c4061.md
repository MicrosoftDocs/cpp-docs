---
description: "Learn more about: Compiler Warning (level 4, off) C4061"
title: "Compiler Warning (level 4, off) C4061"
ms.date: "04/05/2019"
f1_keywords: ["C4061"]
helpviewer_keywords: ["C4061"]
---
# Compiler Warning (level 4, off) C4061

> enumerator '*identifier*' in switch of `enum` '*enumeration*' is not explicitly handled by a `case` label

## Remarks

The specified enumerator *identifier* has no associated handler in a `switch` statement that has a `default` case. The missing case might be an oversight, or it may not be an issue. Whether the missing `case` is an issue in practice depends on if the default case handles the enumerator. For a related warning on unused enumerators in `switch` statements that have no `default` case, see [C4062](compiler-warning-level-4-c4062.md).

This warning is off by default. For more information about how to enable warnings that are off by default, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

The following sample generates C4061; add a case for the missing enumerator to fix:

```cpp
// C4061.cpp
// compile with: /W4
#pragma warning(default : 4061)

enum E { a, b, c };
void func ( E e )
{
   switch(e)
   {
      case a:
      case b:
      default:
         break;
   }   // C4061 c' not handled
}
```

## See also

[Compiler Warning (level 4) C4062](compiler-warning-level-4-c4062.md)
