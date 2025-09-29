---
title: "Compiler Error C3874"
description: "Learn more about: Compiler Error C3874"
ms.date: 11/04/2016
f1_keywords: ["C3874"]
helpviewer_keywords: ["C3874"]
---
# Compiler Error C3874

> return type of 'function' should be 'int' instead of 'type'

## Remarks

A function does not have the return type that was expected by the compiler.

## Example

The following example generates C3874:

```cpp
// C3874b.cpp
double main()
{   // C3874
}
```
