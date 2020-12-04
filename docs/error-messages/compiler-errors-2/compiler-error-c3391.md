---
description: "Learn more about: Compiler Error C3391"
title: "Compiler Error C3391"
ms.date: "11/04/2016"
f1_keywords: ["C3391"]
helpviewer_keywords: ["C3391"]
ms.assetid: c32532b9-7db4-4ccd-84b9-479e5a1a19d1
---
# Compiler Error C3391

'type_arg' : invalid type argument for generic parameter 'param' of generic 'generic_type', must be a non-nullable value type

A generic type was instantiated incorrectly. Check the type definition. For more information, see <xref:System.Nullable> and [Generics](../../extensions/generics-cpp-component-extensions.md).

## Example

The following sample uses C# to create a component that contains a generic type that has certain constraints that are not supported when authoring generic types in C++/CLI. For more information, see [Constraints on Type Parameters](/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters).

```csharp
// C3391.cs
// Compile by using: csc /target:library C3391.cs
// a C# program
public class GR<N>
where N : struct {}
```

When the C3391.dll component is available, the following sample generates C3391.

```cpp
// C3391_b.cpp
// Compile by using: cl /clr C3391_b.cpp
#using <C3391.dll>
using namespace System;
value class VClass {};

int main() {
   GR< Nullable<VClass> >^ a =
      gcnew GR< Nullable<VClass> >();   // C3391 can't be Nullable
   GR<VClass>^ aa = gcnew GR<VClass>(); // OK
}
```
