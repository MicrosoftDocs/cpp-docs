---
description: "Learn more about: ispunct, iswpunct, _ispunct_l, _iswpunct_l"
title: "ispunct, iswpunct, _ispunct_l, _iswpunct_l"
ms.date: "4/2/2020"
api_name: ["ispunct", "_iswpunct_l", "iswpunct", "_ispunct_l", "_o_ispunct", "_o_iswpunct"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["iswpunct", "_istpunct", "ispunct"]
helpviewer_keywords: ["_istpunct function", "_ispunct_l function", "iswpunct function", "ispunct function", "istpunct function", "ispunct_l function", "_iswpunct_l function", "iswpunct_l function"]
ms.assetid: 94403240-85c8-40a4-9c2b-e3e95c729c76
---
# ispunct, iswpunct, _ispunct_l, _iswpunct_l

Determines whether an integer represents a punctuation character.

## Syntax

```C
int ispunct(
   int c
);
int iswpunct(
   wint_t c
);
int _ispunct_l(
   int c,
   _locale_t locale
);
int _iswpunct_l(
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

Each of these routines returns nonzero if *c* is a particular representation of a punctuation character. **ispunct** returns a nonzero value for any printable character that is not a space character or a character for which **isalnum** is nonzero. **iswpunct** returns a nonzero value for any printable wide character that is neither the space wide character nor a wide character for which **iswalnum** is nonzero. Each of these routines returns 0 if *c* does not satisfy the test condition.

The result of the test condition for the **ispunct** function depends on the **LC_CTYPE** category setting of the locale; see [setlocale, _wsetlocale](setlocale-wsetlocale.md) for more information. The versions of these functions that do not have the **_l** suffix use the current locale for any locale-dependent behavior; the versions that do have the **_l** suffix are identical except that they use the locale that's passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

The behavior of **ispunct** and **_ispunct_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_** **istpunct**|**ispunct**|[_ismbcpunct](ismbcgraph-functions.md)|**iswpunct**|

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**ispunct**|\<ctype.h>|
|**iswpunct**|\<ctype.h> or \<wchar.h>|
|**_ispunct_l**|\<ctype.h>|
|**_iswpunct_l**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
