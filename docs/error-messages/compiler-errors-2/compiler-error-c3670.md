---
title: "Compiler Error C3670"
description: "Learn more about: Compiler Error C3670"
ms.date: 11/04/2016
f1_keywords: ["C3670"]
helpviewer_keywords: ["C3670"]
---
# Compiler Error C3670

> 'override' : cannot override inaccessible base class method 'method'

## Remarks

An override can only take place on a function whose access level makes it available in a derived type. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3670:

```cpp
// C3670.cpp
// compile with: /clr /c
public ref class C {
// Uncomment the following line to resolve.
// public:
   virtual void g() { }
};

public ref class D : public C {
public:
   virtual void f() new sealed = C::g {};   // C3670
};
```
