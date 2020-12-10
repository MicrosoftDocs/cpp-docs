---
description: "Learn more about: _strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l"
title: "_strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l"
ms.date: "4/2/2020"
api_name: ["_strtoi64", "_strtoi64_l", "_wcstoi64_l", "_wcstoi64", "_o__strtoi64", "_o__strtoi64_l", "_o__wcstoi64", "_o__wcstoi64_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_strtoi64", "strtoi64", "_stroi64_l", "_wcstoi64_l", "wcstoi64_l", "_wcstoi64", "wcstoi64", "strtoi64_l"]
helpviewer_keywords: ["_strtoi64 function", "_wcstoi64 function", "_strtoi64_l function", "string conversion, to integers", "_wcstoi64_l function", "strtoi64_l function", "wcstoi64 function", "strtoi64 function", "wcstoi64_l function"]
ms.assetid: ea2abc50-7bfe-420e-a46b-703c3153593a
---
# _strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l

Convert a string to an **`__int64`** value.

## Syntax

```C
__int64 _strtoi64(
   const char *strSource,
   char **endptr,
   int base
);
__int64 _wcstoi64(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
__int64 _strtoi64_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
__int64 _wcstoi64_l(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base,
   _locale_t locale
);
```

### Parameters

*strSource*<br/>
Null-terminated string to convert.

*endptr*<br/>
Pointer to character that stops scan.

*base*<br/>
Number base to use.

*locale*<br/>
The locale to use.

## Return Value

**_strtoi64** returns the value represented in the string *strSource*, except when the representation would cause an overflow, in which case it returns **_I64_MAX** or **_I64_MIN**. The function will return 0 if no conversion can be performed. **_wcstoi64** returns values analogously to **strtoi64**.

**_I64_MAX** and **_I64_MIN** are defined in LIMITS.H.

If *strSource* is **NULL** or the *base* is nonzero and either less than 2 or greater than 36, **errno** is set to **EINVAL**.

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, return codes.

## Remarks

The **_strtoi64** function converts *strSource* to an **`__int64`**. Both functions stop reading the string *strSource* at the first character they cannot recognize as part of a number. This may be the terminating null character, or it may be the first numeric character greater than or equal to *base*. **_wcstoi64** is a wide-character version of **_strtoi64**; its *strSource* argument is a wide-character string. These functions behave identically otherwise.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoi64**|**_strtoi64**|**_strtoi64**|**_wcstoi64**|
|**_tcstoi64_l**|**_strtoi64_l**|**_strtoi64_l**|**_wcstoi64_l**|

The locale's **LC_NUMERIC** category setting determines recognition of the radix character in *strSource*; for more information, see [setlocale](setlocale-wsetlocale.md). The functions without the _l suffix use the current locale; **_strtoi64_l** and **_wcstoi64_l** are identical to the corresponding function without the **_l** suffix except that they use the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

If *endptr* is not **NULL**, a pointer to the character that stopped the scan is stored at the location pointed to by *endptr*. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of *strSource* is stored at the location pointed to by *endptr*.

**_strtoi64** expects *strSource* to point to a string of the following form:

> [*whitespace*] [{**+** &#124; **-**}] [**0** [{ **x** &#124; **X** }]] [*digits*  &#124; *letters*]

A *whitespace* may consist of space and tab characters, which are ignored; *digits* are one or more decimal digits; *letters* are one or more of the letters 'a' through 'z' (or 'A' through 'Z').  The first character that does not fit this form stops the scan. If *base* is between 2 and 36, then it is used as the base of the number. If *base* is 0, the initial characters of the string pointed to by *strSource* are used to determine the base. If the first character is 0 and the second character is not 'x' or 'X', the string is interpreted as an octal integer. If the first character is '0' and the second character is 'x' or 'X', the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters 'a' through 'z' (or 'A' through 'Z') are assigned the values 10 through 35; only letters whose assigned values are less than *base* are permitted. The first character outside the range of the base stops the scan. For example, if *base* is 0 and the first character scanned is '0', an octal integer is assumed and an '8' or '9' character will stop the scan.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strtoi64**, **_strtoi64_l**|\<stdlib.h>|
|**_wcstoi64**, **_wcstoi64_l**|\<stdlib.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[String to Numeric Value Functions](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
