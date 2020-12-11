---
description: "Learn more about: Compiler Error C2386"
title: "Compiler Error C2386"
ms.date: "11/04/2016"
f1_keywords: ["C2386"]
helpviewer_keywords: ["C2386"]
ms.assetid: aaaa1284-34a0-4da2-8547-9fcbb559dae0
---
# Compiler Error C2386

'symbol' : a symbol with this name already exists in the current scope

You tried to create a namespace alias, but the name you chose already exists.

The following sample generates C2386:

```cpp
// C2386.cpp
namespace A {
   int k;
}

int i;
namespace i = A;   // C2386, i already exists
```
