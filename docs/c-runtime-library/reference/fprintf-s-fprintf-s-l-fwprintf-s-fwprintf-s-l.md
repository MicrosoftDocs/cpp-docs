---
description: "Learn more about: fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l"
title: "fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l"
ms.date: "3/9/2021"
api_name: ["_fprintf_s_l", "fwprintf_s", "fprintf_s", "_fwprintf_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ftprintf_s", "fprintf_s", "fwprintf_s"]
helpviewer_keywords: ["ftprintf_s_l function", "ftprintf_s function", "_fprintf_s_l function", "_ftprintf_s function", "_ftprintf_s_l function", "fwprintf_s_l function", "fwprintf_s function", "fprintf_s_l function", "fprintf_s function", "_fwprintf_s_l function", "print formatted data to streams"]
---
# `fprintf_s`, `_fprintf_s_l`, `fwprintf_s`, `_fwprintf_s_l`

Print formatted data to a stream. These functions are versions of [`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md) with security enhancements as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
int fprintf_s(
   FILE *stream,
   const char *format [,
   argument_list ]
);
int _fprintf_s_l(
   FILE *stream,
   const char *format,
   _locale_t locale [,
   argument_list ]
);
int fwprintf_s(
   FILE *stream,
   const wchar_t *format [,
   argument_list ]
);
int _fwprintf_s_l(
   FILE *stream,
   const wchar_t *format,
   _locale_t locale [,
   argument_list ]
);
```

### Parameters

*`stream`*\
Pointer to `FILE` structure.

*`format`*\
Format-control string.

*`argument_list`*\
Optional arguments to the format string.

*`locale`*\
The locale to use.

## Return value

**`fprintf_s`** returns the number of bytes written. **`fwprintf_s`** returns the number of wide characters written. Each of these functions returns a negative value instead when an output error occurs.

## Remarks

**`fprintf_s`** formats and prints a series of characters and values to the output *`stream`*. Each argument in *`argument_list`* (if any) is converted and output according to the corresponding format specification in *`format`*. The *`format`* argument uses the [format specification syntax for `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md).

**`fwprintf_s`** is a wide-character version of **`fprintf_s`**; in **`fwprintf_s`**, *`format`* is a wide-character string. These functions behave identically if the stream is opened in ANSI mode. **`fprintf_s`** doesn't currently support output into a UNICODE stream.

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string.
>
>
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

Like the non-secure versions (see [`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)), these functions validate their parameters and invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md), if either *`stream`* or *`format`* is a `NULL` pointer. The format string itself is also validated. If there are any unknown or badly formed formatting specifiers, these functions generate the invalid parameter exception. In all cases, If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`. For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_ftprintf_s`** | **`fprintf_s`** | **`fprintf_s`** | **`fwprintf_s`** |
| **`_ftprintf_s_l`** | **`_fprintf_s_l`** | **`_fprintf_s_l`** | **`_fwprintf_s_l`** |

For more information, see [Format specification syntax](../format-specification-syntax-printf-and-wprintf-functions.md).

## Requirements

| Function | Required header |
|---|---|
| **`fprintf_s`**, **`_fprintf_s_l`** | `<stdio.h>` |
| **`fwprintf_s`**, **`_fwprintf_s_l`** | `<stdio.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_fprintf_s.c
// This program uses fprintf_s to format various
// data and print it to the file named FPRINTF_S.OUT. It
// then displays FPRINTF_S.OUT on the screen using the system
// function to invoke the operating-system TYPE command.

#include <stdio.h>
#include <process.h>

FILE *stream;

int main( void )
{
   int    i = 10;
   double fp = 1.5;
   char   s[] = "this is a string";
   char   c = '\n';

   fopen_s( &stream, "fprintf_s.out", "w" );
   fprintf_s( stream, "%s%c", s, c );
   fprintf_s( stream, "%d\n", i );
   fprintf_s( stream, "%f\n", fp );
   fclose( stream );
   system( "type fprintf_s.out" );
}
```

```Output
this is a string
10
1.500000
```

## See also

[Stream I/O](../stream-i-o.md)\
[`_cprintf`, `_cprintf_l`, `_cwprintf`, `_cwprintf_l`](cprintf-cprintf-l-cwprintf-cwprintf-l.md)\
[`fscanf`, `_fscanf_l`, `fwscanf`, `_fwscanf_l`](fscanf-fscanf-l-fwscanf-fwscanf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)
