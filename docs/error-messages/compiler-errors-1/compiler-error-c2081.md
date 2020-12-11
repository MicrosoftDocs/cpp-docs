---
description: "Learn more about: Compiler Error C2081"
title: "Compiler Error C2081"
ms.date: "11/04/2016"
f1_keywords: ["C2081"]
helpviewer_keywords: ["C2081"]
ms.assetid: 7db9892d-364d-4178-a49d-f8398ece09a0
---
# Compiler Error C2081

'identifier' : name in formal parameter list illegal

The identifier caused a syntax error.

This error can be caused by using the old style for the formal parameter list. You must specify the type of formal parameters in the formal parameter list.

The following sample generates C2081:

```c
// C2081.c
void func( int i, j ) {}  // C2081, no type specified for j
```

Possible resolution:

```c
// C2081b.c
// compile with: /c
void func( int i, int j ) {}
```
