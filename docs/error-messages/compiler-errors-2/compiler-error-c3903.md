---
title: "Compiler Error C3903"
description: "Learn more about: Compiler Error C3903"
ms.date: 11/04/2016
f1_keywords: ["C3903"]
helpviewer_keywords: ["C3903"]
---
# Compiler Error C3903

> 'property': does not have set or get method

## Remarks

A property must have at least a `get` or a `set` method. For more information, see [property](../../extensions/property-cpp-component-extensions.md).

## Example

The following example generates C3903:

```cpp
// C3903.cpp
// compile with: /clr
ref class X {
   property int P {
      void f(int){}
      // Add one or both of the following lines.
      // void set(int){}
      // int get(){return 0;}
   };   // C3903

   property double Q[,,,,] {
      void f(){}
      // Add one or both of the following lines.
      // void set(int, char, int, char, double, double){}
      // double get(int, char, int, char, double){return 1.1;}
   }   // C3903
};
```
