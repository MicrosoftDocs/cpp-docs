---
title: "Unicode Support in the Compiler and Linker | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2017"
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["VC.Project.VCLinkerTool.UseUnicodeResponseFiles", "VC.Project.VCLibrarianTool.UseUnicodeResponseFiles", "VC.Project.VCCLCompilerTool.UseUnicodeResponseFiles", "VC.Project.VCXDCMakeTool.UseUnicodeResponseFiles"]
dev_langs: ["C++"]
helpviewer_keywords: ["Unicode, Visual C++"]
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Unicode Support in the Compiler and Linker

Most Visual C++ build tools support Unicode inputs and outputs.

## Filenames

Filenames specified on the command line or in compiler directives (such as `#include`) may contain Unicode characters.

## Source code files

Unicode characters are supported in identifiers, macros, string and character literals, and in comments.  Universal character names are also supported.

Unicode can be input into a source code file in the following encodings:

- UTF-16 little endian with or without byte order mark (BOM)

- UTF-16 big endian with or without BOM

- UTF-8 with BOM

## Output

During compilation, the compiler outputs diagnostics to the console in UTF-16.  The characters that can be displayed at your console depend on the console window properties.  Compiler output redirected to a file is in the current ANSI console codepage.

## Linker response files and .DEF files

Response files and DEF files can be either UTF-16 with a BOM, or ANSI.

## .asm and .cod dumps

.asm and .cod dumps are in ANSI by default for compatibility with MASM. Use [/FAu](../../build/reference/fa-fa-listing-file.md) to output UTF-8. Note that if you specify **/FAs**, the intermingled source will just be directly printed and may look garbled, for example if source code is UTF-8 and you didn't specify **/FAsu**.

## See also

[Build C/C++ code on the command line](../../build/building-on-the-command-line.md)