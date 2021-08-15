---
description: "Learn more about: Compiler Error C2374"
title: "Compiler Error C2374"
ms.date: "11/04/2016"
f1_keywords: ["C2374"]
helpviewer_keywords: ["C2374"]
ms.assetid: 73b51965-e91c-4e21-9732-f71c1449d22e
---
# Compiler Error C2374

'identifier' : redefinition; multiple initialization

The identifier is initialized more than once.

The following sample generates C2374:

```cpp
// C2374.cpp
// compile with: /c
int i = 0;
int i = 1;   // C2374
int j = 1;   // OK
```
