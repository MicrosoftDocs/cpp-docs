---
description: "Learn more about: strspn, wcsspn, _mbsspn, _mbsspn_l"
title: "strspn, wcsspn, _mbsspn, _mbsspn_l"
ms.date: "4/2/2020"
api_name: ["_mbsspn_l", "wcsspn", "strspn", "_mbsspn", "_o__mbsspn", "_o__mbsspn_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ftcsspn", "wcsspn", "_mbsspn", "_tcsspn", "strspn"]
helpviewer_keywords: ["wcsspn function", "strings [C++], searching", "mbsspn function", "tcsspn function", "strspn function", "substrings, finding", "_mbsspn_l function", "ftcsspn function", "_mbsspn function", "_ftcsspn function", "mbsspn_l function", "_tcsspn function"]
ms.assetid: d077284a-809f-4068-959e-c6d6262677eb
---
# strspn, wcsspn, _mbsspn, _mbsspn_l

Returns the index of the first character, in a string, that does not belong to a set of characters.

> [!IMPORTANT]
> **_mbsspn** and **_mbsspn_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
size_t strspn(
   const char *str,
   const char *strCharSet
);
size_t wcsspn(
   const wchar_t *str,
   const wchar_t *strCharSet
);
size_t _mbsspn(
   const unsigned char *str,
   const unsigned char *strCharSet
);
size_t _mbsspn_l(
   const unsigned char *str,
   const unsigned char *strCharSet,
   _locale_t locale
);
```

### Parameters

*str*<br/>
Null-terminated string to search.

*strCharSet*<br/>
Null-terminated character set.

*locale*<br/>
Locale to use.

## Return Value

Returns an integer value specifying the length of the substring in *str* that consists entirely of characters in *strCharSet*. If *str* begins with a character not in *strCharSet*, the function returns 0.

## Remarks

The **strspn** function returns the index of the first character in *str* that does not belong to the set of characters in *strCharSet*. The search does not include terminating null characters.

**wcsspn** and **_mbsspn** are wide-character and multibyte-character versions of **strspn**. The arguments of **wcsspn** are wide-character strings; those of **_mbsspn** are multibyte-character strings. **_mbsspn** validates its parameters. If *str* or *strCharSet* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, **_mbspn** sets **errno** to **EINVAL** and returns 0. **strspn** and **wcsspn** do not validate their parameters. These three functions behave identically otherwise.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsspn**|**strspn**|**_mbsspn**|**wcsspn**|
|**n/a**|**n/a**|**_mbsspn_l**|**n/a**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strspn**|\<string.h>|
|**wcsspn**|\<string.h> or \<wchar.h>|
|**_mbsspn**, **_mbsspn_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strspn.c
// This program uses strspn to determine
// the length of the segment in the string "cabbage"
// consisting of a's, b's, and c's. In other words,
// it finds the first non-abc letter.
//

#include <string.h>
#include <stdio.h>

int main( void )
{
   char string[] = "cabbage";
   int  result;
   result = strspn( string, "abc" );
   printf( "The portion of '%s' containing only a, b, or c "
           "is %d bytes long\n", string, result );
}
```

```Output
The portion of 'cabbage' containing only a, b, or c is 5 bytes long
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_strspnp, _wcsspnp, _mbsspnp, _mbsspnp_l](strspnp-wcsspnp-mbsspnp-mbsspnp-l.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
