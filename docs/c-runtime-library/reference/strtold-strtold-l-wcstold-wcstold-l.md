---
description: "Learn more about: strtold, _strtold_l, wcstold, _wcstold_l"
title: "strtold, _strtold_l, wcstold, _wcstold_l"
ms.date: "4/2/2020"
api_name: ["wcstold", "strtold", "_strtold_l", "_wcstold_l", "_o__strtold_l", "_o__wcstold_l", "_o_strtold", "_o_wcstold"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDLIB/strtold", "STDLIB/_strtold_l", "CORECRT_WSTDLIB/wcstold", "CORECRT_WSTDLIB/_wcstold_l", "TCHAR/_tcstold", "TCHAR/_tcstold_l", "strtold", "_strtold_l", "wcstold", "_wcstold_l", "_tcstold", "_tcstold_l"]
ms.assetid: 928c0c9a-bc49-445b-8822-100eb5954115
---
# `strtold`, `_strtold_l`, `wcstold`, `_wcstold_l`

Converts strings to a long double-precision floating-point value.

## Syntax

```C
long double strtold(
   const char *strSource,
   char **endptr
);
long double _strtold_l(
   const char *strSource,
   char **endptr,
   _locale_t locale
);
long double wcstold(
   const wchar_t *strSource,
   wchar_t **endptr
);
long double wcstold_l(
   const wchar_t *strSource,
   wchar_t **endptr,
   _locale_t locale
);
```

### Parameters

*`strSource`*\
Null-terminated string to convert.

*`endptr`*\
Pointer to the character that stops the scan.

*`locale`*\
The locale to use.

## Return value

**`strtold`** returns the value of the floating-point number as a **`long double`**, except when the representation would cause an overflow—in that case, the function returns +/-`HUGE_VALL`. The sign of `HUGE_VALL` matches the sign of the value that can't be represented. **`strtold`** returns 0 if no conversion can be performed or an underflow occurs.

**`wcstold`** returns values analogously to **`strtold`**. For both functions, `errno` is set to `ERANGE` if overflow or underflow occurs and the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md).

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each function converts the input string *`strSource`* to a **`long double`**. The **`strtold`** function stops reading the string *`strSource`* at the first character it can't recognize as part of a number. It may be the terminating null character. The wide-character version of **`strtold`** is **`wcstold`**; its *`strSource`* argument is a wide-character string. Otherwise, these functions behave identically.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcstold` | **`strtold`** | **`strtold`** | **`wcstold`** |
| `_tcstold_l` | **`_strtold_l`** | **`_strtold_l`** | **`_wcstold_l`** |

The `LC_NUMERIC` category setting of the current locale determines the recognition of the radix character in *`strSource`*. For more information, see [`setlocale`, `_wsetlocale`](setlocale-wsetlocale.md). The functions without the `_l` suffix use the current locale; **`_strtold_l`** and **`_wcstold_l`** are identical to **`_strtold`** and **`_wcstold`** except that they instead use the locale that's passed in. For more information, see [Locale](../locale.md).

If *`endptr`* isn't `NULL`, a pointer to the character that stopped the scan is stored at the location that's pointed to by *`endptr`*. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of *`strSource`* is stored at the location that's pointed to by *`endptr`*.

**`strtold`** expects *`strSource`* to point to a string of the following form:

> \[*`whitespace`*\]\[*`sign`*\]\[*`digits`*\]\[.*`digits`*\]\[{**`d`** &#124; **`D`** &#124; **`e`** &#124; **`E`**}\[*`sign`*\]*`digits`*\]

A *`whitespace`* may consist of space and tab characters, which are ignored; *`sign`* is either plus (**`+`**) or minus (**`-`**); and *`digits`* are one or more decimal digits. If no digits appear before the radix character, at least one must appear after the radix character. The decimal digits can be followed by an exponent, which consists of an introductory letter (**`d`**, **`D`**, **`e`**, or **`E`**) and an optionally signed integer. If no exponent part or radix character appears, a radix character is assumed to follow the last digit in the string. The first character that doesn't fit this form stops the scan.

## Requirements

| Routine | Required header |
|---|---|
| **`strtold`**, **`_strtold_l`** | \<stdlib.h> |
| **`wcstold`**, **`_wcstold_l`** | \<stdlib.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_strtold.c
// Build with: cl /W4 /Tc crt_strtold.c
// This program uses strtold to convert a
// string to a long double-precision value.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char *string;
   char *stopstring;
   long double x;

   string = "3.1415926535898This stopped it";
   x = strtold(string, &stopstring);
   printf("string = %s\n", string);
   printf("   strtold = %.13Lf\n", x);
   printf("   Stopped scan at: %s\n\n", stopstring);
}
```

```Output
string = 3.1415926535898This stopped it
   strtold = 3.1415926535898
   Stopped scan at: This stopped it
```

## See also

[Data conversion](../data-conversion.md)\
[Math and floating-point support](../floating-point-support.md)\
[Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md)\
[Locale](../locale.md)\
[String to numeric value functions](../string-to-numeric-value-functions.md)\
[`strtod`, `_strtod_l`, `wcstod`, `_wcstod_l`](strtod-strtod-l-wcstod-wcstod-l.md)\
[`strtol`, `wcstol`, `_strtol_l`, `_wcstol_l`](strtol-wcstol-strtol-l-wcstol-l.md)\
[`strtoul`, `_strtoul_l`, `wcstoul`, `_wcstoul_l`](strtoul-strtoul-l-wcstoul-wcstoul-l.md)\
[`atof`, `_atof_l`, `_wtof`, `_wtof_l`](atof-atof-l-wtof-wtof-l.md)\
[`localeconv`](localeconv.md)\
[`_create_locale`, `_wcreate_locale`](create-locale-wcreate-locale.md)\
[`_free_locale`](free-locale.md)
