---
description: "Learn more about: _putchar_nolock, _putwchar_nolock"
title: "_putchar_nolock, _putwchar_nolock"
ms.date: "11/04/2016"
api_name: ["_putchar_nolock", "_putwchar_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["putwchar_nolock", "_puttchar_nolock", "_putchar_nolock", "_putwchar_nolock", "putchar_nolock"]
helpviewer_keywords: ["_puttchar_nolock function", "putchar_nolock function", "characters, writing", "standard output, writing to", "putwchar_nolock function", "_putchar_nolock function", "_putwchar_nolock function", "puttchar_nolock function"]
ms.assetid: 9ac68092-bfc3-4352-b486-c3e780220575
---
# _putchar_nolock, _putwchar_nolock

Writes a character to **stdout** without locking the thread.

## Syntax

```C
int _putchar_nolock(
   int c
);
wint_t _putwchar_nolock(
   wchar_t c
);
```

### Parameters

*c*<br/>
Character to be written.

## Return Value

See **putchar, putwchar**.

## Remarks

**putchar_nolock** and **_putwchar_nolock** are identical to the versions without the **_nolock** suffix except that they are not protected from interference by other threads. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_puttchar_nolock**|**_putchar_nolock**|**_putchar_nolock**|**_putwchar_nolock**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_putchar_nolock**|\<stdio.h>|
|**_putwchar_nolock**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_putchar_nolock.c
/* This program uses putchar to write buffer
* to stdout. If an error occurs, the program
* stops before writing the entire buffer.
*/

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char *p, buffer[] = "This is the line of output\n";
   int  ch;

   ch = 0;

   for( p = buffer; (ch != EOF) && (*p != '\0'); p++ )
      ch = _putchar_nolock( *p );
}
```

### Output

```Output
This is the line of output
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fputc, fputwc](fputc-fputwc.md)<br/>
[fgetc, fgetwc](fgetc-fgetwc.md)<br/>
