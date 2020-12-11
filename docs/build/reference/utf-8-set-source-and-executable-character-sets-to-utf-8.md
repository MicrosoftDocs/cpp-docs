---
description: "Learn more about: `/utf-8` (Set Source and Executable character sets to UTF-8)"
title: "/utf-8 (Set Source and Executable character sets to UTF-8)"
ms.date: "04/26/2020"
f1_keywords: ["/utf-8"]
helpviewer_keywords: ["/utf-8 compiler option"]
ms.assetid: f0e1f3cb-6cae-46eb-9483-04ed13d9b504
no-loc: [UTF, UTF-8, UTF-16]
---
# `/utf-8` (Set Source and Executable character sets to UTF-8)

Specifies both the source character set and the execution character set as UTF-8.

## Syntax

> **`/utf-8`**

## Remarks

You can use the **`/utf-8`** option to specify both the source and execution character sets as encoded by using UTF-8. It's equivalent to specifying **`/source-charset:utf-8 /execution-charset:utf-8`** on the command line. Any of these options also enables the **`/validate-charset`** option by default. For a list of supported code page identifiers and character set names, see [Code Page Identifiers](/windows/win32/Intl/code-page-identifiers).

By default, Visual Studio detects a byte-order mark to determine if the source file is in an encoded Unicode format, for example, UTF-16 or UTF-8. If no byte-order mark is found, it assumes the source file is encoded using the current user code page, unless you've specified a code page by using **`/utf-8`** or the **`/source-charset`** option. Visual Studio allows you to save your C++ source code by using any of several character encodings. For information about source and execution character sets, see [Character Sets](../../cpp/character-sets.md) in the language documentation.

## Set the option in Visual Studio or programmatically

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional Options**, add the **`/utf-8`** option to specify your preferred encoding.

1. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/execution-charset (Set Execution Character Set)](execution-charset-set-execution-character-set.md)<br/>
[/source-charset (Set Source Character Set)](source-charset-set-source-character-set.md)<br/>
[/validate-charset (Validate for compatible characters)](validate-charset-validate-for-compatible-characters.md)
