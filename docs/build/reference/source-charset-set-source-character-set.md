---
description: "Learn more about: /source-charset (Set Source Character Set)"
title: "/source-charset (Set Source Character Set)"
ms.date: "02/06/2019"
f1_keywords: ["source-charset", "/source-charset"]
helpviewer_keywords: ["/execution-charset compiler option"]
ms.assetid: d3c5bf7f-526d-4ee4-acc5-c1a02a4fc481
---
# /source-charset (Set Source Character Set)

Lets you specify the source character set for your executable.

## Syntax

```
/source-charset:[IANA_name|.CPID]
```

## Arguments

**IANA_name**<br/>
The IANA-defined character set name.

**CPID**<br/>
The code page identifier as a decimal number.

## Remarks

You can use the **/source-charset** option to specify an extended source character set to use when your source files include characters that are not represented in the basic source character set. The source character set is the encoding used to interpret the source text of your program into the internal representation used as input to the preprocessing phases before compilation. The internal representation is then converted to the execution character set to store string and character values in the executable. You can use either the IANA or ISO character set name, or a dot (.) followed by a 3 to 5 digit decimal code page identifier to specify the character set to use. For a list of supported code page identifiers and character set names, see [Code Page Identifiers](/windows/win32/Intl/code-page-identifiers).

By default, Visual Studio detects a byte-order mark to determine if the source file is in an encoded Unicode format, for example, UTF-16 or UTF-8. If no byte-order mark is found, it assumes the source file is encoded using the current user code page, unless you specify a character set name or code page by using the **/source-charset** option. Visual Studio allows you to save your C++ source code by using any of several character encodings. For more information about source and execution character sets, see [Character Sets](../../cpp/character-sets.md) in the language documentation.

The source character set you supply must map the 7-bit ASCII characters to the same code points in your character set, or many compilation errors are likely to follow. Your source character set must also be mappable to the extended Unicode character set encodable by UTF-8. Characters that are not encodable in UTF-8 are represented by an implementation-specific substitute. The Microsoft compiler uses a question mark for these characters.

If you want to set both the source character set and the execution character set to UTF-8, you can use the **/utf-8** compiler option as a shortcut. It is equivalent to specifying **/source-charset:utf-8 /execution-charset:utf-8** on the command line. Any of these options also enables the **/validate-charset** option by default.

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand the **Configuration Properties**, **C/C++**, **Command Line** folder.

1. In **Additional Options**, add the **/source-charset** option, and specify your preferred encoding.

1. Choose **OK** to save your changes.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/execution-charset (Set Execution Character Set)](execution-charset-set-execution-character-set.md)<br/>
[/utf-8 (Set Source and Executable character sets to UTF-8)](utf-8-set-source-and-executable-character-sets-to-utf-8.md)<br/>
[/validate-charset (Validate for compatible characters)](validate-charset-validate-for-compatible-characters.md)
