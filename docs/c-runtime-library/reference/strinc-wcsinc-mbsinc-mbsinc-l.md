---
description: "Learn more about: _strinc, _wcsinc, _mbsinc, _mbsinc_l"
title: "_strinc, _wcsinc, _mbsinc, _mbsinc_l"
ms.date: "4/2/2020"
api_name: ["_mbsinc", "_wcsinc", "_mbsinc_l", "_strinc", "_o__mbsinc", "_o__mbsinc_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsinc_l", "_strinc", "strinc", "_mbsinc", "_wcsinc", "wcsinc", "mbsinc", "_mbsinc_l"]
helpviewer_keywords: ["_mbsinc function", "wcsinc function", "mbsinc_l function", "_strinc function", "strinc function", "_mbsinc_l function", "mbsinc function", "_wcsinc function", "_tcsinc function", "tcsinc function"]
ms.assetid: 54685943-8e2c-45e9-a559-2d94930dc6b4
---
# _strinc, _wcsinc, _mbsinc, _mbsinc_l

Advances a string pointer by one character.

> [!IMPORTANT]
> **_mbsinc** and **_mbsinc_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *_strinc(
   const char *current,
   _locale_t locale
);
wchar_t *_wcsinc(
   const wchar_t *current,
   _locale_t locale
);
unsigned char *_mbsinc(
   const unsigned char *current
);
unsigned char *_mbsinc_l(
   const unsigned char *current,
   _locale_t locale
);
```

### Parameters

*current*<br/>
Character pointer.

*locale*<br/>
Locale to use.

## Return Value

Each of these routines returns a pointer to the character that immediately follows *current*.

## Remarks

The **_mbsinc** function returns a pointer to the first byte of the multibyte character that immediately follows *current*. **_mbsinc** recognizes multibyte-character sequences according to the [multibyte code page](../../c-runtime-library/code-pages.md) that's currently in use; **_mbsinc_l** is identical except that it instead uses the locale parameter that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

The generic-text function **_tcsinc**, defined in Tchar.h, maps to **_mbsinc** if **_MBCS** has been defined, or to **_wcsinc** if **_UNICODE** has been defined. Otherwise, **_tcsinc** maps to **_strinc**. **_strinc** and **_wcsinc** are single-byte-character and wide-character versions of **_mbsinc**. **_strinc** and **_wcsinc** are provided only for this mapping and should not be used otherwise. For more information, see [Using Generic-Text Mappings](../../c-runtime-library/using-generic-text-mappings.md) and [Generic-Text Mappings](../../c-runtime-library/generic-text-mappings.md).

If *current* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns **EINVAL** and sets **errno** to **EINVAL**.

> [!IMPORTANT]
> These functions might be vulnerable to buffer overrun threats. Buffer overruns can be used for system attacks because they can cause an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsinc**|\<mbstring.h>|
|**_mbsinc_l**|\<mbstring.h>|
|**_strinc**|\<tchar.h>|
|**_wcsinc**|\<tchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_strdec, _wcsdec, _mbsdec, _mbsdec_l](strdec-wcsdec-mbsdec-mbsdec-l.md)<br/>
[_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l](strnextc-wcsnextc-mbsnextc-mbsnextc-l.md)<br/>
[_strninc, _wcsninc, _mbsninc, _mbsninc_l](strninc-wcsninc-mbsninc-mbsninc-l.md)<br/>
