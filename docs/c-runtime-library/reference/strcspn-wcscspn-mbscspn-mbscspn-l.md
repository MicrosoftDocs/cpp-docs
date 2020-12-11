---
description: "Learn more about: strcspn, wcscspn, _mbscspn, _mbscspn_l"
title: "strcspn, wcscspn, _mbscspn, _mbscspn_l"
ms.date: "4/2/2020"
api_name: ["_mbscspn_l", "wcscspn", "_mbscspn", "strcspn", "_o__mbscspn", "_o__mbscspn_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["strcspn", "_mbscspn", "wcscspn", "_ftcscspn", "_tcscspn"]
helpviewer_keywords: ["strings [C++], searching", "ftcscspn function", "strcspn function", "_mbscspn function", "mbscspn_l function", "wcscspn function", "tcscspn function", "_ftcscspn function", "_mbscspn_l function", "mbscspn function", "_tcscspn function"]
ms.assetid: f73f51dd-b533-4e46-ba29-d05c553708a6
---
# strcspn, wcscspn, _mbscspn, _mbscspn_l

Returns the index of the first occurrence in a string, of a character that belongs to a set of characters.

> [!IMPORTANT]
> **_mbschr** and **_mbschr_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
size_t strcspn(
   const char *str,
   const char *strCharSet
);
size_t wcscspn(
   const wchar_t *str,
   const wchar_t *strCharSet
);
size_t _mbscspn(
   const unsigned char *str,
   const unsigned char *strCharSet
);
size_t _mbscspn_l(
   const unsigned char *str,
   const unsigned char *strCharSet,
   _locale_t locale
);
```

### Parameters

*str*<br/>
Null-terminated searched string.

*strCharSet*<br/>
Null-terminated character set.

*locale*<br/>
Locale to use.

## Return Value

These functions return the index of the first character in *str* that is in *strCharSet*. If none of the characters in *str* is in *strCharSet*, then the return value is the length of *str*.

No return value is reserved to indicate an error.

## Remarks

**wcscspn** and **_mbscspn** are wide-character and multibyte-character versions of **strcspn**. The arguments of **wcscspn** are wide-character strings; those of **_mbscspn** are multibyte-character strings.

**_mbscspn** validates its parameters. If either *str* or *strCharSet* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns 0 and sets **errno** to **EINVAL**. **strcspn** and **wcscspn** do not validate their parameters. These three functions behave identically otherwise.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcscspn**|**strcspn**|**_mbscspn**|**wcscspn**|
|n/a|n/a|**_mbscspn_l**|n/a|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strcspn**|\<string.h>|
|**wcscspn**|\<string.h> or \<wchar.h>|
|**_mbscspn**, **_mbscspn_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strcspn.c

#include <string.h>
#include <stdio.h>

void test( const char * str, const char * strCharSet )
{
   int pos = strcspn( str, strCharSet );
   printf( "strcspn( \"%s\", \"%s\" ) = %d\n", str, strCharSet, pos );
}

int main( void )
{
   test( "xyzbxz", "abc" );
   test( "xyzbxz", "xyz" );
   test( "xyzbxz", "no match" );
   test( "xyzbxz", "" );
   test( "", "abc" );
   test( "", "" );
}
```

```Output
strcspn( "xyzbxz", "abc" ) = 3
strcspn( "xyzbxz", "xyz" ) = 0
strcspn( "xyzbxz", "no match" ) = 6
strcspn( "xyzbxz", "" ) = 6
strcspn( "", "abc" ) = 0
strcspn( "", "" ) = 0
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
