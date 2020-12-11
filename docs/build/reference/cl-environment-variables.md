---
description: "Learn more about: CL environment variables"
title: "CL environment variables"
ms.date: "06/06/2019"
helpviewer_keywords: ["INCLUDE environment variable", "cl.exe compiler, environment variables", "LIBPATH environment variable", "environment variables, CL compiler"]
ms.assetid: 2606585b-a681-42ee-986e-1c9a2da32108
---
# CL environment variables

The CL tool uses the following environment variables:

- CL and \_CL_, if defined. The CL tool prepends the options and arguments defined in the CL environment variable to the command-line arguments, and appends the options and arguments defined in \_CL_, before processing.

- INCLUDE, which must point to the \include subdirectory of your Visual Studio installation.

- LIBPATH, which specifies directories to search for metadata files referenced with [#using](../../preprocessor/hash-using-directive-cpp.md). For more information on LIBPATH, see [#using](../../preprocessor/hash-using-directive-cpp.md).

You can set the CL or \_CL_ environment variable using the following syntax:

> SET CL=[ [*option*] ... [*file*] ...] [/link *link-opt* ...] \
> SET \_CL\_=[ [*option*] ... [*file*] ...] [/link *link-opt* ...]

For details on the arguments to the CL and \_CL_ environment variables, see [MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md).

You can use these environment variables to define the files and options you use most often. Then use the command line to give more files and options to CL for specific purposes. The CL and \_CL_ environment variables are limited to 1024 characters (the command-line input limit).

You can't use the [/D](d-preprocessor-definitions.md) option to define a symbol that uses an equal sign (**=**). Instead, you can use the number sign (**#**) for an equal sign. In this way, you can use the CL or \_CL_ environment variables to define preprocessor constants with explicit values—for example, `/DDEBUG#1` to define `DEBUG=1`.

For related information, see [Set Environment Variables](../setting-the-path-and-environment-variables-for-command-line-builds.md).

## Examples

The following command is an example of setting the CL environment variable:

> SET CL=/Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ

When the CL environment variable is set, if you enter `CL INPUT.C` at the command line, the effective command becomes:

> CL /Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ INPUT.C

The following example causes a plain CL command to compile the source files FILE1.c and FILE2.c, and then link the object files FILE1.obj, FILE2.obj, and FILE3.obj:

> SET CL=FILE1.C FILE2.C \
> SET \_CL_=FILE3.OBJ \
> CL

These environment variables make the call to CL have the same effect as the following command line:

> CL FILE1.C FILE2.C FILE3.OBJ

## See also

[Setting Compiler Options](compiler-command-line-syntax.md) \
[MSVC Compiler Options](compiler-options.md)
