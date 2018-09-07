---
title: "Library Support for Mixed Assemblies | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["msvcm90[d].dll", "mixed assemblies [C++], library support", "msvcmrt[d].lib", "libraries [C++], mixed assemblies"]
ms.assetid: 1229595c-9e9d-414d-b018-b4e4c727576d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Library Support for Mixed Assemblies

Visual C++ supports the use of the C++ Standard Library, the C runtime library (CRT), ATL, and MFC for applications compiled with [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md). This allows existing applications that use these libraries to use .NET Framework features as well.

> [!IMPORTANT]
> The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

This support includes the following DLL and import libraries:

- Msvcmrt[d].lib if you compile with **/clr**. Mixed assemblies link to this import library.

This support provides several related benefits:

- The CRT and C++ Standard Library are available to mixed code. The CRT and C++ Standard Library provided are not verifiable; ultimately, your calls are still routed to the same CRT and C++ Standard Library as you are using from native code.

- Correct unified exception handling in mixed images.

- Static initialization of C++ variables in mixed images.

- Support for per-AppDomain and per-process variables in managed code.

- Resolves the loader lock issues that applied to mixed DLLs compiled in Visual Studio 2003 and earlier.

In addition, this support presents the following limitations:

- Only the CRT DLL model is supported for code compiled with **/clr**. There are no static CRT libraries that support **/clr** builds.

You should update your common language runtime (CLR) to the current version as it is not guaranteed to work with earlier versions. Code built with these changes will not run on CLR version 1.x.

## See also

- [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)
