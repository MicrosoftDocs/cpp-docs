---
title: "_getch_nolock, _getwch_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_getwch_nolock", "_getch_nolock"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_getch_nolock", "getwch_nolock", "getch_nolock", "_getwch_nolock", "_gettch_nolock", "gettch_nolock"]
dev_langs: ["C++"]
helpviewer_keywords: ["characters, getting from console", "_getwch_nolock function", "_getch_nolock function", "getwch_nolock function", "_gettch_nolock function", "console, reading from", "getch_nolock function", "gettch_nolock function"]
ms.assetid: 9d248546-26ca-482c-b0c6-55812a987e83
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _getch_nolock, _getwch_nolock

Gets a character from the console without echo and without locking the thread.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _getch_nolock( void );
wint_t _getwch_nolock( void );
```

## Return Value

Returns the character read. There is no error return.

## Remarks

**_getch_nolock** and **_getwch_nolock** are identical to **_getch** and **_getchw** except that they not protected from interference by other threads. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_gettch_nolock**|**_getch_nolock**|**_getch_nolock**|**_getwch_nolock**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_getch_nolock**|\<conio.h>|
|**_getwch_nolock**|\<conio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_getch_nolock.c
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
      ch = _getch_nolock();
      ch = toupper( ch );
   } while( ch != 'Y' );

   _putch_nolock( ch );
   _putch_nolock( '\r' );    // Carriage return
   _putch_nolock( '\n' );    // Line feed
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
