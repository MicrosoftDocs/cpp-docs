---
description: "Learn more about: _stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l"
title: "_stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l"
ms.date: "4/2/2020"
api_name: ["_mbsicoll_l", "_stricoll_l", "_mbsicoll", "_wcsicoll_l", "_wcsicoll", "_stricoll", "_o__mbsicoll", "_o__mbsicoll_l", "_o__stricoll", "_o__stricoll_l", "_o__wcsicoll", "_o__wcsicoll_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["stricoll", "_stricoll", "_wcsicoll", "mbsicoll_l", "_mbsicoll", "_ftcsicoll", "wcsicoll_l", "_tcsicoll", "mbsicoll", "stricoll_l"]
helpviewer_keywords: ["code pages, using for string comparisons", "_ftcsicoll function", "_mbsicoll_l function", "_mbsicoll function", "mbsicoll function", "stricoll function", "tcsicoll function", "string comparison [C++], culture-specific", "_tcsicoll function", "_stricoll function", "_stricoll_l function", "_wcsicoll function", "mbsicoll_l function", "stricoll_l function", "strings [C++], comparing by code page", "ftcsicoll function"]
ms.assetid: 8ec93016-5a49-49d2-930f-721566661d82
---
# _stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l

Compares strings by using locale-specific information.

> [!IMPORTANT]
> **_mbsicoll** and **_mbsicoll_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _stricoll(
   const char *string1,
   const char *string2
);
int _wcsicoll(
   const wchar_t *string1,
   const wchar_t *string2
);
int _mbsicoll(
   const unsigned char *string1,
   const unsigned char *string2
);
int _stricoll_l(
   const char *string1,
   const char *string2,
   _locale_t locale
);
int _wcsicoll_l(
   const wchar_t *string1,
   const wchar_t *string2,
   _locale_t locale
);
int _mbsicoll_l(
   const unsigned char *string1,
   const unsigned char *string2,
   _locale_t locale
);
```

### Parameters

*string1*, *string2*<br/>
Null-terminated strings to compare.

*locale*<br/>
The locale to use.

## Return Value

Each of these functions returns a value indicating the relationship of *string1* to *string2*, as follows.

|Return value|Relationship of string1 to string2|
|------------------|----------------------------------------|
|< 0|*string1* less than *string2*|
|0|*string1* identical to *string2*|
|> 0|*string1* greater than *string2*|
|**_NLSCMPERROR**|An error occurred.|

Each of these functions returns **_NLSCMPERROR**. To use **_NLSCMPERROR**, include either \<string.h> or \<mbstring.h>. **_wcsicoll** can fail if either *string1* or *string2* contains wide-character codes outside the domain of the collating sequence. When an error occurs, **_wcsicoll** may set **errno** to **EINVAL**. To check for an error on a call to **_wcsicoll**, set **errno** to 0 and then check **errno** after calling **_wcsicoll**.

## Remarks

Each of these functions performs a case-insensitive comparison of *string1* and *string2* according to the code page currently in use. These functions should be used only when there is a difference between the character set order and the lexicographic character order in the current code page and this difference is of interest for the string comparison.

**_stricmp** differs from **_stricoll** in that the **_stricmp** comparison is affected by **LC_CTYPE**, whereas the **_stricoll** comparison is according to the **LC_CTYPE** and **LC_COLLATE** categories of the locale. For more information on the **LC_COLLATE** category, see [setlocale](setlocale-wsetlocale.md) and [Locale Categories](../../c-runtime-library/locale-categories.md). The versions of these functions without the **_l** suffix use the current locale; the versions with the **_l** suffix are identical except that they use the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

All of these functions validate their parameters. If either *string1* or *string2* are **NULL** pointers, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **_NLSCMPERROR** and set **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsicoll**|**_stricoll**|**_mbsicoll**|**_wcsicoll**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_stricoll**, **_stricoll_l**|\<string.h>|
|**_wcsicoll**, **_wcsicoll_l**|\<wchar.h>, \<string.h>|
|**_mbsicoll**, **_mbsicoll_l**|\<mbstring.h>|

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
