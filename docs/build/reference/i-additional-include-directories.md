---
description: "Learn more about: /I (Additional include directories)"
title: "/I (Additional include directories)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.AdditionalIncludeDirectories", "VC.Project.VCCLCompilerTool.AdditionalIncludeDirectories", "/I", "VC.Project.VCNMakeTool.IncludeSearchPath"]
helpviewer_keywords: ["/I compiler option [C++]", "Additional Include Directories compiler option", "I compiler option [C++]", "-I compiler option [C++]", "set include directories", "include directories, compiler option [C++]"]
ms.assetid: 3e9add2a-5ed8-4d15-ad79-5b411e313a49
---
# /I (Additional include directories)

Adds a directory to the list of directories searched for include files.

## Syntax

> **/I**[ ]*directory*

### Arguments

*directory*<br/>
The directory to be added to the list of directories searched for include files.

## Remarks

To add more than one directory, use this option more than once. Directories are searched only until the specified include file is found.

You can use this option with the ([/X (Ignore Standard Include Paths)](x-ignore-standard-include-paths.md)) option.

The compiler searches directories in the following order:

1. If specified using a [#include directive](../../preprocessor/hash-include-directive-c-cpp.md) in double-quote form, it first searches local directories. The search begins in the same directory as the file that contains the **#include** statement. If this fails to find the file, it searches in the directories of the currently opened include files, in the reverse order in which they were opened. The search begins in the directory of the parent include file and continues upward through the directories of any grandparent include files.

1. If specified using a **#include** directive in angle bracket form, or if the local directory search has failed, it searches directories specified by using the **/I** option, in the order that CL encounters them on the command line.

1. Directories specified in the **INCLUDE** environment variable.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **General** property page.

1. Modify the **Additional Include Directories** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories%2A>.

## Example

The following command looks for the include files requested by MAIN.c in the following order: First, if specified by using double-quotes, local files are searched. Next, search continues in the \INCLUDE directory, then in the \MY\INCLUDE directory, and finally in the directories assigned to the INCLUDE environment variable.

```
CL /I \INCLUDE /I\MY\INCLUDE MAIN.C
```

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
