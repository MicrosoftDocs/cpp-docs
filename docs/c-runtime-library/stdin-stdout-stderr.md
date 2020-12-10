---
description: "Learn more about: stdin, stdout, stderr"
title: "stdin, stdout, stderr"
ms.date: "10/23/2018"
f1_keywords: ["stdin", "stderr", "stdout"]
helpviewer_keywords: ["stdout function", "standard output stream", "standard error stream", "stdin function", "standard input stream", "stderr function"]
ms.assetid: badd4735-596d-4498-857c-ec8b7e670e4c
---
# stdin, stdout, stderr

## Syntax

```
FILE *stdin;
FILE *stdout;
FILE *stderr;
#include <stdio.h>
```

## Remarks

These are standard streams for input, output, and error output.

By default, standard input is read from the keyboard, while standard output and standard error are printed to the screen.

The following stream pointers are available to access the standard streams:

|Pointer|Stream|
|-------------|------------|
|`stdin`|Standard input|
|`stdout`|Standard output|
|`stderr`|Standard error|

These pointers can be used as arguments to functions. Some functions, such as [getchar](../c-runtime-library/reference/getchar-getwchar.md) and [putchar](../c-runtime-library/reference/putchar-putwchar.md), use `stdin` and `stdout` automatically.

These pointers are constants, and cannot be assigned new values. The [freopen](../c-runtime-library/reference/freopen-wfreopen.md) function can be used to redirect the streams to disk files or to other devices. The operating system allows you to redirect a program's standard input and output at the command level.

## See also

[Stream I/O](../c-runtime-library/stream-i-o.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
