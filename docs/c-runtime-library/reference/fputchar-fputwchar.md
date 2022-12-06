---
description: "Learn more about: _fputchar, _fputwchar"
title: "_fputchar, _fputwchar"
ms.date: "4/2/2020"
api_name: ["_fputchar", "_fputwchar", "_o__fputchar", "_o__fputwchar"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fputtchar", "_fputwchar", "fputwchar", "_fputtchar", "_fputchar"]
helpviewer_keywords: ["fputchar function", "standard output, writing to", "_fputtchar function", "fputwchar function", "_fputwchar function", "fputtchar function", "_fputchar function"]
ms.assetid: b92ff600-a924-4f2b-b0e7-3097ee31bdff
---
# `_fputchar`, `_fputwchar`

Writes a character to `stdout`.

## Syntax

```C
int _fputchar(
   int c
);
wint_t _fputwchar(
   wchar_t c
);
```

### Parameters

*`c`*\
Character to be written.

## Return value

Each of these functions returns the character written. For **`_fputchar`**, a return value of `EOF` indicates an error. For **`_fputwchar`**, a return value of `WEOF` indicates an error. If c is `NULL`, these functions generate an invalid parameter exception, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, **`_fputchar`** returns `EOF` (**`_fputwchar`** returns `WEOF`), and they set `errno` to `EINVAL`.

For more information about these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Both of these functions write the single character argument *`c`* to `stdout` and advance the indicator as appropriate. **`_fputchar`** is equivalent to `fputc( stdout )`. It's also equivalent to `putchar`, but implemented only as a function, rather than as a function and a macro. Unlike `fputc` and `putchar`, these functions aren't compatible with the ANSI standard.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_fputtchar` | **`_fputchar`** | **`_fputchar`** | **`_fputwchar`** |

## Requirements

| Function | Required header |
|---|---|
| **`_fputchar`** | \<stdio.h> |
| **`_fputwchar`** | \<stdio.h> or \<wchar.h> |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_fputchar.c
// This program uses _fputchar
// to send a character array to stdout.

#include <stdio.h>

int main( void )
{
    char strptr[] = "This is a test of _fputchar!!\n";
    char *p = NULL;

    // Print line to stream using _fputchar.
    p = strptr;
    while( (*p != '\0') && _fputchar( *(p++) ) != EOF )
      ;
}
```

```Output
This is a test of _fputchar!!
```

## See also

[Stream I/O](../stream-i-o.md)\
[`fgetc`, `fgetwc`](fgetc-fgetwc.md)\
[`putc`, `putwc`](putc-putwc.md)
