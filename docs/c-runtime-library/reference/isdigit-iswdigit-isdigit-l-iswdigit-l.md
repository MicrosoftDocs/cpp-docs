---
description: "Learn more about: isdigit, iswdigit, _isdigit_l, _iswdigit_l"
title: "isdigit, iswdigit, _isdigit_l, _iswdigit_l"
ms.date: "4/2/2020"
api_name: ["_isdigit_l", "iswdigit", "_iswdigit_l", "isdigit", "_o_isdigit", "_o_iswdigit"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_iswdigit_l", "_isdigit_l", "iswdigit", "isdigit", "_istdigit", "_istdigit_l"]
helpviewer_keywords: ["iswdigit function", "iswdigit_l function", "_iswdigit_l function", "_istdigit_l function", "_istdigit function", "istdigit function", "isdigit function", "isdigit_l function", "_ismbcdigit_l function", "_isdigit_l function"]
ms.assetid: 350b0093-843a-47b0-954e-c1776e8a3853
---
# isdigit, iswdigit, _isdigit_l, _iswdigit_l

Determines whether an integer represents a decimal-digit character.

## Syntax

```C
int isdigit(
   int c
);
int iswdigit(
   wint_t c
);
int _isdigit_l(
   int c,
   _locale_t locale
);
int _iswdigit_l(
   wint_t c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to test.

*locale*<br/>
The locale to use.

## Return Value

Each of these routines returns nonzero if *c* is a particular representation of a decimal-digit character. **isdigit** returns a nonzero value if *c* is a decimal digit (0 - 9). **iswdigit** returns a nonzero value if *c* is a wide character that corresponds to a decimal-digit character. Each of these routines returns 0 if *c* does not satisfy the test condition.

The versions of these functions that have the **_l** suffix use the locale that's passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).

The behavior of **isdigit** and **_isdigit_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_istdigit**|**isdigit**|[_ismbcdigit](ismbcalnum-functions.md)|**iswdigit**|
|**_istdigit_l**|**_isdigit_l**|[_ismbcdigit_l](ismbcalnum-functions.md)|**_iswdigit_l**|

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**isdigit**|\<ctype.h>|
|**iswdigit**|\<ctype.h> or \<wchar.h>|
|**_isdigit_l**|\<ctype.h>|
|**_iswdigit_l**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
