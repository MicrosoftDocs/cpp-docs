---
title: "Compiler Error C3804"
description: "Learn more about: Compiler Error C3804"
ms.date: 11/04/2016
f1_keywords: ["C3804"]
helpviewer_keywords: ["C3804"]
---
# Compiler Error C3804

> 'property_accessor': the accessor methods for a property must either be all static or all non-static

## Remarks

When defining a non-trivial property, the accessor functions can be either static or instance, but not both.

See [property](../../extensions/property-cpp-component-extensions.md) for more information.

## Example

The following example generates C3804.

```cpp
// C3804.cpp
// compile with: /c /clr
ref struct A {

   property int i {
      static int get() {}
      void set(int i) {}
   }   // C3804 error

   // OK
   property int j {
      int get() { return 0; }
      void set(int i) {}
   }

   property int k {
      static int get() { return 0; }
      static void set(int i) {}
   }
};
```
