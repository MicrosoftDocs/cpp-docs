---
title: "_getch, _getwch"
description: "API reference for _getch and _getwch; which get a character from the console without echo."
ms.date: "3/8/2023"
api_name: ["_getch", "_getwch", "_o__getch", "_o__getwch"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["getwch", "_getch", "_getwch"]
helpviewer_keywords: ["characters, getting from console", "getch function", "_getwch function", "console, reading from", "_getch function", "getwch function"]
---
# `_getch`, `_getwch`

Gets a character from the console without echo.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _getch( void );
wint_t _getwch( void );
```

## Return value

Returns the character read. There's no error return.

## Remarks

The **`_getch`** and **`_getwch`** functions read a single character from the console without echoing the character. To read a function key or arrow key, each function must be called twice. The first call returns `0` or `0xE0`. The second call returns the [key scan code](/previous-versions/visualstudio/visual-studio-6.0/aa299374(v=vs.60)).

These functions lock the calling thread and so are thread-safe. For non-locking versions, see [`_getch_nolock`, `_getwch_nolock`](getch-nolock-getwch-nolock.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `Tchar.h` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_gettch`** | **`_getch`** | **`_getch`** | **`_getwch`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_getch`** | `<conio.h>` |
| **`_getwch`** | `<conio.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_getch.c
// compile with: /c
// This program reads characters from
// the keyboard until it receives a 'Y' or 'y'.

#include <conio.h>
#include <ctype.h>

int main( void )
{
   int ch;

   _cputs( "Type 'Y' when finished typing keys: " );
   do
   {
      ch = _getch();
      ch = toupper( ch );
   } while( ch != 'Y' );

   _putch( ch );
   _putch( '\r' );    // Carriage return
   _putch( '\n' );    // Line feed
}
```

```Input
abcdefy
```

```Output
Type 'Y' when finished typing keys: Y
```

## See also

[Console and port I/O](../console-and-port-i-o.md)\
[`_getche`, `_getwche`](getche-getwche.md)\
[`_cgets`, `_cgetws`](../cgets-cgetws.md)\
[`getc`, `getwc`](getc-getwc.md)\
[`_ungetch`, `_ungetwch`, `_ungetch_nolock`, `_ungetwch_nolock`](ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)
