---
description: "Learn more about: _isctype, iswctype, _isctype_l, _iswctype_l"
title: "_isctype, iswctype, _isctype_l, _iswctype_l"
ms.date: "4/2/2020"
api_name: ["_isctype_l", "iswctype", "_iswctype_l", "_isctype", "_o__isctype", "_o__isctype_l", "_o__iswctype_l", "_o_iswctype"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["iswctype", "_isctype", "_isctype_l", "_iswctype", "isctype", "iswctype_l", "isctype_l", "_iswctype_l"]
helpviewer_keywords: ["isctype_l function", "iswctype_l function", "iswctype function", "_isctype function", "_isctype_l function", "_iswctype_l function", "isctype function", "_iswctype function"]
ms.assetid: cf7509b7-12fc-4d95-8140-ad2eb98173d3
---
# _isctype, iswctype, _isctype_l, _iswctype_l

Tests *c* for the ctype property specified by the *desc* argument. For each valid value of *desc*, there is an equivalent wide-character classification routine.

## Syntax

```C
int _isctype(
   int c,
   _ctype_t desc
);
int _isctype_l(
   int c,
   _ctype_t desc,
   _locale_t locale
);
int iswctype(
   wint_t c,
   wctype_t desc
);
int _iswctype_l(
   wint_t c,
   wctype_t desc,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to test.

*desc*<br/>
Property to test for. This is normally retrieved using ctype or [wctype](wctype.md).

*locale*<br/>
The locale to use for any locale-dependent tests.

## Return Value

**_isctype** and **iswctype** return a nonzero value if *c* has the property specified by *desc* in the current locale or 0 if it does not. The versions of these functions with the **_l** suffix are identical except that they use the locale passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).

The behavior of **_isctype** and **_isctype_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|n/a|**_isctype**|n/a|**_iswctype**|
|n/a|**_isctype_l**|n/a|**_iswctype_l**|

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_isctype**|\<ctype.h>|
|**iswctype**|\<ctype.h> or \<wchar.h>|
|**_isctype_l**|\<ctype.h>|
|**_iswctype_l**|\<ctype.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
