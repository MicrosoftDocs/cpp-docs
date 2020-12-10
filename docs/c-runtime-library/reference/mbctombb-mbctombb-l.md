---
description: "Learn more about: _mbctombb, _mbctombb_l"
title: "_mbctombb, _mbctombb_l"
ms.date: "4/2/2020"
api_name: ["_mbctombb_l", "_mbctombb", "_o__mbctombb", "_o__mbctombb_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbctombb_l", "_mbctombb", "mbctombb_l", "mbctombb"]
helpviewer_keywords: ["_mbctombb function", "mbctombb_l function", "mbctombb function", "_mbctombb_l function"]
ms.assetid: d90970b8-71ff-4586-b6a2-f9ceb811f776
---
# _mbctombb, _mbctombb_l

Converts a double-byte multibyte character to a corresponding single-byte multibyte character.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned int _mbctombb(
   unsigned int c
);
unsigned int _mbctombb_l(
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

If successful, **_mbctombb** and **_mbctombb_l** returns the single-byte character that corresponds to *c*; otherwise it returns *c*.

## Remarks

The **_mbctombb** and **_mbctombb_l** functions convert a given multibyte character to a corresponding single-byte multibyte character. Characters must correspond to single-byte characters within the range 0x20 - 0x7E or 0xA1 - 0xDF to be converted.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The version of this function without the **_l** suffix uses the current locale for this locale-dependent behavior; the version with the **_l** suffix is identical except that it use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

In previous versions, **_mbctombb** was called **zentohan**. Use **_mbctombb** instead.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbctombb**|\<mbstring.h>|
|**_mbctombb_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[_mbbtombc, _mbbtombc_l](mbbtombc-mbbtombc-l.md)<br/>
[_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](mbcjistojms-mbcjistojms-l-mbcjmstojis-mbcjmstojis-l.md)<br/>
[_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](mbctohira-mbctohira-l-mbctokata-mbctokata-l.md)<br/>
[_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md)<br/>
