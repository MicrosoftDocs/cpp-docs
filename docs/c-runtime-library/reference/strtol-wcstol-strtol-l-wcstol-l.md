---
description: "Learn more about: strtol, wcstol, _strtol_l, _wcstol_l"
title: "strtol, wcstol, _strtol_l, _wcstol_l"
ms.date: "4/2/2020"
api_name: ["strtol", "wcstol", "_strtol_l", "_wcstol_l", "_o__strtol_l", "_o__wcstol_l", "_o_strtol", "_o_wcstol"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wcstol_l", "strtol", "_tcstol", "wcstol", "_strtol_l", "_tcstol_l"]
helpviewer_keywords: ["wcstol function", "wcstol_l function", "_tcstol function", "string conversion, to integers", "tcstol function", "strtol_l function", "_wcstol_l function", "_strtol_l function", "strtol function"]
ms.assetid: 1787c96a-f283-4a83-9325-33cfc1c7e240
no-loc: [strtol, wcstol, _strtol_l, _wcstol_l, LONG_MAX, LONG_MIN, errno, ERANGE, EINVAL, LC_NUMERIC, _tcstol, _tcstol_l, localeconv, setlocale, _wsetlocale, strtod, _strtod_l, wcstod, _wcstod_l, strtoll, _strtoll_l, wcstoll, _wcstoll_l, strtoul, _strtoul_l, wcstoul, _wcstoul_l, atof, _atof_l, _wtof, _wtof_l]
---
# strtol, wcstol, _strtol_l, _wcstol_l

Convert strings to a **`long`** integer value.

## Syntax

```C
long strtol(
   const char *string,
   char **end_ptr,
   int base
);
long wcstol(
   const wchar_t *string,
   wchar_t **end_ptr,
   int base
);
long _strtol_l(
   const char *string,
   char **end_ptr,
   int base,
   _locale_t locale
);
long _wcstol_l(
   const wchar_t *string,
   wchar_t **end_ptr,
   int base,
   _locale_t locale
);
```

### Parameters

*string*\
Null-terminated string to convert.

*end_ptr*\
An output parameter, set to point to the character after the last interpreted character. Ignored, if **NULL**.

*base*\
Number base to use.

*locale*\
Locale to use.

## Return Value

**strtol**, **wcstol**, **_strtol_l**, and **_wcstol_l** return the value represented in *string*. They return 0 if no conversion is possible. When the representation would cause an overflow, they return **LONG_MAX** or **LONG_MIN**.

**errno** is set to **ERANGE** if overflow or underflow occurs. It's set to **EINVAL** if *string* is **NULL**. Or, if *base* is nonzero and less than 2, or greater than 36. For more information on **ERANGE**, **EINVAL**, and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **strtol**, **wcstol**, **_strtol_l**, and **_wcstol_l** functions convert *string* to a **`long`**. They stop reading *string* at the first character not recognized as part of a number. It may be the terminating-null character, or the first alphanumeric character greater than or equal to *base*.

**wcstol** and **_wcstol_l** are wide-character versions of **strtol** and **_strtol_l**. Their *string* argument is a wide-character string. These functions behave identically to **strtol** and **_strtol_l** otherwise. The locale's **LC_NUMERIC** category setting determines recognition of the radix character (the fractional marker or decimal point) in *string*. The functions **strtol** and **wcstol** use the current locale. **_strtol_l** and **_wcstol_l** use the locale passed in instead. For more information, see [setlocale] and [Locale](../../c-runtime-library/locale.md).

When *end_ptr* is **NULL**, it's ignored. Otherwise, a pointer to the character that stopped the scan is stored at the location pointed to by *end_ptr*. No conversion is possible if no valid digits are found, or an invalid base is specified. The value of *string* is then stored at the location pointed to by *end_ptr*.

**strtol** expects *string* to point to a string of the following form:

> [*whitespace*] [{**+** &#124; **-**}] [**0** [{ **x** &#124; **X** }]] [*alphanumerics*]

Square brackets (`[ ]`) surround optional elements. Curly braces and a vertical bar (`{ | }`) surround alternatives for a single element. *whitespace* may consist of space and tab characters, which are ignored. *alphanumerics* are decimal digits or the letters 'a' through 'z' (or 'A' through 'Z'). The first character that doesn't fit this form stops the scan. If *base* is between 2 and 36, then it's used as the base of the number. If *base* is 0, the initial characters of the string pointed to by *string* are used to determine the base. If the first character is 0, and the second character isn't 'x' or 'X', the string is interpreted as an octal integer. If the first character is '0' and the second character is 'x' or 'X', the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters 'a' through 'z' (or 'A' through 'Z') are assigned the values 10 through 35. The scan only allows letters whose values are less than *base*. The first character outside the range of the base stops the scan. For example, suppose *string* starts with "01". If *base* is 0, the scanner assumes it's an octal integer. An '8' or '9' character stops the scan.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstol**|**strtol**|**strtol**|**wcstol**|
|**_tcstol_l**|**_strtol_l**|**_strtol_l**|**_wcstol_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strtol**|\<stdlib.h>|
|**wcstol**|\<stdlib.h> or \<wchar.h>|
|**_strtol_l**|\<stdlib.h>|
|**_wcstol_l**|\<stdlib.h> or \<wchar.h>|

The **_strtol_l** and **_wcstol_l** functions are Microsoft-specific, not part of the Standard C library. For additional compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [strtod](strtod-strtod-l-wcstod-wcstod-l.md).

## See also

[Data conversion](../data-conversion.md)\
[Locale](../locale.md)\
[localeconv](localeconv.md)\
[setlocale, _wsetlocale](setlocale-wsetlocale.md)\
[String to numeric value functions](../string-to-numeric-value-functions.md)\
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)\
[strtoll, _strtoll_l, wcstoll, _wcstoll_l](strtoll-strtoll-l-wcstoll-wcstoll-l.md)\
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)\
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)
