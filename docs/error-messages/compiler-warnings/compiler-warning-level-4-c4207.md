---
title: "Compiler Warning (level 4) C4207"
description: "Learn more about: Compiler Warning (level 4) C4207"
ms.date: 11/04/2016
f1_keywords: ["C4207"]
helpviewer_keywords: ["C4207"]
---
# Compiler Warning (level 4) C4207

> nonstandard extension used : extended initializer form

## Remarks

With Microsoft extensions (/Ze), you can initialize an unsized array of **`char`** using a string within braces.

## Example

The following example generates C4207:

```c
// C4207.c
// compile with: /W4
char c[] = { 'a', 'b', "cdefg" }; // C4207

int main()
{
}
```

Such initializations are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
