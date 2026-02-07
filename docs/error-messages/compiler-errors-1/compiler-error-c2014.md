---
title: "Compiler Error C2014"
description: "Learn more about: Compiler Error C2014"
ms.date: 08/25/2025
f1_keywords: ["C2014"]
helpviewer_keywords: ["C2014"]
---
# Compiler Error C2014

> preprocessor command must start as first nonwhite space

## Remarks

The `#` sign of a [preprocessor directive](../../preprocessor/preprocessor-directives.md) must be the first character on a line that is not white space. Ensure that the previous line doesn't contain a trailing escape.

## Example

The following example generates C2014:

```cpp
// C2014.cpp
// compile with: /c

int a; #define A   // C2014

int b;\
#define B   // C2014

int c;
#define C   // OK
```
