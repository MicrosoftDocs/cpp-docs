---
title: "Compiler Error C2375"
description: "Learn more about: Compiler Error C2375"
ms.date: 11/04/2016
f1_keywords: ["C2375"]
helpviewer_keywords: ["C2375"]
---
# Compiler Error C2375

> 'function' : redefinition; different linkage

## Remarks

The function is already declared with a different linkage specifier.

## Example

The following example generates C2375:

```cpp
// C2375.cpp
// compile with: /Za /c
extern void func( void );
static void func( void );   // C2375
static void func2( void );   // OK
```
