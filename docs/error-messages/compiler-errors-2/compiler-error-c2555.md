---
title: "Compiler Error C2555"
description: "Reference for Visual Studio C++ compiler error C2555."
ms.date: "03/30/2020"
f1_keywords: ["C2555"]
helpviewer_keywords: ["C2555"]
ms.assetid: 5e49ebb8-7c90-457a-aa12-7ca7ab6574b2
---
# Compiler Error C2555

> '*class1*::*function1*': overriding virtual function return type differs and is not covariant from '*class2*::*function2*'

A virtual function and a derived overriding function have identical parameter lists but different return types.

## Remarks

In C++, an overriding function in a derived class can't differ only by return type from a virtual function in a base class.

There's an exception to this rule for certain return types. When a derived class overrides a public base class, it may return a pointer or reference to the derived class instead of a base-class pointer or reference. These return types are called *covariant*, because they vary together with the type. This rule exception doesn't allow covariant reference-to-pointer or pointer-to-pointer types.

One way to resolve the error is to return the same type as the base class. Then, cast the return value after the virtual function has been called. Another is to also change the parameter list, to make the derived class member function an overload instead of an override.

## Examples

You may see this error if you compile with **`/clr`**. For example, the C++ equivalent to the following C# declaration:

```csharp
Guid[] CheckSources(Guid sourceID, Guid[] carouselIDs);
```

is

```cpp
Guid CheckSources(Guid sourceID, Guid carouselIDs[]) [];
```

The following sample generates C2555:

```cpp
// C2555.cpp
// compile with: /c
struct X {
   virtual void func();
};
struct Y : X {
   char func();  // C2555
   void func2();   // OK
};
```

To fix it, change the return type of `Y::func` to **`void`**.
