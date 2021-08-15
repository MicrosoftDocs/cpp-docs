---
description: "Learn more about: Compiler Error C2378"
title: "Compiler Error C2378"
ms.date: "11/04/2016"
f1_keywords: ["C2378"]
helpviewer_keywords: ["C2378"]
ms.assetid: 507a91c6-ca72-48df-b3a4-2cf931c86806
---
# Compiler Error C2378

'identifier' : redefinition; symbol cannot be overloaded with a typedef

The identifier was redefined as a **`typedef`**.

The following sample generates C2378:

```cpp
// C2378.cpp
// compile with: /c
int i;
typedef int i;   // C2378
typedef int b;   // OK
```
