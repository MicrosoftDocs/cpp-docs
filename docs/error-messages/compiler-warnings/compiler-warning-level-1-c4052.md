---
description: "Learn more about: Compiler Warning (level 1) C4052"
title: "Compiler Warning (level 1) C4052"
ms.date: "11/04/2016"
f1_keywords: ["C4052"]
helpviewer_keywords: ["C4052"]
ms.assetid: f9955421-16ab-46e5-8f9d-bf1639a519ef
---
# Compiler Warning (level 1) C4052

function declarations different; one contains variable arguments

One declaration of the function does not contain variable arguments. It is ignored.

The following sample generates C4052:

```c
// C4052.c
// compile with: /W4 /c
int f();
int f(int i, ...);   // C4052
```
