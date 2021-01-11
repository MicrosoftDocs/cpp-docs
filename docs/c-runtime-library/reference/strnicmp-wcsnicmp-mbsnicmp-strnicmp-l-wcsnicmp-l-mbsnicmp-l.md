---
description: "Learn more about: _strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l"
title: "_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l"
ms.date: "4/2/2020"
api_name: ["_wcsnicmp", "_strnicmp_l", "_wcsnicmp_l", "_strnicmp", "_mbsnicmp", "_mbsnicmp_l", "_o__mbsnicmp", "_o__mbsnicmp_l", "_o__strnicmp", "_o__strnicmp_l", "_o__wcsnicmp", "_o__wcsnicmp_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wcsnicmp_l", "_strnicmp", "_ftcsnicmp", "mbsnicmp_l", "_ftcsncicmp", "mbsnicmp", "_tcsncicmp", "_mbsnicmp", "_tcsnicmp", "strnicmp_l", "_wcsnicmp", "_wcsnicmp_l", "CORECRT_WSTRING/_wcsnicmp", "CORECRT_WSTRING/_wcsnicmp_l", "string/_strnicmp", "string/_strnicmp_l"]
helpviewer_keywords: ["tcsnicmp function", "_tcsncicmp function", "_mbsnicmp_l function", "mbsnicmp_l function", "wcsnicmp_l function", "wcsnicmp function", "string comparison [C++], lowercase", "ftcsnicmp function", "strnicmp_l function", "strncmp function", "_strnicmp function", "strings [C++], comparing characters of", "_wcsnicmp_l function", "tcsncicmp function", "string comparison [C++], strncmp function", "_mbsnicmp function", "ftcsncicmp function", "_tcsnicmp function", "_ftcsncicmp function", "_strnicmp_l function", "_ftcsnicmp function", "characters [C++], comparing", "mbsnicmp function", "_wcsnicmp function"]
ms.assetid: df6e5037-4039-4c85-a0a6-21d4ef513966
---
# _strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l

Compares the specified number of characters of two strings without regard to case.

> [!IMPORTANT]
> **_mbsnicmp** and **_mbsnicmp_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _strnicmp(
   const char *string1,
   const char *string2,
   size_t count
);
int _wcsnicmp(
   const wchar_t *string1,
   const wchar_t *string2,
   size_t count
);
int _mbsnicmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _strnicmp_l(
   const char *string1,
   const char *string2,
   size_t count,
   _locale_t locale
);
int _wcsnicmp_l(
   const wchar_t *string1,
   const wchar_t *string2,
   size_t count,
   _locale_t locale
);
int _mbsnicmp_l(
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
Number of characters to compare.

*locale*<br/>
Locale to use.

## Return Value

Indicates the relationship between the substrings, as follows.

|Return value|Description|
|------------------|-----------------|
|< 0|*string1* substring is less than *string2* substring.|
|0|*string1* substring is identical to *string2* substring.|
|> 0|*string1* substring is greater than *string2* substring.|

On a parameter validation error, these functions return **_NLSCMPERROR**, which is defined in \<string.h> and \<mbstring.h>.

## Remarks

The **_strnicmp** function ordinally compares, at most, the first *count* characters of *string1* and *string2*. The comparison is performed without regard to case by converting each character to lowercase. **_strnicmp** is a case-insensitive version of **strncmp**. The comparison ends if a terminating null character is reached in either string before *count* characters are compared. If the strings are equal when a terminating null character is reached in either string before *count* characters are compared, the shorter string is lesser.

The characters from 91 to 96 in the ASCII table ('[', '\\', ']', '^', '_', and '\`') evaluate as less than any alphabetic character. This ordering is identical to that of **stricmp**.

**_wcsnicmp** and **_mbsnicmp** are wide-character and multibyte-character versions of **_strnicmp**. The arguments of **_wcsnicmp** are wide-character strings; those of **_mbsnicmp** are multibyte-character strings. **_mbsnicmp** recognizes multibyte-character sequences according to the current multibyte code page and returns **_NLSCMPERROR** on an error. For more information, see [Code Pages](../../c-runtime-library/code-pages.md). These three functions behave identically otherwise. These functions are affected by the locale setting—the versions that don't have the **_l** suffix use the current locale for their locale-dependent behavior; the versions that do have the **_l** suffix instead use the *locale* that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

All of these functions validate their parameters. If either *string1* or *string2* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **_NLSCMPERROR** and set **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsncicmp**|**_strnicmp**|**_mbsnicmp**|**_wcsnicmp**|
|**_tcsnicmp**|**_strnicmp**|**_mbsnbicmp**|**_wcsnicmp**|
|**_tcsncicmp_l**|**_strnicmp_l**|**_mbsnicmp_l**|**_wcsnicmp_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strnicmp**, **_strnicmp_l**|\<string.h>|
|**_wcsnicmp**, **_wcsnicmp_l**|\<string.h> or \<wchar.h>|
|**_mbsnicmp**, **_mbsnicmp_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [strncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md).

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
