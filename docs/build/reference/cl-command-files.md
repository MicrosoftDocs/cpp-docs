---
title: "CL Command Files"
description: "The MSVC compiler lets you specify command files that contain command-line options."
ms.date: 07/08/2020
helpviewer_keywords: ["cl.exe compiler, command files", "command files", "command files, CL compiler"]
ms.assetid: ec3cea06-2af0-4fe9-a94c-119c9d31b3a9
---
# CL Command Files

A command file is a text file that contains compiler options and filenames. It supplies options you would otherwise type on the [command line](compiler-command-line-syntax.md), or specify using the [CL environment variable](cl-environment-variables.md). CL accepts a compiler command file as an argument, either in the CL environment variable, or on the command line. Unlike either the command line or the CL environment variable, you can use multiple lines of options and filenames in a command file.

Options and filenames in a command file are processed when a command filename appears within the CL environment variable or on the command line. However, if the **`/link`** option appears in the command file, all options on the rest of the line are passed to the linker. Options in later lines in the command file, and options on the command line after the command file invocation, are still accepted as compiler options. For more information on how the order of options affects their interpretation, see [Order of CL Options](order-of-cl-options.md).

A command file must not contain the CL command. Each option must begin and end on the same line; you can't use the backslash (**`\`**) to combine an option across two lines.

A command file is specified by an at sign (**`@`**) followed by a filename. The filename can specify an absolute or relative path.

For example, if the following command is in a file named RESP:

```cmd
/Ot /link LIBC.LIB
```

and you specify the following CL command:

```cmd
CL /Ob2 @RESP MYAPP.C
```

the command to CL is as follows:

```cmd
CL /Ob2 /Ot MYAPP.C /link LIBC.LIB
```

Here you can see how the command line and the command-file commands are effectively combined.

## See also

[MSVC compiler command-line syntax](compiler-command-line-syntax.md)<br/>
[MSVC compiler options](compiler-options.md)
