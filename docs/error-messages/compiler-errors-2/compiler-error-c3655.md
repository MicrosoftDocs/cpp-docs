---
description: "Learn more about: Compiler Error C3655"
title: "Compiler Error C3655"
ms.date: "11/04/2016"
f1_keywords: ["C3655"]
helpviewer_keywords: ["C3655"]
ms.assetid: 724919ab-2915-4b61-8794-44648e162d62
---
# Compiler Error C3655

'function' : function already explicitly overridden

A function can only be explicitly overridden once. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

The following sample generates C3655:

```cpp
// C3655.cpp
// compile with: /clr /c
public ref struct B {
   virtual void f();
   virtual void g();
};

public ref struct D : B {
   virtual void f() new sealed = B::f;
   virtual void g() new sealed = B::f;   // C3655
   // try the following line instead
   // virtual void g() new sealed = B::g;
};
```
