---
description: "Learn more about: strtoumax, _strtoumax_l, wcstoumax, _wcstoumax_l"
title: "strtoumax, _strtoumax_l, wcstoumax, _wcstoumax_l"
ms.date: "11/04/2016"
api_name: ["_wcstoumax_l", "_strtoumax_l", "wcstoumax", "strtoumax"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wcstoumax", "_tcstoumax", "_strtoumax_l", "_wcstoumax_l", "_tcstoumax_l", "strtoumax"]
helpviewer_keywords: ["_strtoumax_l function", "conversion functions", "wcstoumax function", "_wcstoumax_l function", "strtoumax function"]
ms.assetid: 566769f9-495b-4508-b9c6-02217a578897
---
# strtoumax, _strtoumax_l, wcstoumax, _wcstoumax_l

Converts strings to an integer value of the largest supported unsigned integer type.

## Syntax

```C
uintmax_t strtoumax(
   const char *strSource,
   char **endptr,
   int base
);
uintmax_t _strtoumax_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
uintmax_t wcstoumax(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
uintmax_t _wcstoumax_l(
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
Pointer to the character that stops the scan.

*base*<br/>
Number base to use.

*locale*<br/>
Locale to use.

## Return Value

**strtoumax** returns the converted value, if any, or **UINTMAX_MAX** on overflow. **strtoumax** returns 0 if no conversion can be performed. **wcstoumax** returns values analogously to **strtoumax**. For both functions, **errno** is set to **ERANGE** if overflow or underflow occurs.

For more information about return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions converts the input string *strSource* to a **uintmax_t** integer value.

**strtoumax** stops reading the string *strSource* at the first character it cannot recognize as part of a number. This may be the terminating null character, or it may be the first numeric character that's greater than or equal to *base*. The **LC_NUMERIC** category setting of the locale determines the recognition of the radix character in *strSource*. For more information, see [setlocale, _wsetlocale](setlocale-wsetlocale.md). **strtoumax** and **wcstoumax** use the current locale; **_strtoumax_l** and **_wcstoumax_l** are identical except that they instead use the locale that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

If *endptr* is not **NULL**, a pointer to the character that stopped the scan is stored at the location that's pointed to by *endptr*. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of *strSource* is stored at the location that's pointed to by *endptr*.

The wide-character version of **strtoumax** is **wcstoumax**; its *strSource* argument is a wide-character string. Otherwise, these functions behave identically.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoumax**|**strtoumax**|**strtoumax**|**wcstoumax**|
|**_tcstoumax_l**|**strtoumax_l**|**_strtoumax_l**|**_wcstoumax_l**|

**strtoumax** expects *strSource* to point to a string of the following form:

> [*whitespace*] [{**+** &#124; **-**}] [**0** [{ **x** &#124; **X** }]] [*digits*  &#124; *letters*]

A *whitespace* may consist of space and tab characters, which are ignored. *digits* are one or more decimal digits. *letters* are one or more of the letters 'a' through 'z' (or 'A' through 'Z'). The first character that does not fit this form stops the scan. If *base* is between 2 and 36, then it is used as the base of the number. If *base* is 0, the initial characters of the string that's pointed to by *strSource* are used to determine the base. If the first character is '0' and the second character is not 'x' or 'X', the string is interpreted as an octal integer. If the first character is '0' and the second character is 'x' or 'X', the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters 'a' through 'z' (or 'A' through 'Z') are assigned the values 10 through 35; only letters whose assigned values are less than *base* are permitted. The first character outside the range of the base stops the scan. For example, if *base* is 0 and the first character scanned is '0', an octal integer is assumed and an '8' or '9' character would stop the scan. **strtoumax** allows a plus sign (**+**) or minus sign (**-**) prefix; a leading minus sign indicates that the return value is the two’s complement of the absolute value of the converted string.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strtoumax**|\<stdlib.h>|
|**wcstoumax**|\<stdlib.h> or \<wchar.h>|
|**_strtoumax_l**|\<stdlib.h>|
|**_wcstoumax_l**|\<stdlib.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [strtod](strtod-strtod-l-wcstod-wcstod-l.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[String to Numeric Value Functions](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtoimax, _strtoimax_l, wcstoimax, _wcstoimax_l](strtoimax-strtoimax-l-wcstoimax-wcstoimax-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[strtoll, _strtoll_l, wcstoll, _wcstoll_l](strtoll-strtoll-l-wcstoll-wcstoll-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
