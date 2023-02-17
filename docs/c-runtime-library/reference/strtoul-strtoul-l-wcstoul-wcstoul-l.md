---
description: "Learn more about: strtoul, _strtoul_l, wcstoul, _wcstoul_l"
title: "strtoul, _strtoul_l, wcstoul, _wcstoul_l"
ms.date: "4/2/2020"
api_name: ["_wcstoul_l", "_strtoul_l", "strtoul", "wcstoul", "_o__strtoul_l", "_o__wcstoul_l", "_o_strtoul", "_o_wcstoul"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDLIB/strtoul", "STDLIB/_strtoul_l", "CORECRT_WSTDLIB/wcstoul", "CORECRT_WSTDLIB/_wcstoul_l", "TCHAR/_tcstoul", "TCHAR/_tcstoul_l", "strtoul", "_strtoul_l", "wcstoul", "_wcstoul_l", "_tcstoul", "_tcstoul_l"]
helpviewer_keywords: ["_wcstoul_l function", "_tcstoul function", "_strtoul_l function", "string conversion, to integers", "wcstoul function", "strtoul function", "wcstoul_l function", "strtoul_l function", "tcstoul function"]
---
# `strtoul`, `_strtoul_l`, `wcstoul`, `_wcstoul_l`

Convert strings to an unsigned long-integer value.

## Syntax

```C
unsigned long strtoul(
   const char *strSource,
   char **endptr,
   int base
);
unsigned long _strtoul_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
unsigned long wcstoul(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
unsigned long _wcstoul_l(
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

**`strtoul`** returns the converted value, if any, or `ULONG_MAX` on overflow. **`strtoul`** returns 0 if no conversion can be performed. **`wcstoul`** returns values analogously to **`strtoul`**. For both functions, `errno` is set to `ERANGE` if overflow or underflow occurs.

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions converts the input string *`strSource`* to an **`unsigned long`**.

**`strtoul`** stops reading the string *`strSource`* at the first character it can't recognize as part of a number. This character may be the terminating `NULL`, or it may be the first numeric character greater than or equal to *`base`*. The `LC_NUMERIC` category setting of the locale determines recognition of the radix character in *`strSource`*; for more information, see [`setlocale`](setlocale-wsetlocale.md). **`strtoul`** and **`wcstoul`** use the current locale; **`_strtoul_l`** and **`_wcstoul_l`** are identical except that they use the locale passed in instead. For more information, see [Locale](../locale.md).

If *`endptr`* isn't `NULL`, a pointer to the character that stopped the scan is stored at the location pointed to by *`endptr`*. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of *`strSource`* is stored at the location pointed to by *`endptr`*.

**`wcstoul`** is a wide-character version of **`strtoul`**; its *`strSource`* argument is a wide-character string. Otherwise these functions behave identically.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcstoul` | **`strtoul`** | **`strtoul`** | **`wcstoul`** |
| `_tcstoul_l` | **`strtoul_l`** | **`_strtoul_l`** | **`_wcstoul_l`** |

**`strtoul`** expects *`strSource`* to point to a string of the following form:

> `[whitespace] [{+ | -}] [0 [{ x | X }]] [digits | letters]`

A *`whitespace`* may consist of space and tab characters, which are ignored. *`digits`* are one or more decimal digits. *`letters`* are one or more of the letters `a` through `z` (or `A` through `Z`). The first character that doesn't fit this form stops the scan. If *`base`* is between 2 and 36, then it's used as the base of the number. If *`base`* is 0, the initial characters of the string pointed to by *`strSource`* are used to determine the base. If the first character is 0 and the second character isn't `x` or `X`, the string is interpreted as an octal integer. If the first character is '0' and the second character is `x` or `X`, the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters `a` through `z` (or `A` through `Z`) are assigned the values 10 through 35; only letters whose assigned values are less than *`base`* are permitted. The first character outside the range of the base stops the scan. For example, if *`base`* is 0 and the first character scanned is '0', an octal integer is assumed and an '8' or '9' character will stop the scan. **`strtoul`** allows a plus (**`+`**) or minus (**`-`**) sign prefix; a leading minus sign indicates that the return value is negated.

## Requirements

| Routine | Required header |
|---|---|
| **`strtoul`** | `<stdlib.h>` |
| **`wcstoul`** | `<stdlib.h>` or `<wchar.h>` |
| **`_strtoul_l`** | `<stdlib.h>` |
| **`_wcstoul_l`** | `<stdlib.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`strtod`](strtod-strtod-l-wcstod-wcstod-l.md).

## See also

[Data conversion](../data-conversion.md)\
[Locale](../locale.md)\
[`localeconv`](localeconv.md)\
[`setlocale`, `_wsetlocale`](setlocale-wsetlocale.md)\
[String to numeric value functions](../string-to-numeric-value-functions.md)\
[`strtod`, `_strtod_l`, `wcstod`, `_wcstod_l`](strtod-strtod-l-wcstod-wcstod-l.md)\
[`strtol`, `wcstol`, `_strtol_l`, `_wcstol_l`](strtol-wcstol-strtol-l-wcstol-l.md)\
[`atof`, `_atof_l`, `_wtof`, `_wtof_l`](atof-atof-l-wtof-wtof-l.md)
