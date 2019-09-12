---
title: "getchar, getwchar"
ms.date: "11/04/2016"
api_name: ["getchar", "getwchar"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: "DLLExport"
f1_keywords: ["getwchar", "GetChar"]
helpviewer_keywords: ["gettchar function", "characters, reading", "getwchar function", "_gettchar function", "standard input, reading from"]
ms.assetid: 19fda588-3e33-415c-bb60-dd73c028086a
---
# getchar, getwchar

Reads a character from standard input.

## Syntax

```C
int getchar();
wint_t getwchar();
```

## Return Value

Returns the character read. To indicate a read error or end-of-file condition, **getchar** returns **EOF**, and **getwchar** returns **WEOF**. For **getchar**, use **ferror** or **feof** to check for an error or for end of file.

## Remarks

Each routine reads a single character from **stdin** and increments the associated file pointer to point to the next character. **getchar** is the same as [_fgetchar](fgetc-fgetwc.md), but it is implemented as a function and as a macro.

These functions lock the calling thread and are therefore thread-safe. For a non-locking version, see [_getchar_nolock, _getwchar_nolock](getchar-nolock-getwchar-nolock.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_gettchar**|**getchar**|**getchar**|**getwchar**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**getchar**|\<stdio.h>|
|**getwchar**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_getchar.c
// Use getchar to read a line from stdin.

#include <stdio.h>

int main()
{
    char buffer[81];
    int i, ch;

    for (i = 0; (i < 80) && ((ch = getchar()) != EOF)
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

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
[fgetc, fgetwc](fgetc-fgetwc.md)<br/>
[_getch, _getwch](getch-getwch.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
[ungetc, ungetwc](ungetc-ungetwc.md)<br/>
