---
title: "-clr (Common Language Runtime Compilation)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
  
 [Mixed (Native and Managed) Assemblies](../cli/mixed--native-and-managed--assemblies.md) and  
  
 [How to: Migrate to /clr](../cli/how-to--migrate-to--clr.md).  
  
 **/clr:pure**  
 Produces a Microsoft Intermediate Language (MSIL)-only output file that has no native executable code. However, it can contain native types compiled to MSIL.  
  
 For more information, see [Pure and Verifiable Code (C++/CLI)](../cli/pure-and-verifiable-code--c---cli-.md).  
  
 /clr:pure is deprecated. A future version of the compiler may not support this option. We recommend that you port code that must be pure MSIL to C#.  
  
 **/clr:safe**  
 Produces an MSIL-only (no native executable code), verifiable output file. **/clr:safe** enables verification diagnostics ([PEVerify Tool (Peverify.exe)](../Topic/Peverify.exe%20\(PEVerify%20Tool\).md)).  
  
 For more information, see [NIB: Writing Verifiably Type-Safe Code](assetId:///d18f10ef-3b48-4f47-8726-96714021547b).  
  
 /clr:safe is deprecated. A future version of the compiler may not support this option. We recommend that you port code that must be pure, verifiable MSIL to C#.  
  
 **/clr:noAssembly**  
 Specifies that an assembly manifest should not be inserted into the output file. By default, the **noAssembly** option is not in effect.  
  
 The **noAssembly** option is deprecated. Use [/LN (Create MSIL Module)](../buildref/-ln--create-msil-module-.md) instead.  
  
 A managed program that does not have assembly metadata in the manifest is known as a *module*. The **noAssembly** option can be used only to produce a module. If you compile by using [/c](../buildref/-c--compile-without-linking-.md) and **/clr:noAssembly**, then specify the [/NOASSEMBLY](../buildref/-noassembly--create-a-msil-module-.md) option in the linker phase to create a module.  
  
 Before Visual C++ 2005, **/clr:noAssembly** required **/LD**. **/LD** is now implied when you specify **/clr:noAssembly**.  
  
 **/clr:initialAppDomain**  
 Enables a [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] application to run on version 1 of the CLR. If you use **initialAppDomain**, then you may see some of the problems that are discussed in [BUG: AppDomainUnloaded exception when you use managed extensions for Visual C++ components](http://go.microsoft.com/fwlink/?LinkID=169465) on the Microsoft Support Web site.  
  
 An application that is compiled by using **initialAppDomain** should not be used by an application that uses ASP.NET because it is not supported in version 1 of the CLR.  
  
 **/clr:nostdlib**  
 Instructs the compiler to ignore the default \clr directory. The compiler produces errors if you are including multiple versions of a DLL such as System.dll. Using this option lets you specify the specific framework to use during compilation.  
  
## Remarks  
 Managed code is code that can be inspected and managed by the CLR. Managed code can access managed objects. For more information, see [/clr Restrictions](../buildref/-clr-restrictions.md).  
  
 For information about how to develop applications that define and consume managed types, see [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md).  
  
 An application compiled by using **/clr** may or may not contain managed data.  
  
 To enable debugging on a managed application, see [/ASSEMBLYDEBUG (Add DebuggableAttribute)](../buildref/-assemblydebug--add-debuggableattribute-.md).  
  
 Only CLR types will be instantiated on the garbage-collected heap. For more information, see [Classes and Structs](../windows/classes-and-structs---c---component-extensions-.md). To compile a function to native code, use the `unmanaged` pragma. For more information, see [managed, unmanaged](../c/managed--unmanaged.md).  
  
 By default, **/clr** is not in effect. When **/clr** is in effect, **/MD** is also in effect. For more information, see [/MD, /MT, /LD (Use Run-Time Library)](../buildref/-md---mt---ld--use-run-time-library-.md). **/MD** ensures that the dynamically linked, multithreaded versions of the runtime routines are selected from the standard header (.h) files. Multithreading is required for managed programming because the CLR garbage collector runs finalizers in an auxiliary thread.  
  
 If you compile by using **/c**, you can specify the CLR type (IJW, safe, or pure) of the resulting output file with [/CLRIMAGETYPE](../buildref/-clrimagetype--specify-type-of-clr-image-.md).  
  
 **/clr** implies **/EHa**, and no other **/EH** options are supported for **/clr**. For more information, see [/EH (Exception Handling Model)](../buildref/-eh--exception-handling-model-.md).  
  
 For information about how to determine the CLR image type of a file, see [/CLRHEADER](../buildref/-clrheader.md).  
  
 All modules passed to a given invocation of the linker must be compiled by using the same run-time library compiler option (**/MD** or **/LD**).  
  
 Use the [/ASSEMBLYRESOURCE](../buildref/-assemblyresource--embed-a-managed-resource-.md) linker option to embed a resource in an assembly. [/DELAYSIGN](../buildref/-delaysign--partially-sign-an-assembly-.md), [/KEYCONTAINER](../buildref/-keycontainer--specify-a-key-container-to-sign-an-assembly-.md), and [/KEYFILE](../buildref/-keyfile--specify-key-or-key-pair-to-sign-an-assembly-.md) linker options also let you customize how an assembly is created.  
  
 When **/clr** is used, the `_MANAGED` symbol is defined to be 1. For more information, see [Predefined Macros](../c/predefined-macros.md).  
  
 The global variables in a native object file are initialized first (during DllMain if the executable is a DLL), and then the global variables in the managed section are initialized (before any managed code is run). `#pragma`[init_seg](../c/init_seg.md) only affects the order of initialization in the managed and unmanaged categories.  
  
 Compiling by using **/clr:safe** is analogous to compiling by using [/platform:anycpu](../Topic/-platform%20\(C%23%20Compiler%20Options\).md) in languages such as C#.  
  
## Safe and Pure Images  
 A pure image uses a CLR version of the C run-time (CRT) library. However, the CRT is not verifiable, so you cannot use the CRT when you compile by using **/clr:safe**. For more information, see [CRT Library Features](../crt/crt-library-features.md).  
  
 Examples of native code that cannot appear in a pure image include inline assembly, [setjmp](../crt/setjmp.md), and [longjmp](../crt/longjmp.md).  
  
 Every entry point of a pure or safe image is managed. When you compile by using **/clr**, the entry point is native. For more information, see [__clrcall](../cpp/__clrcall.md).  
  
 When you compile by using **/clr:safe**, by default, variables are [appdomain](../cpp/appdomain.md) and cannot be per-process. For **/clr:pure**, although **appdomain** is the default, you can use [process](../cpp/process.md) variables.  
  
 When running a 32-bit .exe file that was compiled by using **/clr** or **/clr:pure** on a 64-bit operating system, the application will be run under WOW64, which enables a 32-bit application to run on the 32-bit CLR on a 64-bit operating system. By default, an .exe file that is compiled by using **/clr:safe** will be run on the 64-bit CLR on a computer that is running a 64-bit operating system. (On a 32-bit operating system, the same .exe file would run on the 32-bit CLR.) However, a safe application could load a 32-bit component. In that case, a safe image running under operating system 64-bit support will fail when it loads the 32-bit application (BadFormatException). To ensure that a safe image continues to run when it loads a 32-bit image on a 64-bit operating system, you must use [/CLRIMAGETYPE](../buildref/-clrimagetype--specify-type-of-clr-image-.md) to change the metadata (.corflags), and mark it to be run under WOW64. The following command line is an example. (Substitute your own entry symbol.)  
  
 **cl /clr:safe t.cpp /link /clrimagetype:pure /entry:?main@@$$HYMHXZ /subsystem:console**  
  
 For information about how to get a decorated name, see [Decorated Names](../buildref/decorated-names.md). For more information about 64-bit programming, see [Configuring Programs for 64-Bit](../build/configuring-programs-for-64-bit--visual-c---.md). For information about using pure CLR code, see [How to: Migrate to /clr:pure (C++/CLI)](../cli/how-to--migrate-to--clr-pure--c---cli-.md) and [Pure and Verifiable Code (C++/CLI)](../cli/pure-and-verifiable-code--c---cli-.md).  
  
## Metadata and Unnamed Classes  
 Unnamed classes will appear in metadata named as follows: `$UnnamedClass$`*crc-of-current-file-name*`$`*index*`$`, where *index* is a sequential count of the unnamed classes in the compilation. For example, the following code sample generates an unnamed class in metadata.  
  
```  
// clr_unnamed_class.cpp  
// compile by using: /clr /LD  
class {} x;  
```  
  
 Use ildasm.exe to view metadata.  
  
## Managed Extensions for C++  
 Visual C++ no longer supports the **/clr:oldsyntax** option. This option was deprecated in Visual Studio 2005. The supported syntax for writing managed code in C++ is C++/CLI. For more information, see [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md).  
  
 If you have code that uses Managed Extensions for C++, we recommend that you port it to use C++/CLI syntax. For information on how to port your code, see [C++/CLI Migration Primer](../cli/c---cli-migration-primer.md).  
  
#### To set this compiler option in Visual Studio  
  
1.  In **Solution Explorer**, right-click the project name, and then click **Properties** to open the project **Property Pages** dialog box.  
  
2.  Select the **Configuration Properties** folder.  
  
3.  On the **General** property page, modify the **Common Language Runtime support** property.  
  
    > [!NOTE]
    >  When **/clr** is enabled in the **Property Pages** dialog box, compiler option properties that are not compatible with **/clr** are also adjusted, as required. For example, if **/RTC** is set and then **/clr** is enabled, **/RTC** will be turned off.  
    >   
    >  Also, when you debug a **/clr** application, set the **Debugger Type** property to **Mixed** or **Managed only**. For more information, see [Project Settings for a C++ Debug Configuration](../Topic/Project%20Settings%20for%20a%20C++%20Debug%20Configuration.md).  
  
     For information about how the create a module, see [/NOASSEMBLY (Create a MSIL Module)](../buildref/-noassembly--create-a-msil-module-.md).  
  
#### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAsManaged*>.  
  
## See Also  
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)