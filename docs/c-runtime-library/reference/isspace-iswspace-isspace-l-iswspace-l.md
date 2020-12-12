---
description: "Learn more about: isspace, iswspace, _isspace_l, _iswspace_l"
title: "isspace, iswspace, _isspace_l, _iswspace_l"
ms.date: "4/2/2020"
api_name: ["iswspace", "_isspace_l", "_iswspace_l", "isspace", "_o_isspace", "_o_iswspace"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["iswspace", "_istspace", "isspace"]
helpviewer_keywords: ["iswspace function", "isspace function", "_iswspace_l function", "_isspace_l function", "iswspace_l function", "isspace_l function", "_istspace function", "istspace function"]
ms.assetid: b851e0c0-36bb-4dac-a1a3-533540939035
---
# isspace, iswspace, _isspace_l, _iswspace_l

Determines whether an integer represents a space character.

## Syntax

```C
int isspace(
   int c
);
int iswspace(
   wint_t c
);
int _isspace_l(
   int c,
   _locale_t locale
);
int _iswspace_l(
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

Each of these routines returns nonzero if *c* is a particular representation of a space character. **isspace** returns a nonzero value if *c* is a white-space character (0x09 - 0x0D or 0x20). The result of the test condition for the **isspace** function depends on the **LC_CTYPE** category setting of the locale; see [setlocale, _wsetlocale](setlocale-wsetlocale.md) for more information. The versions of these functions that do not have the **_l** suffix use the current locale for any locale-dependent behavior; the versions that do have the **_l** suffix are identical except that they use the locale that's passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

**iswspace** returns a nonzero value if *c* is a wide character that corresponds to a standard white-space character.

The behavior of **isspace** and **_isspace_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_** **istspace**|**isspace**|[_ismbcspace](ismbcgraph-functions.md)|**iswspace**|

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**isspace**|\<ctype.h>|
|**iswspace**|\<ctype.h> or \<wchar.h>|
|**_isspace_l**|\<ctype.h>|
|**_iswspace_l**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
