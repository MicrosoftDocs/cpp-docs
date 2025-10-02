---
title: "Compiler Warning (level 4) C4202"
description: "Learn more about: Compiler Warning (level 4) C4202"
ms.date: 11/04/2016
f1_keywords: ["C4202"]
helpviewer_keywords: ["C4202"]
---
# Compiler Warning (level 4) C4202

> nonstandard extension used : '...': prototype parameter in name list illegal

## Remarks

An old-style function definition contains variable arguments. These definitions generate an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

## Example

The following example generates C4202:

```c
// C4202.c
// compile with: /W4
void func( a, b, ...)   // C4202
int a, b;
{}

int main()
{
}
```
