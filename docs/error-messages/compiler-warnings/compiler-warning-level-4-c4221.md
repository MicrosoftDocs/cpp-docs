---
title: "Compiler Warning (level 4) C4221"
description: "Learn more about: Compiler Warning (level 4) C4221"
ms.date: 11/04/2016
f1_keywords: ["C4221"]
helpviewer_keywords: ["C4221"]
---
# Compiler Warning (level 4) C4221

> nonstandard extension used : 'identifier' : cannot be initialized using address of automatic variable

## Remarks

With the default Microsoft extensions (/Ze), you can initialize an aggregate type (**array**, **`struct`**, or **`union`**) with the address of a local (automatic) variable.

## Example

The following example generates C4221:

```c
// C4221.c
// compile with: /W4
struct S
{
   int *i;
};

void func()
{
   int j;
   struct S s1 = { &j };   // C4221
}

int main()
{
}
```

Such initializations are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
