---
title: "Mixed, Pure, and Verifiable Feature Comparison (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "safe assemblies [C++], vs. pure"
  - "mixed assemblies [C++], vs. pure"
  - "safe assemblies [C++], vs. mixed"
  - "pure MSIL [C++]"
  - "verifiable assemblies [C++]"
  - "pure MSIL [C++], vs. safe"
  - "pure MSIL [C++], vs. mixed"
  - "pure MSIL [C++], compared to mixed and safe"
  - "verifiable assemblies [C++], vs. mixed"
  - "mixed assemblies [C++], vs. safe"
  - "verifiable assemblies [C++], vs. pure"
  - "pure assemblies [C++]"
  - "safe assemblies [C++]"
  - "mixed assemblies [C++]"
ms.assetid: 3f7a82ba-0e69-4927-ba0c-fbc3160e4394
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Mixed, Pure, and Verifiable Feature Comparison (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Mixed, Pure, and Verifiable Feature Comparison (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/mixed-pure-and-verifiable-feature-comparison-cpp-cli).  
  
  
This topic compares features among the different **/clr** compilation modes. For more information, see [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Feature Comparison  
  
|Feature|Mixed (/clr)|Pure (/clr:pure)|Safe (/clr:safe)|Related Information|  
|-------------|---------------------|-------------------------|-------------------------|-------------------------|  
|CRT library|supported|supported||[Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)|  
|MFC/ATL|supported|||[MFC Desktop Applications](../mfc/mfc-desktop-applications.md) &#124; [Class Overview](../atl/atl-class-overview.md)|  
|Unmanaged Functions|supported|||[Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)|  
|Unmanaged Data|supported|supported||[Pure and Verifiable Code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)|  
|Callable from Unmanaged Functions|supported|||[How to: Migrate to /clr:pure (C++/CLI)](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md)|  
|Supports calling unmanaged Functions|supported|C-style functions only|P/Invoke only|[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)|  
|Supports Reflection|DLLs only|supported|supported|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|  
  
## See Also  
 [Pure and Verifiable Code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)

