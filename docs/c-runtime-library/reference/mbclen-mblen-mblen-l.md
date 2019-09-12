---
title: "_mbclen, mblen, _mblen_l, _mbclen_l"
ms.date: "01/22/2019"
api_name: ["_mbclen", "mblen", "_mblen_l", "_mbclen_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll"]
api_type: "DLLExport"
f1_keywords: ["mblen", "ftclen", "_mbclen", "_mbclen_l", "tclen", "_ftclen", "_tclen", "mbclen"]
helpviewer_keywords: ["tclen function", "_mblen_l function", "_tclen function", "mblen_l function", "_mbclen function", "_mbclen_l function", "mbclen function", "mblen function"]
ms.assetid: d5eb92a0-b7a3-464a-aaf7-9890a8e3ed70
---
# _mbclen, mblen, _mblen_l, _mbclen_l

Gets the length and determines the validity of a multibyte character.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
size_t _mbclen(
   const unsigned char *c
);
size_t _mbclen_l(
   unsigned char const* c,
   _locale_t locale
);
int mblen(
   const char *mbstr,
   size_t count
);
int _mblen_l(
   const char *mbstr,
   size_t count,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Multibyte character.

*mbstr*<br/>
Address of a multibyte-character byte sequence.

*count*<br/>
Number of bytes to check.

*locale*<br/>
Locale to use.

## Return Value

**_mbclen** returns 1 or 2, according to whether the multibyte character *c* is 1 or 2 bytes long. There is no error return for **_mbclen**. If *mbstr* isn't **NULL**, **mblen** returns the length, in bytes, of the multibyte character. If *mbstr* is **NULL** or it points to the wide-character null character, **mblen** returns 0. When the object that *mbstr* points to doesn't form a valid multibyte character within the first *count* characters, **mblen** returns -1.

## Remarks

The **_mbclen** function returns the length, in bytes, of the multibyte character *c*. If *c* doesn't point to the lead byte of a multibyte character as determined by an implicit call to **_ismbblead**, the result of **_mbclen** is unpredictable.

**mblen** returns the length in bytes of *mbstr* if it's a valid multibyte character and determines multibyte-character validity associated with the code page. **mblen** examines *count* or fewer bytes contained in *mbstr*, but not more than **MB_CUR_MAX** bytes.

The output value is affected by the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior. The **_l** suffixed versions behave the same, but they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tclen**|Maps to macro or inline function|**_mbclen**|Maps to macro or inline function|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbclen**|\<mbstring.h>|
|**mblen**|\<stdlib.h>|
|**_mblen_l**|\<stdlib.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_mblen.c
/* illustrates the behavior of the mblen function
*/

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
    int      i;
    char    *pmbc = (char *)malloc( sizeof( char ) );
    wchar_t  wc   = L'a';

    printf( "Convert wide character to multibyte character:\n" );
    wctomb_s( &i, pmbc, sizeof(char), wc );
    printf( "   Characters converted: %u\n", i );
    printf( "   Multibyte character: %x\n\n", *pmbc );

    i = mblen( pmbc, MB_CUR_MAX );
    printf( "Length in bytes of multibyte character %x: %u\n", *pmbc, i );

    pmbc = NULL;
    i = mblen( pmbc, MB_CUR_MAX );
    printf( "Length in bytes of NULL multibyte character %x: %u\n", pmbc, i );
}
```

```Output
Convert wide character to multibyte character:
   Characters converted: 1
   Multibyte character: 61

Length in bytes of multibyte character 61: 1
Length in bytes of NULL multibyte character 0: 0
```

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbccpy, _mbccpy_l](mbccpy-mbccpy-l.md)<br/>
[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)<br/>
