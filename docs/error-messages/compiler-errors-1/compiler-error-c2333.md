---
title: "Compiler Error C2333"
description: "Learn more about: Compiler Error C2333"
ms.date: 11/04/2016
f1_keywords: ["C2333"]
helpviewer_keywords: ["C2333"]
---
# Compiler Error C2333

> 'function' : error in function declaration; skipping function body

## Remarks

This error occurs after another error, for member functions defined inside their class.

## Example

The following example generates C2333:

```cpp
// C2333.cpp
struct s1 {
   s1(s1) {}   // C2333
};
```
