---
title: "/clr (Common Language Runtime Compilation)"
ms.date: "09/18/2018"
f1_keywords: ["/CLR", "VC.Project.VCNMakeTool.CompileAsManaged", "VC.Project.VCCLCompilerTool.CompileAsManaged"]
helpviewer_keywords: ["cl.exe compiler, common language runtime option", "-clr compiler option [C++]", "clr compiler option [C++]", "/clr compiler option [C++]", "Managed Extensions for C++, compiling", "common language runtime, /clr compiler option"]
ms.assetid: fec5a8c0-40ec-484c-a213-8dec918c1d6c
---
# /clr (Common Language Runtime Compilation)

Enables applications and components to use features from the common language runtime (CLR).

## Syntax

> **/clr**[**:**_options_]

## Arguments

*options*<br/>
One or more of the following switches, comma-separated.

- none

   With no options, **/clr** creates metadata for the application. The metadata can be consumed by other CLR applications, and enables the application to consume types and data in the metadata of other CLR components. For more information, see [Mixed (Native and Managed) Assemblies](../../dotnet/mixed-native-and-managed-assemblies.md).

- **pure**

   **/clr:pure is deprecated**. The option is removed in Visual Studio 2017. We recommend that you port code that must be pure MSIL to C#.

- **safe**

   **/clr:safe is deprecated**. The option is removed in Visual Studio 2017. We recommend that you port code that must be safe MSIL to C#.

- **noAssembly**

   **/clr:noAssembly is deprecated**. Use [/LN (Create MSIL Module)](ln-create-msil-module.md) instead.

   Specifies that an assembly manifest should not be inserted into the output file. By default, the **noAssembly** option is not in effect.

   A managed program that does not have assembly metadata in the manifest is known as a *module*. The **noAssembly** option can be used only to produce a module. If you compile by using [/c](c-compile-without-linking.md) and **/clr:noAssembly**, then specify the [/NOASSEMBLY](noassembly-create-a-msil-module.md) option in the linker phase to create a module.

   Before Visual C++ 2005, **/clr:noAssembly** required **/LD**. **/LD** is now implied when you specify **/clr:noAssembly**.

- **initialAppDomain**

   Enables a Visual C++ application to run on version 1 of the CLR.  An application that is compiled by using **initialAppDomain** should not be used by an application that uses ASP.NET because it is not supported in version 1 of the CLR.

- **nostdlib**

   Instructs the compiler to ignore the default \clr directory. The compiler produces errors if you are including multiple versions of a DLL such as System.dll. Using this option lets you specify the specific framework to use during compilation.

## Remarks

Managed code is code that can be inspected and managed by the CLR. Managed code can access managed objects. For more information, see [/clr Restrictions](clr-restrictions.md).

For information about how to develop applications that define and consume managed types, see [Component Extensions for Runtime Platforms](../../windows/component-extensions-for-runtime-platforms.md).

An application compiled by using **/clr** may or may not contain managed data.

To enable debugging on a managed application, see [/ASSEMBLYDEBUG (Add DebuggableAttribute)](assemblydebug-add-debuggableattribute.md).

Only CLR types will be instantiated on the garbage-collected heap. For more information, see [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md). To compile a function to native code, use the `unmanaged` pragma. For more information, see [managed, unmanaged](../../preprocessor/managed-unmanaged.md).

By default, **/clr** is not in effect. When **/clr** is in effect, **/MD** is also in effect. For more information, see [/MD, /MT, /LD (Use Run-Time Library)](md-mt-ld-use-run-time-library.md). **/MD** ensures that the dynamically linked, multithreaded versions of the runtime routines are selected from the standard header (.h) files. Multithreading is required for managed programming because the CLR garbage collector runs finalizers in an auxiliary thread.

If you compile by using **/c**, you can specify the CLR type of the resulting output file with [/CLRIMAGETYPE](clrimagetype-specify-type-of-clr-image.md).

**/clr** implies **/EHa**, and no other **/EH** options are supported for **/clr**. For more information, see [/EH (Exception Handling Model)](eh-exception-handling-model.md).

For information about how to determine the CLR image type of a file, see [/CLRHEADER](clrheader.md).

All modules passed to a given invocation of the linker must be compiled by using the same run-time library compiler option (**/MD** or **/LD**).

Use the [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md) linker option to embed a resource in an assembly. [/DELAYSIGN](delaysign-partially-sign-an-assembly.md), [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md), and [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) linker options also let you customize how an assembly is created.

When **/clr** is used, the `_MANAGED` symbol is defined to be 1. For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md).

The global variables in a native object file are initialized first (during DllMain if the executable is a DLL), and then the global variables in the managed section are initialized (before any managed code is run). `#pragma` [init_seg](../../preprocessor/init-seg.md) only affects the order of initialization in the managed and unmanaged categories.

## Metadata and Unnamed Classes

Unnamed classes will appear in metadata named as follows: `$UnnamedClass$`*crc-of-current-file-name*`$`*index*`$`, where *index* is a sequential count of the unnamed classes in the compilation. For example, the following code sample generates an unnamed class in metadata.

```cpp
// clr_unnamed_class.cpp
// compile by using: /clr /LD
class {} x;
```

Use ildasm.exe to view metadata.

## See Also

[MSVC Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](compiler-command-line-syntax.md)