---
description: "Learn more about: _strncoll, _wcsncoll, _mbsncoll, _strncoll_l, _wcsncoll_l, _mbsncoll_l"
title: "_strncoll, _wcsncoll, _mbsncoll, _strncoll_l, _wcsncoll_l, _mbsncoll_l"
ms.date: "4/2/2020"
api_name: ["_strncoll", "_mbsncoll_l", "_wcsncoll", "_wcsncoll_l", "_mbsncoll", "_strncoll_l", "_o__mbsncoll", "_o__mbsncoll_l", "_o__strncoll", "_o__strncoll_l", "_o__wcsncoll", "_o__wcsncoll_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsncoll_l", "strncoll", "_wcsncoll", "_tcsnccoll", "_ftcsnccoll", "wcsncoll", "_mbsncoll", "wcsncoll_l", "strncoll_l", "_ftcsncoll", "_strncoll", "_tcsncoll", "mbsncoll"]
helpviewer_keywords: ["_strncoll_l function", "code pages, using for string comparisons", "_strncoll function", "_mbsncoll function", "ftcsncoll function", "strncoll function", "_ftcsncoll function", "strncoll_l function", "wcsncoll function", "mbsncoll function", "_tcsncoll function", "_tcsnccoll function", "wcsncoll_l function", "tcsnccoll function", "mbsncoll_l function", "_mbsncoll_l function", "tcsncoll function", "_wcsncoll function", "strings [C++], comparing by code page", "_ftcsnccoll function", "ftcsnccoll function", "_wcsncoll_l function"]
ms.assetid: e659a5a4-8afe-4033-8e72-17ffd4bdd8e9
---
# _strncoll, _wcsncoll, _mbsncoll, _strncoll_l, _wcsncoll_l, _mbsncoll_l

Compares strings by using locale-specific information.

> [!IMPORTANT]
> **_mbsncoll** and **_mbsncoll_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _strncoll(
   const char *string1,
   const char *string2,
   size_t count
);
int _wcsncoll(
   const wchar_t *string1,
   const wchar_t *string2,
   size_t count
);
int _mbsncoll(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _strncoll_l(
   const char *string1,
   const char *string2,
   size_t count,
   _locale_t locale
);
int _wcsncoll_l(
   const wchar_t *string1,
   const wchar_t *string2,
   size_t count,
   _locale_t locale
);
int _mbsncoll_l(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count,
   _locale_t locale
);
```

### Parameters

*string1*, *string2*<br/>
Null-terminated strings to compare.

*count*<br/>
The number of characters to compare.

*locale*<br/>
The locale to use.

## Return Value

Each of these functions returns a value that indicates the relationship of the substrings of *string1* and *string2*, as follows.

|Return value|Relationship of string1 to string2|
|------------------|----------------------------------------|
|< 0|*string1* is less than *string2*.|
|0|*string1* is identical to *string2*.|
|> 0|*string1* is greater than *string2*.|

Each of these functions returns **_NLSCMPERROR**. To use **_NLSCMPERROR**, include either STRING.h or MBSTRING.h. **_wcsncoll** can fail if either *string1* or *string2* contains wide-character codes that are outside the domain of the collating sequence. When an error occurs, **_wcsncoll** may set **errno** to **EINVAL**. To check for an error on a call to **_wcsncoll**, set **errno** to 0 and then check **errno** after you call **_wcsncoll**.

## Remarks

Each of these functions performs a case-sensitive comparison of the first *count* characters in *string1* and *string2*, according to the code page that's currently in use. Use these functions only when there is a difference between the character set order and the lexicographic character order in the code page, and when this difference is of interest for the string comparison. The character set order is locale-dependent. The versions of these functions that don't have the **_l** suffix use the current locale, but the versions that have the **_l** suffix use the locale that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

All of these functions validate their parameters. If either *string1* or *string2* is a null pointer, or *count* is greater than **INT_MAX**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **_NLSCMPERROR** and set **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsnccoll**|**_strncoll**|**_mbsncoll**|**_wcsncoll**|
|**_tcsncoll**|**_strncoll**|[_mbsnbcoll](mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)|**_wcsncoll**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strncoll**, **_strncoll_l**|\<string.h>|
|**_wcsncoll**, **_wcsncoll_l**|\<wchar.h> or \<string.h>|
|**_mbsncoll**, **_mbsncoll_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Locale](../../c-runtime-library/locale.md)<br/>
[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[strcoll Functions](../../c-runtime-library/strcoll-functions.md)<br/>
[localeconv](localeconv.md)<br/>
[_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l](mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
