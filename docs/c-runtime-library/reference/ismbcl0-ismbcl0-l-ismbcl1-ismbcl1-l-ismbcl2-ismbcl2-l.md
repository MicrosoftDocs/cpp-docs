---
description: "Learn more about: _ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l"
title: "_ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l"
ms.date: "4/2/2020"
api_name: ["_ismbcl2", "_ismbcl1", "_ismbcl0", "_ismbcl2_l", "_ismbcl1_l", "_ismbcl0_l", "_o__ismbcl0", "_o__ismbcl0_l", "_o__ismbcl1", "_o__ismbcl1_l", "_o__ismbcl2", "_o__ismbcl2_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ismbcl0", "_ismbcl1_l", "_ismbcl0", "ismbcl1", "ismbcl0_l", "_ismbcl2_l", "ismbcl2", "ismbcl1_l", "_ismbcl1", "_ismbcl0_l", "_ismbcl2", "ismbcl2_l"]
helpviewer_keywords: ["_ismbcl0_l function", "_ismbcl2 function", "_ismbcl1_l function", "ismbcl2 function", "_ismbcl1 function", "ismbcl0_l function", "ismbcl2_l function", "ismbcl1_l function", "ismbcl0 function", "ismbcl1 function", "_ismbcl2_l function", "_ismbcl0 function"]
ms.assetid: ee15ebd1-462c-4a43-95f3-6735836d626a
---
# _ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l

**Code Page 932 Specific functions**, using the current locale or a specified LC_CTYPE conversion state category.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _ismbcl0(
   unsigned int c
);
int _ismbcl0_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcl1(
   unsigned int c
);
int _ismbcl1_l(
   unsigned int c ,
   _locale_t locale
);
int _ismbcl2(
   unsigned int c
);
int _ismbcl2_l(
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

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

|Routine|Test condition (code page 932 only)|
|-------------|-------------------------------------------|
|**_ismbcl0**|JIS non-Kanji: 0x8140<=*c*<=0x889E.|
|**_ismbcl0_l**|JIS non-Kanji: 0x8140<=*c*<=0x889E.|
|**_ismbcl1**|JIS level-1: 0x889F<=*c*<=0x9872.|
|**_ismbcl1_l**|JIS level-1: 0x889F<=*c*<=0x9872.|
|**_ismbcl2**|JIS level-2: 0x989F<=*c*<=0xEAA4.|
|**_ismbcl2_l**|JIS level-2: 0x989F<=*c*<=0xEAA4.|

The functions check that the specified value *c* matches the test conditions described above, but do not check that *c* is a valid multibyte character. If the lower byte is in the ranges 0x00 - 0x3F, 0x7F, or 0xFD - 0xFF, these functions return a nonzero value, indicating that the character satisfies the test condition. Use [_ismbbtrail](ismbbtrail-ismbbtrail-l.md) to test whether the multibyte character is defined.

**End Code Page 932 Specific**

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbcl0**|\<mbstring.h>|
|**_ismbcl0_l**|\<mbstring.h>|
|**_ismbcl1**|\<mbstring.h>|
|**_ismbcl1_l**|\<mbstring.h>|
|**_ismbcl2**|\<mbstring.h>|
|**_ismbcl2_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[_ismbc Routines](../../c-runtime-library/ismbc-routines.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
