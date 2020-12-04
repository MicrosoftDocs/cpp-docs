---
description: "Learn more about: Compiler Error C3904"
title: "Compiler Error C3904"
ms.date: "11/04/2016"
f1_keywords: ["C3904"]
helpviewer_keywords: ["C3904"]
ms.assetid: 08297605-e4f2-4c6c-b637-011f1fd40631
---
# Compiler Error C3904

'property_accessor': must specify number parameter(s)

Check the number of parameters in your `get` and `set` methods against property dimensions.

- The number of parameters for the `get` method must equal the number of dimensions of the property or be zero for nonindexed properties.

- The number of parameters of the `set` method must be one more than the number of dimensions of the property.

For more information, see [property](../../extensions/property-cpp-component-extensions.md).

## Examples

The following sample generates C3904.

```cpp
// C3904.cpp
// compile with: /clr /c
ref class X {
   property int P {
      // set
      void set();   // C3904
      // try the following line instead
      // void set(int);

      // get
      int get(int, int);   // C3904
      // try the following line instead
      // int get();
   };
};
```

The following sample generates C3904.

```cpp
// C3904b.cpp
// compile with: /clr /c
ref struct X {
   property int Q[double, double, float, float, void*, int] {
      // set
      void set(double, void*);   // C3904
      // try the following line instead
      // void set(double, double, float, float, void*, int, int);

      // get
      int get();   // C3904
      // try the following line instead
      // int get(double, double, float, float, void*, int);
   }
};
```
