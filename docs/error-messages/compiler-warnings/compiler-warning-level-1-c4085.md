---
title: "Compiler Warning (level 1) C4085"
description: "Learn more about: Compiler Warning (level 1) C4085"
ms.date: 11/04/2016
f1_keywords: ["C4085"]
helpviewer_keywords: ["C4085"]
---
# Compiler Warning (level 1) C4085

> expected pragma parameter to be 'on' or 'off'

## Remarks

The pragma requires an **on** or **off** parameter. The pragma is ignored.

## Example

The following example generates C4085:

```cpp
// C4085.cpp
// compile with: /W1 /LD
#pragma optimize( "t", maybe )  // C4085
```
