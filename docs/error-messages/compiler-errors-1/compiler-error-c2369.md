---
description: "Learn more about: Compiler Error C2369"
title: "Compiler Error C2369"
ms.date: "11/04/2016"
f1_keywords: ["C2369"]
helpviewer_keywords: ["C2369"]
ms.assetid: 2a3933f6-2313-40ff-800f-921b296fdbbf
---
# Compiler Error C2369

'array' : redefinition; different subscripts

The array is already declared with a different subscript.

The following sample generates C2369:

```cpp
// C2369.cpp
// compile with: /c
int a[10];
int a[20];   // C2369
int b[20];   // OK
```
