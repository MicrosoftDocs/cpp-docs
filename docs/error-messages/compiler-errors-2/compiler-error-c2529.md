---
description: "Learn more about: Compiler Error C2529"
title: "Compiler Error C2529"
ms.date: "11/04/2016"
f1_keywords: ["C2529"]
helpviewer_keywords: ["C2529"]
ms.assetid: 73a99e55-b91e-488d-9b72-cc80faaeb436
---
# Compiler Error C2529

'name' : reference to reference is illegal

This error may be fixed by using pointer syntax and declaring a reference to a pointer.

The following sample generates C2529:

```cpp
// C2529.cpp
// compile with: /c
int i;
int &ri = i;
int &(&rri) = ri;   // C2529
```
