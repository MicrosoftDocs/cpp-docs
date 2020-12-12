---
description: "Learn more about: _strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l"
title: "_strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l"
ms.date: "4/2/2020"
api_name: ["_mbsnicoll_l", "_mbsnicoll", "_wcsnicoll_l", "_strnicoll", "_strnicoll_l", "_wcsnicoll", "_o__mbsnicoll", "_o__mbsnicoll_l", "_o__strnicoll", "_o__strnicoll_l", "_o__wcsnicoll", "_o__wcsnicoll_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wcshicoll_l", "_ftcsncicoll", "strnicoll_l", "_wcsnicoll", "mbsnicoll_l", "_strnicoll", "mbsnicoll", "_ftcsnicoll", "wcsnicoll", "_tcsnicoll", "_mbsnicoll", "strinicoll", "_tcsncicoll"]
helpviewer_keywords: ["code pages, using for string comparisons", "ftcsncicoll function", "mbsnicoll_l function", "_ftcsnicoll function", "mbsnicoll function", "_tcsnicoll function", "_wcsnicoll_l function", "_mbsnicoll function", "tcsncicoll function", "strnicoll function", "_ftcsncicoll function", "wcsnicoll_l function", "_mbsnicoll_l function", "_tcsncicoll function", "strnicoll_l function", "wcsnicoll function", "_strnicoll_l function", "_wcsnicoll function", "ftcsnicoll function", "strings [C++], comparing by code page", "tcsnicoll function", "_strnicoll function"]
ms.assetid: abf0c569-725b-428d-9ff2-924f430104b4
---
# _strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l

Compares strings by using locale-specific information.

> [!IMPORTANT]
> **_mbsnicoll** and **_mbsnicoll_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _strnicoll(
   const char *string1,
   const char *string2,
   size_t count
);
int _wcsnicoll(
   const wchar_t *string1,
   const wchar_t *string2 ,
   size_t count
);
int _mbsnicoll(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _strnicoll_l(
   const char *string1,
   const char *string2,
   size_t count,
   _locale_t locale
);
int _wcsnicoll_l(
   const wchar_t *string1,
   const wchar_t *string2 ,
   size_t count,
   _locale_t locale
);
int _mbsnicoll_l(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count,
   _locale_t locale
);
```

### Parameters

*string1*, *string2*<br/>
Null-terminated strings to compare

*count*<br/>
Number of characters to compare

*locale*<br/>
The locale to use.

## Return Value

Each of these functions returns a value indicating the relationship of the substrings of *string1* and *string2*, as follows.

|Return value|Relationship of string1 to string2|
|------------------|----------------------------------------|
|< 0|*string1* less than *string2*|
|0|*string1* identical to *string2*|
|> 0|*string1* greater than *string2*|

Each of these functions returns **_NLSCMPERROR**. To use **_NLSCMPERROR**, include either STRING.H or MBSTRING.H. **_wcsnicoll** can fail if either *string1* or *string2* contains wide-character codes outside the domain of the collating sequence. When an error occurs, **_wcsnicoll** may set **errno** to **EINVAL**. To check for an error on a call to **_wcsnicoll**, set **errno** to 0 and then check **errno** after calling **_wcsnicoll**.

## Remarks

Each of these functions performs a case-insensitive comparison of the first *count* characters in *string1* and *string2* according to the code page. These functions should be used only when there is a difference between the character set order and the lexicographic character order in the code page and this difference is of interest for the string comparison. The versions of these functions without the **_l** suffix use the current locale and code page. The versions with the **_l** suffix are identical except that they use the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

All of these functions validate their parameters. If either *string1* or *string2* is a null pointer, or if count is greater than **INT_MAX**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, these functions return **_NLSCMPERROR** and set **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsncicoll**|**_strnicoll**|**_mbsnbicoll**|**_wcsnicoll**|
|**_tcsnicoll**|**_strnicoll**|[_mbsnbicoll](mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)|**_wcsnicoll**|
|**_tcsnicoll_l**|**_strnicoll_l**|**_mbsnbicoll_l**|**_wcsnicoll_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strnicoll**, **_strnicoll_l**|\<string.h>|
|**_wcsnicoll**, **_wcsnicoll_l**|\<wchar.h> or \<string.h>|
|**_mbsnicoll**, **_mbsnicoll_l**|\<mbstring.h>|

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
