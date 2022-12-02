---
title: "_mbclen, mblen, _mblen_l, _mbclen_l"
description: "Describes the Microsoft C Runtime Library (CRT) _mbclen, mblen, _mblen_l, and _mbclen_l functions."
ms.date: "4/2/2020"
api_name: ["_mbclen", "mblen", "_mblen_l", "_mbclen_l", "_o__mbclen", "_o__mbclen_l", "_o__mblen_l", "_o_mblen"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mblen", "ftclen", "_mbclen", "_mbclen_l", "tclen", "_ftclen", "_tclen", "mbclen"]
helpviewer_keywords: ["tclen function", "_mblen_l function", "_tclen function", "mblen_l function", "_mbclen function", "_mbclen_l function", "mbclen function", "mblen function"]
ms.assetid: d5eb92a0-b7a3-464a-aaf7-9890a8e3ed70
---
# `_mbclen`, `mblen`, `_mblen_l`, `_mbclen_l`

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

*`c`*\
Multibyte character.

*`mbstr`*\
Address of a multibyte-character byte sequence.

*`count`*\
Number of bytes to check.

*`locale`*\
Locale to use.

## Return value

**`_mbclen`** and **`_mbclen_l`** return 1 or 2, according to the length of the multibyte character *`c`*. The functions always return 1 for UTF-8, whether *`c`* is multibyte or not. There's no error return for **`_mbclen`**.

If *`mbstr`* isn't `NULL`, **`mblen`** and **`_mblen_l`** return the length, in bytes, of the multibyte character. The **`mblen`** and **`_mblen_l`** functions work correctly on UTF-8, and may return a value between 1 and 3. When *`mbstr`* is `NULL` (or it points to the wide-character null character), **`mblen`** and **`_mblen_l`** return 0. The object that *`mbstr`* points to must form a valid multibyte character within the first *`count`* characters, or **`mblen`** and **`_mblen_l`** return -1.

## Remarks

The **`_mbclen`** function returns the length, in bytes, of the multibyte character *`c`*. If *`c`* doesn't point to the lead byte of a multibyte character (as determined by an implicit call to [`_ismbblead`](ismbblead-ismbblead-l.md), the result of **`_mbclen`** is unpredictable.

**`mblen`** returns the length in bytes of *`mbstr`* if it's a valid multibyte character. It also determines multibyte-character validity associated with the code page. **`mblen`** examines *`count`* or fewer bytes contained in *`mbstr`*, but not more than `MB_CUR_MAX` bytes.

The output value is affected by the `LC_CTYPE` category setting of the locale. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior. The **`_l`** suffixed versions behave the same, but they use the locale parameter passed in instead. For more information, see [`setlocale`](setlocale-wsetlocale.md) and [Locale](../locale.md).

**`_mbclen`**, **`_mblen_l`**, and **`_mbclen_l`** are Microsoft-specific, not part of the Standard C library. We don't recommend you use them where you want portable code. For Standard C compatibility, use **`mblen`** or **`mbrlen`** instead.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tclen` | Maps to macro or inline function | **`_mbclen`** | Maps to macro or inline function |

## Requirements

| Routine | Required header |
|---|---|
| **`_mbclen`** | \<mbstring.h> |
| **`mblen`** | \<stdlib.h> |
| **`_mblen_l`** | \<stdlib.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

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

[Character classification](../character-classification.md)\
[Locale](../locale.md)\
[Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md)\
[`_mbccpy`, `_mbccpy_l`](mbccpy-mbccpy-l.md)\
[`mbrlen`](mbrlen.md)\
[`strlen`, `wcslen`, `_mbslen`, `_mbslen_l`, `_mbstrlen`, `_mbstrlen_l`](strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)
