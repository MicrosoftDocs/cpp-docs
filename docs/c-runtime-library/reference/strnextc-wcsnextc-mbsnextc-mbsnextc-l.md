---
description: "Learn more about: _strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l"
title: "_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l"
ms.date: "4/2/2020"
api_name: ["_strnextc", "_mbsnextc_l", "_mbsnextc", "_wcsnextc", "_o__mbsnextc", "_o__mbsnextc_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["strnextc", "tcsnextc", "_mbsnextc_l", "_mbsnextc", "mbsnextc_l", "ftcsnextc", "mbsnextc", "_tcsnextc", "_wcsnextc", "_ftcsnextc", "_strnextc", "wcsnextc"]
helpviewer_keywords: ["_mbsnextc function", "_tcsnextc function", "_wcsnextc function", "tcsnextc function", "strnextc function", "mbsnextc function", "_strnextc function", "_mbsnextc_l function", "mbsnextc_l function", "wcsnextc function"]
ms.assetid: e3086173-9eb5-4540-a23a-5d866bd05340
---
# _strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l

Finds the next character in a string.

> [!IMPORTANT]
> **_mbsnextc** and **_mbsnextc_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned int _strnextc(
   const char *str
);
unsigned int _wscnextc(
   const wchar_t *str
);
unsigned int _mbsnextc(
   const unsigned char *str
);
unsigned int _mbsnextc_l(
   const unsigned char *str,
   _locale_t locale
);
```

### Parameters

*str*<br/>
Source string.

*locale*<br/>
Locale to use.

## Return Value

Each of these functions returns the integer value of the next character in *str*.

## Remarks

The **_mbsnextc** function returns the integer value of the next multibyte character in *str*, without advancing the string pointer. **_mbsnextc** recognizes multibyte-character sequences according to the [multibyte code page](../../c-runtime-library/code-pages.md) currently in use.

If *str* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns 0.

**Security Note** This API incurs a potential threat brought about by a buffer overrun problem. Buffer overrun problems are a frequent method of system attack, resulting in an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsnextc**|**_strnextc**|**_mbsnextc**|**_wcsnextc**|

**_strnextc** and **_wcsnextc** are single-byte-character string and wide-character string versions of **_mbsnextc**. **_wcsnextc** returns the integer value of the next wide character in *str*; **_strnextc** returns the integer value of the next single-byte character in *str*. **_strnextc** and **_wcsnextc** are provided only for this mapping and should not be used otherwise. For more information, see [Using Generic-Text Mappings](../../c-runtime-library/using-generic-text-mappings.md) and [Generic-Text Mappings](../../c-runtime-library/generic-text-mappings.md).

**_mbsnextc_l** is identical except that it uses the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsnextc**|\<mbstring.h>|
|**_mbsnextc_l**|\<mbstring.h>|
|**_strnextc**|\<tchar.h>|
|**_wcsnextc**|\<tchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_strdec, _wcsdec, _mbsdec, _mbsdec_l](strdec-wcsdec-mbsdec-mbsdec-l.md)<br/>
[_strinc, _wcsinc, _mbsinc, _mbsinc_l](strinc-wcsinc-mbsinc-mbsinc-l.md)<br/>
[_strninc, _wcsninc, _mbsninc, _mbsninc_l](strninc-wcsninc-mbsninc-mbsninc-l.md)<br/>
