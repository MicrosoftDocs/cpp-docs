---
description: "Learn more about: Compiler Error C3902"
title: "Compiler Error C3902"
ms.date: "11/04/2016"
f1_keywords: ["C3902"]
helpviewer_keywords: ["C3902"]
ms.assetid: feb3bb29-f836-4d77-ba71-3876f7f4f216
---
# Compiler Error C3902

'accessor': type of last parameter must be 'type'

The type of the last parameter of at least one set method must match the type of the property. For more information, see [property](../../extensions/property-cpp-component-extensions.md).

The following sample generates C3902:

```cpp
// C3902.cpp
// compile with: /clr /c
using namespace System;
ref class X {
   property String ^Name {
      void set(int);   // C3902
      // try the following line instead
      // void set(String^){}
   }

   property double values[int,int] {
      void set(int, int, float);   // C3902
      // try the following line instead
      // void set(int, int, double){}
   }
};
```
