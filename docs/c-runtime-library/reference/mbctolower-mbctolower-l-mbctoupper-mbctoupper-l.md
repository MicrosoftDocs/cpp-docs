---
description: "Learn more about: _mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l"
title: "_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l"
ms.date: "4/2/2020"
api_name: ["_mbctolower_l", "_mbctoupper_l", "_mbctoupper", "_mbctolower", "_o__mbctolower", "_o__mbctolower_l", "_o__mbctoupper", "_o__mbctoupper_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbctoupper_l", "mbctolower_l", "_mbctolower", "_mbctolower_l", "_mbctoupper", "mbctoupper", "mbctolower", "_mbctoupper_l"]
helpviewer_keywords: ["_mbctolower function", "mbctolower_l function", "totupper function", "_mbctoupper function", "totlower function", "_mbctoupper_l function", "mbctolower function", "_totupper function", "_mbctolower_l function", "mbctoupper_l function", "_totlower function", "mbctoupper function"]
ms.assetid: 787fab71-3224-4ed7-bc93-4dcd8023fc54
---
# _mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l

Tests and converts the case of a multibyte character.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned int _mbctolower(
   unsigned int c
);
unsigned int _mbctolower_l(
   unsigned int c,
   _locale_t locale
);
unsigned int _mbctoupper(
   unsigned int c
);
unsigned int _mbctoupper_l(
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

The functions test a character *c* and, if possible, apply one of the following conversions.

|Routines|Converts|
|--------------|--------------|
|**_mbctolower**, **_mbctolower_l**|Uppercase character to lowercase character.|
|**_mbctoupper**, **_mbctoupper_l**|Lowercase character to uppercase character.|

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The version of this function without the **_l** suffix uses the current locale for this locale-dependent behavior; the version with the **_l** suffix is identical except that it uses the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

In previous versions, **_mbctolower** was called **jtolower**, and **_mbctoupper** was called **jtoupper**. For new code, use the new names instead.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_totlower**|**tolower**|**_mbctolower**|**towlower**|
|**_totlower_l**|**_tolower_l**|**_mbctolower_l**|**_towlower_t**|
|**_totupper**|**toupper**|**_mbctoupper**|**towupper**|
|**_totupper_l**|**toupper_l**|**_mbctoupper_l**|**_towupper_l**|

## Requirements

|Routines|Required header|
|--------------|---------------------|
|**_mbctolower**, **_mbctolower_l**|\<mbstring.h>|
|**_mbctoupper**, **_mbctoupper_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[_mbbtombc, _mbbtombc_l](mbbtombc-mbbtombc-l.md)<br/>
[_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](mbcjistojms-mbcjistojms-l-mbcjmstojis-mbcjmstojis-l.md)<br/>
[_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](mbctohira-mbctohira-l-mbctokata-mbctokata-l.md)<br/>
[_mbctombb, _mbctombb_l](mbctombb-mbctombb-l.md)<br/>
