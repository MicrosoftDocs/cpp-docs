---
description: "Learn more about: Environment Names"
title: "Environment Names"
ms.date: "11/04/2016"
ms.assetid: 9af409a5-e724-465a-9a21-88d3586c2e92
---
# Environment Names

**ANSI 4.10.4.4** The set of environment names and the method for altering the environment list used by the [getenv](../c-runtime-library/reference/getenv-wgetenv.md) function

The set of environment names is unlimited.

To change environment variables from within a C program, call the [_putenv](../c-runtime-library/reference/putenv-wputenv.md) function. To change environment variables from the command line in Windows, use the SET command (for example, SET LIB = D:\ LIBS).

Environment variables set from within a C program exist only as long as their host copy of the operating system command shell is running (CMD.EXE or COMMAND.COM). For example, the line

```
system( SET LIB = D:\LIBS );
```

would run a copy of the command shell (CMD.EXE), set the environment variable LIB, and return to the C program, exiting the secondary copy of CMD.EXE. Exiting that copy of CMD.EXE removes the temporary environment variable LIB.

Likewise, changes made by the `_putenv` function last only until the program ends.

## See also

[Library Functions](../c-language/library-functions.md)<br/>
[_putenv, _wputenv](../c-runtime-library/reference/putenv-wputenv.md)<br/>
[getenv, _wgetenv](../c-runtime-library/reference/getenv-wgetenv.md)
