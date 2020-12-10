---
description: "Learn more about: /validate-charset (Validate for compatible characters)"
title: "/validate-charset (Validate for compatible characters)"
ms.date: "02/06/2019"
f1_keywords: ["/validate-charset", "validate-charset"]
helpviewer_keywords: ["/validate-charset compiler option"]
ms.assetid: 50360fd0-4d32-4a4f-95d0-53d38c12ad4c
---
# /validate-charset (Validate for compatible characters)

Validates that the source file text contains only characters representable as UTF-8.

## Syntax

```
/validate-charset[-]
```

## Remarks

You can use the **/validate-charset** option to validate that the source code contains only characters that can be represented in both the source character set and the execution character set. This check is enabled automatically when you specify **/source-charset**, **/execution-charset**, or **/utf-8** compiler options. You can explicitly disable this check by specifying the **/validate-charset-** option.

By default, Visual Studio detects a byte-order mark to determine if the source file is in an encoded Unicode format, for example, UTF-16 or UTF-8. If no byte-order mark is found, it assumes the source file is encoded using the current user code page, unless you have specified a code page by using **/utf-8** or the **/source-charset** option. Visual Studio allows you to save your C++ source code by using any of several character encodings. For information about source and execution character sets, see [Character Sets](../../cpp/character-sets.md) in the language documentation. For a list of supported code page identifiers and character set names, see [Code Page Identifiers](/windows/win32/Intl/code-page-identifiers).

Visual Studio uses UTF-8 as the internal character encoding during conversion between the source character set and the execution character set. If a character in the source file cannot be represented in the execution character set, the UTF-8 conversion substitutes a question mark '?' character. The **/validate-charset** option causes the compilation to report a warning if this occurs.

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand the **Configuration Properties**, **C/C++**, **Command Line** folder.

1. In **Additional Options**, add the **/validate-charset** option, and specify your preferred encoding.

1. Choose **OK** to save your changes.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/execution-charset (Set Execution Character Set)](execution-charset-set-execution-character-set.md)<br/>
[/source-charset (Set Source Character Set)](source-charset-set-source-character-set.md)<br/>
[/utf-8 (Set Source and Executable character sets to UTF-8)](utf-8-set-source-and-executable-character-sets-to-utf-8.md)
