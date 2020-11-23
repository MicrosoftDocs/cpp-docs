---
title: "Customizing C command-line processing"
description: "How to suppress `main` function argument and environment parameter handling in the runtime startup code."
ms.date: 11/19/2020
helpviewer_keywords: ["_spawn functions", "command line, processing", "command-line processing", "startup code, customizing command-line processing", "environment, environment-processing routine", "_setargv function", "command line, processing arguments", "suppressing environment processing", "_exec function"]
---
# Customizing C command-line processing

If your program doesn't take command-line arguments, you can suppress the command-line processing routine to save a small amount of space. To suppress its use, include the *`noarg.obj`* file (for both `main` and `wmain`) in your **`/link`** compiler options or your **`LINK`** command line.

Similarly, if you never access the environment table through the *`envp`* argument, you can suppress the internal environment-processing routine. To suppress its use, include the *`noenv.obj`* file (for both `main` and `wmain`) in your **`/link`** compiler options or your **`LINK`** command line.

For more information on runtime startup linker options, see [Link options](../c-runtime-library/link-options.md).

Your program might make calls to the `spawn` or `exec` family of routines in the C runtime library. If it does, you shouldn't suppress the environment-processing routine, since it's used to pass an environment from the parent process to the child process.

## See also

[`main` function and program execution](../c-language/main-function-and-program-execution.md)\
[Link options](../c-runtime-library/link-options.md).
