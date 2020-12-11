---
description: "Learn more about: Compiler Error C2598"
title: "Compiler Error C2598"
ms.date: "11/04/2016"
f1_keywords: ["C2598"]
helpviewer_keywords: ["C2598"]
ms.assetid: 40777c62-39ba-441e-b081-f49f94b43547
---
# Compiler Error C2598

linkage specification must be at global scope

The linkage specifier is declared at local scope.

The following sample generates C2598:

```cpp
// C2598.cpp
// compile with: /c
void func() {
   extern "C" int func2();   // C2598
}

extern "C" int func( int i );
```
