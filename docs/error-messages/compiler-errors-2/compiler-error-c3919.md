---
description: "Learn more about: Compiler Error C3919"
title: "Compiler Error C3919"
ms.date: "11/04/2016"
f1_keywords: ["C3919"]
helpviewer_keywords: ["C3919"]
ms.assetid: 5f8eddda-d751-478b-930d-e18f7191ddfb
---
# Compiler Error C3919

'event_method': function must have type 'type'

An event accessor method was not declared correctly.

For more information about events, see [event](../../extensions/event-cpp-component-extensions.md).

The following sample generates C3919:

```cpp
// C3919.cpp
// compile with: /clr /c
using namespace System;
delegate void D(String^);
ref class R {
   event D^ e {
      int add(int);   // C3919
      int remove(int);   // C3919

      void add(D^);   // OK
      void remove(D^);   // OK
   }
};
```
