---
description: "Learn more about: _ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock"
title: "_ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock"
ms.date: "4/2/2020"
api_name: ["_ungetch_nolock", "_ungetwch_nolock", "_ungetwch", "_ungetch", "_o__ungetch", "_o__ungetch_nolock", "_o__ungetwch", "_o__ungetwch_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ungetch_nolock", "ungetwch", "ungetch_nolock", "_ungetwch", "ungetwch_nolock", "_ungetch", "_ungettch_nolock", "_ungettch", "_ungetwch_nolock"]
helpviewer_keywords: ["_ungetch function", "ungetwch function", "characters, pushing back to console", "_ungettch_nolock function", "ungettch function", "_ungettch function", "ungetch_nolock function", "ungettch_nolock function", "_ungetwch_nolock function", "_ungetch_nolock function", "ungetwch_nolock function", "_ungetwch function"]
ms.assetid: 70ae71c6-228c-4883-a57d-de6d5f873825
---
# _ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock

Pushes back the last character that's read from the console.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _ungetch(
   int c
);
wint_t _ungetwch(
   wint_t c
);
int _ungetch_nolock(
   int c
);
wint_t _ungetwch_nolock(
   wint_t c
);
```

### Parameters

*c*<br/>
Character to be pushed.

## Return Value

Both functions return the character *c* if successful. If there is an error, **_ungetch** returns a value of **EOF** and **_ungetwch** returns **WEOF**.

## Remarks

These functions push the character *c* back to the console, causing *c* to be the next character read by **_getch** or **_getche** (or **_getwch** or **_getwche**). **_ungetch** and **_ungetwch** fail if they are called more than once before the next read. The *c* argument may not be **EOF** (or **WEOF**).

The versions with the **_nolock** suffix are identical except that they are not protected from interference by other threads. They may be faster since they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ungettch**|**_ungetch**|**_ungetch**|**_ungetwch**|
|**_ungettch_nolock**|**_ungetch_nolock**|**_ungetch_nolock**|**_ungetwch_nolock**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ungetch**, **_ungetch_nolock**|\<conio.h>|
|**_ungetwch**, **_ungetwch_nolock**|\<conio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_ungetch.c
// compile with: /c
// In this program, a white-space delimited
// token is read from the keyboard. When the program
// encounters a delimiter, it uses _ungetch to replace
// the character in the keyboard buffer.
//

#include <conio.h>
#include <ctype.h>
#include <stdio.h>

int main( void )
{
   char buffer[100];
   int count = 0;
   int ch;

   ch = _getche();
   while( isspace( ch ) )      // Skip preceding white space.
      ch = _getche();
   while( count < 99 )         // Gather token.
   {
      if( isspace( ch ) )      // End of token.
         break;
      buffer[count++] = (char)ch;
      ch = _getche();
   }
   _ungetch( ch );            // Put back delimiter.
   buffer[count] = '\0';      // Null terminate the token.
   printf( "\ntoken = %s\n", buffer );
}
```

```Output

Whitetoken = White
```

## See also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](cscanf-cscanf-l-cwscanf-cwscanf-l.md)<br/>
[_getch, _getwch](getch-getwch.md)<br/>
