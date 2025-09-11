---
title: "Compiler Warning (level 1) C4230"
description: "Learn more about: Compiler Warning (level 1) C4230"
ms.date: 11/04/2016
f1_keywords: ["C4230"]
helpviewer_keywords: ["C4230"]
---
# Compiler Warning (level 1) C4230

> anachronism used : modifiers/qualifiers interspersed; qualifier ignored

## Remarks

Using a qualifier before a Microsoft modifier such as **`__cdecl`** is an outdated practice.

## Example

The following example generates C4230:

```cpp
// C4230.cpp
// compile with: /W1 /LD
int __cdecl const function1();   // C4230 const ignored
```
