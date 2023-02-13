---
description: "Learn more about: vscanf, vwscanf"
title: "vscanf, vwscanf"
ms.date: "11/04/2016"
api_name: ["vscanf", "vwscanf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/vscanf", "CORECRT_WSTDIO/vwscanf", "TCHAR/_vtscanf", "vscanf", "vwscanf", "_vtscanf"]
ms.assetid: d1df595b-11bc-4682-9441-a92616301e3b
---
# `vscanf`, `vwscanf`

Reads formatted data from the standard input stream. More secure versions of these functions are available; see [`vscanf_s`, `vwscanf_s`](vscanf-s-vwscanf-s.md).

## Syntax

```C
int vscanf(
   const char *format,
   va_list arglist
);
int vwscanf(
   const wchar_t *format,
   va_list arglist
);
```

### Parameters

*`format`*\
Format control string.

*`arglist`*\
Variable argument list.

## Return value

Returns the number of fields that are successfully converted and assigned; the return value doesn't include fields that were read but not assigned. A return value of 0 indicates that no fields were assigned.

If *`format`* is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return `EOF` and set `errno` to `EINVAL`.

For information about these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`vscanf`** function reads data from the standard input stream `stdin` and writes the data into the locations that are given by the *`arglist`* argument list. Each argument in the list must be a pointer to a variable of a type that corresponds to a type specifier in *`format`*. If copying occurs between strings that overlap, the behavior is undefined.

> [!IMPORTANT]
> When you use **`vscanf`** to read a string, always specify a width for the **%s** format (for example, **"%32s"** instead of **"%s"**); otherwise, incorrectly formatted input can cause a buffer overrun. As an alternative, you can use [`vscanf_s`, `vwscanf_s`](vscanf-s-vwscanf-s.md) or [`fgets`](fgets-fgetws.md).

**`vwscanf`** is a wide-character version of **`vscanf`**; the *`format`* argument to **`vwscanf`** is a wide-character string. **`vwscanf`** and **`vscanf`** behave identically if the stream is opened in ANSI mode. **`vscanf`** doesn't support input from a UNICODE stream.

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vtscanf` | **`vscanf`** | **`vscanf`** | **`vwscanf`** |

For more information, see [Format specification fields: `scanf` and `wscanf` functions](../format-specification-fields-scanf-and-wscanf-functions.md).

## Requirements

| Routine | Required header |
|---|---|
| **`vscanf`** | \<stdio.h> |
| **`vwscanf`** | \<stdio.h> or \<wchar.h> |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, `stdin`, `stdout`, and `stderr`, must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_vscanf.c
// compile with: /W3
// This program uses the vscanf and vwscanf functions
// to read formatted input.

#include <stdio.h>
#include <stdarg.h>

int call_vscanf(char *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vscanf(format, arglist);
    va_end(arglist);
    return result;
}

int call_vwscanf(wchar_t *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vwscanf(format, arglist);
    va_end(arglist);
    return result;
}

int main( void )
{
    int   i, result;
    float fp;
    char  c, s[81];
    wchar_t wc, ws[81];
    result = call_vscanf( "%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws );
    printf( "The number of fields input is %d\n", result );
    printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);
    result = call_vwscanf( L"%d %f %hc %lc %80S %80ls", &i, &fp, &c, &wc, s, ws );
    wprintf( L"The number of fields input is %d\n", result );
    wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);
}
```

```Output

      71 98.6 h z Byte characters
36 92.3 y n Wide charactersThe number of fields input is 6
The contents are: 71 98.599998 h z Byte characters
The number of fields input is 6
The contents are: 36 92.300003 y n Wide characters
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[Stream I/O](../stream-i-o.md)\
[Locale](../locale.md)\
[`fscanf`, `_fscanf_l`, `fwscanf`, `_fwscanf_l`](fscanf-fscanf-l-fwscanf-fwscanf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)\
[`vscanf_s`, `vwscanf_s`](vscanf-s-vwscanf-s.md)
