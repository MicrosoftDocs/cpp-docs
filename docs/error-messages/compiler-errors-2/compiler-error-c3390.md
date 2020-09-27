---
title: "Compiler Error C3390"
description: "Microsoft C++ compiler error C3390, its causes and how to resolve them."
ms.date: 09/26/2020
f1_keywords: ["C3390"]
helpviewer_keywords: ["C3390"]
ms.assetid: 84800a87-c8e6-45aa-82ae-02f816dc8d97
---
# Compiler Error C3390

> '*type_arg*' : invalid type argument for generic parameter '*param*' of generic '*generic_type*', must be a reference type

A generic type was instantiated incorrectly. Check the type definition.

## Remarks

For more information, see [Generics](../../extensions/generics-cpp-component-extensions.md).

## Example

The first sample uses C# to create a component that contains a generic type. This type has certain constraints that aren't supported when authoring generic types in C++/CLI. For more information, see [Constraints on Type Parameters](/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters).

```csharp
// C3390.cs
// Compile by using: csc /target:library C3390.cs
// a C# program
public class GR<C, V, N>
where C : class
where V : struct
where N : new() {}
```

When the C3390.dll component is available, the following sample generates C3390.

```cpp
// C3390_b.cpp
// Compile by using: cl /clr C3390_b.cpp
#using <C3390.dll>
ref class R { R(int) {} };
value class V {};
ref struct N { N() {} };

int main () {
   GR<V, V, N^>^ gr2;   // C3390 first type must be a ref type
   GR<R^, V, N^>^ gr2b; // OK - do this instead
}
```
