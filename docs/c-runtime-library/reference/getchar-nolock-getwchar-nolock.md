---
title: "_getchar_nolock, _getwchar_nolock"
description: "Learn more about: _getchar_nolock, _getwchar_nolock"
ms.date: "11/04/2016"
api_name: ["_getchar_nolock", "_getwchar_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["getwchar_nolock", "_getwchar_nolock", "_getchar_nolock", "getchar_nolock"]
helpviewer_keywords: ["_getwchar_nolock function", "getwchar_nolock function", "characters, reading", "_getchar_nolock function", "getchar_nolock function", "standard input, reading from"]
---
# `_getchar_nolock`, `_getwchar_nolock`

Reads a character from the standard input without locking.

## Syntax

```C
int _getchar_nolock( void );
wint_t _getwchar_nolock( void );
```

## Return value

See [`getchar`, `getwchar`](getchar-getwchar.md).

## Remarks

**`_getchar_nolock`** and **`_getwchar_nolock`** are identical to `getchar` and `getwchar` except that they aren't protected from interference by other threads. They might be faster because they don't incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_gettchar_nolock` | **`_getchar_nolock`** | **`_getchar_nolock`** | **`_getwchar_nolock`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_getchar_nolock`** | \<stdio.h> |
| **`_getwchar_nolock`** | \<stdio.h> or \<wchar.h> |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, `stdin`, `stdout`, and `stderr`, must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_getchar_nolock.c
// Use _getchar_nolock to read a line from stdin.

#include <stdio.h>

int main()
{
    char buffer[81];
    int i, ch;

    for (i = 0; (i < 80) && ((ch = _getchar_nolock()) != EOF)
                         && (ch != '\n'); i++)
    {
        buffer[i] = (char) ch;
    }

    // Terminate string with a null character

    buffer[i] = '\0';
    printf( "Input was: %s\n", buffer);
}
```

```Output

This textInput was: This text
```

## See also

[Stream I/O](../stream-i-o.md)\
[`getc`, `getwc`](getc-getwc.md)\
[`fgetc`, `fgetwc`](fgetc-fgetwc.md)\
[`_getch`, `_getwch`](getch-getwch.md)\
[`putc`, `putwc`](putc-putwc.md)\
[`ungetc`, `ungetwc`](ungetc-ungetwc.md)
