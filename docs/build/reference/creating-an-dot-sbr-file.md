---
title: "Creating an .Sbr File"
ms.date: "11/04/2016"
helpviewer_keywords: ["SBR files", "BSCMAKE, input files", ".sbr files", "source browser files", "local symbols in browse information", "symbols"]
ms.assetid: bdb4b93c-a88a-441a-84fd-01087d03be25
---
# Creating an .Sbr File

The input files for BSCMAKE are .sbr files. The compiler creates an .sbr file for each object file (.obj) it compiles. When you build or update your browse information file, all .sbr files for your project must be available on disk.

To create an .sbr file with all possible information, specify [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md).

To create an .sbr file that doesn't contain local symbols, specify [/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md). If the .sbr files contain local symbols, you can still omit them from the .bsc file by using BSCMAKE's [/El option](../../build/reference/bscmake-options.md)`.`

You can create an .sbr file without performing a full compile. For example, you can specify the /Zs option to the compiler to perform a syntax check and still generate an .sbr file if you specify /FR or /Fr.

The build process can be more efficient if the .sbr files are first packed to remove unreferenced definitions. The compiler automatically packs .sbr files.

## See Also

[Building a .Bsc File](../../build/reference/building-a-dot-bsc-file.md)