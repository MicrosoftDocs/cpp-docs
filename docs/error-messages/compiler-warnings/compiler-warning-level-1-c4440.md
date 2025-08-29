---
title: "Compiler Warning (level 1) C4440"
description: "Learn more about: Compiler Warning (level 1) C4440"
ms.date: 11/04/2016
f1_keywords: ["C4440"]
helpviewer_keywords: ["C4440"]
---
# Compiler Warning (level 1) C4440

> calling convention redefinition from 'calling_convention1' to 'calling_convention2' ignored

## Remarks

An attempt to change the calling convention was ignored.

## Example

The following example generates C4440:

```cpp
// C4440.cpp
// compile with: /W1 /LD /clr
typedef void __clrcall F();
typedef F __cdecl *PFV;   // C4440
```
