---
description: "Learn more about: scanf, _scanf_l, wscanf, _wscanf_l"
title: "scanf, _scanf_l, wscanf, _wscanf_l"
ms.date: "10/21/2019"
api_name: ["_wscanf_l", "scanf", "_scanf_l", "wscanf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tscanf", "_scanf_l", "wscanf", "_wscanf_l", "scanf", "_tscanf_l"]
helpviewer_keywords: ["tscanf_l function", "_tscanf_l function", "reading data [C++], from input streams", "_tscanf function", "data [C++], reading from input stream", "scanf_l function", "scanf function", "wscanf function", "_scanf_l function", "tscanf function", "formatted data [C++], from input streams", "wscanf_l function", "_wscanf_l function"]
ms.assetid: 73eac607-117f-4be4-9ff0-4afd9cf3c848
---
# `scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`

Reads formatted data from the standard input stream. More secure versions of these functions are available; see [`scanf_s`, `_scanf_s_l`, `wscanf_s`, `_wscanf_s_l`](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md).

> [!NOTE]
> In Visual Studio 2015 The `printf` and `scanf` family of functions were declared as **`inline`** and moved to the `<stdio.h>` and `<conio.h>` headers. If you are migrating older code you might see Linker Error LNK2019 in connection with these functions. For more information, see [Visual C++ change history 2003 - 2015](../../porting/visual-cpp-change-history-2003-2015.md#stdio_and_conio).

## Syntax

```C
int scanf(
   const char *format [,
   argument]...
);
int _scanf_l(
   const char *format,
   _locale_t locale [,
   argument]...
);
int wscanf(
   const wchar_t *format [,
   argument]...
);
int _wscanf_l(
   const wchar_t *format,
   _locale_t locale [,
   argument]...
);
```

### Parameters

*`format`*\
Format control string.

*`argument`*\
Optional arguments.

*`locale`*\
The locale to use.

## Return value

Returns the number of fields successfully converted and assigned; the return value doesn't include fields that were read but not assigned. A return value of 0 indicates that no fields were assigned.

If *`format`* is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return `EOF` and set `errno` to `EINVAL`.

For information on these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`scanf`** function reads data from the standard input stream **`stdin`** and writes the data into the location given by *`argument`*. Each *`argument`* must be a pointer to a variable of a type that corresponds to a type specifier in *`format`*. If copying takes place between strings that overlap, the behavior is undefined.

> [!IMPORTANT]
> When reading a string with **`scanf`**, always specify a width for the **`%s`** format (for example, `%32s` instead of `%s`); otherwise, improperly formatted input can easily cause a buffer overrun. Alternately, consider using [`scanf_s`, `_scanf_s_l`, `wscanf_s`, `_wscanf_s_l`](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) or [`fgets`](fgets-fgetws.md).

**`wscanf`** is a wide-character version of **`scanf`**; the *`format`* argument to **`wscanf`** is a wide-character string. **`wscanf`** and **`scanf`** behave identically if the stream is opened in ANSI mode. **`scanf`** doesn't currently support input from a UNICODE stream.

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_tscanf`** | **`scanf`** | **`scanf`** | **`wscanf`** |
| **`_tscanf_l`** | **`_scanf_l`** | **`_scanf_l`** | **`_wscanf_l`** |

For more information, see [Format specification fields: `scanf` and `wscanf` functions](../format-specification-fields-scanf-and-wscanf-functions.md).

## Requirements

| Routine | Required header |
|---|---|
| **`scanf`**, **`_scanf_l`** | `<stdio.h>` |
| **`wscanf`**, **`_wscanf_l`** | `<stdio.h>` or `<wchar.h>` |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **`stdin`**, **`stdout`**, and **`stderr`**, must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_scanf.c
// compile with: /W3
// This program uses the scanf and wscanf functions
// to read formatted input.

#include <stdio.h>

int main( void )
{
   int   i, result;
   float fp;
   char  c, s[81];
   wchar_t wc, ws[81];
   result = scanf( "%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws ); // C4996
   // Note: scanf and wscanf are deprecated; consider using scanf_s and wscanf_s
   printf( "The number of fields input is %d\n", result );
   printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);
   result = wscanf( L"%d %f %hc %lc %80S %80ls", &i, &fp, &c, &wc, s, ws ); // C4996
   wprintf( L"The number of fields input is %d\n", result );
   wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);
}
```

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

[Math and floating-point support](../floating-point-support.md)\
[Stream I/O](../stream-i-o.md)\
[Locale](../locale.md)\
[`fscanf`, `_fscanf_l`, `fwscanf`, `_fwscanf_l`](fscanf-fscanf-l-fwscanf-fwscanf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)
