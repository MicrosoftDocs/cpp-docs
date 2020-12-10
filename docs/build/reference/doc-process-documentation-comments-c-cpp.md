---
description: "Learn more about: /doc (Process Documentation Comments) (C/C++)"
title: "/doc (Process Documentation Comments) (C/C++)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.GenerateXMLDocumentationFiles", "/doc", "VC.Project.VCCLCompilerTool.XMLDocumentationFileName"]
helpviewer_keywords: ["/doc compiler option [C++]", "comments, C++ code", "XML documentation, comments in source files", "-doc compiler option [C++]"]
ms.assetid: b54f7e2c-f28f-4f46-9ed6-0db09be2cc63
---
# /doc (Process Documentation Comments) (C/C++)

Causes the compiler to process documentation comments in source code files and to create an .xdc file for each source code file that has documentation comments.

## Syntax

> **/doc**[*name*]

## Arguments

*name*<br/>
The name of the .xdc file that the compiler will create. Only valid when one .cpp file is passed in the compilation.

## Remarks

The .xdc files are processed into an .xml file with xdcmake.exe. For more information, see [XDCMake Reference](xdcmake-reference.md).

You can add documentation comments to your source code files. For more information, see [Recommended Tags for Documentation Comments](recommended-tags-for-documentation-comments-visual-cpp.md).

To use the generated .xml file with IntelliSense, make the file name of the .xml file the same as the assembly that you want to support and put the .xml file is in the same directory as the assembly. When the assembly is referenced in the Visual Studio project, the .xml file is also found. For more information, see [Using IntelliSense](/visualstudio/ide/using-intellisense) and [Supplying XML Code Comments](/visualstudio/ide/supplying-xml-code-comments).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Output Files** property page.

1. Modify the **Generate XML Documentation Files** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GenerateXMLDocumentationFiles%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
