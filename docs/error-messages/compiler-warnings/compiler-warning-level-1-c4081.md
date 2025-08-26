---
title: "Compiler Warning (level 1) C4081"
description: "Learn more about: Compiler Warning (level 1) C4081"
ms.date: 11/04/2016
f1_keywords: ["C4081"]
helpviewer_keywords: ["C4081"]
---
# Compiler Warning (level 1) C4081

> expected 'token1'; found 'token2'

## Remarks

The compiler expected a different token in this context.

## Example

```cpp
// C4081.cpp
// compile with: /W1 /LD
#pragma optimize) "l", on )   // C4081
```
