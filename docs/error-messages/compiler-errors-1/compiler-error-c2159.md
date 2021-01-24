---
description: "Learn more about: Compiler Error C2159"
title: "Compiler Error C2159"
ms.date: "11/04/2016"
f1_keywords: ["C2159"]
helpviewer_keywords: ["C2159"]
ms.assetid: 925a2cbd-43c9-45ee-a373-84004350b380
---
# Compiler Error C2159

more than one storage class specified

A declaration contains more than one storage class.

The following sample generates C2159:

```cpp
// C2159.cpp
// compile with: /c
static int i;   // OK
extern static int i;   // C2159
```
