---
title: "Compiler Warning (level 4) C4204"
description: "Learn more about: Compiler Warning (level 4) C4204"
ms.date: 11/04/2016
f1_keywords: ["C4204"]
helpviewer_keywords: ["C4204"]
---
# Compiler Warning (level 4) C4204

> nonstandard extension used : non-constant aggregate initializer

## Remarks

With Microsoft extensions (/Ze), you can initialize aggregate types (arrays, structures, unions, and classes) with values that are not constants.

## Example

The following example generates C4204:

```c
// C4204.c
// compile with: /W4
int func1()
{
   return 0;
}
struct S1
{
   int i;
};

int main()
{
   struct S1 s1 = { func1() };   // C4204
   return s1.i;
}
```

Such initializations are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
