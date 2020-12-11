---
description: "Learn more about: Compiler Warning (level 4) C4213"
title: "Compiler Warning (level 4) C4213"
ms.date: "11/04/2016"
f1_keywords: ["C4213"]
helpviewer_keywords: ["C4213"]
ms.assetid: 59fc3f61-ebd2-499e-99d7-f57bec11eda1
---
# Compiler Warning (level 4) C4213

nonstandard extension used : cast on l-value

With the default Microsoft extensions (/Ze), you can use casts on the left side of an assignment statement.

## Example

```c
// C4213.c
// compile with: /W4
void *a;
void f()
{
   int   i[3];
   a = &i;
   *(( int * )a )++ = 3;  // C4213
}

int main()
{
}
```

Such casts are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
