---
description: "Learn more about: btowc"
title: "btowc"
ms.date: "4/2/2020"
api_name: ["btowc", "_o_btowc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["btowc"]
helpviewer_keywords: ["btowc function"]
ms.assetid: 99a46e02-6f86-4569-af79-5feca012add8
---
# btowc

Determine whether an integer represents a valid single-byte character in the initial shift state.

## Syntax

```C
wint_t btowc(
   int character
);
```

### Parameters

*character*<br/>
Integer to test.

## Return Value

Returns the wide-character representation of the character if the integer represents a valid single-byte character in the initial shift state. Returns WEOF if the integer is EOF or is not a valid single-byte character in the initial shift state. The output of this function is affected by the current **LC_TYPE** locale.

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**btowc**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
