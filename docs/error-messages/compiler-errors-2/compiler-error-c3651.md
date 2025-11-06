---
title: "Compiler Error C3651"
description: "Learn more about: Compiler Error C3651"
ms.date: 11/04/2016
f1_keywords: ["C3651"]
helpviewer_keywords: ["C3651"]
---
# Compiler Error C3651

> 'member' : cannot be used as an explicit override, must be a member of a base class

## Remarks

An explicit override was specified, but the function being overridden was in a type that is not a base type.

For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3651:

```cpp
// C3651.cpp
// compile with: /clr /c
ref class C {
public:
   virtual void func2();
};

ref class Other {
public:
   virtual void func();
};

ref class D : public C {
public:
   virtual void func() new sealed = Other::func;   // C3651
   virtual void func2() new sealed = C::func2;   // OK
};
```
