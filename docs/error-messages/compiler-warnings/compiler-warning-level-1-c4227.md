---
title: "Compiler Warning (level 1) C4227"
description: "Learn more about: Compiler Warning (level 1) C4227"
ms.date: 11/04/2016
f1_keywords: ["C4227"]
helpviewer_keywords: ["C4227"]
---
# Compiler Warning (level 1) C4227

> anachronism used : qualifiers on reference are ignored

## Remarks

Using qualifiers like **`const`** or **`volatile`** with C++ references is an outdated practice.

## Example

```cpp
// C4227.cpp
// compile with: /W1 /c
int j = 0;
int &const i = j;   // C4227
```
