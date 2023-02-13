---
description: "Learn more about: strtoimax, _strtoimax_l, wcstoimax, _wcstoimax_l"
title: "strtoimax, _strtoimax_l, wcstoimax, _wcstoimax_l"
ms.date: "11/04/2016"
api_name: ["wcstoimax", "_wcstoimax_l", "_strtoimax_l", "strtoimax"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wcstoimax", "_tcstoimax", "strtoimax", "_wcstoimax_l", "_strtoimax_l", "_tcstoimax_l"]
helpviewer_keywords: ["strtoimax funciton", "conversion functions", "_strtoimax_l function", "_wcstoimax_l function", "wcstoimax function"]
ms.assetid: 4530d3dc-aaac-4a76-b7cf-29ae3c98d0ae
---
# `strtoimax`, `_strtoimax_l`, `wcstoimax`, `_wcstoimax_l`

Converts a string to an integer value of the largest supported signed integer type.

## Syntax

```C
intmax_t strtoimax(
   const char *strSource,
   char **endptr,
   int base
);
intmax_t wcstoimax(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
intmax_t _strtoimax_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
intmax_t _wcstoimax_l(
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
Pointer to the character that stops the scan.

*`base`*\
Number base to use.

*`locale`*\
The locale to use.

## Return value

**`strtoimax`** returns the value that's represented in the string *`strSource`*, except when the representation would cause an overflow—in that case, it returns `INTMAX_MAX` or `INTMAX_MIN`, and `errno` is set to `ERANGE`. The function returns 0 if no conversion can be performed. **`wcstoimax`** returns values analogously to **`strtoimax`**.

`INTMAX_MAX` and `INTMAX_MIN` are defined in stdint.h.

If *`strSource`* is `NULL` or the *`base`* is nonzero and either less than 2 or greater than 36, `errno` is set to `EINVAL`.

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`strtoimax`** function converts *`strSource`* to an `intmax_t`. The wide-character version of **`strtoimax`** is **`wcstoimax`**; its *`strSource`* argument is a wide-character string. Otherwise, these functions behave identically. Both functions stop reading the string *`strSource`* at the first character they can't recognize as part of a number. It may be the terminating null character, or it may be the first numeric character that's greater than or equal to *`base`*.

The locale's `LC_NUMERIC` category setting determines recognition of the radix character in *`strSource`*; for more information, see [`setlocale`, `_wsetlocale`](setlocale-wsetlocale.md). The functions that don't have the `_l` suffix use the current locale; **`_strtoimax_l`** and **`_wcstoimax_l`** are identical to the corresponding functions that don't have the `_l` suffix except that they instead use the locale that's passed in. For more information, see [Locale](../locale.md).

If *`endptr`* isn't `NULL`, a pointer to the character that stopped the scan is stored at the location that's pointed to by *`endptr`*. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of *`strSource`* is stored at the location that's pointed to by *`endptr`*.

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcstoimax` | **`strtoimax`** | **`strtoimax`** | **`wcstoimax`** |
| `_tcstoimax_l` | **`strtoimax_l`** | **`_strtoimax_l`** | **`_wcstoimax_l`** |

**`strtoimax`** expects *`strSource`* to point to a string of the following form:

> [*`whitespace`*] [{**`+`** &#124; **`-`**}] [**`0`** [{ **`x`** &#124; **`X`** }]] [*`digits`*  &#124; *`letters`*]

A *`whitespace`* may consist of space and tab characters, which are ignored; *`digits`* are one or more decimal digits; *`letters`* are one or more of the letters 'a' through 'z' (or 'A' through 'Z'). The first character that doesn't fit this form stops the scan. If *`base`* is between 2 and 36, then it's used as the base of the number. If *`base`* is 0, the initial characters of the string pointed to by *`strSource`* are used to determine the base. If the first character is '0' and the second character isn't 'x' or 'X', the string is interpreted as an octal integer. If the first character is '0' and the second character is 'x' or 'X', the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters 'a' through 'z' (or 'A' through 'Z') are assigned the values 10 through 35; only letters whose assigned values are less than *`base`* are permitted. The first character outside the range of the base stops the scan. For example, if *`base`* is 0 and the first character scanned is '0', an octal integer is assumed and an '8' or '9' character would stop the scan.

## Requirements

| Routine | Required header |
|---|---|
| **`strtoimax`**, **`_strtoimax_l`**, **`wcstoimax`**, **`_wcstoimax_l`** | \<inttypes.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Data conversion](../data-conversion.md)\
[Locale](../locale.md)\
[`localeconv`](localeconv.md)\
[`setlocale`, `_wsetlocale`](setlocale-wsetlocale.md)\
[String to numeric value functions](../string-to-numeric-value-functions.md)\
[`strtod`, `_strtod_l`, `wcstod`, `_wcstod_l`](strtod-strtod-l-wcstod-wcstod-l.md)\
[`strtol`, `wcstol`, `_strtol_l`, `_wcstol_l`](strtol-wcstol-strtol-l-wcstol-l.md)\
[`strtoul`, `_strtoul_l`, `wcstoul`, `_wcstoul_l`](strtoul-strtoul-l-wcstoul-wcstoul-l.md)\
[`strtoumax`, `_strtoumax_l`, `wcstoumax`, `_wcstoumax_l`](strtoumax-strtoumax-l-wcstoumax-wcstoumax-l.md)\
[`atof`, `_atof_l`, `_wtof`, `_wtof_l`](atof-atof-l-wtof-wtof-l.md)
