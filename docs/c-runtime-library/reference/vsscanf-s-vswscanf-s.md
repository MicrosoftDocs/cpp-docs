---
description: "Learn more about: vsscanf_s, vswscanf_s"
title: "vsscanf_s, vswscanf_s"
ms.date: "11/04/2016"
api_name: ["vswscanf_s", "vsscanf_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/vsscanf_s", "CORECRT_WSTDIO/vswscanf_s", "TCHAR/_vstscanf_s", "vsscanf_s", "vswscanf_s", "_vstscanf_s"]
ms.assetid: 7b732e68-c6f4-4579-8917-122f5a7876e1
---
# `vsscanf_s`, `vswscanf_s`

Reads formatted data from a string. These versions of [`vsscanf`, `vswscanf`](vsscanf-vswscanf.md) have security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
int vsscanf_s(
   const char *buffer,
   const char *format,
   va_list argptr
);
int vswscanf_s(
   const wchar_t *buffer,
   const wchar_t *format,
   va_list arglist
);
```

### Parameters

*`buffer`*\
Stored data

*`format`*\
Format-control string. For more information, see [Format specification fields: `scanf` and `wscanf` functions](../format-specification-fields-scanf-and-wscanf-functions.md).

*`arglist`*\
Variable argument list.

## Return value

Each of these functions returns the number of fields that are successfully converted and assigned. The return value doesn't include fields that were read but not assigned. A return value of 0 indicates that no fields were assigned. The return value is `EOF` for an error or if the end of the string is reached before the first conversion.

If *`buffer`* or *`format`* is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL`.

For information about these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`vsscanf_s`** function reads data from *`buffer`* into the locations that are given by each argument in the *`arglist`* argument list. The arguments in the argument list specify pointers to variables that have a type that corresponds to a type specifier in *`format`*. Unlike the less secure version **`vsscanf`**, a buffer size parameter is required when you use the type field characters **c**, **C**, **s**, **S**, or string-control sets that are enclosed in **[]**. The buffer size in characters must be supplied as another parameter immediately after each buffer parameter that requires it.

The buffer size includes the terminating null. A width specification field may be used to ensure that the token that's read in will fit into the buffer. If no width specification field is used, and the token read in is too large to fit in the buffer, nothing is written to that buffer.

For more information, see [`scanf_s`, `_scanf_s_l`, `wscanf_s`, `_wscanf_s_l`](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) and [scanf Type Field Characters](../scanf-type-field-characters.md).

> [!NOTE]
> The size parameter is of type **`unsigned`**, not `size_t`.

The *`format`* argument controls the interpretation of the input fields and has the same form and function as the *`format`* argument for the `scanf_s` function. If copying occurs between strings that overlap, the behavior is undefined.

**`vswscanf_s`** is a wide-character version of **`vsscanf_s`**; the arguments to **`vswscanf_s`** are wide-character strings. **`vsscanf_s`** doesn't handle multibyte hexadecimal characters. **`vswscanf_s`** doesn't handle Unicode full-width hexadecimal or "compatibility zone" characters. Otherwise, **`vswscanf_s`** and **`vsscanf_s`** behave identically.

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vstscanf_s` | **`vsscanf_s`** | **`vsscanf_s`** | **`vswscanf_s`** |

## Requirements

| Routine | Required header |
|---|---|
| **`vsscanf_s`** | \<stdio.h> |
| **`vswscanf_s`** | \<stdio.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_vsscanf_s.c
// compile with: /W3
// This program uses vsscanf_s to read data items
// from a string named tokenstring, then displays them.

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int call_vsscanf_s(char *tokenstring, char *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vsscanf_s(tokenstring, format, arglist);
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
    call_vsscanf_s(tokenstring, "%80s", s, _countof(s));
    call_vsscanf_s(tokenstring, "%c", &c, sizeof(char));
    call_vsscanf_s(tokenstring, "%d", &i);
    call_vsscanf_s(tokenstring, "%f", &fp);

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

[Stream I/O](../stream-i-o.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](scanf-scanf-l-wscanf-wscanf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)\
[`sscanf_s`, `_sscanf_s_l`, `swscanf_s`, `_swscanf_s_l`](sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`vsscanf`, `vswscanf`](vsscanf-vswscanf.md)
