---
description: "Learn more about: Compiler Error C3246"
title: "Compiler Error C3246"
ms.date: "11/04/2016"
f1_keywords: ["C3246"]
helpviewer_keywords: ["C3246"]
ms.assetid: ad85224a-e540-479b-a5eb-a3bc3964c30b
---
# Compiler Error C3246

'class' : cannot inherit from 'type' as it has been declared as 'sealed'

A class that is marked as [sealed](../../extensions/sealed-cpp-component-extensions.md) cannot be the base class for any other classes.

The following sample generates C3246:

```cpp
// C3246_2.cpp
// compile with: /clr /LD
ref class X sealed {};

ref class Y : public X {}; // C3246
```
