---
description: "Learn more about: Compiler Error C2448"
title: "Compiler Error C2448"
ms.date: "11/04/2016"
f1_keywords: ["C2448"]
helpviewer_keywords: ["C2448"]
ms.assetid: e255df3c-f861-4b4d-a193-8768cef061a5
---
# Compiler Error C2448

'identifier' : function-style initializer appears to be a function definition

The function definition is incorrect.

This error can be caused by an old-style C-language formal list.

The following sample generates C2448:

```cpp
// C2448.cpp
void func(c)
   int c;
{}   // C2448
```
