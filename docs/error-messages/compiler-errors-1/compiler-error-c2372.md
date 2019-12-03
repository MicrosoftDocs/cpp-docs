---
title: "Compiler Error C2372"
ms.date: "11/04/2016"
f1_keywords: ["C2372"]
helpviewer_keywords: ["C2372"]
ms.assetid: 406bea63-c8d3-4231-9d26-c70af6980840
---
# Compiler Error C2372

'identifier' : redefinition; different types of indirection

The identifier is already defined with a different derived type.

The following sample generates C2326:

```cpp
// C2372.cpp
// compile with: /c
extern int *fp;
extern int fp[];   // C2372
extern int fp2[];   // OK
```
