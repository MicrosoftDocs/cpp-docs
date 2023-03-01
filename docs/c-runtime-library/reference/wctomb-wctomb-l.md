---
description: "Learn more about: wctomb, _wctomb_l"
title: "wctomb, _wctomb_l"
ms.date: "4/2/2020"
api_name: ["_wctomb_l", "wctomb", "_o__wctomb_l", "_o_wctomb"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDLIB/wctomb", "STDLIB/_wctomb_l", "wctomb", "_wctomb_l"]
helpviewer_keywords: ["string conversion, wide characters", "wide characters, converting", "_wctomb_l function", "wctomb function", "wctomb_l function", "characters, converting", "string conversion, multibyte character strings"]
ms.assetid: 4a543f0e-5516-4d81-8ff2-3c5206f02ed5
---
# `wctomb`, `_wctomb_l`

Convert a wide character to the corresponding multibyte character. More secure versions of these functions are available; see [`wctomb_s`, `_wctomb_s_l`](wctomb-s-wctomb-s-l.md).

## Syntax

```C
int wctomb(
   char *mbchar,
   wchar_t wchar
);
int _wctomb_l(
   char *mbchar,
   wchar_t wchar,
   _locale_t locale
);
```

### Parameters

*`mbchar`*\
The address of a multibyte character.

*`wchar`*\
A wide character.

## Return value

If **`wctomb`** converts the wide character to a multibyte character, it returns the number of bytes (which is never greater than `MB_CUR_MAX`) in the wide character. If *`wchar`* is the wide-character null character (L'\0'), **`wctomb`** returns 1. If the target pointer *`mbchar`* is `NULL`, **`wctomb`** returns 0. If the conversion isn't possible in the current locale, **`wctomb`** returns -1 and `errno` is set to `EILSEQ`.

## Remarks

The **`wctomb`** function converts its *`wchar`* argument to the corresponding multibyte character and stores the result at *`mbchar`*. You can call the function from any point in any program. **`wctomb`** uses the current locale for any locale-dependent behavior; **`_wctomb_l`** is identical to **`wctomb`** except that it uses the locale passed in instead. For more information, see [Locale](../locale.md).

**`wctomb`** validates its parameters. If *`mbchar`* is `NULL`, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns -1.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`wctomb`** | \<stdlib.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

This program illustrates the behavior of the wctomb function.

```cpp
// crt_wctomb.cpp
// compile with: /W3
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int i;
   wchar_t wc = L'a';
   char *pmb = (char *)malloc( MB_CUR_MAX );

   printf( "Convert a wide character:\n" );
   i = wctomb( pmb, wc ); // C4996
   // Note: wctomb is deprecated; consider using wctomb_s
   printf( "   Characters converted: %u\n", i );
   printf( "   Multibyte character: %.1s\n\n", pmb );
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
