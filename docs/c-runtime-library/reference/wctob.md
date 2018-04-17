---
title: "wctob | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["wctob"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["wctob"]
dev_langs: ["C++"]
helpviewer_keywords: ["wide characters, converting", "wctob function", "characters, converting"]
ms.assetid: 46aec98b-c2f2-4e9d-9d89-7db99ba8a9a6
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# wctob

Determines if a wide character corresponds to a multibyte character and returns its multibyte character representation.

## Syntax

```C
int wctob(
   wint_t wchar
);
```

### Parameters

*wchar*
Value to translate.

## Return Value

If `wctob` successfully converts a wide character, it returns its multibyte character representation, only if the multibyte character is exactly one byte long. If `wctob` encounters a wide character it cannot convert to a multibyte character or the multibyte character is not exactly one byte long, it returns a -1.

## Remarks

The `wctob` function converts a wide character contained in *wchar* to the corresponding multibyte character passed by the return `int` value, if the multibyte character is exactly one byte long.

If `wctob` was unsuccessful and no corresponding multibyte character was found, the function sets **errno** to `EILSEQ` and returns -1.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`wctob`|\<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## Example

This program illustrates the behavior of the `wcstombs` function.

```C
// crt_wctob.c
#include <stdio.h>
#include <wchar.h>

int main( void )
{
    int     bChar = 0;
    wint_t  wChar = 0;

    // Set the corresponding wide character to exactly one byte.
    wChar = (wint_t)'A';

    bChar = wctob( wChar );
    if (bChar == WEOF)
    {
        printf( "No corresponding multibyte character was found.\n");
    }
    else
    {
        printf( "Determined the corresponding multibyte character to"
                " be \"%c\".\n", bChar);
    }
}

```

```Output
Determined the corresponding multibyte character to be "A".
```

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)<br/>
