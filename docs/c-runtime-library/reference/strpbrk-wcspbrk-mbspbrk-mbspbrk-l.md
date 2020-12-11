---
description: "Learn more about: strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l"
title: "strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l"
ms.date: "4/2/2020"
api_name: ["_mbspbrk", "wcspbrk", "_mbspbrk_l", "strpbrk", "_o__mbspbrk", "_o__mbspbrk_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fstrpbrk", "_mbspbrk", "strpbrk", "_tcspbrk", "_ftcspbrk", "wcspbrk"]
helpviewer_keywords: ["fstrpbrk function", "_ftcspbrk function", "_mbspbrk_l function", "strpbrk function", "_fstrpbrk function", "mbspbrk function", "characters [C++], scanning strings", "_tcspbrk function", "wcspbrk function", "ftcspbrk function", "character sets [C++], scanning strings for characters", "strings [C++], scanning", "tcspbrk function", "_mbspbrk function", "mbspbrk_l function"]
ms.assetid: 80b504f7-a167-4dde-97ad-4ae3000dc810
---
# strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l

Scans strings for characters in specified character sets.

> [!IMPORTANT]
> `_mbspbrk` and `_mbspbrk_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *strpbrk(
   const char *str,
   const char *strCharSet
); // C only
char *strpbrk(
   char *str,
   const char *strCharSet
); // C++ only
const char *strpbrk(
   const char *str,
   const char *strCharSet
); // C++ only
wchar_t *wcspbrk(
   const wchar_t *str,
   const wchar_t *strCharSet
); // C only
wchar_t *wcspbrk(
   wchar_t *str,
   const wchar_t *strCharSet
); // C++ only
const wchar_t *wcspbrk(
   const wchar_t *str,
   const wchar_t *strCharSet
); // C++ only
unsigned char *_mbspbrk(
   const unsigned char *str,
   const unsigned char *strCharSet
); // C only
unsigned char *_mbspbrk(
   unsigned char *str,
   const unsigned char *strCharSet
); // C++ only
const unsigned char *_mbspbrk(
   const unsigned char *str,
   const unsigned char *strCharSet
); // C++ only
unsigned char *_mbspbrk_l(
   const unsigned char *str,
   const unsigned char *strCharSet,
   _locale_t locale
); // C only
unsigned char *_mbspbrk_l(
   unsigned char *str,
   const unsigned char *strCharSet,
   _locale_t locale
); // C++ only
const unsigned char *_mbspbrk_l(
   const unsigned char *str,
   const unsigned char* strCharSet,
   _locale_t locale
); // C++ only
```

### Parameters

*str*<br/>
Null-terminated, searched string.

*strCharSet*<br/>
Null-terminated character set.

*locale*<br/>
Locale to use.

## Return Value

Returns a pointer to the first occurrence of any character from *strCharSet* in *str*, or a NULL pointer if the two string arguments have no characters in common.

## Remarks

The `strpbrk` function returns a pointer to the first occurrence of a character in *str* that belongs to the set of characters in *strCharSet*. The search does not include the terminating null character.

`wcspbrk` and `_mbspbrk` are wide-character and multibyte-character versions of `strpbrk`. The arguments and return value of `wcspbrk` are wide-character strings; those of `_mbspbrk` are multibyte-character strings.

`_mbspbrk` validates its parameters. If *str* or *strCharSet* is NULL, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `_mbspbrk` returns NULL and sets `errno` to EINVAL. `strpbrk` and `wcspbrk` do not validate their parameters. These three functions behave identically otherwise.

`_mbspbrk` is similar to `_mbscspn` except that `_mbspbrk` returns a pointer rather than a value of type [size_t](../../c-runtime-library/standard-types.md).

In C, these functions take a **`const`** pointer for the first argument. In C++, two overloads are available. The overload taking a pointer to **`const`** returns a pointer to **`const`**; the version that takes a pointer to non-**`const`** returns a pointer to non-**`const`**. The macro _CRT_CONST_CORRECT_OVERLOADS is defined if both the **`const`** and non-**`const`** versions of these functions are available. If you require the non-**`const`** behavior for both C++ overloads, define the symbol _CONST_RETURN.

The output value is affected by the setting of the LC_CTYPE category setting of the locale; for more information, see [setlocale](setlocale-wsetlocale.md). The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the version with the **_l** suffix is identical except that it uses the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|`_tcspbrk`|`strpbrk`|`_mbspbrk`|`wcspbrk`|
|**n/a**|**n/a**|`_mbspbrk_l`|**n/a**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`strpbrk`|\<string.h>|
|`wcspbrk`|\<string.h> or \<wchar.h>|
|`_mbspbrk`, `_mbspbrk_l`|\<mbstring.h>|

For more information about compatibility, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strpbrk.c

#include <string.h>
#include <stdio.h>

int main( void )
{
   char string[100] = "The 3 men and 2 boys ate 5 pigs\n";
   char *result = NULL;

   // Return pointer to first digit in "string".
   printf( "1: %s\n", string );
   result = strpbrk( string, "0123456789" );
   printf( "2: %s\n", result++ );
   result = strpbrk( result, "0123456789" );
   printf( "3: %s\n", result++ );
   result = strpbrk( result, "0123456789" );
   printf( "4: %s\n", result );
}
```

```Output
1: The 3 men and 2 boys ate 5 pigs

2: 3 men and 2 boys ate 5 pigs

3: 2 boys ate 5 pigs

4: 5 pigs
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strchr, wcschr, _mbschr, _mbschr_l](strchr-wcschr-mbschr-mbschr-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
