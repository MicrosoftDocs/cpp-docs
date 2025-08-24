---
title: "Compiler Warning (level 4) C4019"
description: "Learn more about: Compiler Warning (level 4) C4019"
ms.date: 11/04/2016
f1_keywords: ["C4019"]
helpviewer_keywords: ["C4019"]
---
# Compiler Warning (level 4) C4019

> empty statement at global scope

## Remarks

A semicolon at global scope isn't preceded by a statement.

This warning may be fixed if you remove the extra semicolon.

> [!Important] 
> This warning only applies to C programs.

## Example

```c
// C4019.c
// compile with: /Za /W4
#define declint( varname ) int varname;
declint( a );   // C4019, int a;;
declint( b )   // OK, int b;

int main()
{
}
```
