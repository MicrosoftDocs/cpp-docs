---
description: "Learn more about: _fgetchar, _fgetwchar"
title: "_fgetchar, _fgetwchar"
ms.date: "4/2/2020"
api_name: ["_fgetchar", "_fgetwchar", "_o__fgetchar", "_o__fgetwchar"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fgetwchar", "_fgettchar", "_fgetchar", "_fgetwchar", "fgettchar"]
helpviewer_keywords: ["fgetwchar function", "_fgetchar function", "fgettchar function", "_fgetwchar function", "_fgettchar function", "standard input, reading from", "fgetchar function"]
ms.assetid: 8bce874c-701a-41a3-b1b2-feff266fb5b9
---
# _fgetchar, _fgetwchar

Reads a character from **stdin**.

## Syntax

```C
int _fgetchar( void );
wint_t _fgetwchar( void );
```

## Return Value

**\_fgetchar** returns the character read as an **`int`** or returns `EOF` to indicate an error or end of file. **\_fgetwchar** returns, as a [wint_t](../../c-runtime-library/standard-types.md), the wide character that corresponds to the character read or returns `WEOF` to indicate an error or end of file. For both functions, use **feof** or **ferror** to distinguish between an error and an end-of-file condition.

## Remarks

These functions read a single character from **stdin**. The function then increments the associated file pointer (if defined) to point to the next character. If the stream is at end of file, the end-of-file indicator for the stream is set.

**_fgetchar** is equivalent to `fgetc( stdin )`. It is also equivalent to **getchar**, but implemented only as a function, rather than as a function and a macro. **_fgetwchar** is the wide-character version of **_fgetchar**.

These functions are not compatible with the ANSI standard.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_fgettchar**|**_fgetchar**|**_fgetchar**|**_fgetwchar**|

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fgetchar**|\<stdio.h>|
|**_fgetwchar**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console—**stdin**, **stdout**, and **stderr**—must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fgetchar.c
// This program uses _fgetchar to read the first
// 80 input characters (or until the end of input)
// and place them into a string named buffer.
//

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   char buffer[81];
   int  i, ch;

   // Read in first 80 characters and place them in "buffer":
   ch = _fgetchar();
   for( i=0; (i < 80 ) && ( feof( stdin ) == 0 ); i++ )
   {
      buffer[i] = (char)ch;
      ch = _fgetchar();
   }

   // Add null to end string
   buffer[i] = '\0';
   printf( "%s\n", buffer );
}
```

```Output

      Line one.
Line two.Line one.
Line two.
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fputc, fputwc](fputc-fputwc.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
