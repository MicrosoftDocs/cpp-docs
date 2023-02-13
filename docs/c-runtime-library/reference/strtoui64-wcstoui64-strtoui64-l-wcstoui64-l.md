---
description: "Learn more about: _strtoui64, _wcstoui64, _strtoui64_l, _wcstoui64_l"
title: "_strtoui64, _wcstoui64, _strtoui64_l, _wcstoui64_l"
ms.date: 05/18/2022
api_name: ["_strtoui64", "_strtoui64_l", "_wcstoui64", "_wcstoui64_l", "_o__strtoui64", "_o__strtoui64_l", "_o__wcstoui64", "_o__wcstoui64_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CRT_OPEN/_strtoui64", "CRT_OPEN/_strtoui64_l", "STDLIB/_strtoui64", "STDLIB/_strtoui64_l", "CORECRT_WSTDLIB/_wcstoui64", "CORECRT_WSTDLIB/_wcstoui64_l", "TCHAR/_tcstoui64", "TCHAR/_tcstoui64_l", "_strtoui64", "_strtoui64_l", "_wcstoui64", "_wcstoui64_l", "_tcstoui64", "_tcstoui64_l", "strtoui64", "strtoui64_l", "wcstoui64", "wcstoui64_l"]
helpviewer_keywords: ["_strtoui64_l function", "_wcstoui64_l function", "string conversion, to integers", "wcstoui64_l function", "_strtoui64 function", "_wcstoui64 function", "wcstoui64 function", "strtoui64_l function", "strtoui64 function"]
ms.assetid: 7fcb537e-4554-4ceb-a5b6-bc09244e72ef
---
# `_strtoui64`, `_wcstoui64`, `_strtoui64_l`, `_wcstoui64_l`

Convert a string to an **`unsigned __int64`** value.

## Syntax

```C
unsigned __int64 _strtoui64(
   const char *strSource,
   char **endptr,
   int base
);
unsigned __int64 _wcstoui64(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
unsigned __int64 _strtoui64_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
unsigned __int64 _wcstoui64_l(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base,
   _locale_t locale
);
```

### Parameters

*`strSource`*\
Null-terminated string to convert.

*`endptr`*\
Pointer to character that stops scan.

*`base`*\
Number base to use.

*`locale`*\
Locale to use.

## Return value

**`_strtoui64`** returns the value represented in the string *`strSource`*, except when the representation would cause an overflow, in which case it returns `_UI64_MAX`. **`_strtoui64`** returns 0 if no conversion can be performed.

`_UI64_MAX` is defined in `LIMITS.H`.

If *`strSource`* is `NULL` or the *`base`* is nonzero and either less than 2 or greater than 36, `errno` is set to `EINVAL`.

For more information on return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`_strtoui64`** function converts *`strSource`* to an **`unsigned __int64`**. **`_wcstoui64`** is a wide-character version of **`_strtoui64`**; its *`strSource`* argument is a wide-character string. Otherwise these functions behave identically.

Both functions stop reading the string *`strSource`* at the first character they can't recognize as part of a number. It may be the terminating null character, or it may be the first numeric character greater than or equal to *`base`*.

By default, this function's global state is scoped to the application. To change it, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcstoui64` | **`_strtoui64`** | **`_strtoui64`** | **`_wcstoui64`** |
| `_tcstoui64_l` | **`_strtoui64_l`** | **`_strtoui64_l`** | **`_wcstoui64_l`** |

The current locale's `LC_NUMERIC` category setting determines recognition of the radix character in *`strSource`*; for more information, see [`setlocale`](setlocale-wsetlocale.md). The functions without the **`_l`** suffix use the current locale; **`_strtoui64_l`** and **`_wcstoui64_l`** are identical to the corresponding functions without the **`_l`** suffix except that they use the locale passed in instead. For more information, see [Locale](../locale.md).

If *`endptr`* isn't `NULL`, a pointer to the character that stopped the scan is stored at the location pointed to by *`endptr`*. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of *`strSource`* is stored at the location pointed to by *`endptr`*.

**`_strtoui64`** expects *`strSource`* to point to a string of the following form:

> [*`whitespace`*] [{**`+`** \| **`-`**}] [**`0`** [{ **`x`** \| **`X`** }]] [*`digits`*  \| *`letters`*]

A *`whitespace`* may consist of space and tab characters, which are ignored. *`digits`* are one or more decimal digits. *`letters`* are one or more of the letters 'a' through 'z' (or 'A' through 'Z'). The first character that doesn't fit this form stops the scan. If *`base`* is between 2 and 36, then it's used as the base of the number. If *`base`* is 0, the initial characters of the string pointed to by *`strSource`* are used to determine the base. If the first character is '0' and the second character isn't 'x' or 'X', the string is interpreted as an octal integer. If the first character is '0' and the second character is 'x' or 'X', the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters 'a' through 'z' (or 'A' through 'Z') are assigned the values 10 through 35; only letters whose assigned values are less than *`base`* are permitted. The first character outside the range of the base stops the scan. For example, if *`base`* is 0 and the first character scanned is '0', an octal integer is assumed and an '8' or '9' character will stop the scan.

## Requirements

| Function | Required header |
|--|--|
| **`_strtoui64`** | `<stdlib.h>` |
| **`_wcstoui64`** | `<stdlib.h>` or `<wchar.h>` |
| **`_strtoui64_l`** | `<stdlib.h>` |
| **`_wcstoui64_l`** | `<stdlib.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_strtoui64.c
#include <stdio.h>

unsigned __int64 atoui64(const char *szUnsignedInt) {
   return _strtoui64(szUnsignedInt, NULL, 10);
}

int main() {
   unsigned __int64 u = atoui64("18446744073709551615");
   printf( "u = %I64u\n", u );
}
```

```Output
u = 18446744073709551615
```

## See also

[Data conversion](../data-conversion.md)\
[Locale](../locale.md)\
[`localeconv`](localeconv.md)\
[`setlocale`, `_wsetlocale`](setlocale-wsetlocale.md)\
[String to numeric value functions](../string-to-numeric-value-functions.md)\
[`strtod`, `_strtod_l`, `wcstod`, `_wcstod_l`](strtod-strtod-l-wcstod-wcstod-l.md)\
[`strtoul`, `_strtoul_l`, `wcstoul`, `_wcstoul_l`](strtoul-strtoul-l-wcstoul-wcstoul-l.md)\
[`atof`, `_atof_l`, `_wtof`, `_wtof_l`](atof-atof-l-wtof-wtof-l.md)
