---
title: "CL Command Files"
ms.date: "11/04/2016"
f1_keywords: ["cl"]
helpviewer_keywords: ["cl.exe compiler, command files", "command files", "command files, CL compiler"]
ms.assetid: ec3cea06-2af0-4fe9-a94c-119c9d31b3a9
---
# CL Command Files

A command file is a text file that contains options and filenames you would otherwise type on the [command line](compiler-command-line-syntax.md) or specify using the [CL environment variable](reference/cl-environment-variables.md). CL accepts a compiler command file as an argument in the CL environment variable or on the command line. Unlike either the command line or the CL environment variable, a command file allows you to use multiple lines of options and filenames.

Options and filenames in a command file are processed according to the location of a command filename within the CL environment variable or on the command line. However, if the /link option appears in the command file, all options on the rest of the line are passed to the linker. Options in subsequent lines in the command file and options on the command line after the command file invocation are still accepted as compiler options. For more information on how the order of options affects their interpretation, see [Order of CL Options](reference/order-of-cl-options.md).

A command file must not contain the CL command. Each option must begin and end on the same line; you cannot use the backslash (**\\**) to combine an option across two lines.

A command file is specified by an at sign (**\@**) followed by a filename; the filename can specify an absolute or relative path.

For example, if the following command is in a file named RESP:

```
/Og /link LIBC.LIB
```

and you specify the following CL command:

```
CL /Ob2 @RESP MYAPP.C
```

the command to CL is as follows:

```
CL /Ob2 /Og MYAPP.C /link LIBC.LIB
```

Note that the command line and the command-file commands are effectively combined.

## See Also

[Compiler Command Line Syntax](compiler-command-line-syntax.md)<br/>
[Compiler Options](reference/compiler-options.md)