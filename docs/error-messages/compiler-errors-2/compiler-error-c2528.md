---
description: "Learn more about: Compiler Error C2528"
title: "Compiler Error C2528"
ms.date: "11/04/2016"
f1_keywords: ["C2528"]
helpviewer_keywords: ["C2528"]
ms.assetid: 2ea9d583-67a8-4b16-b35f-a50eeffc03c4
---
# Compiler Error C2528

'name' : pointer to reference is illegal

You cannot declare a pointer to a reference. Dereference the variable before declaring a pointer to it.

The following sample generates C2528:

```cpp
// C2528.cpp
int i;
int &ir = i;
int & (*irptr) = ir;    // C2528
```
