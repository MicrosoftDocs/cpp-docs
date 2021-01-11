---
description: "Learn more about: vsscanf, vswscanf"
title: "vsscanf, vswscanf"
ms.date: "11/04/2016"
api_name: ["vsscanf", "vswscanf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_vstscanf", "vsscanf", "vswscanf"]
helpviewer_keywords: ["vswscanf function", "vsscanf function"]
ms.assetid: e96180f2-df46-423d-b4eb-0a49ab819bde
---
# vsscanf, vswscanf

Reads formatted data from a string. More secure versions of these functions are available; see [vsscanf_s, vswscanf_s](vsscanf-s-vswscanf-s.md).

## Syntax

```C
int vsscanf(
   const char *buffer,
   const char *format,
   va_list arglist
);
int vswscanf(
   const wchar_t *buffer,
   const wchar_t *format,
   va_list arglist
);
```

### Parameters

*buffer*<br/>
Stored data

*format*<br/>
Format-control string. For more information, see [Format Specification Fields: scanf and wscanf Functions](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

*arglist*<br/>
Variable argument list.

## Return Value

Each of these functions returns the number of fields that are successfully converted and assigned; the return value does not include fields that were read but not assigned. A return value of 0 indicates that no fields were assigned. The return value is **EOF** for an error or if the end of the string is reached before the first conversion.

If *buffer* or *format* is a **NULL** pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **errno** to **EINVAL**.

For information about these and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **vsscanf** function reads data from *buffer* into the locations that are given by each argument in the *arglist* argument list. Every argument in the list must be a pointer to a variable that has a type that corresponds to a type specifier in *format*. The *format* argument controls the interpretation of the input fields and has the same form and function as the *format* argument for the **scanf** function. If copying takes place between strings that overlap, the behavior is undefined.

> [!IMPORTANT]
> When you use **vsscanf** to read a string, always specify a width for the **%s** format (for example, **"%32s"** instead of **"%s"**); otherwise, incorrectly formatted input can cause a buffer overrun.

**vswscanf** is a wide-character version of **vsscanf**; the arguments to **vswscanf** are wide-character strings. **vsscanf** does not handle multibyte hexadecimal characters. **vswscanf** does not handle Unicode full-width hexadecimal or "compatibility zone" characters. Otherwise, **vswscanf** and **vsscanf** behave identically.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vstscanf**|**vsscanf**|**vsscanf**|**vswscanf**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**vsscanf**|\<stdio.h>|
|**vswscanf**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_vsscanf.c
// compile with: /W3
// This program uses vsscanf to read data items
// from a string named tokenstring, then displays them.

#include <stdio.h>
#include <stdarg.h>

int call_vsscanf(char *tokenstring, char *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vsscanf(tokenstring, format, arglist);
    va_end(arglist);
    return result;
}

int main( void )
{
    char  tokenstring[] = "15 12 14...";
    char  s[81];
    char  c;
    int   i;
    float fp;

    // Input various data from tokenstring:
    // max 80 character string:
    call_vsscanf(tokenstring, "%80s", s);
    call_vsscanf(tokenstring, "%c", &c);
    call_vsscanf(tokenstring, "%d", &i);
    call_vsscanf(tokenstring, "%f", &fp);

    // Output the data read
    printf("String    = %s\n", s);
    printf("Character = %c\n", c);
    printf("Integer:  = %d\n", i);
    printf("Real:     = %f\n", fp);
}
```

```Output
String    = 15
Character = 1
Integer:  = 15
Real:     = 15.000000
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[vsscanf_s, vswscanf_s](vsscanf-s-vswscanf-s.md)<br/>
