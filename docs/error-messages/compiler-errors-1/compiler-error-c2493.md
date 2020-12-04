---
description: "Learn more about: Compiler Error C2493"
title: "Compiler Error C2493"
ms.date: "11/04/2016"
f1_keywords: ["C2493"]
helpviewer_keywords: ["C2493"]
ms.assetid: 68316cd5-682b-49c3-b6ea-23c4e5d296cf
---
# Compiler Error C2493

illegal form of __based

A **`__based`** expression must be based on a pointer.

The following sample generates C2493:

```cpp
// C2493.cpp
// compile with: /c
char mybase;
int __based(mybase) ptr;   // C2493

// OK
char * mybase;
int __based(mybase) * ptr;
```
