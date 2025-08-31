---
title: "Compiler Warning (level 3) C4619"
description: "Learn more about: Compiler Warning (level 3) C4619"
ms.date: 11/04/2016
f1_keywords: ["C4619"]
helpviewer_keywords: ["C4619"]
---
# Compiler Warning (level 3) C4619

> #pragma warning : there is no warning number 'number'

## Remarks

An attempt was made to disable a warning that does not exist.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

The following example generates C4619:

```cpp
// C4619.cpp
// compile with: /W3 /c
#pragma warning(default : 4619)
#pragma warning(disable : 4354)   // C4619, C4354 does not exist
```
