---
description: "Learn more about: wctomb_s, _wctomb_s_l"
title: "wctomb_s, _wctomb_s_l"
ms.date: "4/2/2020"
api_name: ["_wctomb_s_l", "wctomb_s", "_o__wctomb_s_l", "_o_wctomb_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDLIB/wctomb_s", "STDLIB/_wctomb_s_l", "wctomb_s", "_wctomb_s_l"]
helpviewer_keywords: ["wctomb_s function", "wctomb_s_l function", "string conversion, wide characters", "wide characters, converting", "_wctomb_s_l function", "characters, converting", "string conversion, multibyte character strings"]
ms.assetid: 7e94a888-deed-4dbd-b5e9-d4a0455538b8
---
# `wctomb_s`, `_wctomb_s_l`

Converts a wide character to the corresponding multibyte character. A version of [`wctomb`, `_wctomb_l`](wctomb-wctomb-l.md) with security enhancements as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t wctomb_s(
   int *pRetValue,
   char *mbchar,
   size_t sizeInBytes,
   wchar_t wchar
);
errno_t _wctomb_s_l(
   int *pRetValue,
   char *mbchar,
   size_t sizeInBytes,
   wchar_t wchar,
   _locale_t locale
);
```

### Parameters

*`pRetValue`*\
The number of bytes, or a code indicating the result.

*`mbchar`*\
The address of a multibyte character.

*`sizeInBytes`*\
Size of the buffer *`mbchar`*.

*`wchar`*\
The wide character to convert.

*`locale`*\
The locale to use.

## Return value

Zero if successful, an error code on failure.

Error Conditions

| *`mbchar`* | *`sizeInBytes`* | Return value | *`pRetValue`* |
|---|---|---|---|
| `NULL` | >0 | `EINVAL` | not modified |
| any | >`INT_MAX` | `EINVAL` | not modified |
| any | too small | `EINVAL` | not modified |
 
If any of the above error conditions occurs, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `wctomb` returns `EINVAL` and sets `errno` to `EINVAL`.

The return value [`EILSEQ`](../errno-constants.md) indicates that the value passed via the parameter `wchar` is not a valid wide character.

## Remarks

The **`wctomb_s`** function converts its *`wchar`* argument to the corresponding multibyte character and stores the result at *`mbchar`*. You can call the function from any point in any program.

If **`wctomb_s`** converts the wide character to a multibyte character, it puts the number of bytes (which is never greater than `MB_CUR_MAX`) in the wide character into the integer pointed to by *`pRetValue`*. If *`wchar`* is the wide-character null character (L'\0'), **`wctomb_s`** fills *`pRetValue`* with 1. If the target pointer *`mbchar`* is `NULL`, **`wctomb_s`** puts 0 in *`pRetValue`*. If the conversion isn't possible in the current locale, **`wctomb_s`** puts -1 in *`pRetValue`*.

**`wctomb_s`** uses the current locale for locale-dependent information; **`_wctomb_s_l`** is identical except that it uses the locale passed in instead. For more information, see [Locale](../locale.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`wctomb_s`** | \<stdlib.h> |
| **`_wctomb_s_l`** | \<stdlib.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

This program illustrates the behavior of the **`wctomb_s`** function.

```cpp
// crt_wctomb_s.cpp
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    int i;
    wchar_t wc = L'a';
    char *pmb = (char *)malloc( MB_CUR_MAX );

    printf_s( "Convert a wide character:\n" );
    wctomb_s( &i, pmb, MB_CUR_MAX, wc );
    printf_s( "   Characters converted: %u\n", i );
    printf_s( "   Multibyte character: %.1s\n\n", pmb );
}
```

```Output
Convert a wide character:
   Characters converted: 1
   Multibyte character: a
```

## See also

[Data conversion](../data-conversion.md)\
[Locale](../locale.md)\
[`_mbclen`, `mblen`, `_mblen_l`](mbclen-mblen-mblen-l.md)\
[`mbstowcs`, `_mbstowcs_l`](mbstowcs-mbstowcs-l.md)\
[`mbtowc`, `_mbtowc_l`](mbtowc-mbtowc-l.md)\
[`wcstombs`, `_wcstombs_l`](wcstombs-wcstombs-l.md)\
[`WideCharToMultiByte`](/windows/win32/api/stringapiset/nf-stringapiset-widechartomultibyte)
