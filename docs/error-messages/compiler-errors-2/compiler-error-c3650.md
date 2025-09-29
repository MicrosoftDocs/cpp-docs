---
title: "Compiler Error C3650"
description: "Learn more about: Compiler Error C3650"
ms.date: 11/04/2016
f1_keywords: ["C3650"]
helpviewer_keywords: ["C3650"]
---
# Compiler Error C3650

> 'interface_method' : cannot be used as an explicit override, must be a virtual member function of a base class

## Remarks

An attempt was made to perform an explicit override on a member that was not virtual.

For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3650:

```cpp
// C3650.cpp
// compile with: /clr
public interface struct I {
   void a();
};

public ref class S {
public:
   static int f() { return 0; }
   static int g() { return 0; }
};

public ref struct T1 : public S, I {
   virtual int f() new sealed = S::f;   // C3650
   virtual int g() { return 0; }   // OK does not override S::g
   virtual void a() new sealed = I::a {}   // OK
};
```
