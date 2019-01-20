---
title: ".Obj Files as Linker Input"
ms.date: "12/29/2017"
helpviewer_keywords: ["linker [C++], OBJ files as input", "object files, linker output", "OMF object files", "LINK tool [C++], .obj files", "COFF files", "OBJ files as linker input", ".obj files as linker input"]
---
# .Obj Files as Linker Input

The linker tool (LINK.EXE) accepts .obj files that are in Common Object File Format (COFF).

## Remarks

Microsoft provides a complete description of the common object file format. For more information, see [PE Format](/windows/desktop/Debug/pe-format).

## Unicode support

Starting with Visual Studio 2005, the Microsoft Visual C++ compiler supports Unicode characters in identifiers as defined by the ISO/IEC C and C++ standards. Previous versions of the compiler supported only ASCII characters in identifiers. To support Unicode in the names of functions, classes, and statics, the compiler and linker use the Unicode UTF-8 encoding for COFF symbols in .obj files. The UTF-8 encoding is upwardly compatible with the ASCII encoding used by earlier versions of Visual Studio.

For more information about the compiler and linker, see [Unicode Support in the Compiler and Linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md). For more information about the Unicode standard, see the [Unicode](http://www.unicode.org/) organization.

## See also

- [LINK Input Files](../../build/reference/link-input-files.md)
- [Linker Options](../../build/reference/linker-options.md)
- [Support for Unicode](../../text/support-for-unicode.md)
- [Unicode Support in the Compiler and Linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md)
- [Unicode standard](http://www.unicode.org/)
- [PE Format](/windows/desktop/Debug/pe-format)
