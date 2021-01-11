---
description: "Learn more about: Compiler Error C2253"
title: "Compiler Error C2253"
ms.date: "11/04/2016"
f1_keywords: ["C2253"]
helpviewer_keywords: ["C2253"]
ms.assetid: bd6445ae-b2c1-4669-9657-a8f4acf80b16
---
# Compiler Error C2253

'function' : pure specifier or abstract override specifier only allowed on virtual function

A nonvirtual function is specified as pure **`virtual`**.

The following sample generates C2253:

```cpp
// C2253.cpp
// compile with: /c
class A {
public:
   void func1() = 0;   // C2253 not virtual
   virtual void func2() = 0;   // OK
};
```

The following sample generates C2253:

```cpp
// C2253_2.cpp
// compile with: /clr /c
ref struct A {
   property int Prop_3 {
      int get() abstract;   // C2253
      // try the following line instead
      // virtual int get() abstract;

      void set(int i) abstract;   // C2253
      // try the following line instead
      // virtual void set(int i) abstract;
   }
};
```
