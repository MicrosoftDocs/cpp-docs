---
title: "Compiler Warning (level 4) C4211"
description: "Learn more about: Compiler Warning (level 4) C4211"
ms.date: 11/04/2016
f1_keywords: ["C4211"]
helpviewer_keywords: ["C4211"]
---
# Compiler Warning (level 4) C4211

> nonstandard extension used : redefined extern to static

## Remarks

With the default Microsoft extensions (/Ze), you can redefine an **`extern`** identifier as **`static`**.

## Example

The following example generates C4211:

```c
// C4211.c
// compile with: /W4
extern int i;
static int i;   // C4211

int main()
{
}
```

Such redefinitions are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
