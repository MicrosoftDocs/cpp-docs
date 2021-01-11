---
description: "Learn more about: How to: Specify an out parameter"
title: "How to: Specify an out parameter"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["function parameters", "out parameters"]
ms.assetid: 02862448-603c-4e9d-a5c5-b45fe38446e3
---
# How to: Specify an out parameter

This sample shows how to specify that a function parameter is an `out` parameter, and how to call that function from a C# program.

An `out` parameter is specified in C++ by using <xref:System.Runtime.InteropServices.OutAttribute> .

## Example

The first part of this sample creates a C++ DLL. It defines a type that contains a function with an `out` parameter.

```cpp
// cpp_out_param.cpp
// compile with: /LD /clr
using namespace System;
public value struct TestStruct {
   static void Test([Runtime::InteropServices::Out] String^ %s) {
      s = "a string";
   }
};
```

This source file is a C# client that consumes the C++ component created in the previous example.

```csharp
// cpp_out_param_2.cs
// compile with: /reference:cpp_out_param.dll
using System;
class TestClass {
   public static void Main() {
      String t;
      TestStruct.Test(out t);
      System.Console.WriteLine(t);
   }
}
```

```Output
a string
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
