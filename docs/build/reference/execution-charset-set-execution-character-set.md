---
description: "Learn more about: /execution-charset (Set execution character set)"
title: "/execution-charset (Set execution character set)"
ms.date: 01/31/2022
f1_keywords: ["execution-charset", "/execution-charset"]
helpviewer_keywords: ["/execution-charset compiler option", "-execution-charset compiler option"]
ms.assetid: 0e02f487-2236-45bc-95f3-5760933a8f96
---
# `/execution-charset` (Set execution character set)

This option lets you specify the execution character set for your executable.

## Syntax

> **`/execution-charset:`**[*`IANA_name`* | *`.CPID`*]

## Arguments

*`IANA_name`*\
The IANA-defined character set name.

*`.CPID`*\
The code page identifier, preceded by a `.` character.

## Remarks

You can use the **`/execution-charset`** option to specify an execution character set. The execution character set is the encoding used for the text of your program that is input to the compilation phase after all preprocessing steps. This character set is used for the internal representation of any string or character literals in the compiled code. Set this option to specify the extended execution character set to use when your source files include characters that are not representable in the basic execution character set. You can use either the IANA or ISO character set name, or a dot (`.`) followed by 3-5 decimal digits that specify the code page identifier of the character set to use. For a list of supported code page identifiers and character set names, see [Code Page Identifiers](/windows/win32/Intl/code-page-identifiers).

By default, Visual Studio detects a byte-order mark to determine if the source file is in an encoded Unicode format, for example, UTF-16 or UTF-8. If no byte-order mark is found, it assumes that the source file is encoded in the current user code page, unless you used the **`/source-charset`** or **`/utf-8`** option to specify a character set name or code page. Visual Studio allows you to save your C++ source code in any of several character encodings. For information about source and execution character sets, see [Character sets](../../cpp/character-sets.md) in the language documentation.

If you want to set both the source character set and the execution character set to UTF-8, you can use the **`/utf-8*`** compiler option as a shortcut. It's equivalent to **`/source-charset:utf-8 /execution-charset:utf-8`** on the command line. Any of these options also enables the **`/validate-charset`** option by default.

### To set this compiler option in the Visual Studio development environment

1. Open the **Property Pages** dialog box for your project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional Options**, add the **`/execution-charset`** option, and specify your preferred encoding.

1. Choose **OK** to save your changes.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)\
[`/source-charset` (Set source character set)](source-charset-set-source-character-set.md)\
[`/utf-8` (Set source and execution character sets to UTF-8)](utf-8-set-source-and-executable-character-sets-to-utf-8.md)\
[`/validate-charset` (Validate for compatible characters)](validate-charset-validate-for-compatible-characters.md)
