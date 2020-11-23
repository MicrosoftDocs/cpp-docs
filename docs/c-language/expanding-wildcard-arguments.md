---
title: "Expanding wildcard arguments"
description: "How to use a linker option to process wildcard command-line arguments in your programs."
ms.date: 11/20/2020
helpviewer_keywords: ["asterisk wildcard", "question mark, wildcard", "expanding wildcard arguments", "wildcards, expanding"]
---
# Expanding wildcard arguments

Wildcard argument expansion is Microsoft-specific.

When you run a C program, you can use either of the two wildcards, the question mark (**`?`**) and the asterisk (**`*`**), to specify filename and path arguments on the command line.

By default, wildcards aren't expanded in command-line arguments. You can replace the normal argument vector `argv` loading routine with a version that does expand wildcards by linking with the *`setargv.obj`* or *`wsetargv.obj`* file. If your program uses a `main` function, link with *`setargv.obj`*. If your program uses a `wmain` function, link with *`wsetargv.obj`*. Both of these have equivalent behavior. 

To link with *`setargv.obj`* or *`wsetargv.obj`*, use the **`/link`** option. For example:

**`cl example.c /link setargv.obj`**

The wildcards are expanded in the same manner as operating system commands.

## See also

[Link options](../c-runtime-library/link-options.md)\
[`main` function and program execution](../c-language/main-function-and-program-execution.md)
