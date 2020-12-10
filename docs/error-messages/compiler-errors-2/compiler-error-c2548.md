---
description: "Learn more about: Compiler Error C2548"
title: "Compiler Error C2548"
ms.date: "11/04/2016"
f1_keywords: ["C2548"]
helpviewer_keywords: ["C2548"]
ms.assetid: 01e9c835-9bf3-4020-9295-5ee448c519f3
---
# Compiler Error C2548

'class::member' : missing default parameter for parameter parameter

The default parameter list is missing a parameter. If you supply a default parameter anywhere in a parameter list, you must define default parameters for all subsequent parameters.

## Example

The following sample generates C2548:

```cpp
// C2548.cpp
// compile with: /c
void func( int = 1, int, int = 3);  // C2548

// OK
void func2( int, int, int = 3);
void func3( int, int = 2, int = 3);
```
