---
title: "_putc_nolock, _putwc_nolock"
description: "Learn more about: _putc_nolock, _putwc_nolock"
ms.date: "4/2/2020"
api_name: ["_putc_nolock", "_putwc_nolock", "_o__putc_nolock", "_o__putwc_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_puttc_nolock", "puttc_nolock", "putwc_nolock", "_putwc_nolock", "_putc_nolock", "putc_nolock"]
helpviewer_keywords: ["puttc_nolock function", "putc_nolock function", "_putc_nolock function", "streams, writing characters to", "characters, writing", "putwc_nolock function", "_puttc_nolock function", "_putwc_nolock function"]
---
# `_putc_nolock`, `_putwc_nolock`

Writes a character to a stream without locking.

## Syntax

```C
int _putc_nolock(
   int c,
   FILE *stream
);
wint_t _putwc_nolock(
   wchar_t c,
   FILE *stream
);
```

### Parameters

*`c`*\
Character to be written.

*`stream`*\
Pointer to the `FILE` structure.

## Return value

See **putc, putwc**.

## Remarks

**`_putc_nolock`** and **`_putwc_nolock`** are identical to the versions without the `_nolock` suffix except that they aren't protected from interference by other threads. They might be faster because they don't incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

**`_putwc_nolock`** is the wide-character version of **`_putc_nolock`**; the two functions behave identically if the stream is opened in ANSI mode. **`_putc_nolock`** doesn't currently support output into a UNICODE stream.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_puttc_nolock` | **`_putc_nolock`** | **`_putc_nolock`** | **`_putwc_nolock`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_putc_nolock`** | \<stdio.h> |
| **`_putwc_nolock`** | \<stdio.h> or \<wchar.h> |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, `stdin`, `stdout`, and `stderr`, must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## Example

```C
// crt_putc_nolock.c
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
      ch = _putc_nolock( *p, stream );
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
