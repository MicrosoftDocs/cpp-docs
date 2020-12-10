---
description: "Learn more about: Compiler Error C3653"
title: "Compiler Error C3653"
ms.date: "11/04/2016"
f1_keywords: ["C3653"]
helpviewer_keywords: ["C3653"]
ms.assetid: 316549d7-f7ef-4578-a2ba-57adc8aac527
---
# Compiler Error C3653

'function' : cannot be used as a named override: a function being overridden not found; did you forget to name the function explicitly, using a :: operator?

An explicit override specified a function that was not found in any interface. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

The following sample generates C3653:

```cpp
// C3653.cpp
// compile with: /clr
public interface struct I {
   void h();
};

public ref struct X : public I {
   virtual void f() new sealed = J {};   // C3653 no J in scope
   virtual void g() {}   // OK
   virtual void h() new sealed = I::h {};   // OK
};
```
