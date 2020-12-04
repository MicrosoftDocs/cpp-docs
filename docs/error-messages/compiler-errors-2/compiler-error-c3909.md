---
description: "Learn more about: Compiler Error C3909"
title: "Compiler Error C3909"
ms.date: "11/04/2016"
f1_keywords: ["C3909"]
helpviewer_keywords: ["C3909"]
ms.assetid: 0a443132-e53f-42dc-a58b-f086da3e7bfd
---
# Compiler Error C3909

aWinRT or managed event declaration must occur in a WinRT or managed type

A Windows Runtime event or managed event was declared in a native type. To fix this error, declare events in Windows Runtime types or managed types.

For more information, see [event](../../extensions/event-cpp-component-extensions.md).

The following sample generates C3909 and shows how to fix it:

```cpp
// C3909.cpp
// compile with: /clr /c
delegate void H();
class X {
   event H^ E;   // C3909 - use ref class X instead
};

ref class Y {
   static event H^ E {
      void add(H^) {}
      void remove( H^ h ) {}
      void raise( ) {}
   }
};
```
