---
description: "Learn more about: /SYMBOLS"
title: "/SYMBOLS"
ms.date: "09/05/2018"
f1_keywords: ["/symbols"]
helpviewer_keywords: ["symbols, dumping", "public symbols", "symbols, displaying COFF symbol table", "symbol tables", "SYMBOLS dumpbin option", "/SYMBOLS dumpbin option", "-SYMBOLS dumpbin option"]
ms.assetid: 34bcae90-4561-4c77-a80c-065508dec39a
---
# /SYMBOLS

```
/SYMBOLS
```

This option displays the COFF symbol table. Symbol tables exist in all object files. A COFF symbol table appears in an image file only if it is linked with /DEBUG.

The following is a description of the output for /SYMBOLS. Additional information on the meaning of /SYMBOLS output can be found by looking in winnt.h (IMAGE_SYMBOL and IMAGE_AUX_SYMBOL), or COFF documentation.

Given the following sample dump:

```
Dump of file main.obj
File Type: COFF OBJECT

COFF SYMBOL TABLE
000 00000000 DEBUG    notype       Filename     | .file
    main.cpp
002 000B1FDB ABS      notype       Static       | @comp.id
003 00000000 SECT1    notype       Static       | .drectve
    Section length     26, #relocs    0, #linenums    0, checksum 722C964F
005 00000000 SECT2    notype       Static       | .text
    Section length     23, #relocs    1, #linenums    0, checksum 459FF65F, selection    1 (pick no duplicates)
007 00000000 SECT2    notype ()    External     | _main
008 00000000 UNDEF    notype ()    External     | ?MyDump@@YAXXZ (void __cdecl MyDump(void))

String Table Size = 0x10 bytes

  Summary

         26 .drectve
         23 .text
```

## Remarks

The following description, for lines that begin with a symbol number, describes columns that have information relevant to users:

- The first three-digit number is the symbol index/number.

- If the third column contains SECT*x*, the symbol is defined in that section of the object file. But if UNDEF appears, it is not defined in that object and must be resolved elsewhere.

- The fifth column (Static, External) tells whether the symbol is visible only within that object, or whether it is public (visible externally). A Static symbol, _sym, wouldn't be linked to a Public symbol _sym; these would be two different instances of functions named _sym.

The last column in a numbered line is the symbol name, both decorated and undecorated.

Only the [/HEADERS](headers.md) DUMPBIN option is available for use on files produced with the [/GL](gl-whole-program-optimization.md) compiler option.

## See also

[DUMPBIN Options](dumpbin-options.md)
