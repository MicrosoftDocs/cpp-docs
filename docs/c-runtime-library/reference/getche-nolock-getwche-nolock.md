---
title: "_getche_nolock, _getwche_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_getche_nolock", "_getwche_nolock"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_getche_nolock", "_gettche_nolock", "_getwche_nolock", "getche_nolock", "getwche_nolock", "gettche_nolock"]
dev_langs: ["C++"]
helpviewer_keywords: ["characters, getting from console", "_gettche_nolock function", "getwche_nolock function", "_getche_nolock function", "getche_nolock function", "console, reading from", "_getwche_nolock function", "gettche_nolock function"]
ms.assetid: 9e853ad4-4d8a-4442-9ae5-da4b434f0b8c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _getche_nolock, _getwche_nolock

Gets a character from the console, with echo and without locking the thread.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _getche_nolock( void );
wint_t _getwche_nolock( void );
```

## Return Value

Returns the character read. There is no error return.

## Remarks

**_getche_nolock** and **_getwche_nolock** are identical to **_getche** and **_getwche** except that they not protected from interference by other threads. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_gettche_nolock**|**_getche_nolock**|**_getch_nolock**|**_getwche_nolock**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_getche_nolock**|\<conio.h>|
|**_getwche_nolock**|\<conio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_getche_nolock.c
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
      ch = _getche_nolock();
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
Type 'Y' when finished typing keys: abcdefyY
```

## See also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cgets, _cgetws](../../c-runtime-library/cgets-cgetws.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
[_ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock](ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)<br/>
