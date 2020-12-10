---
description: "Learn more about: Compiler Error C3912"
title: "Compiler Error C3912"
ms.date: "11/04/2016"
f1_keywords: ["C3912"]
helpviewer_keywords: ["C3912"]
ms.assetid: 674e050c-11fb-4db1-8bdf-a3e95b41161d
---
# Compiler Error C3912

'event': type of event must be a delegate type

An event was declared but was not of the proper type.

For more information, see [event](../../extensions/event-cpp-component-extensions.md).

The following sample generates C3912:

```cpp
// C3912.cpp
// compile with: /clr
delegate void H();
ref class X {
   event int Ev;   // C3912
   event H^ Ev2;   // OK
};
```
