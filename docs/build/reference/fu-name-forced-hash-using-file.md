---
description: "Learn more about: /FU (Name Forced #using File)"
title: "/FU (Name Forced #using File)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.ForcedUsingFiles", "/FU", "VC.Project.VCNMakeTool.ForcedUsingAssemblies"]
helpviewer_keywords: ["-FU compiler option [C++]", "FU compiler option [C++]", "/FU compiler option [C++]"]
ms.assetid: 698f8603-457f-435a-baff-5ac9243d6ca1
---
# /FU (Name Forced #using File)

A compiler option that you can use as an alternative to passing a file name to [#using Directive](../../preprocessor/hash-using-directive-cpp.md) in source code.

## Syntax

> **/FU** *file*

## Arguments

*file*<br/>
Specifies the metadata file to reference in this compilation.

## Remarks

The /FU switch takes just one file name. To specify multiple files, use /FU with each one.

If you are using C++/CLI and are referencing metadata to use the [Friend Assemblies](../../dotnet/friend-assemblies-cpp.md) feature, you can't use **/FU**. You must reference the metadata in code by using `#using`—together with the `[as friend]` attribute. Friend assemblies are not supported in Visual C++ component extensions C++/CX.

For information about how to create an assembly or module for the common language runtime (CLR), see [/clr (Common Language Runtime Compilation)](clr-common-language-runtime-compilation.md). For information about how to build in C++/CX, see [Building apps and libraries](../../cppcx/building-apps-and-libraries-c-cx.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Advanced** property page.

1. Modify the **Force #using** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedUsingFiles%2A>.

## See also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
