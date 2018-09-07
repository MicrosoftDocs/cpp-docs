---
title: "Mixed, pure, and verifiable feature comparison (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["safe assemblies [C++], vs. pure", "mixed assemblies [C++], vs. pure", "safe assemblies [C++], vs. mixed", "pure MSIL [C++]", "verifiable assemblies [C++]", "pure MSIL [C++], vs. safe", "pure MSIL [C++], vs. mixed", "pure MSIL [C++], compared to mixed and safe", "verifiable assemblies [C++], vs. mixed", "mixed assemblies [C++], vs. safe", "verifiable assemblies [C++], vs. pure", "pure assemblies [C++]", "safe assemblies [C++]", "mixed assemblies [C++]"]
ms.assetid: 3f7a82ba-0e69-4927-ba0c-fbc3160e4394
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Mixed, pure, and verifiable feature comparison (C++/CLI)

This topic compares features among the different **/clr** compilation modes. For more information, see [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).

> [!IMPORTANT]
> The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

## Feature comparison

|Feature|Mixed (/clr)|Pure (/clr:pure)|Safe (/clr:safe)|Related Information|
|-------------|---------------------|-------------------------|-------------------------|-------------------------|
|CRT library|supported|deprecated||[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)|
|MFC/ATL|supported|||[MFC Desktop Applications](../mfc/mfc-desktop-applications.md) &#124; [Class Overview](../atl/atl-class-overview.md)|
|Unmanaged Functions|supported|||[Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)|
|Unmanaged Data|supported|deprecated||[Pure and Verifiable Code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)|
|Callable from Unmanaged Functions|supported||||
|Supports calling unmanaged Functions|supported|deprecated|deprecated|[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)|
|Supports Reflection|DLLs only|deprecated|deprecated|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|

## See also

- [Pure and Verifiable Code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)