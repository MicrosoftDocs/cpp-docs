---
description: "Learn more about: isblank, iswblank, _isblank_l, _iswblank_l"
title: "isblank, iswblank, _isblank_l, _iswblank_l"
ms.date: "4/2/2020"
api_name: ["isblank", "_isblank_l", "iswblank", "_iswblank_l", "_o_isblank", "_o_iswblank"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_iswblank_l", "isblank", "_istblank_l", "_istblank", "_isblank_l", "iswblank"]
ms.assetid: 33ce96c0-f387-411a-8283-c3d2a69e56bd
---
# isblank, iswblank, _isblank_l, _iswblank_l

Determines whether an integer represents a blank character.

## Syntax

```C
int isblank(
   int c
);
int iswblank(
   wint_t c
);
int _isblank_l(
   int c,
   _locale_t locale
);
int _iswblank_l(
   wint_t c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to test.

*locale*<br/>
Locale to use.

## Return Value

Each of these routines returns nonzero if *c* is a particular representation of a space or horizontal tab character, or is one of a locale-specific set of characters that are used to separate words within a line of text. **isblank** returns a nonzero value if *c* is a space character (0x20) or horizontal tab character (0x09). The result of the test condition for the **isblank** functions depends on the **LC_CTYPE** category setting of the locale; for more information, see [setlocale, _wsetlocale](setlocale-wsetlocale.md). The versions of these functions that do not have the **_l** suffix use the current locale for any locale-dependent behavior; the versions that do have the **_l** suffix are identical except that they use the locale that's passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

**iswblank** returns a nonzero value if *c* is a wide character that corresponds to a standard space or horizontal tab character.

The behavior of **isblank** and **_isblank_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_istblank**|**isblank**|[_ismbcblank](ismbcgraph-functions.md)|**iswblank**|
|**_istblank_l**|**_isblank_l**|[_ismbcblank_l](ismbcgraph-functions.md)|**_iswblank_l**|

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**isblank**|\<ctype.h>|
|**iswblank**|\<ctype.h> or \<wchar.h>|
|**_isblank_l**|\<ctype.h>|
|**_iswblank_l**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
