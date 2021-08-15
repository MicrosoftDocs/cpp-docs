---
description: "Learn more about: /I (Additional include directories)"
title: "/I (Additional include directories)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.AdditionalIncludeDirectories", "VC.Project.VCCLCompilerTool.AdditionalIncludeDirectories", "/I", "VC.Project.VCNMakeTool.IncludeSearchPath"]
helpviewer_keywords: ["/I compiler option [C++]", "Additional Include Directories compiler option", "I compiler option [C++]", "-I compiler option [C++]", "set include directories", "include directories, compiler option [C++]"]
ms.assetid: 3e9add2a-5ed8-4d15-ad79-5b411e313a49
---
# `/I` (Additional include directories)

Adds a directory to the list of directories searched for include files.

## Syntax

> **`/I`** *directory*

### Arguments

*directory*\
The directory to add to the list of directories searched for include files. The space between `/I` and *directory* is optional. Directories that include spaces must be enclosed in double quotes. A directory may be an absolute path or a relative path.

## Remarks

To add more than one directory, use this option more than once. Directories are searched only until the specified include file is found.

You can use this option on the same command line as the ([`/X` (Ignore standard include paths)](x-ignore-standard-include-paths.md)) option.

A [`#include` directive](../../preprocessor/hash-include-directive-c-cpp.md) can be specified in double-quote (or local-first) form, for example, `#include "local.h"`. Or, it can be specified in angle-bracket (or include-path-first) form, for example, `#include <iostream>`.

The compiler searches directories in the following order:

1. If the **`#include`** directive is specified using double-quote form, it first searches local directories. The search begins in the same directory as the file that contains the **`#include`** directive. If it fails to find the file, it searches next in the directories of the currently opened include files, in the reverse order in which they were opened. The search begins in the directory of the parent include file and continues upward through the directories of any grandparent include files.

1. If the **`#include`** directive is specified in angle-bracket form, or if the local directory search has failed, it searches directories specified by using the **`/I`** option, in the order they're specified on the command line.

1. Directories specified in the **`INCLUDE`** environment variable.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **General** property page.

1. Modify the **Additional Include Directories** property. You can specify more than one directory at a time in this property. Directories must be separated by a semicolon (**`;`**).

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories%2A>.

## Example

The following command looks for the include files requested by *`main.c`* in the following order: First, if specified by using double-quotes, local files are searched. Next, search continues in the *`\include`* directory, then in the *`\my\include`* directory, and finally in the directories assigned to the **`INCLUDE`** environment variable, in left to right order.

```cmd
CL /I \include /I\my\include main.c
```

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
