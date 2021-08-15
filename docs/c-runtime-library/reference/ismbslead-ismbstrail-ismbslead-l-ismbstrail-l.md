---
description: "Learn more about: _ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l"
title: "_ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l"
ms.date: "4/2/2020"
api_name: ["_ismbstrail", "_ismbslead_l", "_ismbslead", "_ismbstrail_l", "_o__ismbslead", "_o__ismbslead_l", "_o__ismbstrail", "_o__ismbstrail_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbslead", "ismbs", "ismbslead_l", "_ismbs", "ismbstrail_l", "ismbslead", "_ismbstrail", "_ismbstrail_l", "ismbstrail", "_ismbslead_l"]
helpviewer_keywords: ["ismbstrail function", "_ismbslead function", "ismbslead function", "ismbslead_l function", "_ismbstrail function", "_ismbslead_l function", "ismbstrail_l function", "_ismbstrail_l function"]
ms.assetid: 86d2cd7a-3cff-443a-b713-14cc17a231e9
---
# _ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l

Performs context-sensitive tests for multibyte-character-string lead bytes and trail bytes and determines whether a given substring pointer points to a lead byte or a trail byte.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _ismbslead(
   const unsigned char *str,
   const unsigned char *current
);
int _ismbstrail(
   const unsigned char *str,
   const unsigned char *current
);
int _ismbslead_l(
   const unsigned char *str,
   const unsigned char *current,
   _locale_t locale
);
int _ismbstrail_l(
   const unsigned char *str,
   const unsigned char *current,
   _locale_t locale
);
```

### Parameters

*str*<br/>
Pointer to the start of the string or the previous known lead byte.

*current*<br/>
Pointer to the position in the string to be tested.

*locale*<br/>
The locale to use.

## Return Value

**_ismbslead** returns -1 if the character is a lead byte and **_ismbstrail** returns -1 if the character is a trail byte. If the input strings are valid but are not a lead byte or trail byte, these functions return zero. If either argument is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **NULL** and set **errno** to **EINVAL**.

## Remarks

**_ismbslead** and **_ismbstrail** are slower than the **_ismbblead** and **_ismbbtrail** versions because they take the string context into account.

The versions of these functions that have the **_l** suffix are identical except that for their locale-dependent behavior they use the locale that's passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_ismbslead**|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|
|**_ismbstrail**|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|
|**_ismbslead_l**|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|
|**_ismbstrail_l**|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|

\* For manifest constants for the test conditions.

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[_ismbc Routines](../../c-runtime-library/ismbc-routines.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
