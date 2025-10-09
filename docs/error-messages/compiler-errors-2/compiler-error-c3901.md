---
title: "Compiler Error C3901"
description: "Learn more about: Compiler Error C3901"
ms.date: 11/04/2016
f1_keywords: ["C3901"]
helpviewer_keywords: ["C3901"]
---
# Compiler Error C3901

> 'accessor_function': must have return type 'type'

## Remarks

At least one get method's return type must match the property type. For more information, see [property](../../extensions/property-cpp-component-extensions.md).

## Example

The following example generates C3901:

```cpp
// C3901.cpp
// compile with: /clr /c
using namespace System;
ref class X {
   property String^ Name {
      void get();   // C3901
      // try the following line instead
      // String^ get();
   };
};

ref class Y {
   property double values[int, int] {
      int get(int, int);   // C3901
      // try the following line instead
      // double get(int, int);
   };
};
```
