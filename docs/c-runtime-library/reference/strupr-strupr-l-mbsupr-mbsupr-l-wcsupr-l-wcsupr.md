---
description: "Learn more about: _strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr"
title: "_strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr"
ms.date: "4/2/2020"
api_name: ["_mbsupr_l", "_mbsupr", "_strupr_l", "_wcsupr", "_wcsupr_l", "_strupr", "_o__mbsupr", "_o__mbsupr_l", "_o__strupr", "_o__strupr_l", "_o__wcsupr", "_o__wcsupr_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntoskrnl.exe", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbsupr", "_ftcsupr", "mbsupr", "_tcsupr", "strupr_l", "_fstrupr", "_strupr", "mbsupr_l", "_wcsupr"]
helpviewer_keywords: ["tcsupr_l function", "mbsupr function", "strupr function", "uppercase, converting strings to", "wcsupr function", "_wcsupr function", "string conversion [C++], case", "ftcsupr function", "_ftcsupr function", "_wcsupr_l function", "wcsupr_l function", "strings [C++], case", "tcsupr function", "_tcsupr_l function", "_fstrupr function", "_strupr_l function", "_mbsupr_l function", "converting case, CRT functions", "fstrupr function", "mbsupr_l function", "strupr_l function", "_strupr function", "_mbsupr function", "_tcsupr function", "strings [C++], converting case"]
ms.assetid: caac8f16-c233-41b6-91ce-575ec7061b77
---
# _strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr

Converts a string to uppercase. More secure versions of these functions are available; see [_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l](strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md).

> [!IMPORTANT]
> **_mbsupr** and **_mbsupr_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *_strupr(
   char *str
);
wchar_t *_wcsupr(
   wchar_t *str
);
unsigned char *_mbsupr(
   unsigned char *str
);
char *_strupr_l(
   char *str,
   _locale_t locale
);
wchar_t *_wcsupr_l(
   wchar_t *str,
   _locale_t locale
);
unsigned char *_mbsupr_l(
   unsigned char *str,
   _locale_t locale
);
template <size_t size>
char *_strupr(
   char (&str)[size]
); // C++ only
template <size_t size>
wchar_t *_wcsupr(
   wchar_t (&str)[size]
); // C++ only
template <size_t size>
unsigned char *_mbsupr(
   unsigned char (&str)[size]
); // C++ only
template <size_t size>
char *_strupr_l(
   char (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
wchar_t *_wcsupr_l(
   wchar_t (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
unsigned char *_mbsupr_l(
   unsigned char (&str)[size],
   _locale_t locale
); // C++ only
```

### Parameters

*str*<br/>
String to capitalize.

*locale*<br/>
The locale to use.

## Return Value

Returns a pointer to the altered string. Because the modification is done in place, the pointer returned is the same as the pointer passed as the input argument. No return value is reserved to indicate an error.

## Remarks

The **_strupr** function converts, in place, each lowercase letter in *str* to uppercase. The conversion is determined by the **LC_CTYPE** category setting of the locale. Other characters are not affected. For more information on **LC_CTYPE**, see [setlocale](setlocale-wsetlocale.md). The versions of these functions without the **_l** suffix use the current locale; the versions with the **_l** suffix are identical except that they use the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

**_wcsupr** and **_mbsupr** are wide-character and multibyte-character versions of **_strupr**. The argument and return value of **_wcsupr** are wide-character strings; those of **_mbsupr** are multibyte-character strings. These three functions behave identically otherwise.

If *str* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, these functions return the original string and set **errno** to **EINVAL**.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsupr**|**_strupr**|**_mbsupr**|**_wcsupr**|
|**_tcsupr_l**|**_strupr_l**|**_mbsupr_l**|**_wcsupr_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strupr**, **_strupr_l**|\<string.h>|
|**_wcsupr**, **_wcsupr_l**|\<string.h> or \<wchar.h>|
|**_mbsupr**, **_mbsupr_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [_strlwr](strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md).

## See also

[Locale](../../c-runtime-library/locale.md)<br/>
[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_strlwr, _wcslwr, _mbslwr, _strlwr_l, _wcslwr_l, _mbslwr_l](strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md)<br/>
