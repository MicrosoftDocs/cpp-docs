---
description: "Learn more about: Unicode support in the compiler and linker"
title: "Unicode Support in the Compiler and Linker"
ms.date: 03/07/2021
f1_keywords: ["VC.Project.VCLinkerTool.UseUnicodeResponseFiles", "VC.Project.VCLibrarianTool.UseUnicodeResponseFiles", "VC.Project.VCCLCompilerTool.UseUnicodeResponseFiles", "VC.Project.VCXDCMakeTool.UseUnicodeResponseFiles"]
helpviewer_keywords: ["Unicode, Visual C++"]
---
# Unicode support in the compiler and linker

Most Microsoft C/C++ (MSVC) build tools support Unicode inputs and outputs.

## Filenames

Filenames specified on the command line or in compiler directives (such as `#include`) may contain Unicode characters.

## Source code files

Unicode characters are supported in identifiers, macros, string and character literals, and in comments.  Universal character names are also supported.

Unicode can be input into a source code file in the following encodings:

- UTF-16 little endian with or without byte order mark (BOM)

- UTF-16 big endian with or without BOM

- UTF-8 with BOM

In the Visual Studio IDE, you can save files in several encoding formats, including Unicode ones. Save them in the **Save File As** dialog by using the dropdown on the **Save** button. Select **Save with Encoding** in the dropdown. Then, in the **Advanced Save Options** dialog, select an encoding from the dropdown list. Choose **OK** to save the file.

## Output

During compilation, the compiler outputs diagnostics to the console in UTF-16.  The characters that can be displayed at your console depend on the console window properties.  Compiler output redirected to a file is in the current ANSI console codepage.

## Linker response files and `.DEF` files

Response files and *`.DEF`* files can be either UTF-16 or UTF-8 with a BOM, or ANSI.

## `.asm` and `.cod` dumps

*`.asm`* and *`.cod`* dumps are in ANSI by default for compatibility with MASM. Use [`/FAu`](fa-fa-listing-file.md) to output UTF-8.

If you specify **`/FAs`**, the intermingled source gets printed directly. It may look garbled, for example, when the source code is UTF-8 and you didn't specify **`/FAsu`**.

## See also

[Use the MSVC toolset from the command line](../building-on-the-command-line.md)
