---
title: "Compiler Error C3132"
description: "Learn more about: Compiler Error C3132"
ms.date: 11/04/2016
f1_keywords: ["C3132"]
helpviewer_keywords: ["C3132"]
---
# Compiler Error C3132

> 'function-parameter' : parameter arrays can only be applied to a formal argument of type 'single-dimensional managed array'

## Remarks

The <xref:System.ParamArrayAttribute> attribute was applied to a parameter that was not a single-dimension array.

## Example

The following example generates C3132:

```cpp
// C3132.cpp
// compile with: /clr /c
using namespace System;
void f( [ParamArray] Int32[,] );   // C3132
void g( [ParamArray] Int32[] );   // C3132

void h( [ParamArray] array<Char ^> ^ MyArray );   // OK
```
