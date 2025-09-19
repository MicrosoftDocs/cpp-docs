---
title: "Compiler Warning (level 1) C4237"
description: "Learn more about: Compiler Warning (level 1) C4237"
ms.date: 11/04/2016
f1_keywords: ["C4237"]
helpviewer_keywords: ["C4237"]
---
# Compiler Warning (level 1) C4237

> 'keyword' keyword is not yet supported, but reserved for future use

## Remarks

A keyword in the C++ specification is not implemented in the Microsoft C++ compiler, but the keyword is not available as a user-defined symbol.

## Example

The following example generates C4237:

```cpp
// C4237.cpp
// compile with: /W1 /c
int export;   // C4237
```
