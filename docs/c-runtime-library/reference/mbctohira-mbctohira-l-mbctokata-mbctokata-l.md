---
description: "Learn more about: _mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l"
title: "_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l"
ms.date: "4/2/2020"
api_name: ["_mbctohira", "_mbctohira_l", "_mbctokata", "_mbctokata_l", "_o__mbctohira", "_o__mbctohira_l", "_o__mbctokata", "_o__mbctokata_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbctokata", "mbctohira", "_mbctohira", "_mbctohira_l", "mbctokata", "mbctokata_l", "mbctohira_l", "_mbctokata_l"]
helpviewer_keywords: ["_mbctokata function", "_mbctokata_l function", "_mbctohira_l function", "mbctohira_l function", "mbctohira function", "mbctokata_l function", "_mbctohira function", "mbctokata function"]
ms.assetid: f949afd7-44d4-4f08-ac8f-1fef2c915a1c
---
# _mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l

Converts between hiragana and katakana characters.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned int _mbctohira(
   unsigned int c
);
unsigned int _mbctohira_l(
   unsigned int c,
   _locale_t locale
);
unsigned int _mbctokata(
   unsigned int c
);
unsigned int _mbctokata_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Multibyte character to convert.

*locale*<br/>
Locale to use.

## Return Value

Each of these functions returns the converted character *c*, if possible. Otherwise it returns the character *c* unchanged.

## Remarks

The **_mbctohira** and **_mbctokata** functions test a character *c* and, if possible, apply one of the following conversions.

|Routines|Converts|
|--------------|--------------|
|**_mbctohira**, **_mbctohira_l**|Multibyte katakana to multibyte hiragana.|
|**_mbctokata**, **_mbctokata_l**|Multibyte hiragana to multibyte katakana.|

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions are identical, except that the ones that don't have the **_l** suffix use the current locale for this locale-dependent behavior and the ones that do have the **_l** suffix instead use the locale parameter that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

In earlier versions, **_mbctohira** was named **jtohira** and **_mbctokata** was named **jtokata**. For new code, use the new names.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbctohira**|\<mbstring.h>|
|**_mbctohira_l**|\<mbstring.h>|
|**_mbctokata**|\<mbstring.h>|
|**_mbctokata_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](mbcjistojms-mbcjistojms-l-mbcjmstojis-mbcjmstojis-l.md)<br/>
[_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md)<br/>
[_mbctombb, _mbctombb_l](mbctombb-mbctombb-l.md)<br/>
