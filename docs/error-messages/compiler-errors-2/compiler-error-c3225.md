---
title: "Compiler Error C3225"
description: "Learn more about: Compiler Error C3225"
ms.date: 11/04/2016
f1_keywords: ["C3225"]
helpviewer_keywords: ["C3225"]
---
# Compiler Error C3225

> generic type argument for 'arg' cannot be 'type', it must be a value type or handle type

## Remarks

The generic type argument was not of the correct type.

For more information, see [Generics](../../extensions/generics-cpp-component-extensions.md).

## Examples

You cannot instantiate a generic type with a native type. The following example generates C3225.

```cpp
// C3225.cpp
// compile with: /clr
class A {};

ref class B {};

generic <class T>
ref class C {};

int main() {
   C<A>^ c = gcnew C<A>;   // C3225
   C<B^>^ c2 = gcnew C<B^>;   // OK
}
```

The following example creates a component using C#. Notice that the constraint specifies that the generic type can only be instantiated with a value type.

```
// C3225_b.cs
// compile with: /target:library
// a C# program
public class MyList<T> where T: struct {}
```

This example consumes the C#-authored component, and violates the constraint that MyList can only be instantiated with a value type other than <xref:System.Nullable>. The following example generates C3225.

```cpp
// C3225_c.cpp
// compile with: /clr
#using "C3225_b.dll"
ref class A {};
value class B {};
int main() {
   MyList<A> x;   // C3225
   MyList<B> y;   // OK
}
```
