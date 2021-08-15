---
description: "Learn more about: Compiler Error C3609"
title: "Compiler Error C3609"
ms.date: "11/04/2016"
f1_keywords: ["C3609"]
helpviewer_keywords: ["C3609"]
ms.assetid: 801e7f79-4ac6-4f8f-955f-703cdf095d00
---
# Compiler Error C3609

'member': a sealed or final function must be virtual

The [sealed](../../extensions/sealed-cpp-component-extensions.md) and [final](../../cpp/final-specifier.md) keywords are only allowed on a class, struct, or member function marked **`virtual`**.

The following sample generates C3609:

```cpp
// C3609.cpp
// compile with: /clr /c
ref class C {
   int f() sealed;   // C3609
   virtual int f2() sealed;   // OK
};
```
