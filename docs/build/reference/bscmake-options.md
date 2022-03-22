---
title: "BSCMAKE options"
description: "Reference to the Microsoft BSCMAKE utility command-line options."
ms.date: 03/21/2022
f1_keywords: ["VC.Project.VCBscMakeTool.OutputFile", "VC.Project.VCBscMakeTool.SuppressStartupBanner", "VC.Project.VCBscMakeTool.PreserveSBR"]
helpviewer_keywords: ["/v BSCMAKE option", "Iu BSCMAKE option", "browse information files (.bsc), content", "/Er BSCMAKE option", "NOLOGO BSCMAKE option", "/s BSCMAKE option", "/Ei BSCMAKE option", "/o BSCMAKE option", "/NOLOGO BSCMAKE option", "/Iu BSCMAKE option", "s BSCMAKE option (/s)", "/Em BSCMAKE option", "Em BSCMAKE option", "Es BSCMAKE option", "files [C++], BSCMAKE", "Er BSCMAKE option", "BSCMAKE, options for controlling files", "controlling BSCMAKE options", "El BSCMAKE option", "/El BSCMAKE option", "/Es BSCMAKE option", "Ei BSCMAKE option"]
ms.assetid: fa2f1e06-c684-41cf-80dd-6a554835ebd2
---
# BSCMAKE options

> [!WARNING]
> Although BSCMAKE is still installed with Visual Studio, it's no longer used by the IDE. Since Visual Studio 2008, browse and symbol information is stored automatically in a SQL Server *`.sdf`* file in the solution folder.

This section describes the options available for controlling BSCMAKE. Several options control the content of the browse information file by excluding or including certain information. The exclusion options can allow BSCMAKE to run faster and may result in a smaller *`.bsc`* file. Option names are case-sensitive (except for **`/HELP`** and **`/NOLOGO`**).

Only **`/NOLOGO`** and **`/o`** are available from within the Visual Studio development environment. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

## Options

**`/Ei (`** *`filename`* ... **`)`**\
Excludes the contents of one or more specified *`filename`* include files from the browse information file. To specify multiple files, separate the names with a space and enclose the list in parentheses. Parentheses aren't necessary if you specify only one *`filename`*. Use **`/Ei`** along with the **`/Es`** option to exclude files not excluded by **`/Es`**.

**`/El`**\
Excludes local symbols. The default is to include local symbols. For more information about local symbols, see [Creating an .sbr File](creating-an-dot-sbr-file.md).

**`/Em`**\
Excludes symbols in the body of macros. Use **`/Em`** to include only the names of macros in the browse information file. The default is to include both the macro names and the result of the macro expansions.

**`/Er (`** *`symbol`* ... **`)`**\
Excludes one or more of the specified *`symbol`* symbols from the browse information file. To specify multiple symbol names, separate the names with a space and enclose the list in parentheses. Parentheses are unnecessary if you specify only one *`symbol`*.

**`/Es`**\
Excludes every include file specified with an absolute path, or found in an absolute path specified in the INCLUDE environment variable. (Usually, these files are the system include files, which contain much information you may not need in your browse information file.) This option doesn't exclude files specified without a path, or with relative paths, or files found in a relative path in INCLUDE. You can use the **`/Ei`** option along with **`/Es`** to exclude files that **`/Es`** doesn't exclude. If you want to exclude only some of the files, use **`/Ei`** instead of **`/Es`**, and list the files you want to exclude.

**`/errorreport:`**\[ **`none`** \| **`prompt`** \| **`queue`** \| **`send`** ]\
This option is deprecated. In Windows Vista and later, error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings.

**`/HELP`**\
Displays a summary of the BSCMAKE command-line syntax.

**`/Iu`**\
Includes unreferenced symbols. By default, BSCMAKE doesn't record any symbols that are defined but not referenced. If an *`.sbr`* file has been packed, this option has no effect for that input file because the compiler has already removed the unreferenced symbols.

**`/n`**\
Forces a non-incremental build. Use **`/n`** to force a full build of the browse information file whether a *`.bsc`* file exists or not, and to prevent *`.sbr`* files from being truncated. For more information, see [How BSCMAKE builds a `.bsc` file](how-bscmake-builds-a-dot-bsc-file.md).

**`/NOLOGO`**\
Suppresses the BSCMAKE copyright message.

**`/o`** *`filename`*\
The *`filename`* option parameter specifies a name for the browse information file. By default, BSCMAKE gives the browse information file the base name of the first *`.sbr`* file and a *`.bsc`* extension.

**`/S (`** *`filename`* ... **`)`**\
Tells BSCMAKE to process each specified *`filename`* include file the first time it's encountered and to exclude it otherwise. Use this option to save processing time when a file (such as a header, or *`.h`*, file for a *`.c`* or *`.cpp`* source file) is included in several source files but is unchanged by preprocessing directives each time. Use this option if a file is changed in ways unimportant for the browse information file you're creating. To specify multiple files, separate the names with a space, and enclose the list in parentheses. Parentheses aren't necessary if you specify only one *`filename`*. If you want to exclude the file every time it's included, use the **`/Ei`** or **`/Es`** option.

**`/v`**\
Provides verbose output, which includes the name of each *`.sbr`* file being processed and information about the complete BSCMAKE run.

**`/?`**\
Displays a brief summary of BSCMAKE command-line syntax.

## Example

The following command line tells BSCMAKE to do a full build of *`main.bsc`* from three *`.sbr`* files. It also tells BSCMAKE to exclude duplicate instances of *`toolbox.h`*:

```cmd
BSCMAKE /n /S toolbox.h /o main.bsc file1.sbr file2.sbr file3.sbr
```

## See also

[BSCMAKE reference](bscmake-reference.md)
