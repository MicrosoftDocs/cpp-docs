---
title: "Compiler Error C2732"
description: "Learn more about: Compiler Error C2732"
ms.date: 11/04/2016
f1_keywords: ["C2732"]
helpviewer_keywords: ["C2732"]
---
# Compiler Error C2732

> linkage specification contradicts earlier specification for 'function'

## Remarks

The function is already declared with a different linkage specifier.

This error can be caused by include files with different linkage specifiers.

To fix this error, change the **`extern`** statements so that the linkages agree. In particular, do not wrap `#include` directives in `extern "C"` blocks.

## Example

The following example generates C2732:

```cpp
// C2732.cpp
extern void func( void );   // implicit C++ linkage
extern "C" void func( void );   // C2732
```
