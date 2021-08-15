---
description: "Learn more about: _strninc, _wcsninc, _mbsninc, _mbsninc_l"
title: "_strninc, _wcsninc, _mbsninc, _mbsninc_l"
ms.date: "4/2/2020"
api_name: ["_mbsninc", "_mbsninc_l", "_wcsninc", "_strninc", "_o__mbsninc", "_o__mbsninc_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["strninc", "wcsninc", "mbsninc_l", "_strninc", "_tcsninc", "mbsninc", "_mbsninc_l", "_ftcsninc", "_wcsninc", "_mbsninc"]
helpviewer_keywords: ["_mbsninc_l function", "mbsninc function", "_strninc function", "tcsninc function", "wcsninc function", "_mbsninc function", "strninc function", "_wcsninc function", "mbsninc_l function", "_tcsninc function"]
ms.assetid: 6caace64-f9e4-48c0-afa8-ea51824ad723
---
# _strninc, _wcsninc, _mbsninc, _mbsninc_l

Advances a string pointer by **n** characters.

> [!IMPORTANT]
> **_mbsninc** and **_mbsninc_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *_strninc(
   const char *str,
   size_t count
);
wchar_t *_wcsninc(
   const wchar_t *str,
   size_t count
);
unsigned char *_mbsninc(
   const unsigned char *str,
   size_t count
);
unsigned char *_mbsninc(
   const unsigned char *str,
   size_t count,
   _locale_t locale
);
```

### Parameters

*str*<br/>
Source string.

*count*<br/>
Number of characters to increment a string pointer.

*locale*<br/>
Locale to use.

## Return Value

Each of these routines returns a pointer to *str* after *str* has been incremented by *count* characters or **NULL** if the supplied pointer is **NULL**. If *count* is greater than or equal to the number of characters in *str*, the result is undefined.

## Remarks

The **_mbsninc** function increments *str* by *count* multibyte characters. **_mbsninc** recognizes multibyte-character sequences according to the [multibyte code page](../../c-runtime-library/code-pages.md) currently in use.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsninc**|**_strninc**|**_mbsninc**|**_wcsninc**|

**_strninc** and **_wcsninc** are single-byte-character string and wide-character string versions of **_mbsninc**. **_wcsninc** and **_strninc** are provided only for this mapping and should not be used otherwise. For more information, see [Using Generic-Text Mappings](../../c-runtime-library/using-generic-text-mappings.md) and [Generic-Text Mappings](../../c-runtime-library/generic-text-mappings.md).

**_mbsninc_l** is identical except that it uses the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsninc**|\<mbstring.h>|
|**_mbsninc_l**|\<mbstring.h>|
|**_strninc**|\<tchar.h>|
|**_wcsninc**|\<tchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_strdec, _wcsdec, _mbsdec, _mbsdec_l](strdec-wcsdec-mbsdec-mbsdec-l.md)<br/>
[_strinc, _wcsinc, _mbsinc, _mbsinc_l](strinc-wcsinc-mbsinc-mbsinc-l.md)<br/>
[_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l](strnextc-wcsnextc-mbsnextc-mbsnextc-l.md)<br/>
