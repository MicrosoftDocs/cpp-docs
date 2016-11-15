---
title: "-clr (Common Language Runtime Compilation) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/CLR"
  - "VC.Project.VCNMakeTool.CompileAsManaged"
  - "VC.Project.VCCLCompilerTool.CompileAsManaged"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cl.exe compiler, common language runtime option"
  - "-clr compiler option [C++]"
  - "clr compiler option [C++]"
  - "/clr compiler option [C++]"
  - "Managed Extensions for C++, compiling"
  - "common language runtime, /clr compiler option"
ms.assetid: fec5a8c0-40ec-484c-a213-8dec918c1d6c
caps.latest.revision: 72
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /clr (Common Language Runtime Compilation)
Enables applications and components to use features from the common language runtime (CLR).  
  
## Syntax  
  
```  
/clr[:options]  
```  
  
## Arguments  
 `options`  
 One or more of the following switches, comma-separated.  
  
 **/clr**  
 Creates metadata for the application. The metadata can be consumed by other CLR applications, and enables the application to consume types and data in the metadata of other CLR components.  
  
 For more information, see  
  
 [Mixed (Native and Managed) Assemblies](../../dotnet/mixed-native-and-managed-assemblies.md) and  
  
 [How to: Migrate to /clr](../../dotnet/how-to-migrate-to-clr.md).  
  
 **/clr:pure**  
 Produces a Microsoft Intermediate Language (MSIL)-only output file that has no native executable code. However, it can contain native types compiled to MSIL.  
  
 For more information, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 /clr:pure is deprecated. A future version of the compiler may not support this option. We recommend that you port code that must be pure MSIL to C#.  
  
 **/clr:safe**  
 Produces an MSIL-only (no native executable code), verifiable output file. **/clr:safe** enables verification diagnostics ([PEVerify Tool (Peverify.exe)](http://msdn.microsoft.com/Library/f4f46f9e-8d08-4e66-a94b-0c69c9b0bbfa)).  
  
 For more information, see [NIB: Writing Verifiably Type-Safe Code](http://msdn.microsoft.com/en-us/d18f10ef-3b48-4f47-8726-96714021547b).  
  
 /clr:safe is deprecated. A future version of the compiler may not support this option. We recommend that you port code that must be pure, verifiable MSIL to C#.  
  
 **/clr:noAssembly**  
 Specifies that an assembly manifest should not be inserted into the output file. By default, the **noAssembly** option is not in effect.  
  
 The **noAssembly** option is deprecated. Use [/LN (Create MSIL Module)](../../build/reference/ln-create-msil-module.md) instead.  
  
 A managed program that does not have assembly metadata in the manifest is known as a *module*. The **noAssembly** option can be used only to produce a module. If you compile by using [/c](../../build/reference/c-compile-without-linking.md) and **/clr:noAssembly**, then specify the [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md) option in the linker phase to create a module.  
  
 Before Visual C++ 2005, **/clr:noAssembly** required **/LD**. **/LD** is now implied when you specify **/clr:noAssembly**.  
  
 **/clr:initialAppDomain**  
 Enables a [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] application to run on version 1 of the CLR. If you use **initialAppDomain**, then you may see some of the problems that are discussed in [BUG: AppDomainUnloaded exception when you use managed extensions for Visual C++ components](http://go.microsoft.com/fwlink/?LinkID=169465) on the Microsoft Support Web site.  
  
 An application that is compiled by using **initialAppDomain** should not be used by an application that uses ASP.NET because it is not supported in version 1 of the CLR.  
  
 **/clr:nostdlib**  
 Instructs the compiler to ignore the default \clr directory. The compiler produces errors if you are including multiple versions of a DLL such as System.dll. Using this option lets you specify the specific framework to use during compilation.  
  
## Remarks  
 Managed code is code that can be inspected and managed by the CLR. Managed code can access managed objects. For more information, see [/clr Restrictions](../../build/reference/clr-restrictions.md).  
  
 For information about how to develop applications that define and consume managed types, see [Component Extensions for Runtime Platforms](../../windows/component-extensions-for-runtime-platforms.md).  
  
 An application compiled by using **/clr** may or may not contain managed data.  
  
 To enable debugging on a managed application, see [/ASSEMBLYDEBUG (Add DebuggableAttribute)](../../build/reference/assemblydebug-add-debuggableattribute.md).  
  
 Only CLR types will be instantiated on the garbage-collected heap. For more information, see [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md). To compile a function to native code, use the `unmanaged` pragma. For more information, see [managed, unmanaged](../../preprocessor/managed-unmanaged.md).  
  
 By default, **/clr** is not in effect. When **/clr** is in effect, **/MD** is also in effect. For more information, see [/MD, /MT, /LD (Use Run-Time Library)](../../build/reference/md-mt-ld-use-run-time-library.md). **/MD** ensures that the dynamically linked, multithreaded versions of the runtime routines are selected from the standard header (.h) files. Multithreading is required for managed programming because the CLR garbage collector runs finalizers in an auxiliary thread.  
  
 If you compile by using **/c**, you can specify the CLR type (IJW, safe, or pure) of the resulting output file with [/CLRIMAGETYPE](../../build/reference/clrimagetype-specify-type-of-clr-image.md).  
  
 **/clr** implies **/EHa**, and no other **/EH** options are supported for **/clr**. For more information, see [/EH (Exception Handling Model)](../../build/reference/eh-exception-handling-model.md).  
  
 For information about how to determine the CLR image type of a file, see [/CLRHEADER](../../build/reference/clrheader.md).  
  
 All modules passed to a given invocation of the linker must be compiled by using the same run-time library compiler option (**/MD** or **/LD**).  
  
 Use the [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md) linker option to embed a resource in an assembly. [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md), [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md), and [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) linker options also let you customize how an assembly is created.  
  
 When **/clr** is used, the `_MANAGED` symbol is defined to be 1. For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md).  
  
 The global variables in a native object file are initialized first (during DllMain if the executable is a DLL), and then the global variables in the managed section are initialized (before any managed code is run). `#pragma`[init_seg](../../preprocessor/init-seg.md) only affects the order of initialization in the managed and unmanaged categories.  
  
 Compiling by using **/clr:safe** is analogous to compiling by using [/platform:anycpu](/dotnet/articles/csharp/language-reference/compiler-options/platform-compiler-option) in languages such as C#.  
  
## Safe and Pure Images  
 A pure image uses a CLR version of the C run-time (CRT) library. However, the CRT is not verifiable, so you cannot use the CRT when you compile by using **/clr:safe**. For more information, see [CRT Library Features](../../c-runtime-library/crt-library-features.md).  
  
 Examples of native code that cannot appear in a pure image include inline assembly, [setjmp](../../c-runtime-library/reference/setjmp.md), and [longjmp](../../c-runtime-library/reference/longjmp.md).  
  
 Every entry point of a pure or safe image is managed. When you compile by using **/clr**, the entry point is native. For more information, see [__clrcall](../../cpp/clrcall.md).  
  
 When you compile by using **/clr:safe**, by default, variables are [appdomain](../../cpp/appdomain.md) and cannot be per-process. For **/clr:pure**, although **appdomain** is the default, you can use [process](../../cpp/process.md) variables.  
  
 When running a 32-bit .exe file that was compiled by using **/clr** or **/clr:pure** on a 64-bit operating system, the application will be run under WOW64, which enables a 32-bit application to run on the 32-bit CLR on a 64-bit operating system. By default, an .exe file that is compiled by using **/clr:safe** will be run on the 64-bit CLR on a computer that is running a 64-bit operating system. (On a 32-bit operating system, the same .exe file would run on the 32-bit CLR.) However, a safe application could load a 32-bit component. In that case, a safe image running under operating system 64-bit support will fail when it loads the 32-bit application (BadFormatException). To ensure that a safe image continues to run when it loads a 32-bit image on a 64-bit operating system, you must use [/CLRIMAGETYPE](../../build/reference/clrimagetype-specify-type-of-clr-image.md) to change the metadata (.corflags), and mark it to be run under WOW64. The following command line is an example. (Substitute your own entry symbol.)  
  
 **cl /clr:safe t.cpp /link /clrimagetype:pure /entry:?main@@$$HYMHXZ /subsystem:console**  
  
 For information about how to get a decorated name, see [Decorated Names](../../build/reference/decorated-names.md). For more information about 64-bit programming, see [Configuring Programs for 64-Bit](../../build/configuring-programs-for-64-bit-visual-cpp.md). For information about using pure CLR code, see [How to: Migrate to /clr:pure (C++/CLI)](../../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md) and [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## Metadata and Unnamed Classes  
 Unnamed classes will appear in metadata named as follows: `$UnnamedClass$`*crc-of-current-file-name*`$`*index*`$`, where *index* is a sequential count of the unnamed classes in the compilation. For example, the following code sample generates an unnamed class in metadata.  
  
```  
// clr_unnamed_class.cpp  
// compile by using: /clr /LD  
class {} x;  
```  
  
 Use ildasm.exe to view metadata.  
  
## Managed Extensions for C++  
 Visual C++ no longer supports the **/clr:oldsyntax** option. This option was deprecated in Visual Studio 2005. The supported syntax for writing managed code in C++ is C++/CLI. For more information, see [Component Extensions for Runtime Platforms](../../windows/component-extensions-for-runtime-platforms.md).  
  
 If you have code that uses Managed Extensions for C++, we recommend that you port it to use C++/CLI syntax. For information on how to port your code, see [C++/CLI Migration Primer](../../dotnet/cpp-cli-migration-primer.md).  
  
#### To set this compiler option in Visual Studio  
  
1.  In **Solution Explorer**, right-click the project name, and then click **Properties** to open the project **Property Pages** dialog box.  
  
2.  Select the **Configuration Properties** folder.  
  
3.  On the **General** property page, modify the **Common Language Runtime support** property.  
  
    > [!NOTE]
    >  When **/clr** is enabled in the **Property Pages** dialog box, compiler option properties that are not compatible with **/clr** are also adjusted, as required. For example, if **/RTC** is set and then **/clr** is enabled, **/RTC** will be turned off.  
    >   
    >  Also, when you debug a **/clr** application, set the **Debugger Type** property to **Mixed** or **Managed only**. For more information, see [Project Settings for a C++ Debug Configuration](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration).  
  
     For information about how the create a module, see [/NOASSEMBLY (Create a MSIL Module)](../../build/reference/noassembly-create-a-msil-module.md).  
  
#### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAsManaged%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)