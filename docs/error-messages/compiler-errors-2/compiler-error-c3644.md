---
description: "Learn more about: Compiler Error C3644"
title: "Compiler Error C3644"
ms.date: "11/04/2016"
f1_keywords: ["C3644"]
helpviewer_keywords: ["C3644"]
ms.assetid: 2e3f6c41-3ec5-4a01-82bc-f11b61ebe68e
---
# Compiler Error C3644

'function' : cannot compile the function to generate managed code

The presence of some keywords in a function will cause the function to be compiled to native.

The following sample generates C3644:

```cpp
// C3644.cpp
// compile with: /clr
// processor: x86

void __clrcall Func2(int i) {
   __asm {}   // C3644
}
```
