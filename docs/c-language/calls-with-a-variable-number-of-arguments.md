---
description: "Learn more about: Calls with a Variable Number of Arguments"
title: "Calls with a Variable Number of Arguments"
ms.date: "11/04/2016"
helpviewer_keywords: ["arguments [C++], function", "arguments [C++], variable number of", "VARARGS.H", "ellipsis (...), variable number of arguments", "STDARGS.H", "function calls, arguments", "... ellipsis", "function calls, variable number of arguments"]
ms.assetid: 8808fb26-4822-42f5-aba3-ac64b54e151b
---
# Calls with a Variable Number of Arguments

A partial parameter list can be terminated by the ellipsis notation, a comma followed by three periods (**, ...**), to indicate that there may be more arguments passed to the function, but no more information is given about them. Type checking is not performed on such arguments. At least one parameter must precede the ellipsis notation and the ellipsis notation must be the last token in the parameter list. Without the ellipsis notation, the behavior of a function is undefined if it receives parameters in addition to those declared in the parameter list.

To call a function with a variable number of arguments, simply specify any number of arguments in the function call. An example is the `printf` function from the C run-time library. The function call must include one argument for each type name declared in the parameter list or the list of argument types.

All the arguments specified in the function call are placed on the stack unless the **`__fastcall`** calling convention is specified. The number of parameters declared for the function determines how many of the arguments are taken from the stack and assigned to the parameters. You are responsible for retrieving any additional arguments from the stack and for determining how many arguments are present. The STDARG.H file contains ANSI-style macros for accessing arguments of functions which take a variable number of arguments. Also, the XENIX-style macros in VARARGS.H are still supported.

This sample declaration is for a function that calls a variable number of arguments:

```
int average( int first, ...);
```

## See also

[Function Calls](../c-language/function-calls.md)
