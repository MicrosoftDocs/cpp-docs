---
title: "Compiler Warning (level 4) C4232"
description: "Learn more about: Compiler Warning (level 4) C4232"
ms.date: 11/04/2016
f1_keywords: ["C4232"]
helpviewer_keywords: ["C4232"]
---
# Compiler Warning (level 4) C4232

> nonstandard extension used : 'identifier' : address of dllimport 'dllimport' is not static, identity not guaranteed

## Remarks

Under Microsoft extensions (/Ze), you can give a nonstatic value as the address of a function declared with the **`dllimport`** modifier. Under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), this causes an error.

## Example

The following example generates C4232:

```c
// C4232.c
// compile with: /W4 /Ze /c
int __declspec(dllimport) f();
int (*pfunc)() = &f;   // C4232
```
