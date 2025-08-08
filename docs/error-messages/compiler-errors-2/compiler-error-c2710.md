---
title: "Compiler Error C2710"
description: "Learn more about: Compiler Error C2710"
ms.date: 11/04/2016
f1_keywords: ["C2710"]
helpviewer_keywords: ["C2710"]
---
# Compiler Error C2710

> 'construct' : '__declspec(modifier)' can only be applied to a function returning a pointer

## Remarks

A function whose return value is a pointer is the only construct to which `modifier` can be applied.

## Example

The following example generates C2710:

```cpp
// C2710.cpp
__declspec(restrict) void f();   // C2710
// try the following line instead
__declspec(restrict) int * g();
```
