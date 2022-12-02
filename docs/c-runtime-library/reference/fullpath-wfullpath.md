---
description: "Learn more about: _fullpath, _wfullpath"
title: "_fullpath, _wfullpath"
ms.date: "4/2/2020"
api_name: ["_fullpath", "_wfullpath", "_o__fullpath", "_o__wfullpath"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wfullpath", "fullpath", "_wfullpath", "_fullpath"]
helpviewer_keywords: ["_wfullpath function", "relative file paths", "absolute paths", "wfullpath function", "_fullpath function", "fullpath function"]
---
# `_fullpath`, `_wfullpath`

Creates an absolute or full path name for the specified relative path name.

## Syntax

```C
char *_fullpath(
   char *absPath,
   const char *relPath,
   size_t maxLength
);
wchar_t *_wfullpath(
   wchar_t *absPath,
   const wchar_t *relPath,
   size_t maxLength
);
```

### Parameters

*`absPath`*\
Pointer to a buffer containing the absolute or full path name, or `NULL`.

*`relPath`*\
Relative path name.

*`maxLength`*\
Maximum length of the absolute path name buffer (*`absPath`*). This length is in bytes for **`_fullpath`** but in wide characters (**`wchar_t`**) for **`_wfullpath`**.

## Return value

Each of these functions returns a pointer to a buffer containing the absolute path name (*`absPath`*). If there's an error (for example, if the value passed in *`relPath`* includes a drive letter that isn't valid or can't be found, or if the length of the created absolute path name (*`absPath`*) is greater than *`maxLength`*), the function returns `NULL`.

## Remarks

The **`_fullpath`** function expands the relative path name in *`relPath`* to its fully qualified or absolute path and stores this name in *`absPath`*. If *`absPath`* is `NULL`, **`malloc`** is used to allocate a buffer of sufficient length to hold the path name. It's the responsibility of the caller to free this buffer. A relative path name specifies a path to another location from the current location (such as the current working directory: `.`). An absolute path name is the expansion of a relative path name that states the entire path required to reach the desired location from the root of the file system. Unlike **`_makepath`**, **`_fullpath`** can be used to obtain the absolute path name for relative paths (*`relPath`*) that include `./` or `../` in their names.

For example, to use C run-time routines, the application must include the header files that contain the declarations for the routines. Each header file `#include` directive references the location of the file in a relative manner (from the application's working directory):

```C
#include <stdlib.h>
```

when the absolute path (actual file system location) of the file might be:

`\\machine\shareName\msvcSrc\crt\headerFiles\stdlib.h`

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

**`_fullpath`** automatically handles multibyte-character string arguments as appropriate, recognizing multibyte-character sequences according to the multibyte code page currently in use. **`_wfullpath`** is a wide-character version of **`_fullpath`**; the string arguments to **`_wfullpath`** are wide-character strings. **`_wfullpath`** and **`_fullpath`** behave identically except that **`_wfullpath`** doesn't handle multibyte-character strings.

If `_DEBUG` and `_CRTDBG_MAP_ALLOC` are both defined, calls to **`_fullpath`** and **`_wfullpath`** are replaced by calls to **`_fullpath_dbg`** and **`_wfullpath_dbg`**, to allow you to debug memory allocations. For more information, see [`_fullpath_dbg`, `_wfullpath_dbg`](fullpath-dbg-wfullpath-dbg.md).

This function invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md), if *`maxlen`* is less than or equal to 0. If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `NULL`.

### Generic-text routine mappings

| `Tchar.h` routine | `_UNICODE and _MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_tfullpath`** | **`_fullpath`** | **`_fullpath`** | **`_wfullpath`** |

If the *`absPath`* buffer is `NULL`, **`_fullpath`** calls [`malloc`](malloc.md) to allocate a buffer and ignores the *`maxLength`* argument. It's the caller's responsibility to deallocate this buffer (using [`free`](free.md)) as appropriate. If the *`relPath`* argument specifies a disk drive, the current directory of this drive is combined with the path.

## Requirements

| Function | Required header |
|---|---|
| **`_fullpath`** | `<stdlib.h>` |
| **`_wfullpath`** | `<stdlib.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_fullpath.c
// This program demonstrates how _fullpath
// creates a full path from a partial path.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <direct.h>

void PrintFullPath( char * partialPath )
{
   char full[_MAX_PATH];
   if( _fullpath( full, partialPath, _MAX_PATH ) != NULL )
      printf( "Full path is: %s\n", full );
   else
      printf( "Invalid path\n" );
}

int main( void )
{
   PrintFullPath( "test" );
   PrintFullPath( "\\test" );
   PrintFullPath( "..\\test" );
}
```

```Output
Full path is: C:\Documents and Settings\user\My Documents\test
Full path is: C:\test
Full path is: C:\Documents and Settings\user\test
```

## See also

[File handling](../file-handling.md)\
[`_getcwd`, `_wgetcwd`](getcwd-wgetcwd.md)\
[`_getdcwd`, `_wgetdcwd`](getdcwd-wgetdcwd.md)\
[`_makepath`, `_wmakepath`](makepath-wmakepath.md)\
[`_splitpath`, `_wsplitpath`](splitpath-wsplitpath.md)
