---
description: "Learn more about: /FI (Name Forced Include File)"
title: "/FI (Name Forced Include File)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCNMakeTool.ForcedIncludes", "VC.Project.VCCLCompilerTool.ForcedIncludeFiles", "VC.Project.VCCLWCECompilerTool.ForcedIncludeFiles"]
helpviewer_keywords: ["FI compiler option [C++]", "-FI compiler option [C++]", "/FI compiler option [C++]", "preprocess header file compiler option [C++]"]
ms.assetid: 07e79577-8152-4df9-a64c-aae08c603397
---
# /FI (Name Forced Include File)

Causes the preprocessor to process the specified header file.

## Syntax

```
/FI[ ]pathname
```

## Remarks

This option has the same effect as specifying the file with double quotation marks in an `#include` directive on the first line of every source file specified on the command line, in the CL environment variable, or in a command file. If you use multiple **/FI** options, files are included in the order they are processed by CL.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Advanced** property page.

1. Modify the **Forced Include File** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedIncludeFiles%2A>.

## See also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Specifying the Pathname](specifying-the-pathname.md)
