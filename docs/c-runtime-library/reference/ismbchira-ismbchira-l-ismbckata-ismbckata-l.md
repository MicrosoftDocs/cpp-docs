---
description: "Learn more about: _ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l"
title: "_ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l"
ms.date: "4/2/2020"
api_name: ["_ismbckata", "_ismbchira_l", "_ismbchira", "_ismbckata_l", "_o__ismbchira", "_o__ismbchira_l", "_o__ismbckata", "_o__ismbckata_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ismbckata_l", "_ismbckata_l", "ismbckata", "ismbchira", "_ismbckata", "ismbchira_l", "_ismbchira_l", "_ismbchira"]
helpviewer_keywords: ["_ismbckata function", "_ismbchira function", "_ismbckata_l function", "Katakana", "ismbchira function", "_ismbchira_l function", "ismbchira_l function", "ismbdkata_l function", "Hiragana", "ismbckata function"]
ms.assetid: 2db388a2-be31-489b-81c8-f6bf3f0582d3
---
# _ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l

**Code Page 932 Specific functions**

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _ismbchira(
   unsigned int c
);
int _ismbchira_l(
   unsigned int c,
   _locale_t locale
);
int _ismbckata(
   unsigned int c
);
int _ismbckata_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Character to be tested.

*locale*<br/>
Locale to use.

## Return Value

Each of these routines returns a nonzero value if the character satisfies the test condition or 0 if it does not. If *c* <= 255 and there is a corresponding **_ismbb** routine (for example, **_ismbcalnum** corresponds to **_ismbbalnum**), the result is the return value of the corresponding **_ismbb** routine.

## Remarks

Each of these functions tests a given multibyte character for a given condition.

The versions of these functions with the **_l** suffix are identical except that they use the locale passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).

|Routine|Test condition (code page 932 only)|
|-------------|-------------------------------------------|
|**_ismbchira**|Double-byte Hiragana: 0x829F<=*c*<=0x82F1.|
|**_ismbchira_l**|Double-byte Hiragana: 0x829F<=*c*<=0x82F1.|
|**_ismbckata**|Double-byte katakana: 0x8340<=*c*<=0x8396.|
|**_ismbckata_l**|Double-byte katakana: 0x8340<=*c*<=0x8396.|

**End Code Page 932 Specific**

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbchira**|\<mbstring.h>|
|**_ismbchira_l**|\<mbstring.h>|
|**_ismbckata**|\<mbstring.h>|
|**_ismbckata_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[_ismbc Routines](../../c-runtime-library/ismbc-routines.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
