---
title: "Required and Optional Header Files"
description: "When to use required versus optional header files from the Microsoft C runtime library."
ms.date: "11/04/2016"
ms.topic: "conceptual"
f1_keywords: ["c.headers"]
helpviewer_keywords: ["include files, required in run time", "header files, required in run time"]
ms.assetid: f64d0bf5-e2c3-4b42-97d0-443b3d901d9f
---
# Required and optional header files

The description of each run-time routine includes a list of the required and optional include, or header (.H), files for that routine. Required header files need to be included to obtain the function declaration for the routine or a definition used by another routine called internally. Optional header files are often included to take advantage of predefined constants, type definitions, or inline macros. The following table lists some examples of optional header file contents:

| Definition | Example |
|---|---|
| Macro definition | If a library routine is implemented as a macro, the macro definition may be in a header file other than the header file for the original routine. For instance, the `_toupper` macro is defined in the header file CTYPE.H, while the function `toupper` is declared in STDLIB.H. |
| Predefined Constant | Many library routines refer to constants that are defined in header files. For instance, the `_open` routine uses constants such as `_O_CREAT`, which is defined in the header file FCNTL.H. |
| Type definition | Some library routines return a structure or take a structure as an argument. For example, stream input/output routines use a structure of type `FILE`, which is defined in STDIO.H. |

The run-time library header files provide function declarations in the ANSI/ISO C standard recommended style. The compiler performs type checking on any routine reference that occurs after its associated function declaration. Function declarations are especially important for routines that return a value of some type other than **`int`**, which is the default. Routines that don't specify their appropriate return value in their declaration will be considered by the compiler to return an **`int`**, which can cause unexpected results. For more information, see [Type checking](./type-checking-crt.md).

## See also

[C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md)
