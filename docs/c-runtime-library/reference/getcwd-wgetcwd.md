---
title: "_getcwd, _wgetcwd"
description: C Runtime Library functions _getcwd, _wgetcwd get the current working directory.
ms.date: "4/2/2020"
api_name: ["_wgetcwd", "_getcwd", "_o__getcwd", "_o__wgetcwd"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-environment-l1-1-0.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_getcwd", "wgetcwd", "_wgetcwd", "tgetcwd", "_tgetcwd"]
helpviewer_keywords: ["getcwd function", "working directory", "_wgetcwd function", "_getcwd function", "current working directory", "wgetcwd function", "directories [C++], current working"]
ms.assetid: 888dc8c6-5595-4071-be55-816b38e3e739
---
# `_getcwd`, `_wgetcwd`

Gets the current working directory.

## Syntax

```C
char *_getcwd(
   char *buffer,
   int maxlen
);
wchar_t *_wgetcwd(
   wchar_t *buffer,
   int maxlen
);
```

### Parameters

*`buffer`*\
Storage location for the path.

*`maxlen`*\
Maximum length of the path in characters: **`char`** for **`_getcwd`** and **`wchar_t`** for **`_wgetcwd`**.

## Return value

Returns a pointer to *`buffer`*. A `NULL` return value indicates an error, and `errno` is set either to `ENOMEM`, indicating that there's insufficient memory to allocate *`maxlen`* bytes (when a `NULL` argument is given as *`buffer`*), or to `ERANGE`, indicating that the path is longer than *`maxlen`* characters. If *`maxlen`* is less than or equal to zero, this function invokes an invalid parameter handler, as described in [Parameter validation](../parameter-validation.md).

For more information about these and other return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`_getcwd`** function gets the full path of the current working directory for the default drive and stores it at *`buffer`*. The integer argument *`maxlen`* specifies the maximum length for the path. An error occurs if the length of the path (including the terminating null character) exceeds *`maxlen`*. The *`buffer`* argument can be `NULL`; a buffer of at least size *`maxlen`* (more only if necessary) is automatically allocated, using **`malloc`**, to store the path. This buffer can later be freed by calling **`free`** and passing it the **`_getcwd`** return value (a pointer to the allocated buffer).

**`_getcwd`** returns a string that represents the path of the current working directory. If the current working directory is the root, the string ends with a backslash (`\`). If the current working directory is a directory other than the root, the string ends with the directory name and not with a backslash.

**`_wgetcwd`** is a wide-character version of **`_getcwd`**; the *`buffer`* argument and return value of **`_wgetcwd`** are wide-character strings. **`_wgetcwd`** and **`_getcwd`** behave identically otherwise.

When `_DEBUG` and `_CRTDBG_MAP_ALLOC` are defined, calls to **`_getcwd`** and **`_wgetcwd`** are replaced by calls to **`_getcwd_dbg`** and **`_wgetcwd_dbg`**, to allow you to debug memory allocations. For more information, see [`_getcwd_dbg`, `_wgetcwd_dbg`](getcwd-dbg-wgetcwd-dbg.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `Tchar.h` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_tgetcwd`** | **`_getcwd`** | **`_getcwd`** | **`_wgetcwd`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_getcwd`** | `<direct.h>` |
| **`_wgetcwd`** | `<direct.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_getcwd.c
// Compile with: cl /W4 crt_getcwd.c
// This program places the name of the current directory in the
// buffer array, then displays the name of the current directory
// on the screen. Passing NULL as the buffer forces getcwd to allocate
// memory for the path, which allows the code to support file paths
// longer than _MAX_PATH, which are supported by NTFS.

#include <direct.h> // _getcwd
#include <stdlib.h> // free, perror
#include <stdio.h>  // printf
#include <string.h> // strlen

int main( void )
{
   char* buffer;

   // Get the current working directory:
   if ( (buffer = _getcwd( NULL, 0 )) == NULL )
      perror( "_getcwd error" );
   else
   {
      printf( "%s \nLength: %zu\n", buffer, strlen(buffer) );
      free(buffer);
   }
}
```

```Output
C:\Code
```

## See also

[Directory control](../directory-control.md)\
[`_chdir`, `_wchdir`](chdir-wchdir.md)\
[`_mkdir`, `_wmkdir`](mkdir-wmkdir.md)\
[`_rmdir`, `_wrmdir`](rmdir-wrmdir.md)
