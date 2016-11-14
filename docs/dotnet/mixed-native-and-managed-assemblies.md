---
title: "Mixed (Native and Managed) Assemblies | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interop [C++], mixed assemblies"
  - "/clr compiler option [C++], mixed assemblies"
  - "managed code [C++], interoperability"
  - "interoperability [C++], mixed assemblies"
  - "mixed DLL loading [C++]"
  - "mixed assemblies [C++], about mixed assemblies"
  - "assemblies [C++], mixed"
  - "mixed assemblies [C++]"
  - "native code [C++], .NET interoperatibility"
ms.assetid: 4299dfce-392f-4933-8bf0-5da2f0d1c282
caps.latest.revision: 35
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Mixed (Native and Managed) Assemblies
Mixed assemblies are capable of containing both unmanaged machine instructions and MSIL instructions. This allows them to call and be called by .NET components, while retaining compatibility with components that are entirely unmanaged. Using mixed assemblies, developers can author applications using a mixture of managed and unmanaged functionality. This makes mixed assemblies ideal for migrating existing Visual C++ applications to the .NET Platform.  
  
 For example, an existing application consisting entirely of unmanaged functions can be brought to the .NET platform by recompiling just one module with the **/clr** compiler switch. This module is then able to use .NET features, but remains compatible with the remainder of the application. In this way, an application can be converted to the .NET platform in a gradual, piece-by-piece fashion. It is even possible to decide between managed and unmanaged compilation on a function-by-function basis within the same file (see [managed, unmanaged](../preprocessor/managed-unmanaged.md)).  
  
 Visual C++ supports the generation of three distinct types of managed assemblies: mixed, pure, and verifiable. The latter two are discussed in [Pure and Verifiable Code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## In This Section  
 [How to: Migrate to /clr](../dotnet/how-to-migrate-to-clr.md)  
 Describes the recommended steps for either introducing or upgrading .NET functionality in your application.  
  
 [How to: Compile MFC and ATL Code By Using /clr](../dotnet/how-to-compile-mfc-and-atl-code-by-using-clr.md)  
 Discusses how to compile existing MFC and ATL programs to target the Common Language Runtime.  
  
 [Initialization of Mixed Assemblies](../dotnet/initialization-of-mixed-assemblies.md)  
 Describes the "loader lock" problem and solutions.  
  
 [Library Support for Mixed Assemblies](../dotnet/library-support-for-mixed-assemblies.md)  
 Discusses how to use native libraries in **/clr** compilations.  
  
 [Performance Considerations](../dotnet/performance-considerations-for-interop-cpp.md)  
 Describes the performance implications of mixed assemblies and data marshaling.  
  
 [Application Domains and Visual C++](../dotnet/application-domains-and-visual-cpp.md)  
 Discusses Visual C++ support for application domains.  
  
 [Double Thunking](../dotnet/double-thunking-cpp.md)  
 Discusses the performance implications of a native entry point for a managed function.  
  
 [Avoiding Exceptions on CLR Shutdown When Consuming COM Objects Built with /clr](../dotnet/avoiding-exceptions-on-clr-shutdown-when-consuming-com-objects-built-with-clr.md)  
 Discusses how to ensure proper shutdown of a managed application that consumes a COM object compiled with **/clr**.  
  
 [How to: Create a Partially Trusted Application by Removing Dependency on the CRT Library DLL](../dotnet/create-a-partially-trusted-application.md)  
 Discusses how to create a partially trusted Common Language Runtime application using [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] by removing dependency on msvcm90.dll.  
  
 For more information about coding guidelines for mixed assemblies, see the MSDN article "An Overview of Managed/Unmanaged Code Interoperability" at [http://msdn.microsoft.com/netframework/default.aspx?pull=/library/dndotnet/html/manunmancode.asp](http://msdn.microsoft.com/netframework/default.aspx?pull=/library/dndotnet/html/manunmancode.asp).  
  
## See Also  
 [Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md)