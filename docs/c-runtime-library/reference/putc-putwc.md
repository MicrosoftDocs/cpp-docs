---
description: "Learn more about: putc, putwc"
title: "putc, putwc"
ms.date: "4/2/2020"
api_name: ["putwc", "putc", "_o_putc", "_o_putwc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_puttc", "putwc", "putc"]
helpviewer_keywords: ["streams, writing characters to", "characters, writing", "putwc function", "putc function", "_puttc function", "puttc function"]
ms.assetid: a37b2e82-9d88-4565-8190-ff8d04c0ddb9
---
# `putc`, `putwc`

Writes a character to a stream.

## Syntax

```C
int putc(
   int c,
   FILE *stream
);
wint_t putwc(
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

Returns the character written. To indicate an error or end-of-file condition, **`putc`** and `putchar` return `EOF`; **`putwc`** and `putwchar` return `WEOF`. For all four routines, use [`ferror`](ferror.md) or [`feof`](feof.md) to check for an error or end of file. If passed a null pointer for *`stream`*, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return `EOF` or `WEOF`, and set `errno` to `EINVAL`.

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`putc`** routine writes the single character *`c`* to the output *`stream`* at the current position. Any integer can be passed to **`putc`**, but only the lower 8 bits are written. The `putchar` routine is identical to `putc( c, stdout )`. For each routine, if a read error occurs, the error indicator for the stream is set. **`putc`** and `putchar` are similar to `fputc` and `_fputchar`, respectively, but are implemented both as functions and as macros (see [Recommendations for choosing between functions and macros](../recommendations-for-choosing-between-functions-and-macros.md)). **`putwc`** and `putwchar` are wide-character versions of **`putc`** and `putchar`, respectively. **`putwc`** and **`putc`** behave identically if the stream is opened in ANSI mode. **`putc`** doesn't currently support output into a UNICODE stream.

The versions with the `_nolock` suffix are identical except that they aren't protected from interference by other threads. For more information, see **_putc_nolock, _putwc_nolock**.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_puttc` | **`putc`** | **`putc`** | **`putwc`** |

## Requirements

| Routine | Required header |
|---|---|
| **`putc`** | \<stdio.h> |
| **`putwc`** | \<stdio.h> or \<wchar.h> |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, `stdin`, `stdout`, and `stderr`, must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## Example

```C
// crt_putc.c
/* This program uses putc to write buffer
* to a stream. If an error occurs, the program
* stops before writing the entire buffer.
*/

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char *p, buffer[] = "This is the line of output\n";
   int  ch;

   ch = 0;
   /* Make standard out the stream and write to it. */
   stream = stdout;
   for( p = buffer; (ch != EOF) && (*p != '\0'); p++ )
      ch = putc( *p, stream );
}
```

### Output

```Output
This is the line of output
```

## See also

[Stream I/O](../stream-i-o.md)\
[`fputc`, `fputwc`](fputc-fputwc.md)\
[`getc`, `getwc`](getc-getwc.md)
