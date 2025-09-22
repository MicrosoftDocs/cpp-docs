---
title: "Command-line warning D9026"
description: "Learn more about: Command-line warning D9026"
ms.date: 12/09/2021
f1_keywords: ["D9026"]
helpviewer_keywords: ["D9026"]
---
# Command-line warning D9026

> options apply to entire command line

## Remarks

A global option was specified after one or more filenames were specified. The option was also applied to the files that preceded it.

## Example

For example, consider this command line:

`CL verdi.c /O2 puccini.c`

Both the files *`verdi.c`* and *`puccini.c`* will be compiled using the **`/O2`** option, not the **`/Od`** default. This behavior may be unexpected, because it differs from some other compilers and from early versions of the cl.exe compiler. Those compilers applied only the options specified before the filename. They'd use **`/Od`** to compile *`verdi.c`* and compile *`puccini.c`* using **`/O2`**. The warning tells you that options apply to all the files on the command line.
