---
title: "Compiler Warning (level 3) C4357"
description: "Learn more about: Compiler Warning (level 3) C4357"
ms.date: 11/04/2016
f1_keywords: ["C4357"]
helpviewer_keywords: ["C4357"]
---
# Compiler Warning (level 3) C4357

> param array argument in formal argument list for delegate 'del' ignored when generating 'function'

## Remarks

The `ParamArray` attribute was ignored, and `function` cannot be called with variable arguments.

## Example

The following example generates C4357:

```cpp
// C4357.cpp
// compile with: /clr /W3 /c
using namespace System;
public delegate void f(int i, ... array<Object^>^ varargs);   // C4357

public delegate void g(int i, array<Object^>^ varargs);   // OK
```
