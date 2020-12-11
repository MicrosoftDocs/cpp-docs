---
description: "Learn more about: Compiler Error C3913"
title: "Compiler Error C3913"
ms.date: "11/04/2016"
f1_keywords: ["C3913"]
helpviewer_keywords: ["C3913"]
ms.assetid: a678bfce-9524-470d-9f23-7d08ecb972c8
---
# Compiler Error C3913

default property must be indexed

A default property was defined incorrectly.

For more information, see [property](../../extensions/property-cpp-component-extensions.md).

The following sample generates C3913:

```cpp
// C3913.cpp
// compile with: /clr /c
ref struct X {
   property int default {   // C3913
   // try the following line instead
   // property int default[int] {
      int get(int) { return 0; }
      void set(int, int) {}
   }
};
```
