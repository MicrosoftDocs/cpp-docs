---
description: "Learn more about: _mbsnbcmp, _mbsnbcmp_l"
title: "_mbsnbcmp, _mbsnbcmp_l"
ms.date: "4/2/2020"
api_name: ["_mbsnbcmp", "_mbsnbcmp_l", "_o__mbsnbcmp", "_o__mbsnbcmp_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsnbcmp", "tcsnbmp", "_mbsnbcmp_l", "mbsnbcmp_l", "_mbsnbcmp"]
helpviewer_keywords: ["mbsnbcmp_l function", "mbsnbcmp function", "tcsncmp function", "_mbsnbcmp_l function", "_tcsncmp function", "_mbsnbcmp function"]
ms.assetid: dbc99e50-cf85-4e57-a13f-067591f18ac8
---
# _mbsnbcmp, _mbsnbcmp_l

Compares the first **n** bytes of two multibyte-character strings.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _mbsnbcmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _mbsnbcmp_l(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count,
   _locale_t locale
);
```

### Parameters

*string1*, *string2*<br/>
The strings to compare.

*count*<br/>
The number of bytes to compare.

*locale*<br/>
The locale to use.

## Return Value

The return value indicates the ordinal relationship between the substrings of *string1* and *string2*.

|Return value|Description|
|------------------|-----------------|
|< 0|*string1* substring is less than *string2* substring.|
|0|*string1* substring is identical to *string2* substring.|
|> 0|*string1* substring is greater than *string2* substring.|

On a parameter validation error, **_mbsnbcmp** and **_mbsnbcmp_l** return **_NLSCMPERROR**, which is defined in \<string.h> and \<mbstring.h>.

## Remarks

The **_mbsnbcmp** functions compare at most the first *count* bytes in *string1* and *string2* and return a value that indicates the relationship between the substrings. **_mbsnbcmp** is a case-sensitive version of **_mbsnbicmp**. Unlike **_mbsnbcoll**, **_mbsnbcmp** is not affected by the collation order of the locale. **_mbsnbcmp** recognizes multibyte-character sequences according to the current multibyte [code page](../../c-runtime-library/code-pages.md).

**_mbsnbcmp** resembles **_mbsncmp**, except that **_mbsncmp** compares strings by characters rather than by bytes.

The output value is affected by the **LC_CTYPE** category setting of the locale, which specifies the lead bytes and trailing bytes of multibyte characters. For more information, see [setlocale](setlocale-wsetlocale.md). The **_mbsnbcmp** function uses the current locale for this locale-dependent behavior. The **_mbsnbcmp_l** function is identical except that it uses the *locale* parameter instead. For more information, see [Locale](../../c-runtime-library/locale.md).

If either *string1* or *string2* is a null pointer, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return **_NLSCMPERROR** and **errno** is set to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and  _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|---------------------------------------|--------------------|-----------------------|
|**_tcsncmp**|[strncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|**_mbsnbcmp**|[wcsncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|
|**_tcsncmp_l**|[strncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|**_mbsnbcml**|[wcsncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsnbcmp**|\<mbstring.h>|
|**_mbsnbcmp_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_mbsnbcmp.c
#include <mbstring.h>
#include <stdio.h>

char string1[] = "The quick brown dog jumps over the lazy fox";
char string2[] = "The QUICK brown fox jumps over the lazy dog";

int main( void )
{
   char tmp[20];
   int result;
   printf( "Compare strings:\n          %s\n", string1 );
   printf( "          %s\n\n", string2 );
   printf( "Function: _mbsnbcmp (first 10 characters only)\n" );
   result = _mbsncmp( string1, string2 , 10 );
   if( result > 0 )
      _mbscpy_s( tmp, sizeof(tmp), "greater than" );
   else if( result < 0 )
      _mbscpy_s( tmp, sizeof(tmp), "less than" );
   else
      _mbscpy_s( tmp, sizeof(tmp), "equal to" );
   printf( "Result:   String 1 is %s string 2\n\n", tmp );
   printf( "Function: _mbsnicmp _mbsnicmp (first 10 characters only)\n" );
   result = _mbsnicmp( string1, string2, 10 );
   if( result > 0 )
      _mbscpy_s( tmp, sizeof(tmp), "greater than" );
   else if( result < 0 )
      _mbscpy_s( tmp, sizeof(tmp), "less than" );
   else
      _mbscpy_s( tmp, sizeof(tmp), "equal to" );
   printf( "Result:   String 1 is %s string 2\n\n", tmp );
}
```

### Output

```Output
Compare strings:
          The quick brown dog jumps over the lazy fox
          The QUICK brown fox jumps over the lazy dog

Function: _mbsnbcmp (first 10 characters only)
Result:   String 1 is greater than string 2

Function: _mbsnicmp _mbsnicmp (first 10 characters only)
Result:   String 1 is equal to string 2
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_mbsnbicmp, _mbsnbicmp_l](mbsnbicmp-mbsnbicmp-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
