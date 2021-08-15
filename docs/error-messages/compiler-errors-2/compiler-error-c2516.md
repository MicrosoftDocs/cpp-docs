---
description: "Learn more about: Compiler Error C2516"
title: "Compiler Error C2516"
ms.date: "11/04/2016"
f1_keywords: ["C2516"]
helpviewer_keywords: ["C2516"]
ms.assetid: cd3accc1-0179-4a13-9587-616908c4ad1d
---
# Compiler Error C2516

'name' : is not a legal base class

The class is derived from a type name defined by a **`typedef`** statement.

The following sample generates C2516:

```cpp
// C2516.cpp
typedef unsigned long ulong;
class C : public ulong {}; // C2516
```
