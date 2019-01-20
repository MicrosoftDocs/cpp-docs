---
title: "How to: Specify an out Parameter"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["function parameters", "out parameters"]
ms.assetid: 02862448-603c-4e9d-a5c5-b45fe38446e3
---
# How to: Specify an out Parameter

This sample shows how to specify that a function parameter is an out parameter and how to call that function from a C# program.

An out parameter is specified in Visual C++ with <xref:System.Runtime.InteropServices.OutAttribute> .

## Example

The first part of this sample is a Visual C++ DLL with a type that contains a function with an out parameter.

```
// cpp_out_param.cpp
// compile with: /LD /clr:safe
using namespace System;
public value struct TestStruct {
   static void Test([Runtime::InteropServices::Out] String^ %s) {
      s = "a string";
   }
};
```

## Example

This is a C# client that consumes the Visual C++ component created in the previous example.

```
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

- [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
