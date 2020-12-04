---
description: "Learn more about: Compiler Error C3797"
title: "Compiler Error C3797"
ms.date: "11/04/2016"
f1_keywords: ["C3797"]
helpviewer_keywords: ["C3797"]
ms.assetid: ab27ff34-8c1d-4297-b004-9e39bd3a4f25
---
# Compiler Error C3797

'override': event declaration cannot have override specifier (should be placed on event add/remove/raise methods instead)

You cannot override a trivial event (an event without explicitly defined accessor methods) with another trivial event. The overriding event must define its behavior with accessor functions.

For more information, see [event](../../extensions/event-cpp-component-extensions.md).

## Example

The following sample generates C3797.

```cpp
// C3797.cpp
// compile with: /clr /c
delegate void MyDel();

ref class Class1 {
public:
   virtual event MyDel ^ E;
};

ref class Class2 : public Class1 {
public:
   virtual event MyDel ^ E override;   // C3797
};

// OK
ref class Class3 : public Class1 {
public:
   virtual event MyDel ^ E {
      void add(MyDel ^ d) override {}
      void remove(MyDel ^ d) override {}
   }
};
```
