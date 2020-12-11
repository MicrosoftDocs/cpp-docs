---
description: "Learn more about: _pgmptr, _wpgmptr"
title: "_pgmptr, _wpgmptr"
ms.date: "11/04/2016"
f1_keywords: ["pgmptr", "_pgmptr", "wpgmptr", "_wpgmptr"]
helpviewer_keywords: ["wpgmptr function", "_wpgmptr function", "_pgmptr function", "pgmptr function"]
ms.assetid: 4d44b515-0eff-4136-8bc4-684195f218f5
---
# _pgmptr, _wpgmptr

The path of the executable file. Deprecated; use [_get_pgmptr](../c-runtime-library/reference/get-pgmptr.md) and [_get_wpgmptr](../c-runtime-library/reference/get-wpgmptr.md).

## Syntax

```
extern char *_pgmptr;
extern wchar_t *_wpgmptr;
```

## Remarks

When a program is run from the command interpreter (Cmd.exe), `_pgmptr` is automatically initialized to the full path of the executable file. For example, if Hello.exe is in C:\BIN and C:\BIN is in the path, `_pgmptr` is set to C:\BIN\Hello.exe when you execute:

```
C> hello
```

When a program is not run from the command line, `_pgmptr` might be initialized to the program name (the file's base name without the file name extension) or to a file name, relative path, or full path.

`_wpgmptr` is the wide-character counterpart of `_pgmptr` for use with programs that use `wmain`.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_tpgmptr`|`_pgmptr`|`_pgmptr`|`_wpgmptr`|

## Requirements

|Variable|Required header|
|--------------|---------------------|
|`_pgmptr`, `_wpgmptr`|\<stdlib.h>|

## Example

The following program demonstrates the use of `_pgmptr`.

```c
// crt_pgmptr.c
// compile with: /W3
// The following program demonstrates the use of _pgmptr.
//
#include <stdio.h>
#include <stdlib.h>
int main( void )
{
   printf("The full path of the executing program is : %Fs\n",
     _pgmptr); // C4996
   // Note: _pgmptr is deprecated; use _get_pgmptr instead
}
```

You could use `_wpgmptr` by changing `%Fs` to `%S` and `main` to `wmain`.

## See also

[Global Variables](../c-runtime-library/global-variables.md)
