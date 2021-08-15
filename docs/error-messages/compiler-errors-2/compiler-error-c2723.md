---
description: "Learn more about: Compiler Error C2723"
title: "Compiler Error C2723"
ms.date: "11/04/2016"
f1_keywords: ["C2723"]
helpviewer_keywords: ["C2723"]
ms.assetid: 86925601-2297-4cfd-94e2-2caf27c474c4
---
# Compiler Error C2723

'function' : 'specifier' specifier illegal on function definition

The specifier cannot appear with a function definition outside of a class declaration. The **`virtual`** specifier can be specified only on a member function declaration within a class declaration.

The following sample generates C2723 and shows how to fix it:

```cpp
// C2723.cpp
struct X {
   virtual void f();
   virtual void g();
};

virtual void X::f() {}   // C2723

// try the following line instead
void X::g() {}
```
