---
description: "Learn more about: Compiler Error C3392"
title: "Compiler Error C3392"
ms.date: "11/04/2016"
f1_keywords: ["C3392"]
helpviewer_keywords: ["C3392"]
ms.assetid: e4757596-e2aa-4314-b01e-5c4bfd2110e9
---
# Compiler Error C3392

'type_arg' : invalid type argument for generic parameter 'param' of generic 'generic_type', must have a public parameterless constructor

A generic type was instantiated incorrectly. Check the type definition. For more information, see  [Generics](../../extensions/generics-cpp-component-extensions.md).

## Example

The following sample uses C# to create a component that contains a generic type that has certain constraints that are not supported when authoring generic types in C++/CLI. For more information, see [Constraints on Type Parameters](/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters).

```csharp
// C3392.cs
// Compile by using: csc /target:library C3392.cs
// a C# program
public class GR<C, V, N>
where C : class
where V : struct
where N : new() {}
```

When the C3392.dll component is available, the following sample generates C3392.

```cpp
// C3392_b.cpp
// Compile by using: cl /clr C3392_b.cpp
#using <C3392.dll>

ref class R { R(int) {} };
ref class N { N() {} };

value class V {};

ref class N2 { public: N2() {} };
ref class R2 { public: R2() {} };

int main () {
   GR<R^, V, N^>^ gr1;   // C3392
   GR<R^, V, N2^>^ gr1a; // OK

   GR<R^, N^, N^>^ gr3;  // C3392
   GR<R^, V, N2^>^ gr3a; // OK

   GR<R^, V, R^>^ gr4;   // C3392
   GR<R^, V, R2^>^ gr4a; // OK
}
```
