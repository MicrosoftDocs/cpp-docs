---
title: "Compiler Error C3290"
description: "Learn more about: Compiler Error C3290"
ms.date: 11/04/2016
f1_keywords: ["C3290"]
helpviewer_keywords: ["C3290"]
---
# Compiler Error C3290

> 'type' : a trivial property cannot have reference type

## Remarks

A property was declared incorrectly. When you declare a trivial property, the compiler creates a variable that the property will update, and it is not possible to have a tracking reference variable in a class.

See [property](../../extensions/property-cpp-component-extensions.md) and [Tracking Reference Operator](../../extensions/tracking-reference-operator-cpp-component-extensions.md) for more information.

## Example

The following example generates C3290.

```cpp
// C3290.cpp
// compile with: /clr /c
ref struct R {};

ref struct X {
   R^ mr;

   property R % y;   // C3290
   property R ^ x;   // OK

   // OK
   property R% prop {
      R% get() {
         return *mr;
      }

      void set(R%) {}
   }
};

int main() {
   X x;
   R% xp = x.prop;
}
```
