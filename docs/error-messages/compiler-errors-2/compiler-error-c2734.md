---
description: "Learn more about: Compiler Error C2734"
title: "Compiler Error C2734"
ms.date: "11/04/2016"
f1_keywords: ["C2734"]
helpviewer_keywords: ["C2734"]
ms.assetid: e53a77b7-825c-42d1-a655-90e1c93b833e
---
# Compiler Error C2734

'identifier' : const object must be initialized if not extern

The identifier is declared **`const`** but not initialized or **`extern`**.

The following sample generates C2734:

```cpp
// C2734.cpp
const int j;   // C2734
extern const int i;   // OK, declared as extern
```
