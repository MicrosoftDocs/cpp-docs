---
description: "Learn more about: /validate-charset (Validate for compatible characters)"
title: "/validate-charset (Validate for compatible characters)"
ms.date: 01/31/2022
f1_keywords: ["/validate-charset", "validate-charset"]
helpviewer_keywords: ["/validate-charset compiler option"]
ms.assetid: 50360fd0-4d32-4a4f-95d0-53d38c12ad4c
---
# `/validate-charset` (Validate for compatible characters)

This compiler option validates that the source file text contains only characters representable as UTF-8.

## Syntax

> **`validate-charset`**[**`-`**]

## Remarks

You can use the **`/validate-charset`** option to validate that the source code contains only characters that can be represented in both the source character set and the execution character set. This check is enabled automatically when you specify **`/source-charset`**, **`/execution-charset`**, or **`/utf-8`** compiler options. To explicitly disable this check, specify the **`/validate-charset-`** option.

By default, Visual Studio detects a byte-order mark to determine if the source file is in an encoded Unicode format, for example, UTF-16 or UTF-8. If no byte-order mark is found, it assumes that the source file is encoded in the current user code page, unless you have specified a code page by using **`/utf-8`** or the **`/source-charset`** option. Visual Studio allows you to save your C++ source code in any of several character encodings. For information about source and execution character sets, see [Character sets](../../cpp/character-sets.md) in the language documentation. For a list of supported code page identifiers and character set names, see [Code Page Identifiers](/windows/win32/Intl/code-page-identifiers).

Visual Studio uses UTF-8 as the internal character encoding during conversion between the source character set and the execution character set. If a character in the source file can't be represented in the execution character set, the UTF-8 conversion substitutes a question mark (`?`) character. If a substitution occurs, the **`/validate-charset`** option causes the compiler to report a warning.

### To set this compiler option in the Visual Studio development environment

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional Options**, add the **`/validate-charset`** or  **`/validate-charset-`** option.

1. Choose **OK** to save your changes.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)\
[`/execution-charset` (Set execution character set)](execution-charset-set-execution-character-set.md)\
[`/source-charset` (Set source character set)](source-charset-set-source-character-set.md)\
[`/utf-8` (Set source and execution character sets to UTF-8)](utf-8-set-source-and-executable-character-sets-to-utf-8.md)
