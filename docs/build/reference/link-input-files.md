---
description: "Learn more about: LINK Input Files"
title: "LINK Input Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["files [C++], LINK", "module definition files", "resources [C++], linker files", "LINK tool [C++], input files", "module definition files, linker files", "input files [C++], LINK", "linker [C++], input files", "import libraries [C++], linker files", "command input to linker files [C++]"]
ms.assetid: bb26fcc5-509a-4620-bc3e-b6c6e603a412
---
# LINK Input Files

You provide the linker with files that contain objects, import and standard libraries, resources, module definitions, and command input. LINK does not use file extensions to make assumptions about the contents of a file. Instead, LINK examines each input file to determine what kind of file it is.

Object files on the command line are processed in the order they appear on the command line. Libraries are searched in command line order as well, with the following caveat: Symbols that are unresolved when bringing in an object file from a library are searched for in that library first, and then the following libraries from the command line and [/DEFAULTLIB (Specify Default Library)](defaultlib-specify-default-library.md) directives, and then to any libraries at the beginning of the command line.

> [!NOTE]
> LINK no longer accepts a semicolon (or any other character) as the start of a comment in response files and order files. Semicolons are recognized only as the start of comments in module-definition files (.def).

LINK uses the following types of input files:

- [.obj files](dot-obj-files-as-linker-input.md)

- [.netmodule files](netmodule-files-as-linker-input.md)

- [.lib files](dot-lib-files-as-linker-input.md)

- [.exp files](dot-exp-files-as-linker-input.md)

- [.def files](dot-def-files-as-linker-input.md)

- [.pdb files](dot-pdb-files-as-linker-input.md)

- [.res files](dot-res-files-as-linker-input.md)

- [.exe files](dot-exe-files-as-linker-input.md)

- [.txt files](dot-txt-files-as-linker-input.md)

- [.ilk files](dot-ilk-files-as-linker-input.md)

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
