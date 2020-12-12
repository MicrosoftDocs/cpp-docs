---
description: "Learn more about: mbstowcs, _mbstowcs_l"
title: "mbstowcs, _mbstowcs_l"
ms.date: "4/2/2020"
api_name: ["mbstowcs", "_mbstowcs_l", "_o__mbstowcs_l", "_o_mbstowcs"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-convert-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbstowcs"]
helpviewer_keywords: ["_mbstowcs_l function", "mbstowcs_l function", "mbstowcs function"]
ms.assetid: 96696b27-e068-4eeb-8006-3f7a0546ae6d
---
# mbstowcs, _mbstowcs_l

Converts a sequence of multibyte characters to a corresponding sequence of wide characters. More secure versions of these functions are available; see [mbstowcs_s, _mbstowcs_s_l](mbstowcs-s-mbstowcs-s-l.md).

## Syntax

```C
size_t mbstowcs(
   wchar_t *wcstr,
   const char *mbstr,
   size_t count
);
size_t _mbstowcs_l(
   wchar_t *wcstr,
   const char *mbstr,
   size_t count,
   _locale_t locale
);
template <size_t size>
size_t mbstowcs(
   wchar_t (&wcstr)[size],
   const char *mbstr,
   size_t count
); // C++ only
template <size_t size>
size_t _mbstowcs_l(
   wchar_t (&wcstr)[size],
   const char *mbstr,
   size_t count,
   _locale_t locale
); // C++ only
```

### Parameters

*wcstr*<br/>
The address of a sequence of wide characters.

*mbstr*<br/>
The address of a sequence of null terminated multibyte characters.

*count*<br/>
The maximum number of multibyte characters to convert.

*locale*<br/>
The locale to use.

## Return Value

If **mbstowcs** successfully converts the source string, it returns the number of converted multibyte characters. If the *wcstr* argument is **NULL**, the function returns the required size (in wide characters) of the destination string. If **mbstowcs** encounters an invalid multibyte character, it returns -1. If the return value is *count*, the wide-character string is not null-terminated.

> [!IMPORTANT]
> Ensure that *wcstr* and *mbstr* do not overlap, and that *count* correctly reflects the number of multibyte characters to convert.

## Remarks

The **mbstowcs** function converts up to a maximum number of *count* multibyte characters pointed to by *mbstr* to a string of corresponding wide characters that are determined by the current locale. It stores the resulting wide-character string at the address represented by *wcstr*. The result is similar to a series of calls to [mbtowc](mbtowc-mbtowc-l.md). If **mbstowcs** encounters the single-byte null character ('\0') either before or when *count* occurs, it converts the null character to a wide-character null character (L'\0') and stops. Thus the wide-character string at *wcstr* is null-terminated only if a null character is encountered during conversion. If the sequences pointed to by *wcstr* and *mbstr* overlap, the behavior is undefined.

If the *wcstr* argument is **NULL**, **mbstowcs** returns the number of wide characters that would result from conversion, not including a null terminator. The source string must be null-terminated for the correct value to be returned. If you need the resulting wide character string to be null-terminated, add one to the returned value.

If the *mbstr* argument is **NULL**, or if *count* is > **INT_MAX**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, errno is set to **EINVAL** and the function returns -1.

**mbstowcs** uses the current locale for any locale-dependent behavior; **_mbstowcs_l** is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**mbstowcs**|\<stdlib.h>|
|**_mbstowcs_l**|\<stdlib.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_mbstowcs.c
// compile with: /W3
// illustrates the behavior of the mbstowcs function

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main( void )
{
    size_t size;
    int nChar = 2; // number of characters to convert
    int requiredSize;

    unsigned char    *pmbnull  = NULL;
    unsigned char    *pmbhello = NULL;
    char* localeInfo;

    wchar_t *pwchello = L"\x3042\x3043"; // 2 Hiragana characters
    wchar_t *pwc;

    /* Enable the Japanese locale and codepage */
    localeInfo = setlocale(LC_ALL, "Japanese_Japan.932");
    printf("Locale information set to %s\n", localeInfo);

    printf( "Convert to multibyte string:\n" );

    requiredSize = wcstombs( NULL, pwchello, 0); // C4996
    // Note: wcstombs is deprecated; consider using wcstombs_s
    printf("   Required Size: %d\n", requiredSize);

    /* Add one to leave room for the null terminator. */
    pmbhello = (unsigned char *)malloc( requiredSize + 1);
    if (! pmbhello)
    {
        printf("Memory allocation failure.\n");
        return 1;
    }
    size = wcstombs( pmbhello, pwchello, requiredSize + 1); // C4996
    // Note: wcstombs is deprecated; consider using wcstombs_s
    if (size == (size_t) (-1))
    {
        printf("Couldn't convert string. Code page 932 may"
                " not be available.\n");
        return 1;
    }
    printf( "   Number of bytes written to multibyte string: %u\n",
            (unsigned int) size );
    printf( "   Hex values of the" );
    printf( " multibyte characters: %#.2x %#.2x %#.2x %#.2x\n",
            pmbhello[0], pmbhello[1], pmbhello[2], pmbhello[3] );
    printf( "   Codepage 932 uses 0x81 to 0x9f as lead bytes.\n\n");

    printf( "Convert back to wide-character string:\n" );

    /* Assume we don't know the length of the multibyte string.
     Get the required size in characters, and allocate enough space. */

    requiredSize = mbstowcs(NULL, pmbhello, 0); // C4996
    /* Add one to leave room for the null terminator */
    pwc = (wchar_t *)malloc( (requiredSize + 1) * sizeof( wchar_t ));
    if (! pwc)
    {
        printf("Memory allocation failure.\n");
        return 1;
    }
    size = mbstowcs( pwc, pmbhello, requiredSize + 1); // C4996
    if (size == (size_t) (-1))
    {
       printf("Couldn't convert string--invalid multibyte character.\n");
    }
    printf( "   Characters converted: %u\n", (unsigned int)size );
    printf( "   Hex value of first 2" );
    printf( " wide characters: %#.4x %#.4x\n\n", pwc[0], pwc[1] );
    free(pwc);
    free(pmbhello);
}
```

```Output
Locale information set to Japanese_Japan.932
Convert to multibyte string:
   Required Size: 4
   Number of bytes written to multibyte string: 4
   Hex values of the  multibyte characters: 0x82 0xa0 0x82 0xa1
   Codepage 932 uses 0x81 to 0x9f as lead bytes.

Convert back to wide-character string:
   Characters converted: 2
   Hex value of first 2 wide characters: 0x3042 0x3043
```

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar)<br/>
