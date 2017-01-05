---
title: "Pure and Verifiable Code (C++-CLI) | Microsoft Docs"
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
  - "/clr compiler option [C++], verifiable assemblies"
  - "/clr compiler option [C++], mixed assemblies"
  - "pure MSIL [C++]"
  - "verifiable assemblies [C++]"
  - "verifiably type-safe code [C++]"
  - "/clr compiler option [C++], pure assemblies"
  - ".NET Framework [C++], pure and verifiable code"
  - "assemblies [C++], mixed code"
  - "verifiable assemblies [C++], about verifiable assemblies"
  - "mixed assemblies [C++], about mixed assemblies"
  - "pure MSIL [C++], about pure code"
  - "assemblies [C++], verifiable code"
  - "mixed assemblies [C++]"
  - "assemblies [C++], pure code"
ms.assetid: 9050e110-fa11-4356-b56c-665187ff871c
caps.latest.revision: 31
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
# Pure and Verifiable Code (C++/CLI)
For .NET Programming, Visual C++ supports the creation of three distinct types of components and applications: mixed, pure, and verifiable. All three are available through the [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) compiler option.  
  
## Remarks  
 For more information about verifiable assemblies, see:  
  
-   [Mixed, Pure, and Verifiable Feature Comparison (C++/CLI)](../dotnet/mixed-pure-and-verifiable-feature-comparison-cpp-cli.md)  
  
-   [How to: Migrate to /clr:pure (C++/CLI)](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md)  
  
-   [How to: Create Verifiable C++ Projects (C++/CLI)](../dotnet/how-to-create-verifiable-cpp-projects-cpp-cli.md)  
  
-   [How to: Migrate to /clr:safe (C++/CLI)](../dotnet/how-to-migrate-to-clr-safe-cpp-cli.md)  
  
-   [Using Verifiable Assemblies with SQL Server (C++/CLI)](../dotnet/using-verifiable-assemblies-with-sql-server-cpp-cli.md)  
  
-   [Security Best Practices](../security/security-best-practices-for-cpp.md)  
  
-   [Converting Projects from Mixed Mode to Pure Intermediate Language](../dotnet/converting-projects-from-mixed-mode-to-pure-intermediate-language.md)  
  
## Mixed (/clr)  
 Mixed assemblies (compiled with **/clr**), contain both unmanaged and managed parts, making it possible for them to use .NET features, but still contain unmanaged code. This allows applications and components to be updated to use .NET features without requiring that the entire project be rewritten. Using Visual C++ to mix managed and unmanaged code in this fashion is called C++ Interop. For more information, see [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md) and [Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md).  
  
## Pure (/clr:pure)  
 Pure assemblies (compiled with **/clr:pure**) can contain both native and managed data types, but only managed functions. Like mixed assemblies, pure assemblies allow interop with native DLLs through P/Invoke (see [Using Explicit PInvoke in C++ (DllImport Attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)), but C++ Interop features are not available. Moreover, pure assemblies cannot export functions that are callable from native functions because entry points in a pure assembly use the [__clrcall](../cpp/clrcall.md) calling convention.  
  
### Advantages of /clr:pure  
  
-   Better Performance: Because pure assemblies contain only MSIL, there are no native functions, and therefore no managed/unmanaged transitions are necessary. (Function calls made through P/Invoke are an exception to this rule.)  
  
-   AppDomain Awareness: Managed functions and CLR data types exist inside `Application Domains`, which affects their visibility and accessibility. Pure assemblies are domain-aware (__declspec([appdomain](../cpp/appdomain.md)) is implied for each type) so accessing their types and functionality from other .NET components is easier and safer. As a result, pure assemblies interoperate more easily with other .NET components than mixed assemblies.  
  
-   Non-disk loading: Pure assemblies can be loaded in-memory and even streamed. This is essential for using .NET assemblies as stored procedures. This differs from mixed assemblies, which due to a dependency on the Windows loading mechanisms, must exist on disk in order to execute.  
  
-   Reflection: It is not possible to reflect over mixed executables, whereas pure assemblies provide full reflection support. For more information, see [Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md).  
  
-   Host Controllability: Because pure assemblies contain only MSIL, they behave more predictably and flexibly than mixed assemblies when used in applications that host the CLR and modify its default behavior.  
  
### Limitations of /clr:pure  
 This section covers features not currently supported by **/clr:pure**.  
  
-   Pure assemblies cannot be called by unmanaged functions. Therefore pure assemblies cannot implement COM interfaces or expose native callbacks. Pure assemblies cannot export functions via __declspec(dllexport) or .DEF files. Also, functions declared with the \__clrcall convention cannot be imported via \__declspec(dllimport). Functions in a native module can be called from a pure assembly, but pure assemblies cannot expose native-callable functions, so exposing functionality in a pure assembly must be done through managed functions in a mixed assembly. See [How to: Migrate to /clr:pure (C++/CLI)](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md) for more information.  
  
-   ATL and MFC libraries are not supported by pure mode compilation in Visual C++.  
  
-   Pure .netmodules are not accepted as input to the Visual C++ linker. However, pure .obj files are accepted by the linker, and .obj files contain a superset of information contained in netmodules. See [.netmodule Files as Linker Input](../build/reference/netmodule-files-as-linker-input.md) for more information.  
  
-   Compiler COM support (#import) is not supported, as this would introduce unmanaged instructions into the pure assembly.  
  
-   Floating point options for alignment and exception-handling are not adjustable for pure assemblies. As a result, __declspec(align) cannot be used. This renders some header files, such as fpieee.h, incompatible with /clr:pure.  
  
-   The GetLastError function in the PSDK can give undefined behavior when compiling with **/clr:pure**.  
  
## Verifiable (/clr:safe)  
 The **/clr:safe** compiler option generates verifiable assemblies, like those written in Visual Basic and C#, conforming to requirements that allow the common language runtime (CLR) to guarantee that the code does not violate current security settings. For example, if security settings prohibit a component from writing to disk, the CLR can determine if a verifiable component meets this criterion before executing any of the code. There is no CRT support for verifiable assemblies. (CRT support is available to pure assemblies through a Pure MSIL version of the C Runtime library.)  
  
 Verifiable assemblies offer these advantages over pure and mixed assemblies:  
  
-   Increased security.  
  
-   Some situations require it (SQL components, for example).  
  
-   Future versions of Windows will increasingly require components and applications to be verifiable.  
  
 One disadvantage is that C++ interop features are not available. Verifiable assemblies cannot contain any unmanaged functions or native data types, even if they are not referenced by the managed code.  
  
 Despite the use of the word "safe", compiling applications with **/clr:safe** does not mean there are no bugs; it just means that the CLR can verify the security settings at run time.  
  
 Regardless of assembly type, calls made from managed assemblies to native DLLs via P/Invoke will compile, but may fail at runtime depending on security settings.  
  
> [!NOTE]
>  There is one coding scenario that will pass the compiler but that will result in an unverifiable assembly: calling a virtual function through an object instance using the scope resolution operator.  For example: `MyObj -> A::VirtualFunction();`.  
  
## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)