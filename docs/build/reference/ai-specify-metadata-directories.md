---
description: "Learn more about: /AI (Specify Metadata Directories)"
title: "/AI (Specify Metadata Directories)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.AdditionalUsingDirectories", "VC.Project.VCNMakeTool.AssemblySearchPath", "/AI", "VC.Project.VCCLWCECompilerTool.AdditionalUsingDirectories"]
helpviewer_keywords: ["/AI compiler option [C++]", "AI compiler option [C++]", "-AI compiler option [C++]"]
ms.assetid: fb9c1846-504c-4a3b-bb39-c8696de32f6f
---
# /AI (Specify Metadata Directories)

Specifies a directory that the compiler will search to resolve file references passed to the `#using` directive.

## Syntax

> **/AI**_directory_

## Arguments

*directory*<br/>
The directory or path for the compiler to search.

## Remarks

Only one directory can be passed to an **/AI** invocation. Specify one **/AI** option for each path you want the compiler to search. For example, to add both C:\Project\Meta and C:\Common\Meta to the compiler search path for `#using` directives, add `/AI"C:\Project\Meta" /AI"C:\Common\Meta"` to the compiler command line or add each directory to the **Additional #using Directories** property in Visual Studio.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **General** property page.

1. Modify the **Additional #using Directories** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalUsingDirectories%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[#using Directive](../../preprocessor/hash-using-directive-cpp.md)
