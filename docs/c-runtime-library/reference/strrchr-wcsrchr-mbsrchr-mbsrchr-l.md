---
description: "Learn more about: strrchr, wcsrchr, _mbsrchr, _mbsrchr_l"
title: "strrchr, wcsrchr, _mbsrchr, _mbsrchr_l"
ms.date: "4/2/2020"
api_name: ["strrchr", "wcsrchr", "_mbsrchr", "_mbsrchr_l", "_o__mbsrchr", "_o__mbsrchr_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tcsrchr", "_ftcsrchr", "strrchr", "wcsrchr", "_mbsrchr"]
helpviewer_keywords: ["_mbsrchr function", "tcsrchr function", "mbsrchr_l function", "characters [C++], scanning for", "ftcsrchr function", "_tcsrchr function", "strings [C++], scanning", "mbsrchr function", "strrchr function", "scanning strings", "wcsrchr function", "_ftcsrchr function", "_mbsrchr_l function"]
ms.assetid: 75cf2664-758e-49bb-bf6b-8a139cd474d2
---
# strrchr, wcsrchr, _mbsrchr, _mbsrchr_l

Scans a string for the last occurrence of a character.

> [!IMPORTANT]
> `_mbsrchr` and `_mbsrchr_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *strrchr(
   const char *str,
   int c
); // C only
char *strrchr(
   char *str,
   int c
); // C++ only
const char *strrchr(
   const char *str,
   int c
); // C++ only
wchar_t *wcsrchr(
   const wchar_t *str,
   wchar_t c
); // C only
wchar_t *wcsrchr(
   wchar_t *str,
   wchar_t c
); // C++ only
const wchar_t *wcsrchr(
   const wchar_t *str,
   wchar_t c
); // C++ only
unsigned char *_mbsrchr(
   const unsigned char *str,
   unsigned int c
); // C only
unsigned char *_mbsrchr(
   unsigned char *str,
   unsigned int c
); // C++ only
const unsigned char *_mbsrchr(
   const unsigned char *str,
   unsigned int c
); // C++ only
unsigned char *_mbsrchr_l(
   const unsigned char *str,
   unsigned int c,
   _locale_t locale
); // C only
unsigned char *_mbsrchr_l(
   unsigned char *str,
   unsigned int c,
   _locale_t locale
); // C++ only
const unsigned char *_mbsrchr_l(
   const unsigned char *str,
   unsigned int c,
   _locale_t locale
); // C++ only
```

### Parameters

*str*<br/>
Null-terminated string to search.

*c*<br/>
Character to be located.

*locale*<br/>
Locale to use.

## Return Value

Returns a pointer to the last occurrence of *c* in *str*, or NULL if *c* is not found.

## Remarks

The `strrchr` function finds the last occurrence of *c* (converted to **`char`**) in *str*. The search includes the terminating null character.

`wcsrchr` and `_mbsrchr` are wide-character and multibyte-character versions of `strrchr`. The arguments and return value of `wcsrchr` are wide-character strings; those of `_mbsrchr` are multibyte-character strings.

In C, these functions take a **`const`** pointer for the first argument. In C++, two overloads are available. The overload taking a pointer to **`const`** returns a pointer to **`const`**; the version that takes a pointer to non-**`const`** returns a pointer to non-**`const`**. The macro _CRT_CONST_CORRECT_OVERLOADS is defined if both the **`const`** and non-**`const`** versions of these functions are available. If you require the non-**`const`** behavior for both C++ overloads, define the symbol _CONST_RETURN.

`_mbsrchr` validates its parameters. If *str* is NULL, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to EINVAL and `_mbsrchr` returns 0. `strrchr` and `wcsrchr` do not validate their parameters. These three functions behave identically otherwise.

The output value is affected by the setting of the LC_CTYPE category setting of the locale; for more information, see [setlocale](setlocale-wsetlocale.md). The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|`_tcsrchr`|`strrchr`|`_mbsrchr`|`wcsrchr`|
|**n/a**|**n/a**|`_mbsrchr_l`|**n/a**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`strrchr`|\<string.h>|
|`wcsrchr`|\<string.h> or \<wchar.h>|
|`_mbsrchr`, `_mbsrchr_l`|\<mbstring.h>|

For more information about compatibility, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

For an example of using `strrchr`, see [strchr](strchr-wcschr-mbschr-mbschr-l.md).

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strchr, wcschr, _mbschr, _mbschr_l](strchr-wcschr-mbschr-mbschr-l.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l](strpbrk-wcspbrk-mbspbrk-mbspbrk-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
