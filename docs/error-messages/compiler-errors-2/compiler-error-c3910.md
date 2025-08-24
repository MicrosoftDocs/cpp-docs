---
title: "Compiler Error C3910"
description: "Learn more about: Compiler Error C3910"
ms.date: 11/04/2016
f1_keywords: ["C3910"]
helpviewer_keywords: ["C3910"]
---
# Compiler Error C3910

> 'event': must define member 'method'

## Remarks

An event was defined, but did not contain the specified, required accessor method.

For more information, see [event](../../extensions/event-cpp-component-extensions.md).

## Example

The following example generates C3910:

```cpp
// C3910.cpp
// compile with: /clr /c
delegate void H();
ref class X {
   event H^ E {
      // uncomment the following lines
      // void add(H^) {}
      // void remove( H^ h ) {}
      // void raise( ) {}
   };   // C3910

   event H^ E2; // OK data member
};
```
