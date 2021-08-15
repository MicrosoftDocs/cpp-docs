---
description: "Learn more about: Compiler Error C3132"
title: "Compiler Error C3132"
ms.date: "11/04/2016"
f1_keywords: ["C3132"]
helpviewer_keywords: ["C3132"]
ms.assetid: d54a3d12-336a-4ed0-ad4e-43cddac33b5e
---
# Compiler Error C3132

'function-parameter' : parameter arrays can only be applied to a formal argument of type 'single-dimensional managed array'

The <xref:System.ParamArrayAttribute> attribute was applied to a parameter that was not a single-dimension array.

The following sample generates C3132:

```cpp
// C3132.cpp
// compile with: /clr /c
using namespace System;
void f( [ParamArray] Int32[,] );   // C3132
void g( [ParamArray] Int32[] );   // C3132

void h( [ParamArray] array<Char ^> ^ MyArray );   // OK
```
