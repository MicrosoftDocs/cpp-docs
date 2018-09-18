---
title: "CL Filename Syntax | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["cl"]
dev_langs: ["C++"]
helpviewer_keywords: ["syntax, compiler filename", "paths, CL compiler filename syntax", "cl.exe compiler, filename syntax", "extensions, specifying to compiler", "file names [C++], CL compiler", "file names [C++]"]
ms.assetid: 3ca72586-75be-4477-b323-a1be232e80d4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# CL Filename Syntax

CL accepts files with names that follow FAT, HPFS, or NTFS naming conventions. Any filename can include a full or partial path. A full path includes a drive name and one or more directory names. CL accepts filenames separated either by backslashes (\\) or forward slashes (/). Filenames that contain spaces must be surrounded by double quote characters. A partial path omits the drive name, which CL assumes to be the current drive. If you don't specify a path, CL assumes the file is in the current directory.

The filename extension determines how files are processed. C and C++ files, which have the extension .c, .cxx, or .cpp, are compiled. Other files, including .obj files, libraries (.lib), and module-definition (.def) files, are passed to the linker without being processed.

## See Also

[Compiler Command-Line Syntax](../../build/reference/compiler-command-line-syntax.md)