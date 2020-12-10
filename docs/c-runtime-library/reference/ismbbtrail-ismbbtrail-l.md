---
description: "Learn more about: _ismbbtrail, _ismbbtrail_l"
title: "_ismbbtrail, _ismbbtrail_l"
ms.date: "4/2/2020"
api_name: ["_ismbbtrail", "_ismbbtrail_l", "_o__ismbbtrail", "_o__ismbbtrail_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbbtrail", "ismbbtrail", "_ismbbtrail_l", "ismbbtrail_l"]
helpviewer_keywords: ["ismbbtrail_l function", "_ismbbtrail function", "_ismbbtrail_l function", "ismbbtrail function"]
ms.assetid: dfdd0292-960b-4c1d-bf11-146e0fc80247
---
# _ismbbtrail, _ismbbtrail_l

Determines whether a byte is a trailing byte of a multibyte character.

## Syntax

```C
int _ismbbtrail(
   unsigned int c
);
int _ismbbtrail_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
The integer to be tested.

*locale*<br/>
The locale to use.

## Return Value

**_ismbbtrail** returns a nonzero value if the integer *c* is the second byte of a multibyte character. For example, in code page 932 only, valid ranges are 0x40 to 0x7E and 0x80 to 0xFC.

## Remarks

**_ismbbtrail** uses the current locale for locale-dependent behavior. **_ismbbtrail_l** is identical except that it uses the locale that's passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_ismbbtrail**|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|
|**_ismbbtrail_l**|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|

\* For manifest constants for the test conditions.

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
