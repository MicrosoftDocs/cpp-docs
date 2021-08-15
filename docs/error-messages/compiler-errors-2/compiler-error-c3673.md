---
description: "Learn more about: Compiler Error C3673"
title: "Compiler Error C3673"
ms.date: "11/04/2016"
f1_keywords: ["C3673"]
helpviewer_keywords: ["C3673"]
ms.assetid: bb6d2079-05af-4e2c-be0e-75c892e6c590
---
# Compiler Error C3673

'type' : class does not have a copy-constructor

A user-defined constructor is needed to copy objects of CLR ref types. For more information, see [C++ Stack Semantics for Reference Types](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## Examples

The following sample generates C3673.

```cpp
// C3673.cpp
// compile with: /clr
public ref struct R {
public:
   R() {}
   // Uncomment the following line to resolve.
   // R(R% p) {}
};

int main() {
   R r;
   R s = r;   // C3673
}
```

The following sample generates C3673.

```cpp
// C3673_b.cpp
// compile with: /clr /c
// C3673 expected
using namespace System;
[AttributeUsage(AttributeTargets::Class)]
ref class MyAttr : public Attribute {
public:
   MyAttr() {}
   // Uncomment the following line to resolve.
   // MyAttr(int i) {}
   property int Priority;
   property int Version;
};

[MyAttr]
ref class ClassA {};   // OK, no arguments

[MyAttr(Priority = 1)]
ref class ClassB {};   // OK, named argument

[MyAttr(123)]
ref class ClassC {};   // Positional argument

[MyAttr(123, Version = 1)]
ref class ClassD {};   // Positional and named
```
