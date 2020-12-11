---
description: "Learn more about: execution_character_set pragma"
title: "execution_character_set pragma"
ms.date: "08/29/2019"
f1_keywords: ["execution_character_set", "vc-pragma.execution_character_set"]
helpviewer_keywords: ["pragma execution_character_set"]
ms.assetid: 32248cbc-7c92-4dca-8442-230c052b53ad
---
# execution_character_set pragma

Specifies the execution character set used for string and character literals. This directive is not needed for literals marked with the `u8` prefix.

## Syntax

> **#pragma execution_character_set(** "*target*" **)**

### Parameters

*target*\
Specifies the target execution character set. Currently the only target execution set supported is "utf-8".

## Remarks

This compiler directive is obsolete starting in Visual Studio 2015 Update 2. We recommend that you use the `/execution-charset:utf-8` or `/utf-8` compiler options together with using the `u8` prefix on narrow character and string literals that contain extended characters. For more information about the `u8` prefix, see [String and Character Literals](../cpp/string-and-character-literals-cpp.md). For more information about the compiler options, see [/execution-charset (Set Execution Character Set)](../build/reference/execution-charset-set-execution-character-set.md) and [/utf-8 (Set Source and Executable character sets to UTF-8)](../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md).

The `#pragma execution_character_set("utf-8")` directive tells the compiler to encode narrow character and narrow string literals in your source code as UTF-8 in the executable. This output encoding is independent of the source file encoding used.

By default, the compiler encodes narrow characters and narrow strings by using the current code page as the execution character set. This means that Unicode or DBCS characters in a literal that are outside the range of the current code page are converted to the default replacement character in the output. Unicode and DBCS characters are truncated to their low-order byte. This is almost certainly not what you intend. You can specify UTF-8 encoding for literals in the source file by using a `u8` prefix. The compiler passes these UTF-8 encoded strings to the output unchanged. Narrow character literals prefixed by using u8 must fit in one byte, or they are truncated on output.

By default, Visual Studio uses the current code page as the source character set used to interpret your source code for output. When a file is read in, Visual Studio interprets it according to the current code page unless the file code page was set, or unless a byte-order mark (BOM) or UTF-16 characters are detected at the beginning of the file. Because UTF-8 can't be set as the current code page, when the automatic detection encounters source files encoded as UTF-8 without a BOM, Visual Studio assumes that they are encoded by using the current code page. Characters in the source file that are outside the range of the specified or automatically detected code page can cause compiler warnings and errors.

## See also

[Pragma Directives and the \_\_Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[/execution-charset (Set Execution Character Set)](../build/reference/execution-charset-set-execution-character-set.md)\
[/utf-8 (Set Source and Executable character sets to UTF-8)](../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)
