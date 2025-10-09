---
title: "Compiler Error C2373"
description: "Learn more about: Compiler Error C2373"
ms.date: 11/04/2016
f1_keywords: ["C2373"]
helpviewer_keywords: ["C2373"]
---
# Compiler Error C2373

> 'identifier' : redefinition; different type modifiers

## Remarks

The identifier is already defined with a different type modifier.

## Example

The following example generates C2373:

```
// C2373.h
void __clrcall func( void );
const int i = 20;
```

And then:

```cpp
// C2373.cpp
// compile with: /c
#include "C2373.h"
extern void __cdecl func( void );   // C2373
extern void __clrcall func( void );   // OK

extern int i;   // C2373
extern const int i;   // OK
```
