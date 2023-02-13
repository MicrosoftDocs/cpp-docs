---
description: "Learn more about: fputc, fputwc"
title: "fputc, fputwc"
ms.date: "4/2/2020"
api_name: ["fputc", "fputwc", "_o_fputc", "_o_fputwc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fputc", "fputwc", "_fputtc"]
helpviewer_keywords: ["streams, writing characters to", "fputtc function", "_fputtc function", "fputwc function", "fputc function"]
ms.assetid: 5a0a593d-43f4-4fa2-a401-ec4e23de4d2f
---
# `fputc`, `fputwc`

Writes a character to a stream.

## Syntax

```C
int fputc(
   int c,
   FILE *stream
);
wint_t fputwc(
   wchar_t c,
   FILE *stream
);
```

### Parameters

*`c`*\
Character to be written.

*`stream`*\
Pointer to `FILE` structure.

## Return value

Each of these functions returns the character written. For **`fputc`**, a return value of `EOF` indicates an error. For **`fputwc`**, a return value of `WEOF` indicates an error. If *`stream`* is `NULL`, these functions invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, they return `EOF` and set `errno` to `EINVAL`.

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions writes the single character *`c`* to a file at the position indicated by the associated file position indicator, if defined. The functions advance the indicator as appropriate. In **`fputc`** and **`fputwc`**, the file is associated with *`stream`*. If the file can't support positioning requests or was opened in append mode, the character is appended to the end of the stream.

The two functions behave identically if the stream is opened in ANSI mode. **`fputc`** doesn't currently support output into a UNICODE stream.

The versions with the `_nolock` suffix are identical except that they aren't protected from interference by other threads. For more information, see[`_fputc_nolock`, `_fputwc_nolock`](fputc-nolock-fputwc-nolock.md).

Routine-specific remarks follow.

| Routine | Remarks |
|---|---|
| **`fputc`** | Equivalent to `putc`, but implemented only as a function, rather than as a function and a macro. |
| **`fputwc`** | Wide-character version of `fputc`. Writes *`c`* as a multibyte character or a wide character when *`stream`* is opened in text mode or binary mode, respectively. |

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_fputtc` | **`fputc`** | **`fputc`** | **`fputwc`** |

## Requirements

| Function | Required header |
|---|---|
| **`fputc`** | \<stdio.h> |
| **`fputwc`** | \<stdio.h> or \<wchar.h> |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_fputc.c
// This program uses fputc
// to send a character array to stdout.

#include <stdio.h>

int main( void )
{
   char strptr1[] = "This is a test of fputc!!\n";
   char *p;

   // Print line to stream using fputc.
   p = strptr1;
   while( (*p != '\0') && fputc( *(p++), stdout ) != EOF ) ;

}
```

```Output
This is a test of fputc!!
```

## See also

[Stream I/O](../stream-i-o.md)\
[`fgetc`, `fgetwc`](fgetc-fgetwc.md)\
[`putc`, `putwc`](putc-putwc.md)
