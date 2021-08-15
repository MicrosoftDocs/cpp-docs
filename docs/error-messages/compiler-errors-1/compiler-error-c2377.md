---
description: "Learn more about: Compiler Error C2377"
title: "Compiler Error C2377"
ms.date: "11/04/2016"
f1_keywords: ["C2377"]
helpviewer_keywords: ["C2377"]
ms.assetid: f7660965-bf4c-4cd9-8307-1bd7016678a1
---
# Compiler Error C2377

'identifier' : redefinition; typedef cannot be overloaded with any other symbol

A **`typedef`** identifier is redefined.

The following sample generates C2377:

```cpp
// C2377.cpp
// compile with: /c
typedef int i;
int i;   // C2377
int j;   // OK
```
