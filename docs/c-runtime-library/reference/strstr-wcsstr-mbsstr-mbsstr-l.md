---
description: "Learn more about: strstr, wcsstr, _mbsstr, _mbsstr_l"
title: "strstr, wcsstr, _mbsstr, _mbsstr_l"
ms.date: "4/2/2020"
api_name: ["_mbsstr", "wcsstr", "_mbsstr_l", "strstr", "_o__mbsstr", "_o__mbsstr_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fstrstr", "_ftcsstr", "strstr", "wcsstr", "_mbsstr", "_tcsstr"]
helpviewer_keywords: ["strings [C++], searching", "mbsstr function", "_ftcsstr function", "ftcsstr function", "fstrstr function", "_tcsstr function", "substrings, finding", "mbsstr_l function", "tcsstr function", "_mbsstr function", "wcsstr function", "_fstrstr function", "_mbsstr_l function", "strstr function"]
ms.assetid: 03d70c3f-2473-45cb-a5f8-b35beeb2748a
---
# strstr, wcsstr, _mbsstr, _mbsstr_l

Returns a pointer to the first occurrence of a search string in a string.

> [!IMPORTANT]
> `_mbsstr` and `_mbsstr_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *strstr(
   const char *str,
   const char *strSearch
); // C only
char *strstr(
   char *str,
   const char *strSearch
); // C++ only
const char *strstr(
   const char *str,
   const char *strSearch
); // C++ only
wchar_t *wcsstr(
   const wchar_t *str,
   const wchar_t *strSearch
); // C only
wchar_t *wcsstr(
   wchar_t *str,
   const wchar_t *strSearch
); // C++ only
const wchar_t *wcsstr(
   const wchar_t *str,
   const wchar_t *strSearch
); // C++ only
unsigned char *_mbsstr(
   const unsigned char *str,
   const unsigned char *strSearch
); // C only
unsigned char *_mbsstr(
   unsigned char *str,
   const unsigned char *strSearch
); // C++ only
const unsigned char *_mbsstr(
   const unsigned char *str,
   const unsigned char *strSearch
); // C++ only
unsigned char *_mbsstr_l(
   const unsigned char *str,
   const unsigned char *strSearch,
   _locale_t locale
); // C only
unsigned char *_mbsstr_l(
   unsigned char *str,
   const unsigned char *strSearch,
   _locale_t locale
); // C++ only
const unsigned char *_mbsstr_l(
   const unsigned char *str,
   const unsigned char *strSearch,
   _locale_t locale
); // C++ only
```

### Parameters

*str*<br/>
Null-terminated string to search.

*strSearch*<br/>
Null-terminated string to search for.

*locale*<br/>
Locale to use.

## Return Value

Returns a pointer to the first occurrence of *strSearch* in *str*, or NULL if *strSearch* does not appear in *str*. If *strSearch* points to a string of zero length, the function returns *str*.

## Remarks

The `strstr` function returns a pointer to the first occurrence of *strSearch* in *str*. The search does not include terminating null characters. `wcsstr` is the wide-character version of `strstr` and `_mbsstr` is the multibyte-character version. The arguments and return value of `wcsstr` are wide-character strings; those of `_mbsstr` are multibyte-character strings. `_mbsstr` validates its parameters. If *str* or *strSearch* is NULL, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, `_mbsstr` sets `errno` to EINVAL and returns 0. `strstr` and `wcsstr` do not validate their parameters. These three functions behave identically otherwise.

> [!IMPORTANT]
> These functions might incur a threat from a buffer overrun problem. Buffer overrun problems can be used to attack a system because they can allow the execution of arbitrary code, which can cause an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

In C, these functions take a **`const`** pointer for the first argument. In C++, two overloads are available. The overload that takes a pointer to **`const`** returns a pointer to **`const`**; the version that takes a pointer to non-**`const`** returns a pointer to non-**`const`**. The macro _CRT_CONST_CORRECT_OVERLOADS is defined if both the **`const`** and non-**`const`** versions of these functions are available. If you require the non-**`const`** behavior for both C++ overloads, define the symbol _CONST_RETURN.

The output value is affected by the locale-category setting of LC_CTYPE; for more information, see [setlocale, _wsetlocale](setlocale-wsetlocale.md). The versions of these functions that do not have the **_l** suffix use the current locale for this locale-dependent behavior; the versions that have the **_l** suffix are identical except that they instead use the locale parameter that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|`_tcsstr`|`strstr`|`_mbsstr`|`wcsstr`|
|**n/a**|**n/a**|`_mbsstr_l`|**n/a**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`strstr`|\<string.h>|
|`wcsstr`|\<string.h> or \<wchar.h>|
|`_mbsstr`, `_mbsstr_l`|\<mbstring.h>|

For more information about compatibility, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strstr.c

#include <string.h>
#include <stdio.h>

char str[] =    "lazy";
char string[] = "The quick brown dog jumps over the lazy fox";
char fmt1[] =   "         1         2         3         4         5";
char fmt2[] =   "12345678901234567890123456789012345678901234567890";

int main( void )
{
   char *pdest;
   int  result;
   printf( "String to be searched:\n   %s\n", string );
   printf( "   %s\n   %s\n\n", fmt1, fmt2 );
   pdest = strstr( string, str );
   result = (int)(pdest - string + 1);
   if ( pdest != NULL )
      printf( "%s found at position %d\n", str, result );
   else
      printf( "%s not found\n", str );
}
```

```Output
String to be searched:
   The quick brown dog jumps over the lazy fox
            1         2         3         4         5
   12345678901234567890123456789012345678901234567890

lazy found at position 36
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l](strpbrk-wcspbrk-mbspbrk-mbspbrk-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
[basic_string::find](../../standard-library/basic-string-class.md#find)<br/>
