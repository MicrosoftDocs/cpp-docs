---
description: "Learn more about: Compiler Error C2333"
title: "Compiler Error C2333"
ms.date: "11/04/2016"
f1_keywords: ["C2333"]
helpviewer_keywords: ["C2333"]
ms.assetid: 2636fc1e-d3e7-4e68-8628-3c81a99ba813
---
# Compiler Error C2333

'function' : error in function declaration; skipping function body

This error occurs after another error, for member functions defined inside their class.

The following sample generates C2333:

```cpp
// C2333.cpp
struct s1 {
   s1(s1) {}   // C2333
};
```
