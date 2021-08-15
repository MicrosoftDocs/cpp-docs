---
description: "Learn more about: mbtowc, _mbtowc_l"
title: "mbtowc, _mbtowc_l"
ms.date: "4/2/2020"
api_name: ["mbtowc", "_mbtowc_l", "_o__mbtowc_l", "_o_mbtowc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbtowc"]
helpviewer_keywords: ["mbtowc function", "_mbtowc_l function", "mbtowc_l function"]
ms.assetid: dfd1c8a7-e73a-4307-9353-53b70b45d4d1
---
# mbtowc, _mbtowc_l

Convert a multibyte character to a corresponding wide character.

## Syntax

```C
int mbtowc(
   wchar_t *wchar,
   const char *mbchar,
   size_t count
);
int _mbtowc_l(
   wchar_t *wchar,
   const char *mbchar,
   size_t count,
   _locale_t locale
);
```

### Parameters

*wchar*<br/>
Address of a wide character (type **`wchar_t`**).

*mbchar*<br/>
Address of a sequence of bytes (a multibyte character).

*count*<br/>
Number of bytes to check.

*locale*<br/>
The locale to use.

## Return Value

If **mbchar** is not **NULL** and if the object that *mbchar* points to forms a valid multibyte character, **mbtowc** returns the length in bytes of the multibyte character. If *mbchar* is **NULL** or the object that it points to is a wide-character null character (L'\0'), the function returns 0. If the object that *mbchar* points to does not form a valid multibyte character within the first *count* characters, it returns -1.

## Remarks

The **mbtowc** function converts *count* or fewer bytes pointed to by *mbchar*, if *mbchar* is not **NULL**, to a corresponding wide character. **mbtowc** stores the resulting wide character at *wchar,* if *wchar* is not **NULL**. **mbtowc** does not examine more than **MB_CUR_MAX** bytes. **mbtowc** uses the current locale for locale-dependent behavior; **_mbtowc_l** is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**mbtowc**|\<stdlib.h>|
|**_mbtowc_l**|\<stdlib.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_mbtowc.c
// Illustrates the behavior of the mbtowc function

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
    int      i;
    char    *pmbc    = (char *)malloc( sizeof( char ) );
    wchar_t  wc      = L'a';
    wchar_t *pwcnull = NULL;
    wchar_t *pwc     = (wchar_t *)malloc( sizeof( wchar_t ) );
    printf( "Convert a wide character to multibyte character:\n" );
    wctomb_s( &i, pmbc, sizeof(char), wc );
    printf( "  Characters converted: %u\n", i );
    printf( "  Multibyte character: %x\n\n", *pmbc );

    printf( "Convert multibyte character back to a wide "
            "character:\n" );
    i = mbtowc( pwc, pmbc, MB_CUR_MAX );
    printf( "   Bytes converted: %u\n", i );
    printf( "   Wide character: %x\n\n", *pwc );
    printf( "Attempt to convert when target is NULL\n" );
    printf( "   returns the length of the multibyte character:\n" );
    i = mbtowc( pwcnull, pmbc, MB_CUR_MAX );
    printf( "   Length of multibyte character: %u\n\n", i );

    printf( "Attempt to convert a NULL pointer to a" );
    printf( " wide character:\n" );
    pmbc = NULL;
    i = mbtowc( pwc, pmbc, MB_CUR_MAX );
    printf( "   Bytes converted: %u\n", i );
}
```

```Output
Convert a wide character to multibyte character:
   Characters converted: 1
   Multibyte character: 61

Convert multibyte character back to a wide character:
   Bytes converted: 1
   Wide character: 61

Attempt to convert when target is NULL
   returns the length of the multibyte character:
   Length of multibyte character: 1

Attempt to convert a NULL pointer to a wide character:
   Bytes converted: 0
```

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
