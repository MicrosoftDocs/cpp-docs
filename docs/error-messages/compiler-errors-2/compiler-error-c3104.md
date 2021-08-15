---
description: "Learn more about: Compiler Error C3104"
title: "Compiler Error C3104"
ms.date: "11/04/2016"
f1_keywords: ["C3104"]
helpviewer_keywords: ["C3104"]
ms.assetid: b5648d47-e5d3-4b45-a3c0-f46e04eae731
---
# Compiler Error C3104

illegal attribute argument

You specified an invalid argument to an attribute.

See [Attribute Parameter Types](../../extensions/attribute-parameter-types-cpp-component-extensions.md) for more information.

This error can be generated as a result of compiler conformance work that was done for Visual Studio 2005: when passing managed arrays to custom attributes, the type of the array is no longer deduced from the aggregate initialization list. The compiler now requires you to specify the type of the array as well as the initializer list.

## Examples

The following sample generates C3104.

```cpp
// C3104a.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::Class)]
public ref struct ABC : public Attribute {
   ABC(array<int>^){}
   array<double> ^ param;
};

[ABC( {1,2,3}, param = {2.71, 3.14})]   // C3104
// try the following line instead
// [ABC( gcnew array<int> {1,2,3}, param = gcnew array<double>{2.71, 3.14})]
ref struct AStruct{};
```

The following sample generates C3104.

```cpp
// C3104b.cpp
// compile with: /clr /c
// C3104 expected
using namespace System;

int func() {
   return 0;
}

[attribute(All)]
ref class A {
public:
   A(int) {}
};

// Delete the following 2 lines to resolve.
[A(func())]
ref class B {};

// OK
[A(0)]
ref class B {};
```
