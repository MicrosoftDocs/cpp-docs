---
description: "Learn more about: Compiler Error C2897"
title: "Compiler Error C2897"
ms.date: "11/04/2016"
f1_keywords: ["C2897"]
helpviewer_keywords: ["C2897"]
ms.assetid: a88349e2-823f-42a0-8660-0653b677afa4
---
# Compiler Error C2897

a destructor/finalizer cannot be a function template

Destructors or finalizers cannot be overloaded, so declaring a destructor as a template (which would define a set of destructors) is not allowed.

## Examples

The following sample generates C2897.

```cpp
// C2897.cpp
// compile with: /c
class X {
public:
   template<typename T> ~X() {}   // C2897
};
```

The following sample generates C2897.

```cpp
// C2897_b.cpp
// compile with: /c /clr
ref struct R2 {
protected:
   template<typename T> !R2(){}   // C2897 error
};
```
