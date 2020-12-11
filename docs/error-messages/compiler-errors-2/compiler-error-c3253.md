---
description: "Learn more about: Compiler Error C3253"
title: "Compiler Error C3253"
ms.date: "11/04/2016"
f1_keywords: ["C3253"]
helpviewer_keywords: ["C3253"]
ms.assetid: da40be26-0f78-4730-8727-ad11cddf8869
---
# Compiler Error C3253

'function' : error with explicit override

An explicit override was specified incorrectly. For example, you cannot specify an implementation for an override that you also specify as pure. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

The following sample generates C3253:

```cpp
// C3253.cpp
// compile with: /clr
public interface struct I {
   void a();
   void b();
   void c();
};

public ref struct R : I {
   virtual void a() = 0, I::a {}   // C3253
   virtual void b() = I::a {}   // OK
   virtual void c() = 0;   // OK
};
```
