---
description: "Learn more about: wcstombs, _wcstombs_l"
title: "wcstombs, _wcstombs_l"
ms.date: "4/2/2020"
api_name: ["wcstombs", "_wcstombs_l", "_o__wcstombs_l", "_o_wcstombs"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDLIB/wcstombs", "STDLIB/_wcstombs_l", "wcstombs", "_wcstombs_l"]
helpviewer_keywords: ["_wcstombs_l function", "wcstombs function", "string conversion, wide characters", "wide characters, converting", "wcstombs_l function", "characters, converting", "string conversion, multibyte character strings"]
---
# `wcstombs`, `_wcstombs_l`

Converts a sequence of wide characters to a corresponding sequence of multibyte characters. More secure versions of these functions are available; see [`wcstombs_s`, `_wcstombs_s_l`](wcstombs-s-wcstombs-s-l.md).

## Syntax

```C
size_t wcstombs(
   char *mbstr,
   const wchar_t *wcstr,
   size_t count
);
size_t _wcstombs_l(
   char *mbstr,
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
);
template <size_t size>
size_t wcstombs(
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count
); // C++ only
template <size_t size>
size_t _wcstombs_l(
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
); // C++ only
```

### Parameters

*`mbstr`*\
The address of a sequence of multibyte characters.

*`wcstr`*\
The address of a sequence of wide characters.

*`count`*\
The maximum number of bytes that can be stored in the multibyte output string.

*`locale`*\
The locale to use.

## Return value

If **`wcstombs`** successfully converts the multibyte string, it returns the number of bytes written into the multibyte output string, excluding the terminating `NULL` (if any). If the *`mbstr`* argument is `NULL`, **`wcstombs`** returns the required size in bytes of the destination string. If **`wcstombs`** encounters a wide character it can't convert to a multibyte character, it returns -1 cast to type **`size_t`** and sets `errno` to `EILSEQ`.

## Remarks

The **`wcstombs`** function converts the wide-character string pointed to by *`wcstr`* to the corresponding multibyte characters and stores the results in the *`mbstr`* array. The *`count`* parameter indicates the maximum number of bytes that can be stored in the multibyte output string (that is, the size of *`mbstr`*). In general, it isn't known how many bytes will be required when converting a wide-character string. Some wide characters will require only a single byte in the output string; others require 2 bytes. If there are 2 bytes in the multibyte output string for every wide character in the input string (including the wide character `NULL`), the result is guaranteed to fit.

Starting in Windows 10 version 1803 (10.0.17134.0), the Universal C Runtime supports using a UTF-8 code page. Use `wcstombs(NULL, wcstr, 0)` to get the correct size that you'll need for the conversion because assuming that you'll need two bytes for every wide character may not be enough. For more information about UTF-8 support, see [UTF-8 support](setlocale-wsetlocale.md)

If **`wcstombs`** encounters the wide-character `NULL` character (L'\0') either before or when *`count`* occurs, it converts it to an 8-bit 0 and stops. Thus, the multibyte character string at *`mbstr`* is null-terminated only if **`wcstombs`** encounters a wide-character `NULL` character during conversion. If the sequences pointed to by *`wcstr`* and *`mbstr`* overlap, the behavior of **`wcstombs`** is undefined.

If the *`mbstr`* argument is `NULL`, **`wcstombs`** returns the required size in bytes of the destination string.

**`wcstombs`** validates its parameters. If *`wcstr`* is `NULL`, or if *`count`* is greater than `INT_MAX`, this function invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the function sets `errno` to `EINVAL` and returns -1.

**`wcstombs`** uses the current locale for any locale-dependent behavior; **`_wcstombs_l`** is identical except that it uses the locale passed in instead. For more information, see [Locale](../locale.md).

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure template overloads](../secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`wcstombs`** | `<stdlib.h>` |
| **`_wcstombs_l`** | `<stdlib.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

This program illustrates the behavior of the **`wcstombs`** function.

```C
// crt_wcstombs.c
// compile with: /W3
// This example demonstrates the use
// of wcstombs, which converts a string
// of wide characters to a string of
// multibyte characters.

#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 100

int main( void )
{
    size_t  count;
    char    *pMBBuffer = (char *)malloc( BUFFER_SIZE );
    wchar_t *pWCBuffer = L"Hello, world.";

    printf("Convert wide-character string:\n" );

    count = wcstombs(pMBBuffer, pWCBuffer, BUFFER_SIZE ); // C4996
    // Note: wcstombs is deprecated; consider using wcstombs_s instead
    printf("   Characters converted: %u\n",
            count );
    printf("    Multibyte character: %s\n\n",
           pMBBuffer );

    free(pMBBuffer);
}
```

```Output
Convert wide-character string:
   Characters converted: 13
    Multibyte character: Hello, world.
```

## See also

[Data conversion](../data-conversion.md)\
[Locale](../locale.md)\
[`_mbclen`, `mblen`, `_mblen_l`](mbclen-mblen-mblen-l.md)\
[`mbstowcs`, `_mbstowcs_l`](mbstowcs-mbstowcs-l.md)\
[`mbtowc`, `_mbtowc_l`](mbtowc-mbtowc-l.md)\
[`wctomb`, `_wctomb_l`](wctomb-wctomb-l.md)\
[`WideCharToMultiByte`](/windows/win32/api/stringapiset/nf-stringapiset-widechartomultibyte)
