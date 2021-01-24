---
description: "Learn more about: _putc_nolock, _putwc_nolock"
title: "_putc_nolock, _putwc_nolock"
ms.date: "4/2/2020"
api_name: ["_putc_nolock", "_putwc_nolock", "_o__putc_nolock", "_o__putwc_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_puttc_nolock", "puttc_nolock", "putwc_nolock", "_putwc_nolock", "_putc_nolock", "putc_nolock"]
helpviewer_keywords: ["puttc_nolock function", "putc_nolock function", "_putc_nolock function", "streams, writing characters to", "characters, writing", "putwc_nolock function", "_puttc_nolock function", "_putwc_nolock function"]
ms.assetid: 3cfc7f21-c9e8-4b7f-b0fb-af0d4d85e7e1
---
# _putc_nolock, _putwc_nolock

Writes a character to a stream without locking the thread.

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

*c*<br/>
Character to be written.

*stream*<br/>
Pointer to the **FILE** structure.

## Return Value

See **putc, putwc**.

## Remarks

**_putc_nolock** and **_putwc_nolock** are identical to the versions without the **_nolock** suffix except that they are not protected from interference by other threads. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

**_putwc_nolock** is the wide-character version of **_putc_nolock**; the two functions behave identically if the stream is opened in ANSI mode. **_putc_nolock** doesn't currently support output into a UNICODE stream.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_puttc_nolock**|**_putc_nolock**|**_putc_nolock**|**_putwc_nolock**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_putc_nolock**|\<stdio.h>|
|**_putwc_nolock**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

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

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fputc, fputwc](fputc-fputwc.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
