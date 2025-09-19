---
title: "Compiler Warning (level 1) C4076"
description: "Learn more about: Compiler Warning (level 1) C4076"
ms.date: 11/04/2016
f1_keywords: ["C4076"]
helpviewer_keywords: ["C4076"]
---
# Compiler Warning (level 1) C4076

> '*type modifier*' : can not be used with type '*typename*'

## Remarks

A type modifier, whether it is **`signed`** or **`unsigned`**, cannot be used with a non-integer type. *type modifier* is ignored.

## Example

The following example generates C4076; to fix it, remove the **`unsigned`** type modifier:

```cpp
// C4076.cpp
// compile with: /W1 /LD
unsigned double x;   // C4076
```
