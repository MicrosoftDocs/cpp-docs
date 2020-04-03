---
title: "_getch, _getwch"
ms.date: "4/2/2020"
api_name: ["_getch", "_getwch", "_o__getch", "_o__getwch"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["getwch", "_getch", "_getwch"]
helpviewer_keywords: ["characters, getting from console", "getch function", "_getwch function", "console, reading from", "_getch function", "getwch function"]
ms.assetid: cc116be7-cff2-4274-970f-5e7b18ccc05c
---
# _getch, _getwch

Gets a character from the console without echo.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _getch( void );
wint_t _getwch( void );
```

## Return Value

Returns the character read. There is no error return.

## Remarks

The **_getch** and **_getwch** functions read a single character from the console without echoing the character. None of these functions can be used to read CTRL+C. When reading a function key or an arrow key, each function must be called twice; the first call returns 0 or 0xE0, and the second call returns the actual key code.

These functions lock the calling thread and are therefore thread-safe. For non-locking versions, see [_getch_nolock, _getwch_nolock](getch-nolock-getwch-nolock.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_gettch**|**_getch**|**_getch**|**_getwch**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_getch**|\<conio.h>|
|**_getwch**|\<conio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

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

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_getche, _getwche](getche-getwche.md)<br/>
[_cgets, _cgetws](../../c-runtime-library/cgets-cgetws.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
[_ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock](ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)<br/>
