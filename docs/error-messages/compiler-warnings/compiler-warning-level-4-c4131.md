---
title: "Compiler Warning (level 4) C4131"
description: "Learn more about: Compiler Warning (level 4) C4131"
ms.date: 11/04/2016
f1_keywords: ["C4131"]
helpviewer_keywords: ["C4131"]
---
# Compiler Warning (level 4) C4131

> 'function' : uses old-style declarator

## Remarks

The specified function declaration is not in prototype form.

Old-style function declarations should be converted to prototype form.

## Example

The following example shows an old-style function declaration:

```c
// C4131.c
// compile with: /W4 /c
void addrec( name, id ) // C4131 expected
char *name;
int id;
{ }
```

The following example shows a prototype form:

```c
void addrec( char *name, int id )
{ }
```
