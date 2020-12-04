---
description: "Learn more about: CL Filename Syntax"
title: "CL Filename Syntax"
ms.date: "11/04/2016"
helpviewer_keywords: ["syntax, compiler filename", "paths, CL compiler filename syntax", "cl.exe compiler, filename syntax", "extensions, specifying to compiler", "file names [C++], CL compiler", "file names [C++]"]
ms.assetid: 3ca72586-75be-4477-b323-a1be232e80d4
---
# CL Filename Syntax

CL accepts files with names that follow FAT, HPFS, or NTFS naming conventions. Any filename can include a full or partial path. A full path includes a drive name and one or more directory names. CL accepts filenames separated either by backslashes (\\) or forward slashes (/). Filenames that contain spaces must be surrounded by double quote characters. A partial path omits the drive name, which CL assumes to be the current drive. If you don't specify a path, CL assumes the file is in the current directory.

The filename extension determines how files are processed. C and C++ files, which have the extension .c, .cxx, or .cpp, are compiled. Other files, including .obj files, libraries (.lib), and module-definition (.def) files, are passed to the linker without being processed.

## See also

[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
