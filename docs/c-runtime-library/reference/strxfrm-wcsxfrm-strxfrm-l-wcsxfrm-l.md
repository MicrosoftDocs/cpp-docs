---
description: "Learn more about: strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l"
title: "strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l"
ms.date: "4/2/2020"
api_name: ["strxfrm", "_wcsxfrm_l", "_strxfrm_l", "wcsxfrm", "_o__strxfrm_l", "_o__wcsxfrm_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["strxfrm", "_tcsxfrm", "wcsxfrm"]
helpviewer_keywords: ["strxfrm_l function", "_tcsxfrm function", "_strxfrm_l function", "strxfrm function", "wcsxfrm_l function", "wcsxfrm function", "string comparison [C++], transforming strings", "tcsxfrm function", "strings [C++], comparing locale", "_wcsxfrm_l function"]
ms.assetid: 6ba8e1f6-4484-49aa-83b8-bc2373187d9e
---
# strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l

Transform a string based on locale-specific information.

## Syntax

```C
size_t strxfrm(
   char *strDest,
   const char *strSource,
   size_t count
);
size_t wcsxfrm(
   wchar_t *strDest,
   const wchar_t *strSource,
   size_t count
);
size_t _strxfrm_l(
   char *strDest,
   const char *strSource,
   size_t count,
   _locale_t locale
);
size_t wcsxfrm_l(
   wchar_t *strDest,
   const wchar_t *strSource,
   size_t count,
   _locale_t locale
);
```

### Parameters

*strDest*<br/>
Destination string.

*strSource*<br/>
Source string.

*count*<br/>
Maximum number of characters to place in *strDest*.

*locale*<br/>
The locale to use.

## Return Value

Returns the length of the transformed string, not counting the terminating null character. If the return value is greater than or equal to *count*, the content of *strDest* is unpredictable. On an error, each function sets **errno** and returns **INT_MAX**. For an invalid character, **errno** is set to **EILSEQ**.

## Remarks

The **strxfrm** function transforms the string pointed to by *strSource* into a new collated form that is stored in *strDest*. No more than *count* characters, including the null character, are transformed and placed into the resulting string. The transformation is made using the locale's **LC_COLLATE** category setting. For more information on **LC_COLLATE**, see [setlocale](setlocale-wsetlocale.md). **strxfrm** uses the current locale for its locale-dependent behavior; **_strxfrm_l** is identical except that it uses the locale passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).

After the transformation, a call to **strcmp** with the two transformed strings yields results identical to those of a call to **strcoll** applied to the original two strings. As with **strcoll** and **stricoll**, **strxfrm** automatically handles multibyte-character strings as appropriate.

**wcsxfrm** is a wide-character version of **strxfrm**; the string arguments of **wcsxfrm** are wide-character pointers. For **wcsxfrm**, after the string transformation, a call to **wcscmp** with the two transformed strings yields results identical to those of a call to **wcscoll** applied to the original two strings. **wcsxfrm** and **strxfrm** behave identically otherwise. **wcsxfrm** uses the current locale for its locale-dependent behavior; **_wcsxfrm_l** uses the locale passed in instead of the current locale.

These functions validate their parameters. If *strSource* is a null pointer, or *strDest* is a **NULL** pointer (unless count is zero), or if *count* is greater than **INT_MAX**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, these functions set **errno** to **EINVAL** and return **INT_MAX**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsxfrm**|**strxfrm**|**strxfrm**|**wcsxfrm**|
|**_tcsxfrm_l**|**_strxfrm_l**|**_strxfrm_l**|**_wcsxfrm_l**|

In the "C" locale, the order of the characters in the character set (ASCII character set) is the same as the lexicographic order of the characters. However, in other locales, the order of characters in the character set may differ from the lexicographic character order. For example, in certain European locales, the character 'a' (value 0x61) precedes the character '&\#x00E4;' (value 0xE4) in the character set, but the character 'ä' precedes the character 'a' lexicographically.

In locales for which the character set and the lexicographic character order differ, use **strxfrm** on the original strings and then **strcmp** on the resulting strings to produce a lexicographic string comparison according to the current locale's **LC_COLLATE** category setting. Thus, to compare two strings lexicographically in the above locale, use **strxfrm** on the original strings, then **strcmp** on the resulting strings. Alternately, you can use **strcoll** rather than **strcmp** on the original strings.

**strxfrm** is basically a wrapper around [LCMapString](/windows/win32/api/winnls/nf-winnls-lcmapstringw) with **LCMAP_SORTKEY**.

The value of the following expression is the size of the array needed to hold the **strxfrm** transformation of the source string:

`1 + strxfrm( NULL, string, 0 )`

In the "C" locale only, **strxfrm** is equivalent to the following:

```C
strncpy( _string1, _string2, _count );
return( strlen( _string1 ) );
```

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strxfrm**|\<string.h>|
|**wcsxfrm**|\<string.h> or \<wchar.h>|
|**_strxfrm_l**|\<string.h>|
|**_wcsxfrm_l**|\<string.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[strcoll Functions](../../c-runtime-library/strcoll-functions.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
