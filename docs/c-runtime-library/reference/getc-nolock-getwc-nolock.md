---
description: "Learn more about: _getc_nolock, _getwc_nolock"
title: "_getc_nolock, _getwc_nolock"
ms.date: "4/2/2020"
api_name: ["_getc_nolock", "_getwc_nolock", "_o__getc_nolock", "_o__getwc_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["getc_nolock", "_gettc_nolock", "_getc_nolock", "getwc_nolock", "gettc_nolock", "_getwc_nolock"]
helpviewer_keywords: ["characters, reading", "_getc_nolock function", "_getwc_nolock function", "getwc_nolock function", "streams, reading characters from", "reading characters from streams", "getc_nolock function", "gettc_nolock function", "_gettc_nolock function"]
ms.assetid: eb37b272-e177-41c9-b077-12ce7ffd3b88
---
# _getc_nolock, _getwc_nolock

Reads a character from a stream.

## Syntax

```C
int _getc_nolock(
   FILE *stream
);
wint_t _getwc_nolock(
   FILE *stream
);
```

### Parameters

*stream*<br/>
Input stream.

## Return Value

See [getc, getwc](getc-getwc.md).

## Remarks

These functions are identical to **getc** and **getwc** except that they do not lock the calling thread. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_gettc_nolock**|**getc_nolock**|**getc_nolock**|**getwc_nolock**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**getc_nolock**|\<stdio.h>|
|**getwc_nolock**|\<stdio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_getc_nolock.c
// Use getc to read a line from a file.

#include <stdio.h>

int main()
{
    char buffer[81];
    int i, ch;
    FILE* fp;

    // Read a single line from the file "crt_getc_nolock.txt".
    fopen_s(&fp, "crt_getc_nolock.txt", "r");
    if (!fp)
    {
       printf("Failed to open file crt_getc_nolock.txt.\n");
       exit(1);
    }

    for (i = 0; (i < 80) && ((ch = getc(fp)) != EOF)
                         && (ch != '\n'); i++)
    {
        buffer[i] = (char) ch;
    }

    // Terminate string with a null character
    buffer[i] = '\0';
    printf( "Input was: %s\n", buffer);

    fclose(fp);
}
```

### Input: crt_getc_nolock.txt

```Input
Line the first.
Line the second.
```

### Output

```Output
Input was: Line the first.
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fgetc, fgetwc](fgetc-fgetwc.md)<br/>
[_getch, _getwch](getch-getwch.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
[ungetc, ungetwc](ungetc-ungetwc.md)<br/>
