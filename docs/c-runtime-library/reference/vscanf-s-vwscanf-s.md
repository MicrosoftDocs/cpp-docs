---
description: "Learn more about: vscanf_s, vwscanf_s"
title: "vscanf_s, vwscanf_s"
ms.date: "11/04/2016"
api_name: ["vscanf_s", "vwscanf_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_vtscanf_s", "vscanf_s", "vwscanf_s"]
ms.assetid: 23a1c383-5b01-4887-93ce-534a1e38ed93
---
# vscanf_s, vwscanf_s

Reads formatted data from the standard input stream. These versions of [vscanf, vwscanf](vscanf-vwscanf.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
int vscanf_s(
   const char *format,
   va_list arglist
);
int vwscanf_s(
   const wchar_t *format,
   va_list arglist
);
```

### Parameters

*format*<br/>
Format control string.

*arglist*<br/>
Variable argument list.

## Return Value

Returns the number of fields successfully converted and assigned; the return value does not include fields that were read but not assigned. A return value of 0 indicates that no fields were assigned. The return value is **EOF** for an error, or if the end-of-file character or the end-of-string character is encountered in the first attempt to read a character. If *format* is a **NULL** pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **vscanf_s** and **vwscanf_s** return **EOF** and set **errno** to **EINVAL**.

For information about these and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **vscanf_s** function reads data from the standard input stream **stdin** and writes the data into the locations that are given by the *arglist* argument list. Each argument in the list must be a pointer to a variable of a type that corresponds to a type specifier in *format*. If copying occurs between strings that overlap, the behavior is undefined.

**vwscanf_s** is a wide-character version of **vscanf_s**; the *format* argument to **vwscanf_s** is a wide-character string. **vwscanf_s** and **vscanf_s** behave identically if the stream is opened in ANSI mode. **vscanf_s** doesn't support input from a UNICODE stream.

Unlike **vscanf** and **vwscanf**, **vscanf_s** and **vwscanf_s** require the buffer size to be specified for all input parameters of type **c**, **C**, **s**, **S**, or string control sets that are enclosed in **[]**. The buffer size in characters is passed as an additional parameter immediately following the pointer to the buffer or variable. The buffer size in characters for a **`wchar_t`** string is not the same as the size in bytes.

The buffer size includes the terminating null. You can use a width-specification field to ensure that the token that's read in will fit into the buffer. If no width specification field is used, and the token read in is too big to fit in the buffer, nothing is written to that buffer.

> [!NOTE]
> The *size* parameter is of type **`unsigned`**, not **size_t**.

For more information, see [scanf Width Specification](../../c-runtime-library/scanf-width-specification.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vtscanf_s**|**vscanf_s**|**vscanf_s**|**vwscanf_s**|

For more information, see [Format Specification Fields: scanf and wscanf Functions](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**vscanf_s**|\<stdio.h>|
|**wscanf_s**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_vscanf_s.c
// compile with: /W3
// This program uses the vscanf_s and vwscanf_s functions
// to read formatted input.

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int call_vscanf_s(char *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vscanf_s(format, arglist);
    va_end(arglist);
    return result;
}

int call_vwscanf_s(wchar_t *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vwscanf_s(format, arglist);
    va_end(arglist);
    return result;
}

int main( void )
{
    int   i, result;
    float fp;
    char  c, s[81];
    wchar_t wc, ws[81];
    result = call_vscanf_s("%d %f %c %C %s %S", &i, &fp, &c, 1,
                           &wc, 1, s, _countof(s), ws, _countof(ws) );
    printf( "The number of fields input is %d\n", result );
    printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);
    result = call_vwscanf_s(L"%d %f %hc %lc %S %ls", &i, &fp, &c, 2,
                            &wc, 1, s, _countof(s), ws, _countof(ws) );
    wprintf( L"The number of fields input is %d\n", result );
    wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);
}
```

When this program is given the input in the example, it produces this output:

```Input
71 98.6 h z Byte characters
36 92.3 y n Wide characters
```

```Output
The number of fields input is 6
The contents are: 71 98.599998 h z Byte characters
The number of fields input is 6
The contents are: 36 92.300003 y n Wide characters
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)<br/>
[vscanf, vwscanf](vscanf-vwscanf.md)<br/>
