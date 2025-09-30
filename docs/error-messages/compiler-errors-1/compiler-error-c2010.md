---
title: "Compiler Error C2010"
description: "Learn more about: Compiler Error C2010"
ms.date: 11/04/2016
f1_keywords: ["C2010"]
helpviewer_keywords: ["C2010"]
---
# Compiler Error C2010

> 'character' : unexpected in macro formal parameter list

## Remarks

The character is used incorrectly in the formal parameter list of a macro definition. Remove the character to resolve the error.

## Example

The following example generates C2010:

```cpp
// C2010.cpp
// compile with: /c
#define mymacro(a|) (2*a)   // C2010
#define mymacro(a) (2*a)   // OK
```
