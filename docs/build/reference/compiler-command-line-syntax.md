---
title: "MSVC Compiler Command-Line Syntax"
description: "Learn more about: Compiler Command-Line Syntax"
ms.date: 11/04/2016
helpviewer_keywords: ["syntax, CL compiler command line", "cl.exe compiler, command-line syntax"]
---
# Compiler Command-Line Syntax

The CL command line uses the following syntax:

```cmd
CL [option...] file... [option | file]... [lib...] [@command-file] [/link link-opt...]
```

The following table describes input to the CL command.

|Entry|Meaning|
|-----------|-------------|
|*option*|One or more [CL options](compiler-options.md). All options apply to all specified source files. Specify options using either a forward slash (/) or a dash (-). Generally, there can't be a space between the option and argument. The option's description states when a space is allowed. Options are case-sensitive--except for `/HELP`. For more information, see [Order of CL Options](order-of-cl-options.md).|
|`file`|The name of one or more source files, .obj files, or libraries. CL compiles source files and passes the names of the .obj files and libraries to the linker. For more information, see [CL Filename Syntax](cl-filename-syntax.md).|
|*lib*|One or more library names. CL passes these names to the linker.|
|*command-file*|A file that contains multiple options and filenames. For more information, see [CL Command Files](cl-command-files.md).|
|*link-opt*|One or more [MSVC Linker Options](linker-options.md). CL passes these options to the linker.|

You can specify any number of options, filenames, and library names, as long as the number of characters on the command line does not exceed 1024, the limit dictated by the operating system.

For information about the return value of cl.exe, see [Return Value of cl.exe](return-value-of-cl-exe.md) .

> [!NOTE]
> The command-line input limit of 1024 characters is not guaranteed to remain the same in future releases of Windows.

## See also

[MSVC Compiler Options](compiler-options.md)
