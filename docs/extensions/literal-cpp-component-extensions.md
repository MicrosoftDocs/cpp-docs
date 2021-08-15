---
title: "literal (C++/CLI)"
description: "The literal keyword is a Microsoft C++/CLI context-sensitive keyword for a compile-time constant."
ms.date: 10/20/2020
ms.topic: "reference"
f1_keywords: ["literal", "literal_cpp"]
helpviewer_keywords: ["literal keyword [C++]"]
---
# `literal` (C++/CLI)

A variable (data member) marked as **`literal`** in a **`/clr`** compilation is a compile-time constant. It's the native equivalent of a C# [`const`](/dotnet/csharp/language-reference/keywords/const) variable.

## All Platforms

### Remarks

(There are no remarks for this language feature that apply to all runtimes.)

## Windows Runtime

### Remarks

(There are no remarks for this language feature that apply to only the Windows Runtime.)

## Common Language Runtime

## Remarks

A data member marked as **`literal`** must be initialized when declared. And, the value must be a constant integral, enum, or string type. Conversion from the type of the initialization expression to the type of the **`literal`** data member can't require a user-defined conversion.

No memory is allocated for the **`literal`** field at runtime; the compiler only inserts its value in the metadata for the class. The **`literal`** value is treated as a compile-time constant. The closest equivalent in Standard C++ is **`constexpr`**, but a data member can't be **`constexpr`** in C++/CLI.

A variable marked as **`literal`** differs from one marked **`static const`**. A **`static const`** data member isn't made available in metadata to other compilers. For more information, see [`static`](../cpp/storage-classes-cpp.md) and [`const`](../cpp/const-cpp.md).

**`literal`** is a context-sensitive keyword. For more information, see [Context-sensitive keywords](context-sensitive-keywords-cpp-component-extensions.md).

## Examples

This example shows that a **`literal`** variable implies **`static`**.

```cpp
// mcppv2_literal.cpp
// compile with: /clr
ref struct X {
   literal int i = 4;
};

int main() {
   int value = X::i;
}
```

The following sample shows the effect of **`literal`** in metadata:

```cpp
// mcppv2_literal2.cpp
// compile with: /clr /LD
public ref struct A {
   literal int lit = 0;
   static const int sc = 1;
};
```

Notice the difference in the metadata for `sc` and `lit`: the `modopt` directive is applied to `sc`, meaning it can be ignored by other compilers.

```MSIL
.field public static int32 modopt([mscorlib]System.Runtime.CompilerServices.IsConst) sc = int32(0x00000001)
```

```MSIL
.field public static literal int32 lit = int32(0x00000000)
```

The following sample, authored in C#, references the metadata created in the previous sample and shows the effect of **`literal`** and **`static const`** variables:

```csharp
// mcppv2_literal3.cs
// compile with: /reference:mcppv2_literal2.dll
// A C# program
class B {
   public static void Main() {
      // OK
      System.Console.WriteLine(A.lit);
      System.Console.WriteLine(A.sc);

      // C# does not enforce C++ const
      A.sc = 9;
      System.Console.WriteLine(A.sc);

      // C# enforces const for a literal
      A.lit = 9;   // CS0131

      // you can assign a C++ literal variable to a C# const variable
      const int i = A.lit;
      System.Console.WriteLine(i);

      // but you cannot assign a C++ static const variable
      // to a C# const variable
      const int j = A.sc;   // CS0133
      System.Console.WriteLine(j);
   }
}
```

## Requirements

Compiler option: `/clr`

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)
