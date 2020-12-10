---
description: "Learn more about: Pure and verifiable code (C++/CLI)"
title: "Pure and Verifiable Code (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["/clr compiler option [C++], verifiable assemblies", "/clr compiler option [C++], mixed assemblies", "pure MSIL [C++]", "verifiable assemblies [C++]", "verifiably type-safe code [C++]", "/clr compiler option [C++], pure assemblies", ".NET Framework [C++], pure and verifiable code", "assemblies [C++], mixed code", "verifiable assemblies [C++], about verifiable assemblies", "mixed assemblies [C++], about mixed assemblies", "pure MSIL [C++], about pure code", "assemblies [C++], verifiable code", "mixed assemblies [C++]", "assemblies [C++], pure code"]
ms.assetid: 9050e110-fa11-4356-b56c-665187ff871c
---
# Pure and verifiable code (C++/CLI)

For .NET Programming, Visual C++ in Visual Studio 2017 supports the creation of mixed assemblies by using the [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) compiler option. The **/clr:pure** and **clr:safe** options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017. If your code needs to be safe or verifiable, then we recommend that you port it to C#.

## Mixed (/clr)

Mixed assemblies (compiled with **/clr**), contain both unmanaged and managed parts, making it possible for them to use .NET features, but still contain native code. This allows applications and components to be updated to use .NET features without requiring that the entire project be rewritten. Using Visual C++ to mix managed and native code in this fashion is called C++ Interop. For more information, see [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md) and [Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md).

Calls made from managed assemblies to native DLLs via P/Invoke will compile, but may fail at runtime depending on security settings.

There is one coding scenario that will pass the compiler but that will result in an unverifiable assembly: calling a virtual function through an object instance using the scope resolution operator.  For example: `MyObj -> A::VirtualFunction();`.

## See also

- [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
