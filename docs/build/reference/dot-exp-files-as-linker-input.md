---
description: "Learn more about: .Exp Files as Linker Input"
title: ".Exp Files as Linker Input"
ms.date: "11/04/2016"
helpviewer_keywords: ["exporting functions", "import libraries, linker files", "linking [C++], exports", "exporting functions, information about exported functions", "exporting data, export (.exp) files", "functions [C++], exporting", ".exp files [C++]", "EXP files"]
ms.assetid: 399f5636-0a4d-462e-b500-5f5b9ae5ad22
---
# .Exp Files as Linker Input

Export (.exp) files contain information about exported functions and data items. When LIB creates an import library, it also creates an .exp file. You use the .exp file when you link a program that both exports to and imports from another program, either directly or indirectly. If you link with an .exp file, LINK does not produce an import library, because it assumes that LIB already created one. For details about .exp files and import libraries, see [Working with Import Libraries and Export Files](working-with-import-libraries-and-export-files.md).

## See also

[LINK Input Files](link-input-files.md)<br/>
[MSVC Linker Options](linker-options.md)
