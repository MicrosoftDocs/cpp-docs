---
description: "Learn more about: Compiler Error C3766"
title: "Compiler Error C3766"
ms.date: "11/04/2016"
f1_keywords: ["C3766"]
helpviewer_keywords: ["C3766"]
ms.assetid: b5af2089-2e1e-4e45-a41d-495b6c55656e
---
# Compiler Error C3766

'type' must provide an implementation for the interface method 'function'

A class that inherits from an interface must implement the interface members.

## Example

The following sample generates C3766.

```cpp
// C3766.cpp
// compile with: /clr /c

delegate void MyDel();

interface struct IFace {
   virtual event MyDel ^ E;
};

ref struct Class1 : public IFace {};   // C3766

// OK
ref struct Class2 : public IFace {
   virtual event MyDel ^ E {
      void add(MyDel ^) {}
      void remove(MyDel ^) {}
   }
};
```
