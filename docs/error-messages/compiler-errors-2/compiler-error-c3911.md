---
description: "Learn more about: Compiler Error C3911"
title: "Compiler Error C3911"
ms.date: "11/04/2016"
f1_keywords: ["C3911"]
helpviewer_keywords: ["C3911"]
ms.assetid: b786da59-0e99-479d-bc0d-551126e940f2
---
# Compiler Error C3911

'event_accessor_method': function must have type 'signature'

An event's accessor method was not properly declared.

For more information, see [event](../../extensions/event-cpp-component-extensions.md).

The following sample generates C3911:

```cpp
// C3911.cpp
// compile with: /clr
using namespace System;
delegate void H(String^, int);

ref class X {
   event H^ E1 {
      void add() {}   // C3911
      // try the following line instead
      // void add(H ^ h) {}

      void remove(){}
      // try the following line instead
      // void remove(H ^ h) {}

      void raise(){}
      // try the following line instead
      // void raise(String ^ s, int i) {}
   };
};
```
