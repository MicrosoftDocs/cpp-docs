---
description: "Learn more about: Compiler Warning (level 1, Error) C4229"
title: "Compiler Warning (level 1, Error) C4229"
ms.date: "11/04/2016"
f1_keywords: ["C4229"]
helpviewer_keywords: ["C4229"]
---
# Compiler Warning (level 1, Error) C4229

> anachronism used: modifiers on data are ignored

## Remarks

Using a Microsoft modifier such as **`__cdecl`** on a data declaration is an outdated practice.

## Example

```cpp
// C4229.cpp
// compile with: /W1 /LD
int __cdecl counter;   // C4229
```
