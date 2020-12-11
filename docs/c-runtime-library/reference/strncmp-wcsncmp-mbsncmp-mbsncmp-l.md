---
description: "Learn more about: strncmp, wcsncmp, _mbsncmp, _mbsncmp_l"
title: "strncmp, wcsncmp, _mbsncmp, _mbsncmp_l"
ms.date: "4/2/2020"
api_name: ["strncmp", "_mbsncmp", "wcsncmp", "_mbsncmp_l", "_o__mbsncmp", "_o__mbsncmp_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ftcsnccmp", "_ftcsncmp", "_tcsncmp", "_tcsnccmp", "strncmp", "_mbsncmp", "wcsncmp"]
helpviewer_keywords: ["_tcsnccmp function", "ftcsncmp function", "wcsncmp function", "_ftcsncmp function", "_mbsncmp function", "tcsncmp function", "mbsncmp function", "_mbsncmp_l function", "mbsncmp_l function", "strncmp function", "strings [C++], comparing characters of", "string comparison [C++], strncmp function", "_tcsncmp function", "tcsnccmp function", "ftcsnccmp function", "characters [C++], comparing", "_ftcsnccmp function"]
ms.assetid: 2fdbf4e6-77da-4b59-9086-488f6066b8af
---
# strncmp, wcsncmp, _mbsncmp, _mbsncmp_l

Compares up to the specified count of characters of two strings.

> [!IMPORTANT]
> **_mbsncmp** and **_mbsncmp_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int strncmp(
   const char *string1,
   const char *string2,
   size_t count
);
int wcsncmp(
   const wchar_t *string1,
   const wchar_t *string2,
   size_t count
);
int _mbsncmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _mbsncmp_l(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count,
   _locale_t locale
);int _mbsnbcmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
```

### Parameters

*string1*, *string2*<br/>
Strings to compare.

*count*<br/>
Number of characters to compare.

*locale*<br/>
Locale to use.

## Return Value

The return value indicates the relation of the substrings of *string1* and *string2* as follows.

|Return value|Description|
|------------------|-----------------|
|< 0|*string1* substring less than *string2* substring|
|0|*string1* substring identical to *string2* substring|
|> 0|*string1* substring greater than *string2* substring|

On a parameter validation error, **_mbsncmp** and **_mbsncmp_l** return **_NLSCMPERROR**, which is defined in \<string.h> and \<mbstring.h>.

## Remarks

The **strncmp** function performs an ordinal comparison of at most the first *count* characters in *string1* and *string2* and returns a value indicating the relationship between the substrings. **strncmp** is a case-sensitive version of **_strnicmp**. **wcsncmp** and **_mbsncmp** are case-sensitive versions of **_wcsnicmp** and **_mbsnicmp**.

**wcsncmp** and **_mbsncmp** are wide-character and multibyte-character versions of **strncmp**. The arguments of **wcsncmp** are wide-character strings; those of **_mbsncmp** are multibyte-character strings. **_mbsncmp** recognizes multibyte-character sequences according to a multibyte code page and returns **_NLSCMPERROR** on an error.

Also, **_mbsncmp** and **_mbsncmp_l** validate parameters. If *string1* or *string2* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **_mbsncmp** and **_mbsncmp_l** return **_NLSCMPERROR** and set **errno** to **EINVAL**. **strncmp** and **wcsncmp** do not validate their parameters. These functions behave identically otherwise.

The comparison behavior of **_mbsncmp** and **_mbsncmp_l** is affected by the setting of the **LC_CTYPE** category setting of the locale. This controls detection of leading and trailing bytes of multibyte characters. For more information, see [setlocale](setlocale-wsetlocale.md). The **_mbsncmp** function uses the current locale for this locale-dependent behavior. The **_mbsncmp_l** function is identical except that it uses the *locale* parameter instead. For more information, see [Locale](../../c-runtime-library/locale.md). If the locale is a single-byte locale, the behavior of these functions is identical to **strncmp**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsnccmp**|**strncmp**|**_mbsncmp**|**wcsncmp**|
|**_tcsncmp**|**strncmp**|**_mbsnbcmp**|**wcsncmp**|
|**_tccmp**|Maps to macro or inline function|**_mbsncmp**|Maps to macro or inline function|
|**not applicable**|**not applicable**|**_mbsncmp_l**|**not applicable**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strncmp**|\<string.h>|
|**wcsncmp**|\<string.h> or \<wchar.h>|
|**_mbsncmp**, **_mbsncmp_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strncmp.c
#include <string.h>
#include <stdio.h>

char string1[] = "The quick brown dog jumps over the lazy fox";
char string2[] = "The QUICK brown fox jumps over the lazy dog";

int main( void )
{
   char tmp[20];
   int result;
   printf( "Compare strings:\n      %s\n      %s\n\n",
           string1, string2 );
   printf( "Function:   strncmp (first 10 characters only)\n" );
   result = strncmp( string1, string2 , 10 );
   if( result > 0 )
      strcpy_s( tmp, sizeof(tmp), "greater than" );
   else if( result < 0 )
      strcpy_s( tmp, sizeof(tmp), "less than" );
   else
      strcpy_s( tmp, sizeof(tmp), "equal to" );
   printf( "Result:      String 1 is %s string 2\n\n", tmp );
   printf( "Function:   strnicmp _strnicmp (first 10 characters only)\n" );
   result = _strnicmp( string1, string2, 10 );
   if( result > 0 )
      strcpy_s( tmp, sizeof(tmp), "greater than" );
   else if( result < 0 )
      strcpy_s( tmp, sizeof(tmp), "less than" );
   else
      strcpy_s( tmp, sizeof(tmp), "equal to" );
   printf( "Result:      String 1 is %s string 2\n", tmp );
}
```

```Output
Compare strings:
      The quick brown dog jumps over the lazy fox
      The QUICK brown fox jumps over the lazy dog

Function:   strncmp (first 10 characters only)
Result:      String 1 is greater than string 2

Function:   strnicmp _strnicmp (first 10 characters only)
Result:      String 1 is equal to string 2
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_mbsnbicmp, _mbsnbicmp_l](mbsnbicmp-mbsnbicmp-l.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcoll Functions](../../c-runtime-library/strcoll-functions.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
