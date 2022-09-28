---
description: "Learn more about: main function and program execution"
title: "main function and program execution"
ms.date: 09/28/2022
helpviewer_keywords: ["program startup [C++]", "entry points, program", "main function, program execution", "startup code, main function", "main function", "programs [C++], terminating"]
ms.assetid: 5984f1bd-072d-4e06-8640-122fb1454401
---
# `main` function and program execution

Every C program has a primary function that must be named `main`. The `main` function serves as the starting point for program execution. It usually controls program execution by directing the calls to other functions in the program.

Several restrictions apply to the `main` function that don't apply to any other C functions. The `main` function:

- Can't be declared as **`inline`**.
- Can't be declared as **`static`**.
- Can't have its address taken.
- Can't be called from your program.

## The `main` function signature

The `main` function doesn't have a declaration, because it's built into the language. If it did, the declaration syntax for `main` would look like this:

```C
int main( void );
int main( int argc, char *argv[ ] );
int main( int argc, char *argv[ ], char *envp[ ] );
```

The `main` function is declared implicitly by using one of these signatures. You may use any of these signatures when you define your `main` function. The Microsoft compiler also allows `main` to have a return type of **`void`** when no value is returned. The *`argv`* and *`envp`* parameters to `wmain` can also be defined as type `char**`. For more information about the arguments, see [Argument description](./argument-description.md).

## Remarks

Functions within the source program perform one or more specific tasks. The `main` function can call these functions to perform their respective tasks. When `main` calls another function, it passes execution control to the function, so that execution begins at the first statement in the function. A function returns control to `main` when a **`return`** statement is executed or when the end of the function is reached.

You can declare any function, including `main`, to have parameters. The term "parameter" or "formal parameter" refers to the identifier that receives a value passed to a function. See [Parameters](../c-language/parameters.md) for information on passing arguments to parameters. When one function calls another, the called function receives values for its parameters from the calling function. These values are called *arguments*. You can declare formal parameters to `main` so that it can receive arguments from the command line using the format shown in the function signature.

When you want to pass information to the `main` function, the parameters are traditionally named *`argc`* and *`argv`*, although the C compiler doesn't require these names. Traditionally, if a third parameter is passed to `main`, that parameter is named *`envp`*. The types for *`argc`*, *`argv`*, and *`envp`* are defined by the C language. You can also declare *`argv`* as `char** argv` and *`envp`* as `char** envp`. Examples later in this section show how to use these three parameters to access command-line arguments. The following sections explain these parameters.

If your code adheres to the Unicode programming model, you can use the Microsoft-specific wide-character version of **`main`**, **`wmain`**, as your program's entry point. For more information about this wide-character version of **`main`**, see [Using `wmain`](../c-language/using-wmain.md).

## `main` termination

A program usually stops executing when it returns from or reaches the end of `main`, although it can terminate at other points in the program for various reasons. For example, you may want to force the termination of your program when some error condition is detected. To do so, you can use the `exit` function. For more information on `exit` and an example of usage, see [`exit`](../c-runtime-library/reference/exit-exit-exit.md).

## See also

[`main` function and command-line arguments (C++)](../cpp/main-function-command-line-args.md)\
[Parsing C command-line arguments](../c-language/parsing-c-command-line-arguments.md)
