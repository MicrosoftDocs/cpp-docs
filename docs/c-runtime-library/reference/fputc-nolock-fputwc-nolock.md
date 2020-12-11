---
description: "Learn more about: _fputc_nolock, _fputwc_nolock"
title: "_fputc_nolock, _fputwc_nolock"
ms.date: "4/2/2020"
api_name: ["_fputwc_nolock", "_fputc_nolock", "_o__fputc_nolock", "_o__fputwc_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fputc_nolock", "fputwc_nolock", "fputc_nolock", "fputtc_nolock", "_fputwc_nolock", "_fputtc_nolock"]
helpviewer_keywords: ["streams, writing characters to", "fputwc_nolock function", "fputtc_nolock function", "_fputc_nolock function", "fputc_nolock function", "_fputtc_nolock function", "_fputwc_nolock function"]
ms.assetid: c63eb3ad-58fa-46d0-9249-9c25f815eab9
---
# _fputc_nolock, _fputwc_nolock

Writes a character to a stream without locking the thread.

## Syntax

```C
int _fputc_nolock(
   int c,
   FILE *stream
);
wint_t _fputwc_nolock(
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

Each of these functions returns the character written. For error information, see [fputc, fputwc](fputc-fputwc.md).

## Remarks

**_fputc_nolock** and **_fputwc_nolock** are identical to **fputc** and **fputwc**, respectively, except that they are not protected from interference by other threads. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

The two functions behave identically if the stream is opened in ANSI mode. **_fputc_nolock** does not currently support output into a UNICODE stream.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_fputtc_nolock**|**_fputc_nolock**|**_fputc_nolock**|**_fputwc_nolock**|

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fputc_nolock**|\<stdio.h>|
|**_fputwc_nolock**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console—**stdin**, **stdout**, and **stderr**—must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fputc_nolock.c
// This program uses _fputc_nolock
// to send a character array to stdout.

#include <stdio.h>

int main( void )
{
   char strptr1[] = "This is a test of _fputc_nolock!!\n";
   char *p;

   // Print line to stream using fputc.
   p = strptr1;
   while( (*p != '\0') && _fputc_nolock( *(p++), stdout ) != EOF ) ;

}
```

```Output
This is a test of _fputc_nolock!!
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fgetc, fgetwc](fgetc-fgetwc.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
