---
description: "Learn more about: Building Browse Information Files: Overview"
title: "Building Browse Information Files: Overview"
ms.date: "05/06/2019"
helpviewer_keywords: [".bsc files, about .bsc files", "bsc files, about bsc files", "browse information files (.bsc)", "browse information files (.bsc), creating"]
ms.assetid: b5c12832-51f6-4953-8044-4264dd0fb242
---
# Building Browse Information Files: Overview

> [!WARNING]
> Although BSCMAKE is still installed with Visual Studio, it is no longer used by the IDE. Since Visual Studio 2008, browse and symbol information is stored automatically in a SQL Server .sdf file in the solution folder.

To create browse information for symbol browsing, the compiler creates an .sbr file for each source file in your project, then BSCMAKE.EXE concatenates the .sbr files into one .bsc file.

Generating .sbr and .bsc files takes time, so Visual Studio turns these functions off by default. If you want to browse current information, you must turn the browse options on and build your project again.

Use [/FR](fr-fr-create-dot-sbr-file.md) or [/Fr](fr-fr-create-dot-sbr-file.md) to tell the compiler to create .sbr files. To create .bsc files, you can call [BSCMAKE](bscmake-command-line.md) from the command line. Using BSCMAKE from the command line gives you more precise control over the manipulation of browse information files. See [BSCMAKE Reference](bscmake-reference.md) for more information.

> [!TIP]
> You can turn on .sbr file generation but leave .bsc file generation turned off. This provides fast builds but also enables you to create a fresh .bsc file quickly by turning on .bsc file generation and building the project.

You can reduce the time, memory, and disk space required to build a .bsc file by reducing the size of the .bsc file.

See [General Property Page (Project)](general-property-page-project.md) for information on how to build a browser file in the development environment.

### To create a smaller .bsc file

1. Use [BSCMAKE command-line options](bscmake-options.md) to exclude information from the browse information file.

1. Omit local symbols in one or more .sbr files when compiling or assembling.

1. If an object file does not contain information needed for your current stage of debugging, omit its .sbr file from the BSCMAKE command when you rebuild the browse information file.

### To combine the browse information from several projects into one browser file (.bsc)

1. Either don't build the .bsc file at the project level or use the /n switch to prevent the .sbr files from being truncated.

1. After all the projects are built, run BSCMAKE with all of the .sbr files as input. Wildcards are accepted. For instance, if you had project directories C:\X, C:\Y, and C:\Z with .sbr files in them and you wanted to combine them all into one .bsc file, then use BSCMAKE  C:\X\\\*.sbr C:\Y\\\*.sbr C:\Z\\\*.sbr /o c:\whatever_directory\combined.bsc to build the combined .bsc file.

## See also

[Additional MSVC Build Tools](c-cpp-build-tools.md)<br/>
[BSCMAKE Reference](bscmake-reference.md)
