---
description: "Learn more about: main Function and Program Execution"
title: "main Function and Program Execution"
ms.date: "11/04/2016"
helpviewer_keywords: ["program startup [C++]", "entry points, program", "main function, program execution", "startup code, main function", "main function", "programs [C++], terminating"]
ms.assetid: 5984f1bd-072d-4e06-8640-122fb1454401
---
# main Function and Program Execution

Every C program has a primary (main) function that must be named **main**. If your code adheres to the Unicode programming model, you can use the wide-character version of **main**, **wmain**. The **main** function serves as the starting point for program execution. It usually controls program execution by directing the calls to other functions in the program. A program usually stops executing at the end of **main**, although it can terminate at other points in the program for a variety of reasons. At times, perhaps when a certain error is detected, you may want to force the termination of a program. To do so, use the **exit** function. See the *Run-Time Library Reference* for information on and an example using the [exit](../c-runtime-library/reference/exit-exit-exit.md) function.

## Syntax

```
main( int argc, char *argv[ ], char *envp[ ] )
```

## Remarks

Functions within the source program perform one or more specific tasks. The **main** function can call these functions to perform their respective tasks. When **main** calls another function, it passes execution control to the function, so that execution begins at the first statement in the function. A function returns control to **main** when a **`return`** statement is executed or when the end of the function is reached.

You can declare any function, including **main**, to have parameters. The term "parameter" or "formal parameter" refers to the identifier that receives a value passed to a function. See [Parameters](../c-language/parameters.md) for information on passing arguments to parameters. When one function calls another, the called function receives values for its parameters from the calling function. These values are called "arguments." You can declare formal parameters to **main** so that it can receive arguments from the command line using this format:

When you want to pass information to the **main** function, the parameters are traditionally named `argc` and `argv`, although the C compiler does not require these names. The types for `argc` and `argv` are defined by the C language. Traditionally, if a third parameter is passed to **main**, that parameter is named `envp`. Examples later in this section show how to use these three parameters to access command-line arguments. The following sections explain these parameters.

See [Using wmain](../c-language/using-wmain.md) for a description of the wide-character version of **main**.

## See also

[main function and command-line arguments (C++)](../cpp/main-function-command-line-args.md)\
[Parsing C Command-Line Arguments](../c-language/parsing-c-command-line-arguments.md)
