---
description: "Learn more about: vfscanf, vfwscanf"
title: "vfscanf, vfwscanf"
ms.date: "11/04/2016"
api_name: ["vfwscanf", "vfscanf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["vfwscanf", "_vftscanf", "vfscanf"]
ms.assetid: c06450ef-03f1-4d24-a8ac-d2dd98847918
---
# vfscanf, vfwscanf

Reads formatted data from a stream. More secure versions of these functions are available; see [vfscanf_s, vfwscanf_s](vfscanf-s-vfwscanf-s.md).

## Syntax

```C
int vfscanf(
   FILE *stream,
   const char *format,
   va_list argptr
);
int vfwscanf(
   FILE *stream,
   const wchar_t *format,
   va_list argptr
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

*format*<br/>
Format-control string.

*arglist*<br/>
Variable argument list.

## Return Value

Each of these functions returns the number of fields that are successfully converted and assigned; the return value does not include fields that are read but not assigned. A return value of 0 indicates that no fields were assigned. If an error occurs, or if the end of the file stream is reached before the first conversion, the return value is **EOF** for **vfscanf** and **vfwscanf**.

These functions validate their parameters. If *stream* or *format* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **EOF** and set **errno** to **EINVAL**.

## Remarks

The **vfscanf** function reads data from the current position of *stream* into the locations that are given by the *arglist* argument list. Each argument in the list must be a pointer to a variable of a type that corresponds to a type specifier in *format*. *format* controls the interpretation of the input fields and has the same form and function as the *format* argument for **scanf**; see [scanf](scanf-scanf-l-wscanf-wscanf-l.md) for a description of *format*.

**vfwscanf** is a wide-character version of **vfscanf**; the format argument to **vfwscanf** is a wide-character string. These functions behave identically if the stream is opened in ANSI mode. **vfscanf** doesn't support input from a UNICODE stream.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vftscanf**|**vfscanf**|**vfscanf**|**vfwscanf**|

For more information, see [Format Specification Fields: scanf and wscanf Functions](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**vfscanf**|\<stdio.h>|
|**vfwscanf**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_vfscanf.c
// compile with: /W3
// This program writes formatted
// data to a file. It then uses vfscanf to
// read the various data back from the file.

#include <stdio.h>
#include <stdarg.h>

FILE *stream;

int call_vfscanf(FILE * istream, char * format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vfscanf(istream, format, arglist);
    va_end(arglist);
    return result;
}

int main(void)
{
    long l;
    float fp;
    char s[81];
    char c;

    if (fopen_s(&stream, "vfscanf.out", "w+") != 0)
    {
        printf("The file vfscanf.out was not opened\n");
    }
    else
    {
        fprintf(stream, "%s %ld %f%c", "a-string",
            65000, 3.14159, 'x');
        // Security caution!
        // Beware loading data from a file without confirming its size,
        // as it may lead to a buffer overrun situation.

        // Set pointer to beginning of file:
        fseek(stream, 0L, SEEK_SET);

        // Read data back from file:
        call_vfscanf(stream, "%s %ld %f%c", s, &l, &fp, &c);

        // Output data read:
        printf("%s\n", s);
        printf("%ld\n", l);
        printf("%f\n", fp);
        printf("%c\n", c);

        fclose(stream);
    }
}
```

```Output
a-string
65000
3.141590
x
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](cscanf-cscanf-l-cwscanf-cwscanf-l.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l](fscanf-s-fscanf-s-l-fwscanf-s-fwscanf-s-l.md)<br/>
[vfscanf_s, vfwscanf_s](vfscanf-s-vfwscanf-s.md)<br/>
