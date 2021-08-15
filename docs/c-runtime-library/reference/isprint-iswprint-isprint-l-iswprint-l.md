---
description: "Learn more about: isprint, iswprint, _isprint_l, _iswprint_l"
title: "isprint, iswprint, _isprint_l, _iswprint_l"
ms.date: "4/2/2020"
api_name: ["iswprint", "isprint", "_isprint_l", "_iswprint_l", "_o_isprint", "_o_iswprint"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["iswprint", "_istprint", "isprint"]
helpviewer_keywords: ["_istprint function", "iswprint function", "_iswprint_l function", "isprint_l function", "istprint function", "isprint function", "iswprint_l function", "_isprint_l function"]
ms.assetid: a8bbcdb0-e8d0-4d8c-ae4e-56d3bdee6ca3
---
# isprint, iswprint, _isprint_l, _iswprint_l

Determines whether an integer represents a printable character.

## Syntax

```C
int isprint(
   int c
);
int iswprint(
   wint_t c
);
int _isprint_l(
   int c,
   _locale_t locale
);
int _iswprint_l(
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

Each of these routines returns nonzero if *c* is a particular representation of a printable character. **isprint** returns a nonzero value if *c* is a printable character—this includes the space character (0x20 - 0x7E). **iswprint** returns a nonzero value if *c* is a printable wide character—this includes the space wide character. Each of these routines returns 0 if *c* does not satisfy the test condition.

The result of the test condition for these functions depends on the **LC_CTYPE** category setting of the locale; see [setlocale, _wsetlocale](setlocale-wsetlocale.md) for more information. The versions of these functions that do not have the **_l** suffix use the current locale for any locale-dependent behavior; the versions that do have the **_l** suffix are identical except that they use the locale that's passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

The behavior of **isprint** and **_isprint_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_unicode defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_** **istprint**|**isprint**|[_ismbcprint](ismbcgraph-functions.md)|**iswprint**|

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**isprint**|\<ctype.h>|
|**iswprint**|\<ctype.h> or \<wchar.h>|
|**_isprint_l**|\<ctype.h>|
|**_iswprint_l**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
