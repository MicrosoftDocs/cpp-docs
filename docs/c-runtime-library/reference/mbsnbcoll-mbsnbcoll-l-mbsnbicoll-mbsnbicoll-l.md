---
description: "Learn more about: _mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l"
title: "_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l"
ms.date: "4/2/2020"
api_name: ["_mbsnbicoll_l", "_mbsnbcoll_l", "_mbsnbcoll", "_mbsnbicoll", "_o__mbsnbcoll", "_o__mbsnbcoll_l", "_o__mbsnbicoll", "_o__mbsnbicoll_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbsnbcoll", "_mbsnbcoll_l", "_mbsnbicoll", "mbsnbcoll_l"]
helpviewer_keywords: ["_mbsnbcoll_l function", "mbsnbcoll_l function", "_mbsnbcoll function", "_tcsnicoll function", "mbsnbcoll function", "mbsnbicoll_l function", "mbsnbicoll function", "_tcsncoll function", "_mbsnbicoll function", "_mbsnbicoll_l function", "_tcsncoll_l function", "_tcsnicoll_l function"]
ms.assetid: d139ed63-ccba-4458-baa2-61cbcef03e94
---
# _mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l

Compares *n* bytes of two multibyte-character strings by using multibyte code-page information.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _mbsnbcoll(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _mbsnbcoll_l(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count,
   _locale_t locale
);
int _mbsnbicoll(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _mbsnbicoll_l(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count,
   _locale_t locale
);
```

### Parameters

*string1*, *string2*<br/>
Strings to compare.

*count*<br/>
Number of bytes to compare.

*locale*<br/>
Locale to use.

## Return Value

The return value indicates the relation of the substrings of *string1* and *string2*.

|Return value|Description|
|------------------|-----------------|
|< 0|*string1* substring less than *string2* substring.|
|0|*string1* substring identical to *string2* substring.|
|> 0|*string1* substring greater than *string2* substring.|

If *string1* or *string2* is **NULL** or *count* is greater than **INT_MAX**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **_NLSCMPERROR** and set **errno** to **EINVAL**. To use **_NLSCMPERROR**, include either String.h or Mbstring.h.

## Remarks

Each of these functions collates, at most, the first *count* bytes in *string1* and *string2* and returns a value indicating the relationship between the resulting substrings of *string1* and *string2*. If the final byte in the substring of *string1* or *string2* is a lead byte, it is not included in the comparison; these functions compare only complete characters in the substrings. **_mbsnbicoll** is a case-insensitive version of **_mbsnbcoll**. Like [_mbsnbcmp](mbsnbcmp-mbsnbcmp-l.md) and [_mbsnbicmp](mbsnbicmp-mbsnbicmp-l.md), **_mbsnbcoll** and **_mbsnbicoll** collate the two multibyte-character strings according to the lexicographic order specified by the multibyte [code page](../../c-runtime-library/code-pages.md) currently in use.

For some code pages and corresponding character sets, the order of characters in the character set might differ from the lexicographic character order. In the "C" locale, this is not the case: the order of characters in the ASCII character set is the same as the lexicographic order of the characters. However, in certain European code pages, for example, the character 'a' (value 0x61) precedes the character 'ä' (value 0xE4) in the character set, but the character 'ä' precedes the character 'a' lexicographically. To perform a lexicographic comparison of strings by bytes in such an instance, use **_mbsnbcoll** rather than **_mbsnbcmp**; to check only for string equality, use **_mbsnbcmp**.

Because the **coll** functions collate strings lexicographically for comparison, whereas the **cmp** functions simply test for string equality, the **coll** functions are much slower than the corresponding **cmp** versions. Therefore, the **coll** functions should be used only when there is a difference between the character set order and the lexicographic character order in the current code page and this difference is of interest for the comparison.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsncoll**|[_strncoll](strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|**_mbsnbcoll**|[_wcsncoll](strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|
|**_tcsncoll_l**|[_strncoll, _wcsncoll, _mbsncoll, _strncoll_l, _wcsncoll_l, _mbsncoll_l](strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|**_mbsnbcoll_l**|[_wcsncoll_l](strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|
|**_tcsnicoll**|[_strnicoll](strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|**_mbsnbicoll**|[_wcsnicoll](strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|
|**_tcsnicoll_l**|[_strnicoll_l](strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|**_mbsnbicoll_l**|[_wcsnicoll_l](strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsnbcoll**|\<mbstring.h>|
|**_mbsnbcoll_l**|\<mbstring.h>|
|**_mbsnbicoll**|\<mbstring.h>|
|**_mbsnbicoll_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_mbsnbicmp, _mbsnbicmp_l](mbsnbicmp-mbsnbicmp-l.md)<br/>
[strcoll Functions](../../c-runtime-library/strcoll-functions.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
